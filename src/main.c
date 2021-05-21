#include "clients.h"
#include "config.h"
#include "extension.h"
#include "internal_pool.h"
#include "nid.h"
#include "reqs_errors.h"
#include "thread_var.h"
#include "http/http.h"
#include "rtr/rtr.h"
#include "rtr/db/vrps.h"
#include "xml/relax_ng.h"
#include "rrdp/db/db_rrdp.h"

static int
start_rtr_server(void)
{
	int error;

	error = vrps_init();
	if (error)
		goto just_quit;

	error = db_rrdp_init();
	if (error)
		goto vrps_cleanup;

	error = reqs_errors_init();
	if (error)
		goto db_rrdp_cleanup;

	error = rtr_listen();

	reqs_errors_cleanup();
db_rrdp_cleanup:
	db_rrdp_cleanup();
vrps_cleanup:
	vrps_destroy();
just_quit:
	return error;
}

static int
__main(int argc, char **argv)
{
	int error;

	error = thvar_init();
	if (error)
		return error;
	error = incidence_init();
	if (error)
		return error;

	error = handle_flags_config(argc, argv);
	if (error)
		return error;

	error = nid_init();
	if (error)
		goto revert_config;
	error = extension_init();
	if (error)
		goto revert_nid;

	error = http_init();
	if (error)
		goto revert_nid;

	error = internal_pool_init();
	if (error)
		goto revert_http;

	error = relax_ng_init();
	if (error)
		goto revert_pool;

	error = start_rtr_server();

	relax_ng_cleanup();
revert_pool:
	internal_pool_cleanup();
revert_http:
	http_cleanup();
revert_nid:
	nid_destroy();
revert_config:
	free_rpki_config();
	return error;
}

int
main(int argc, char **argv)
{
	int error;

	error = log_setup();
	if (error)
		return error;

	error = __main(argc, argv);

	log_teardown();

	return error;
}
