---
title: Program Arguments
command: fort
description: Guide to use arguments of FORT Validator.
---

# {{ page.title }}

## Index

1. [Syntax](#syntax)
2. [Arguments](#arguments)
	1. [`--help`](#--help)
	2. [`--usage`](#--usage)
	3. [`--version`](#--version)
	4. [`--init-tals`](#--init-tals)
	5. [`--tal`](#--tal)
	6. [`--local-repository`](#--local-repository)
	7. [`--work-offline`](#--work-offline)
	8. [`--daemon`](#--daemon)
	9. [`--shuffle-uris`](#--shuffle-uris)
	10. [`--maximum-certificate-depth`](#--maximum-certificate-depth)
	11. [`--mode`](#--mode)
	12. [`--server.address`](#--serveraddress)
	13. [`--server.port`](#--serverport)
	14. [`--server.backlog`](#--serverbacklog)
	15. [`--server.interval.validation`](#--serverintervalvalidation)
	16. [`--server.interval.refresh`](#--serverintervalrefresh)
	17. [`--server.interval.retry`](#--serverintervalretry)
	18. [`--server.interval.expire`](#--serverintervalexpire)
	19. [`--slurm`](#--slurm)
	20. [`--log.enabled`](#--logenabled)
	21. [`--log.level`](#--loglevel)
	22. [`--log.output`](#--logoutput)
	23. [`--log.color-output`](#--logcolor-output)
	24. [`--log.file-name-format`](#--logfile-name-format)
	25. [`--log.facility`](#--logfacility)
	26. [`--log.tag`](#--logtag)
	27. [`--validation-log.enabled`](#--validation-logenabled)
	28. [`--validation-log.level`](#--validation-loglevel)
	29. [`--validation-log.output`](#--validation-logoutput)
	30. [`--validation-log.color-output`](#--validation-logcolor-output)
	31. [`--validation-log.file-name-format`](#--validation-logfile-name-format)
	32. [`--validation-log.facility`](#--validation-logfacility)
	33. [`--validation-log.tag`](#--validation-logtag)
	34. [`--http.enabled`](#--httpenabled)
	35. [`--http.priority`](#--httppriority)
	36. [`--http.retry.count`](#--httpretrycount)
	37. [`--http.retry.interval`](#--httpretryinterval)
	38. [`--http.user-agent`](#--httpuser-agent)
	39. [`--http.connect-timeout`](#--httpconnect-timeout)
	40. [`--http.transfer-timeout`](#--httptransfer-timeout)
	41. [`--http.idle-timeout`](#--httpidle-timeout)
	42. [`--http.ca-path`](#--httpca-path)
	43. [`--output.roa`](#--outputroa)
	44. [`--output.bgpsec`](#--outputbgpsec)
	45. [`--output.format`](#--outputformat)
	46. [`--asn1-decode-max-stack`](#--asn1-decode-max-stack)
	47. [`--stale-repository-period`](#--stale-repository-period)
	48. [`--thread-pool.server.max`](#--thread-poolservermax)
	49. [`--thread-pool.validation.max`](#--thread-poolvalidationmax)
	50. [`--rsync.enabled`](#--rsyncenabled)
	51. [`--rsync.priority`](#--rsyncpriority)
	52. [`--rsync.strategy`](#--rsyncstrategy)
		1. [`strict`](#strict)
		2. [`root`](#root)
		3. [`root-except-ta`](#root-except-ta)
	53. [`--rsync.retry.count`](#--rsyncretrycount)
	54. [`--rsync.retry.interval`](#--rsyncretryinterval)
	55. [`--configuration-file`](#--configuration-file)
	56. [`rsync.program`](#rsyncprogram)
	57. [`rsync.arguments-recursive`](#rsyncarguments-recursive)
	58. [`rsync.arguments-flat`](#rsyncarguments-flat)
	59. [`incidences`](#incidences)
	60. [`init-locations`](#init-locations)
3. [Deprecated arguments](#deprecated-arguments)
	1. [`--sync-strategy`](#--sync-strategy)
	2. [`--rrdp.enabled`](#--rrdpenabled)
	3. [`--rrdp.priority`](#--rrdppriority)
	4. [`--rrdp.retry.count`](#--rrdpretrycount)
	5. [`--rrdp.retry.interval`](#--rrdpretryinterval)

## Syntax

```
{{ page.command }}
        [--help]
        [--usage]
        [--version]
        [--init-tals]
        [--configuration-file=<file>]
        [--tal=<file>|<directory>]
        [--local-repository=<directory>]
        [--sync-strategy=off|strict|root|root-except-ta]
        [--work-offline]
        [--daemon]
        [--shuffle-uris]
        [--maximum-certificate-depth=<unsigned integer>]
        [--asn1-decode-max-stack=<unsigned integer>]
        [--stale-repository-period=<unsigned integer>]
        [--mode=server|standalone]
        [--server.address=<sequence of strings>]
        [--server.port=<string>]
        [--server.backlog=<unsigned integer>]
        [--server.interval.validation=<unsigned integer>]
        [--server.interval.refresh=<unsigned integer>]
        [--server.interval.retry=<unsigned integer>]
        [--server.interval.expire=<unsigned integer>]
        [--slurm=<file>|<directory>]
        [--log.enabled=true|false]
        [--log.level=error|warning|info|debug]
        [--log.output=syslog|console]
        [--log.color-output]
        [--log.file-name-format=global-url|local-path|file-name]
        [--log.facility=auth|authpriv|cron|daemon|ftp|lpr|mail|news|user|uucp|local0|local1|local2|local3|local4|local5|local6|local7]
        [--log.tag=<string>]
        [--validation-log.enabled=true|false]
        [--validation-log.level=error|warning|info|debug]
        [--validation-log.output=syslog|console]
        [--validation-log.color-output]
        [--validation-log.file-name-format=global-url|local-path|file-name]
        [--validation-log.facility=auth|authpriv|cron|daemon|ftp|lpr|mail|news|user|uucp|local0|local1|local2|local3|local4|local5|local6|local7]
        [--validation-log.tag=<string>]
        [--rrdp.enabled=true|false]
        [--rrdp.priority=<unsigned integer>]
        [--rrdp.retry.count=<unsigned integer>]
        [--rrdp.retry.interval=<unsigned integer>]
        [--rsync.enabled=true|false]
        [--rsync.priority=<unsigned integer>]
        [--rsync.strategy=strict|root|root-except-ta]
        [--rsync.retry.count=<unsigned integer>]
        [--rsync.retry.interval=<unsigned integer>]
        [--http.enabled=true|false]
        [--http.priority=<unsigned integer>]
        [--http.retry.count=<unsigned integer>]
        [--http.retry.interval=<unsigned integer>]
        [--http.user-agent=<string>]
        [--http.connect-timeout=<unsigned integer>]
        [--http.transfer-timeout=<unsigned integer>]
        [--http.idle-timeout=<unsigned integer>]
        [--http.ca-path=<directory>]
        [--output.roa=<file>]
        [--output.bgpsec=<file>]
        [--output.format=csv|json]
        [--thread-pool.server.max=<unsigned integer>]
        [--thread-pool.validation.max=<unsigned integer>]
```

If an argument is declared more than once, the last one takes precedence:

{% highlight bash %}
$ {{ page.command }} --tal="foo"                          # tal is "foo"
$ {{ page.command }} --tal="foo" --tal="bar"              # tal is "bar"
$ {{ page.command }} --tal="foo" --tal="bar" --tal="qux"  # tal is "qux"
{% endhighlight %}


## Arguments

### `--help`

- **Type:** None
- **Availability:** `argv` only

Prints medium-sized syntax remainder message.

{% highlight bash %}
$ {{ page.command }} --help
Usage: {{ page.command }}
        [--help]
            (Give this help list)
        [--usage]
            (Give a short usage message)
        [--version]
            (Print program version)
	...
        [--log.file-name-format=global-url|local-path|file-name]
            (File name variant to print during debug/error messages)
        [--output.roa=<file>]
            (File where ROAs will be stored in CSV format, use '-' to print at console.)
        [--output.bgpsec=<file>]
            (File where BGPsec Router Keys will be stored in CSV format, use '-' to print at console.)
{% endhighlight %}

The slightly larger usage message is `man {{ page.command }}` and the large usage message is this documentation.

### `--usage`

- **Type:** None
- **Availability:** `argv` only

Prints small-sized syntax remainder message.

{% highlight bash %}
$ {{ page.command }} --usage
Usage: {{ page.command }}
        [--help]
        [--usage]
        [--version]
	...
        [--log.file-name-format=global-url|local-path|file-name]
        [--output.roa=<file>]
        [--output.bgpsec=<file>]
{% endhighlight %}

### `--version`

- **Type:** None
- **Availability:** `argv` only

Prints program version.

{% highlight bash %}
$ {{ page.command }} --version
fort {{ site.fort-latest-version }}
{% endhighlight %}

### `--init-tals`

- **Type:** None
- **Availability:** `argv` only

Download the RIR TALs into the existent local path directory set at [`--tal`](#--tal) argument and exit.

This argument exists merely to have all TALs before running FORT validator, the directory path should be set at the [`--tal`](#--tal) argument.

By default, the 4 TALs that don't require a policy acceptance are downloaded from FORT validator's GitHub repository. ARIN TAL does require an explicit acceptance by the user, so it's downloaded only after the user accepts ARIN's RPA; this message is displayed at the terminal and only if the user accepts, ARIN TAL is also downloaded.

This is an example on how to use this argument (assuming that `/etc/fort/tal` exists and is writable):

{% highlight bash %}
$ {{ page.command }} --init-tals --tal /etc/fort/tal
{% endhighlight %}

### `--tal`

- **Type:** String (Path to file or directory)
- **Availability:** `argv` and JSON

Path to the _Trust Anchor Locator_ (TAL), or to a directory that contains TALs.

A TAL is a file that points to a _Trust Anchor_ (TA). A TA is a self-signed certificate that serves as root of an RPKI tree you want validated.

The reason why you provide locators instead of anchors is to allow the latter to be officially updated without the need to awkwardly redistribute them.

Whichever registry serves as root of the tree you want to validate is responsible for providing you with its TAL. For convenience, Fort currently ships with the TALs of four of the five RIRs. (The exception is ARIN's, since you need to read and accept an [agreement](https://www.arin.net/resources/manage/rpki/tal/) before you can use it.) If you installed the Debian package, they can be found at `/etc/fort/tal/`, otherwise it the `tal/` directory of whatever release tarball you downloaded.

If you are paranoid, however, you'd be advised to get your own TALs.

The TAL file format has been standardized in [RFC 8630](https://tools.ietf.org/html/rfc8630). It is a text file that contains zero or more comments (each comment must start with the character "#" and end with a line break), a list of URLs (which serve as alternate access methods for the TA), followed by a blank line, followed by the Base64-encoded public key of the TA.

Just for completeness sake, here's an example on what a typical TAL looks like:

```
rsync://rpki.example.com/repository/root-ca.cer

MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAsqS+PDB1kArJlBTHeYCu
4anCWv8DzE8fHHexlGBm4TQBWC0IhNVbpUFg7SOp/7VddcGWyPZQRfdpQi4fdaGu
d6JJcGRECibaoc0Gs+d2mNyFJ1XXNppLMr5WH3iaL86r00jAnGJiCiNWzz7Rwyvy
UH0Z4lO12h+z0Zau7ekJ2Oz9to+VcWjHzV4y6gcK1MTlM6fMhKOzQxEA3TeDFgXo
SMiU+kLHI3dJhv4nJpjc0F+8+6hokIbF0p79yaCgyk0IGz7W3oSPa13KLN6mIPs6
4/UUJU5DDQvdq5T9FRF0I1mdtLToLSBnDCkTAAC6486UYV1j1Yzv1+DWJHSmiLna
LQIDAQAB
```

### `--local-repository`

- **Type:** String (Path to directory)
- **Availability:** `argv` and JSON
- **Default:** `/tmp/fort/repository`

Path to the directory where Fort will store a local cache of the repository.

Fort accesses RPKI repositories either with [rsync](https://en.wikipedia.org/wiki/Rsync) or [RRDP](https://tools.ietf.org/html/rfc8182). During each validation cycle, and depending on the preferred access methods defined by the CAs, Fort can do two things:
- Literally invoke an `rsync` command (see [`rsync.program`](#rsyncprogram) and [`rsync.arguments-recursive`](#rsyncarguments-recursive)), which will download the files into `--local-repository`.
- Fetch the RRDP Update Notification file (which implies an HTTP request) and fetch the files from there on (can be obtained from a Snapshot file or Delta files). The files will be downloaed into `--local-repository`.

Fort's entire validation process operates on the resulting copy of the files (doesn't matter if the files where fetched by rsync of https).

Because rsync uses delta encoding, you're advised to keep this cache around. It significantly speeds up subsequent validation cycles.

### `--work-offline`

- **Type:** None
- **Availability:** `argv` and JSON

If this flag is activated, Fort will disable all outgoing requests (currently done with: *rsync* and *https* (RRDP protocol uses HTTPS to fetch data)). All repository files (certificates, ROAs, etc.) are expected to exist at configured [`--local-repository`](#--local-repository).

Otherwise, Fort will perform outgoing requests whenever this is needed. If a specific protocol needs to be deactivated, use [`--rsync.enabled`](#--rsyncenabled) or [`--http.enabled`](#--httpenabled).

### `--daemon`

- **Type:** None
- **Availability:** `argv` and JSON

If this flag is activated, Fort will run as a daemon. The process is detached from the calling terminal and sent to the background.

All the enabled logs will be sent to syslog, so the configured values of [`--log.output`](#--logoutput) and [`--validation-log.output`](#--validation-logoutput) will be ignored.

### `--shuffle-uris`

- **Type:** None
- **Availability:** `argv` and JSON

If enabled, Fort will access TAL URLs in random order. This is meant for load balancing. If disabled, Fort will access TAL URLs in sequential order.

Regardless of this flag, Fort will stop iterating through the URLs as soon as it finds one that yields a successful traversal.

Of course, this flag is only relevant if the TAL lists more than one URL. If that's the case, the shuffle is done honoring the priority of the protocols (see [`--rsync.priority`](#--rsyncpriority) and [`--http.priority`](#--httppriority)). i.e. if the HTTP protocol has a higher priority than RSYNC, then all the shuffled HTTP URLs will come first.

### `--maximum-certificate-depth`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 32
- **Range:** 5--([`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)--1)

Maximum allowable RPKI tree height. Meant to protect Fort from iterating infinitely due to certificate chain loops.

Fort's tree traversal is actually iterative (not recursive), so there should be no risk of stack overflow, regardless of this value.

### `--mode`

- **Type:** Enumeration (`server`, `standalone`)
- **Availability:** `argv` and JSON
- **Default:** `server`

Run mode, commands the way Fort executes the validation. The two possible values and its behavior are:
- `server`: Enables the RTR server using the `server.*` arguments ([`server.address`](#--serveraddress), [`server.port`](#--serverport), [`server.backlog`](#--serverbacklog), [`server.interval.validation`](#--serverintervalvalidation), [`server.interval.refresh`](#--serverintervalrefresh), [`server.interval.retry`](#--serverintervalretry), [`server.interval.expire`](#--serverintervalexpire)).
- `standalone`:  Disables the RTR server, the `server.*` arguments are ignored, and Fort performs an in-place standalone RPKI validation.

### `--server.address`

- **Type:** String array
- **Availability:** `argv` and JSON
- **Default:** `NULL`

List of hostnames or numeric host addresses where the RTR server will be bound to. Must resolve to (or be) bindable IP addresses. IPv4 and IPv6 are supported.

The list of addresses must be comma sepparated, and each address must have the following format: `<address>[#<port>]`. Note that the port is optional; in case that a port isn't specified, the value of [`--server.port`](#--serverport) will be utilized with the corresponding address.

Here are some examples of valid values for this argument:
- `--server.address="localhost"`: will bind to 'localhost' and the configured port at [`--server.port`](#--serverport).
- `--server.address="localhost,::1#8324"`: same as the previous example, and also will bind to IPv6 address '::1' at the port '8324'.
- `--server.address="localhost#8323,::1#8324"`: will bind to 'localhost' at port '8323', and to '::1' port '8324'. The value of [`--server.port`](#--serverport) isn't utilized.

If this field is omitted, Fort will attempt to bind the server using the IP address `INADDR_ANY` (for an IPv4 address) or `IN6ADDR_ANY_INIT` (for an IPv6 address); see '`$ man getaddrinfo`'.

### `--server.port`

- **Type:** String
- **Availability:** `argv` and JSON
- **Default:** `"323"`

TCP port or service where the server address(es) will be bound to by default if no port is set (see [`--server.address`](#--serveraddress)).

This is a string because a service alias can be used as a valid value. The available aliases are commonly located at `/etc/services`. (See '`$ man services`'.)

> ![img/warn.svg](img/warn.svg) The default port is privileged. To improve security, either change or jail it.
>
> In case you don't wish to change the port, nor run FORT validator as root, see [Non root port binding](run.html#non-root-port-binding).

### `--server.backlog`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** [`SOMAXCONN`](http://pubs.opengroup.org/onlinepubs/9699919799.2008edition/basedefs/sys_socket.h.html)
- **Range:** 1--`SOMAXCONN`

RTR server's listen queue length. It is the second argument of [`listen()`](http://pubs.opengroup.org/onlinepubs/9699919799.2008edition/functions/listen.html):

> The backlog argument provides a hint to the implementation which the implementation shall use to limit the number of outstanding connections in the socket's listen queue. Implementations may impose a limit on backlog and silently reduce the specified value. Normally, a larger backlog argument value shall result in a larger or equal length of the listen queue. Implementations shall support values of backlog up to SOMAXCONN, defined in <sys/socket.h>.

See the corresponding manual page from your operating system (likely `man 2 listen`) for specific implementation details.

### `--server.interval.validation`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 3600
- **Range:** 60--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

Number of seconds the server will sleep between validation cycles.

The timer starts counting every time a validation is finished, not every time it begins. The actual validation loop is, therefore, longer than this number.

"Validation cycle" includes the rsync update along with the validation operation. Because you are taxing the global repositories every time the validator performs an rsync, it is recommended not to reduce the validation interval to the point you might be contributing to DoS'ing the global repository. The minimum value (60) was taken from the [RRDP RFC](https://tools.ietf.org/html/rfc8182#section-3.1), which means it's not necessarily a good value for heavy rsyncs.

### `--server.interval.refresh`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 3600
- **Range:** 1--86400

Number of seconds that a router should wait before the next attempt to poll FORT using either a Serial Query PDU or Reset Query PDU.

Countdown for this timer starts upon receipt of an End Of Data PDU (this should be administered by the client).

This value is utilized only on RTR version 1 sessions (more information at [RFC 8210 section 6](https://tools.ietf.org/html/rfc8210#section-6)).

### `--server.interval.retry`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 600
- **Range:** 1--7200

Number of seconds that a router should wait before retrying a failed Serial Query PDU or Reset Query PDU.

Countdown for this timer starts upon failure of the query and restarts after each subsequent failure until a query succeeds (this should be administered by the client).

This value is utilized only on RTR version 1 sessions (more information at [RFC 8210 section 6](https://tools.ietf.org/html/rfc8210#section-6)).

### `--server.interval.expire`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 7200
- **Range:** 600--172800

Number of seconds that a router can retain the current version of data while unable to perform a successful subsequent query.

Countdown for this timer starts upon receipt of an End Of Data PDU (this should be administered by the client).

This value is utilized only on RTR version 1 sessions (more information at [RFC 8210 section 6](https://tools.ietf.org/html/rfc8210#section-6)).

### `--slurm`

- **Type:** String (path to file or directory)
- **Availability:** `argv` and JSON
- **Default:** `NULL`

SLURM file, or directory containing SLURM files. See [SLURM](slurm.html).

### `--log.enabled`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `true`

Enables the operation logs.

Read more at [Logging](logging.html) and at [Logging > Configuration > Enabled](logging.html#enabled).

### `--log.level`

- **Type:** Enumeration (`error`, `warning`, `info`, `debug`)
- **Availability:** `argv` and JSON
- **Default:** `warning`

Defines which operation log messages will be logged according to its priority, e.g. a value of `info` will log messages of equal or higher level (`info`, `warning`, and `error`).

The priority levels, from higher to lowest, are:
- `error`
- `warning`
- `info`
- `debug`

Read more at [Logging](logging.html) and at [Logging > Configuration > Level](logging.html#level).

### `--log.output`

- **Type:** Enumeration (`syslog`, `console`)
- **Availability:** `argv` and JSON
- **Default:** `console`

Desired output where the operation logs will be printed.

The value `console` will log messages at standard output and standard error; `syslog` will log to [Syslog](https://en.wikipedia.org/wiki/Syslog).

Read more at [Logging](logging.html) and at [Logging > Configuration > Output](logging.html#output).

### `--log.color-output`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `false`

If enabled, the operation logs output will contain ANSI color codes. Meant for human consumption, and meaningful only if [`--log.output`](#--logoutput) is `console`.

Read more at [Logging](logging.html) and at [Logging > Configuration > Color output](logging.html#color-output).

### `--log.file-name-format`

- **Type:** Enumeration (`global-url`, `local-path`, `file-name`)
- **Availability:** `argv` and JSON
- **Default:** `global-url`

Decides which version of file names should be printed during most debug/error messages at the operation logs.

Read more at [Logging](logging.html) and at [Logging > Configuration > File name format](logging.html#file-name-format).

### `--log.facility`

- **Type:** Enumeration (`auth`, `authpriv`, `cron`, `daemon`, `ftp`, `lpr`, `mail`, `news`, `user`, `uucp`, from `local0` to `local7`)
- **Availability:** `argv` and JSON
- **Default:** `daemon`

Syslog facility utilized for operation logs (meaningful only if [`--log.output`](#--logoutput) is `syslog`).

Read more at [Logging](logging.html) and at [Logging > Configuration > Facility](logging.html#facility).

### `--log.tag`

- **Type:** String
- **Availability:** `argv` and JSON
- **Default:** `NULL`

Text tag that will be added to the operation log messages (it will appear inside square brackets).

Read more at [Logging](logging.html) and at [Logging > Configuration > Tag](logging.html#tag).

### `--validation-log.enabled`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `false`

Enables the validation logs.

Read more at [Logging](logging.html) and at [Logging > Configuration > Enabled](logging.html#enabled).

### `--validation-log.level`

- **Type:** Enumeration (`error`, `warning`, `info`, `debug`)
- **Availability:** `argv` and JSON
- **Default:** `warning`

Defines which validation log messages will be logged according to its priority, e.g. a value of `info` will log messages of equal or higher level (`info`, `warning`, and `error`).

The priority levels, from higher to lowest, are:
- `error`
- `warning`
- `info`
- `debug`

Read more at [Logging](logging.html) and at [Logging > Configuration > Level](logging.html#level).

### `--validation-log.output`

- **Type:** Enumeration (`syslog`, `console`)
- **Availability:** `argv` and JSON
- **Default:** `console`

Desired output where the validation logs will be printed.

The value `console` will log messages at standard output and standard error; `syslog` will log to [Syslog](https://en.wikipedia.org/wiki/Syslog).

Read more at [Logging](logging.html) and at [Logging > Configuration > Output](logging.html#output).

### `--validation-log.color-output`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `false`

If enabled, the validation logs output will contain ANSI color codes. Meant for human consumption, and meaningful only if [`--validation-log.output`](#--validation-logoutput) is `console`.

Read more at [Logging](logging.html) and at [Logging > Configuration > Color output](logging.html#color-output).

### `--validation-log.file-name-format`

- **Type:** Enumeration (`global-url`, `local-path`, `file-name`)
- **Availability:** `argv` and JSON
- **Default:** `global-url`

Decides which version of file names should be printed during most debug/error messages at the operation logs.

Read more at [Logging](logging.html) and at [Logging > Configuration > File name format](logging.html#file-name-format).

### `--validation-log.facility`

- **Type:** Enumeration (`auth`, `authpriv`, `cron`, `daemon`, `ftp`, `lpr`, `mail`, `news`, `user`, `uucp`, from `local0` to `local7`)
- **Availability:** `argv` and JSON
- **Default:** `daemon`

Syslog facility utilized for validation logs (meaningful only if [`--validation-log.output`](#--validation-logoutput) is `syslog`).

Read more at [Logging](logging.html) and at [Logging > Configuration > Facility](logging.html#facility).

### `--validation-log.tag`

- **Type:** String
- **Availability:** `argv` and JSON
- **Default:** `Validation`

Text tag that will be added to the validation log messages (it will appear inside square brackets).

Read more at [Logging](logging.html) and at [Logging > Configuration > Tag](logging.html#tag).

### `--http.enabled`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `true`

Enables outgoing HTTP requests.

If disabled (eg. `--http.enabled=false`), FORT validator won't request HTTP URIs, and will expect to find all the corresponding repository files at [`--local-repository`](#--local-repository).

### `--http.priority`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 60
- **Range:** 0--100

> ![img/warn.svg](img/warn.svg) By default, HTTPS requests are preferred over rsync requests.

Assign priority to use HTTP to fetch repository files. A higher value means a higher priority.

This argument works along with [`--rsync.priority`](#--rsyncpriority), since the higher value of the two arguments will result in the first protocol to utilize when fetching repositories files. Of course, this depends also on certificates information or the TAL URIs, since currently HTTP URIs are optional and not every RIR repository makes use of them.

Whenever a certificate or a TAL has both RSYNC and HTTP URIs, the following criteria is followed to prioritize which one to use first:
- [`--rsync.priority`](#--rsyncpriority) **equals** [`--http.priority`](#--httppriority): use the order specified at the certificate or the TAL to fetch the corresponding URI.
- [`--rsync.priority`](#--rsyncpriority) **greater than** [`--http.priority`](#--httppriority): use RSYNC repository/TAL URI first; if there's an error fetching data, fallback to fetch HTTP repository/TAL URI.
- [`--rsync.priority`](#--rsyncpriority) **less than** [`--http.priority`](#--httppriority): use HTTP repsitory/TAL URI first; if there's an error fetching data, fallback to use RSYNC repository/TAL URI.

### `--http.retry.count`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 2
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

Maximum number of retries whenever there's an error requesting an HTTP URI.

A value of **0** means **no retries**.

Whenever is necessary to request an HTTP URI, the validator will try the request at least once. If there was an error requesting the URI, the validator will retry at most `--http.retry.count` times to fetch the file, waiting [`--http.retry.interval`](#--httpretryinterval) seconds between each retry.

### `--http.retry.interval`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 5
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

Period of time (in seconds) to wait between each retry to request an HTTP URI.

### `--http.user-agent`

- **Type:** String
- **Availability:** `argv` and JSON
- **Default:** `{{ page.command }}/{{ site.fort-latest-version }}`

_**All requests are made using HTTPS, verifying the peer and the certificate name vs host**_

User-Agent to use at HTTP requests.

The value specified (either by the argument or the default value) is utilized in libcurl's option [CURLOPT_USERAGENT](https://curl.haxx.se/libcurl/c/CURLOPT_USERAGENT.html).

### `--http.connect-timeout`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 30
- **Range:** 1--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

_**All requests are made using HTTPS, verifying the peer and the certificate name vs host**_

Timeout (in seconds) for the connect phase.

Whenever an HTTP connection will try to be established, the validator will wait a maximum of `http.connect-timeout` for the peer to respond to the connection request; if the timeout is reached, the connection attempt will be ceased.

The value specified (either by the argument or the default value) is utilized in libcurl's option [CURLOPT_CONNECTTIMEOUT](https://curl.haxx.se/libcurl/c/CURLOPT_CONNECTTIMEOUT.html).

### `--http.transfer-timeout`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 0
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

_**All requests are made using HTTPS, verifying the peer and the certificate name vs host**_

Maximum time in seconds (once the connection is established) that the request can last.

Once the connection is established with the server, the request will last a maximum of `http.transfer-timeout` seconds. A value of 0 means unlimited time.

The value specified (either by the argument or the default value) is utilized in libcurl's option [CURLOPT_TIMEOUT](https://curl.haxx.se/libcurl/c/CURLOPT_TIMEOUT.html).

### `--http.idle-timeout`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 15
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

_**All requests are made using HTTPS, verifying the peer and the certificate name vs host**_

Maximum time in seconds (once the connection is established) that a request can be idle before dropping it.

Once the connection is established with the server, the request can last a maximum of `http.idle-timeout` seconds without receiving data before dropping the connection. A value of 0 disables idle time verification (use with caution).

The value specified (either by the argument or the default value) is utilized in libcurl's option [CURLOPT_LOW_SPEED_TIME](https://curl.haxx.se/libcurl/c/CURLOPT_LOW_SPEED_TIME.html).

### `--http.ca-path`

- **Type:** String (Path to directory)
- **Availability:** `argv` and JSON

_**All requests are made using HTTPS, verifying the peer and the certificate name vs host**_

Local path where the CA's utilized to verify the peers are located.

Useful when the CA from the peer isn't located at the default OS certificate bundle. If specified, the peer certificate will be verified using the CAs at the path. The directory MUST be prepared using the `rehash` utility from the SSL library:
- OpenSSL command (with help): `$ openssl rehash -h`
- LibreSSL command (with help): `$ openssl certhash -h`

The value specified is utilized in libcurl's option [CURLOPT_CAPATH](https://curl.haxx.se/libcurl/c/CURLOPT_CAPATH.html).

### `--http.disabled`

- **Type:** None
- **Availability:** `argv` and JSON

If the flag is activated, HTTP requests won't be performed and the files that should have been fetched are searched locally at [`--local-repository`](#--local-repository).

Otherwise, Fort will perform HTTP requests when needed (eg. an HTTPS URI at a TAL, RRDP URIs).

### `--output.roa`

- **Type:** String (Path to file)
- **Availability:** `argv` and JSON

> Note: The paragraphs below apply to [Fort 1.5.0](https://github.com/NICMx/FORT-validator/releases/tag/v1.5.0).

File where the ROAs will be stored in CSV format.

When the file is specified, its content will be removed to store the ROAs; if the file doesn't exists, it will be created. To print at console, use a hyphen `"-"`. If RTR server is enabled, then the ROAs will be printed every [`--server.interval.validation`](#--serverintervalvalidation) secs.

Each line of the result is printed in the following order: _AS, Prefix, Max prefix length_; the first line contains those column descriptors.

If a value isn't specified, then the ROAs aren't printed.

> Note: The paragraphs below apply to [Fort master](https://github.com/NICMx/FORT-validator).

File where the ROAs will be stored in the configured format (see [`--output.format`](#--outputformat)).

When the file is specified, its content will be removed to store the ROAs; if the file doesn't exists, it will be created. To print at console, use a hyphen `"-"`. If RTR server is enabled, then the ROAs will be printed every [`--server.interval.validation`](#--serverintervalvalidation) secs.

When [`--output.format`](#--outputformat)`=csv` (which is the default value), then each line of the result is printed in the following order: _AS, Prefix, Max prefix length_; the first line contains those column descriptors.

When [`--output.format`](#--outputformat)`=json`, then each element is printed inside an object array of `roas`; ie:

<pre><code>{
	"roas": [
		{
			"asn": "AS64496",
			"prefix": "198.51.100.0/24",
			"maxLength": 24
		},
		{
			"asn": "AS64496",
			"prefix": "2001:DB8::/32",
			"maxLength": 48
		}
	]
}</code></pre>

If a value isn't specified, then the ROAs aren't printed.

### `--output.bgpsec`

- **Type:** String (Path to file)
- **Availability:** `argv` and JSON

> Note: The paragraphs below apply to [Fort 1.5.0](https://github.com/NICMx/FORT-validator/releases/tag/v1.5.0).

File where the BGPsec Router Keys will be stored in CSV format.

Since most of the data is binary (Subject Key Identifier and Subject Public Key Info), such data is base64url encoded without trailing pads.

When the file is specified, its content will be removed to store the Router Keys; if the file doesn't exists, it will be created. To print at console, use a hyphen `"-"`. If RTR server is enabled, then the BGPsec Router Keys will be printed every [`--server.interval.validation`](#--serverintervalvalidation) secs.

Each line of the result is printed in the following order: _AS, Subject Key Identifier, Subject Public Key Info_; the first line contains those column descriptors.

If a value isn't specified, then the BGPsec Router Keys aren't printed.

> Note: The paragraphs below apply to [Fort master](https://github.com/NICMx/FORT-validator).

File where the BGPsec Router Keys will be stored in the configured format (see [`--output.format`](#--outputformat)).

Since most of the data is binary (Subject Key Identifier and Subject Public Key Info), such data is base64url encoded without trailing pads.

When the file is specified, its content will be removed to store the Router Keys; if the file doesn't exists, it will be created. To print at console, use a hyphen `"-"`. If RTR server is enabled, then the BGPsec Router Keys will be printed every [`--server.interval.validation`](#--serverintervalvalidation) secs.

When [`--output.format`](#--outputformat)`=csv` (which is the default value), then each line of the result is printed in the following order: _AS, Subject Key Identifier, Subject Public Key Info_; the first line contains those column descriptors.

When [`--output.format`](#--outputformat)`=json`, then each element is printed inside an object array of `router-keys`; ie:

<pre><code>{
	"router-keys": [
		{
			"asn": "AS64496",
			"ski": "&lt;Base64 Encoded SKI&gt;",
			"spki": "&lt;Base64 Encoded SPKI&gt;"
		},
		{
			"asn": "AS64497",
			"ski": "&lt;Base64 Encoded SKI&gt;",
			"spki": "&lt;Base64 Encoded SPKI&gt;"
		}
	]
}</code></pre>

If a value isn't specified, then the BGPsec Router Keys aren't printed.

### `--output.format`

- **Type:** Enumeration (`csv`, `json`)
- **Availability:** `argv` and JSON
- **Default:** `csv`

> Note: This flag only exists in [Fort master](https://github.com/NICMx/FORT-validator).

Output format for [`--output.roa`](#--outputroa) and [`--output.bgpsec`](#--outputbgpsec).

### `--asn1-decode-max-stack`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 4096
- **Range:** 1--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

ASN1 decoder max allowed stack size in bytes, utilized to avoid a stack overflow when a large nested ASN1 object is parsed.

This check is merely a caution, since ASN1 decoding functions are recursive and might cause a stack overflow. So, this argument probably won't be necessary in most cases, since the RPKI ASN1 objects don't have nested objects that require too much stack allocation (for now).

### `--stale-repository-period`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 43200 (12 hours)
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

Time period that must lapse to warn about a stale repository (the messages will be sent to the operation log). The time lapse starts once the repository download has been retried (see [`--rsync.retry.count`](#--rsyncretrycount) and [`--http.retry.count`](#--httpretrycount)) and failed after such retries.

A repository is considered stale if its files can't be fetched due to a communication error and this error persists across validation cycles. This kind of issues can be due to a local misconfiguration (eg. a firewall that blocks incoming data) or a problem at the server (eg. the server is down).

Despite who's "fault" is, FORT validator will try to work with the local files from [`--local-repository`](#--local-repository).

The communication errors sent to the operation log, are those related to "first level" RPKI servers; commonly this are the servers maintained by the RIRs.

Currently **all** the communication errors are logged at the validation log. This argument (`--stale-repository-period`) is merely to send this error messages also to the operation log.

A value **equal to 0** means that the communication errors will be logged at once.

### `--thread-pool.server.max`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 20
- **Range:** 1--500

Maximum number of threads that will be spawned at an internal thread pool to attend incoming RTR clients (i.e. routers).

The thread pool assigns one thread per RTR client, so a maximum of `--thread-pool.server.max` clients will be attended simultaneously. If the max limit is reached, any incoming client will be rejected: an RTR error PDU will be sent to the client and the connection will be closed by the server.

Once the client or the server terminates the session, the corresponding thread will be returned to the pool so that it can be used again by any other incoming client.

### `--thread-pool.validation.max`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 5
- **Range:** 1--100

Maximum number of threads that will be spawned at an internal thread pool in order to run validation cycles.

When a validation cycle begins, one thread per configured TAL is utilized; once the whole RPKI tree of the TAL is validated, the thread is returned to the pool.

If there are more TALs at [`--tal`](#--tal) than `--thread-pool.validation.max` threads at the pool, is very likely that the validation cycles take a bit more of time to complete since only `--thread-pool.validation.max` threads will be working at the same time. E.g. if `--thread-pool.validation.max=2` and the location at [`--tal`](#--tal) has 4 TAL files, only 2 TALs will be validated simultaneously while the rest waits in a queue until there's an available thread at the pool to attend them.

### `--rsync.enabled`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `true`

Enables RSYNC requests.

If disabled (eg. `--rsync.enabled=false`), FORT validator won't download files nor directories via RSYNC, and will expect to find all repository files at [`--local-repository`](#--local-repository).

### `--rsync.priority`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 50
- **Range:** 0--100

> ![img/warn.svg](img/warn.svg) By default, HTTPS requests are preferred over rsync requests.

Assign priority to use RSYNC to fetch repository files. A higher value means a higher priority.

This argument works along with [`--http.priority`](#--httppriority), since the higher value of the two arguments will result in the first protocol to utilize when fetching repositories files. Of course, this depends also on certificates information or the TAL URIs, since currently HTTP URIs are optional and not every RIR repository makes use of them.

Whenever a certificate or a TAL has both RSYNC and HTTP URIs, the following criteria is followed to prioritize which one to use first:
- [`--rsync.priority`](#--rsyncpriority) **equals** [`--http.priority`](#--httppriority): use the order specified at the certificate or the TAL to fetch the corresponding URI.
- [`--rsync.priority`](#--rsyncpriority) **greater than** [`--http.priority`](#--httppriority): use RSYNC repository/TAL URI first; if there's an error fetching data, fallback to fetch HTTP repository/TAL URI.
- [`--rsync.priority`](#--rsyncpriority) **less than** [`--http.priority`](#--httppriority): use HTTP repository/TAL URI first; if there's an error fetching data, fallback to use RSYNC repository/TAL URI.

### `--rsync.strategy`

- **Type:** Enumeration (`strict`, `root`, `root-except-ta`)
- **Availability:** `argv` and JSON
- **Default:** `root-except-ta`

rsync synchronization strategy. Commands the way rsync URLs are approached during downloads.

#### `strict`

> In order to enable this strategy, recompile using the flag: **_ENABLE\_STRICT\_STRATEGY_**.
>
> e.g. `$ make FORT_FLAGS='-DENABLE_STRICT_STRATEGY'`

rsyncs every repository publication point separately. Only skips publication points that have already been downloaded during the current validation cycle. (Assuming each synchronization is recursive.)

For example, suppose the validator gets certificates whose caRepository access methods (in their Subject Information Access extensions) point to the following publication points:

1. `rsync://rpki.example.com/foo/bar/`
2. `rsync://rpki.example.com/foo/qux/`
3. `rsync://rpki.example.com/foo/bar/`
4. `rsync://rpki.example.com/foo/corge/grault/`
5. `rsync://rpki.example.com/foo/corge/`
6. `rsync://rpki.example.com/foo/corge/waldo/`

A  validator following the `strict` strategy would download `bar`, download `qux`, skip `bar`, download `corge/grault`, download `corge` and skip `corge/waldo`.

Though this strategy is the only "strictly" correct one, it is also extremely slow. Its usage is _not_ recommended, unless your repository contains lots of spam files, awkward permissions or can't be found in a repository rooted in a URL that follows the regular expression "`rsync://.+/.+/`".

#### `root`

For each publication point found, guess the root of its repository and rsync that instead. Then skip
any subsequent children of said root.

(To guess the root of a repository, the validator counts four slashes, and prunes the rest of the URL.)

Reusing the caRepository URLs from the `strict` strategy (above) as example, a  validator following the `root` strategy would download `rsync://rpki.example.com/foo`, and then skip everything else.

Assuming that the repository is specifically structured to be found within as few roots as possible, and they contain minimal RPKI-unrelated noise files, this is the fastest synchronization strategy. At time of writing, this is true for all the current official repositories.

#### `root-except-ta`

Synchronizes the root certificate (the one pointed by the TAL) in `strict` mode, and once it's validated, synchronizes the rest of the repository in `root` mode.

Useful if you want `root`, but the root certificate is separated from the rest of the repository. Also useful if you don't want the validator to download the entire repository without first confirming the integrity and legitimacy of the root certificate.

### `--rsync.retry.count`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 2
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

Maximum number of retries whenever there's an error executing an RSYNC.

A value of **0** means **no retries**.

Whenever is necessary to execute an RSYNC, the validator will try at least one time the execution. If there was an error executing the RSYNC, the validator will retry it at most `--rsync.retry.count` times, waiting [`--rsync.retry.interval`](#--rsyncretryinterval) seconds between each retry.

### `--rsync.retry.interval`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 5
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

Period of time (in seconds) to wait between each retry to execute an RSYNC.

### `--configuration-file`

- **Type:** String (Path to file)
- **Availability:** `argv` only

Path to a JSON file from which additional configuration will be read.

The configuration options are mostly the same as the ones from the `argv` interface. (See the "Availability" metadata of each field.) Here's a full configuration file example:

<pre><code>{
	"<a href="#--tal">tal</a>": "/tmp/fort/tal/",
	"<a href="#--local-repository">local-repository</a>": "/tmp/fort/repository/",
	"<a href="#--work-offline">work-offline</a>": false,
	"<a href="#--shuffle-uris">shuffle-uris</a>": true,
	"<a href="#--maximum-certificate-depth">maximum-certificate-depth</a>": 32,
	"<a href="#--slurm">slurm</a>": "/tmp/fort/test.slurm",
	"<a href="#--mode">mode</a>": "server",
	"<a href="#--daemon">daemon</a>": false,

	"server": {
		"<a href="#--serveraddress">address</a>": [
			"192.0.2.1",
			"2001:db8::1"
		],
		"<a href="#--serverport">port</a>": "8323",
		"<a href="#--serverbacklog">backlog</a>": 16,
		"interval": {
			"<a href="#--serverintervalvalidation">validation</a>": 3600,
			"<a href="#--serverintervalrefresh">refresh</a>": 3600,
			"<a href="#--serverintervalretry">retry</a>": 600,
			"<a href="#--serverintervalexpire">expire</a>": 7200
		}
	},

	"log": {
		"<a href="#--logenabled">enabled</a>": true,
		"<a href="#--loglevel">level</a>": "warning",
		"<a href="#--logoutput">output</a>": "console",
		"<a href="#--logcolor-output">color-output</a>": true,
		"<a href="#--logfile-name-format">file-name-format</a>": "file-name",
		"<a href="#--logfacility">facility</a>": "daemon",
		"<a href="#--logtag">tag</a>": "Operation"
	},

	"validation-log": {
		"<a href="#--validation-logenabled">enabled</a>": false,
		"<a href="#--validation-loglevel">level</a>": "warning",
		"<a href="#--validation-logoutput">output</a>": "console",
		"<a href="#--validation-logcolor-output">color-output</a>": true,
		"<a href="#--validation-logfile-name-format">file-name-format</a>": "global-url",
		"<a href="#--validation-logfacility">facility</a>": "daemon",
		"<a href="#--validation-logtag">tag</a>": "Validation"
	},

	"http": {
		"<a href="#--httpenabled">enabled</a>": true,
		"<a href="#--httppriority">priority</a>": 60,
		"retry": {
			"<a href="#--httpretrycount">count</a>": 2,
			"<a href="#--httpretryinterval">interval</a>": 5
		},
		"<a href="#--httpuser-agent">user-agent</a>": "{{ page.command }}/{{ site.fort-latest-version }}",
		"<a href="#--httpconnect-timeout">connect-timeout</a>": 30,
		"<a href="#--httptransfer-timeout">transfer-timeout</a>": 0,
		"<a href="#--httpidle-timeout">idle-timeout</a>": 15,
		"<a href="#--httpca-path">ca-path</a>": "/usr/local/ssl/certs"
	},

	"rsync": {
		"<a href="#--rsyncenabled">enabled</a>": true,
		"<a href="#--rsyncpriority">priority</a>": 50,
		"<a href="#--rsyncstrategy">strategy</a>": "root-except-ta",
		"retry": {
			"<a href="#--rsyncretrycount">count</a>": 2,
			"<a href="#--rsyncretryinterval">interval</a>": 5
		},
		"<a href="#rsyncprogram">program</a>": "rsync",
		"<a href="#rsyncarguments-recursive">arguments-recursive</a>": [
			"--recursive",
			"--delete",
			"--times",
			"--contimeout=20",
			"--timeout=15",
			"$REMOTE",
			"$LOCAL"
		],
		"<a href="#rsyncarguments-flat">arguments-flat</a>": [
			"--times",
			"--contimeout=20",
			"--timeout=15",
			"--dirs",
			"$REMOTE",
			"$LOCAL"
		]
	},

	"<a href="#incidences">incidences</a>": [
		{
			"name": "incid-hashalg-has-params",
			"action": "ignore"
		},
		{
			"name": "incid-obj-not-der-encoded",
			"action": "ignore"
		},
		{
			"name": "incid-file-at-mft-not-found",
			"action": "error"
		},
		{
			"name": "incid-file-at-mft-hash-not-match",
			"action": "error"
		},
		{
			"name": "incid-mft-stale",
			"action": "error"
		},
		{
			"name": "incid-crl-stale",
			"action": "error"
		}
	],

	"output": {
		"<a href="#--outputroa">roa</a>": "/tmp/fort/roas.csv",
		"<a href="#--outputbgpsec">bgpsec</a>": "/tmp/fort/bgpsec.csv",
		"<a href="#--outputformat">format</a>": "csv"
	},

	"thread-pool": {
		"server": {
			"<a href="#--thread-poolservermax">max</a>": 20
		},
		"validation": {
			"<a href="#--thread-poolvalidationmax">max</a>": 5
		}
	},

	"<a href="#--asn1-decode-max-stack">asn1-decode-max-stack</a>": 4096,
	"<a href="#--stale-repository-period">stale-repository-period</a>": 43200
}
</code></pre>

The file acts as a collection of equivalent `argv` arguments; precedence is not modified:

{% highlight bash %}
$ cat cfg.json
{
	"tal": "bar"
}

$ {{ page.command }} --tal="foo"                                              # tal is "foo"
$ {{ page.command }} --tal="foo" --configuration-file="cfg.json"              # tal is "bar"
$ {{ page.command }} --tal="foo" --configuration-file="cfg.json" --tal="qux"  # tal is "qux"

$ cat a.json
{
	"local-repository": "a",
	"rsync.strategy": "root",
	"maximum-certificate-depth": 5
}

$ cat b.json
{
	"rsync.strategy": "strict"
	"maximum-certificate-depth": 6
}

$ cat c.json
{
	"maximum-certificate-depth": 8
}

$ {{ page.command }} \
	--configuration-file="a.json" \
	--configuration-file="b.json" \
	--configuration-file="c.json"
$ # local-repository is "a", rsync.strategy is "strict" and maximum-certificate-depth is 8
{% endhighlight %}

### rsync.program

- **Type:** String
- **Availability:** JSON only
- **Default:** `"rsync"`

Name of the program needed to invoke an rsync file transfer.

### rsync.arguments-recursive

- **Type:** String array
- **Availability:** JSON only
- **Default:** `[ "--recursive", "--delete", "--times", "--contimeout=20", "--timeout=15", "$REMOTE", "$LOCAL" ]`

Arguments needed by [`rsync.program`](#rsyncprogram) to perform a recursive rsync.

Fort will replace `"$REMOTE"` with the remote URL it needs to download, and `"$LOCAL"` with the target local directory where the file is supposed to be dropped.

### rsync.arguments-flat

- **Type:** String array
- **Availability:** JSON only
- **Default:** `[ "--times", "--contimeout=20", "--timeout=15", "--dirs", "$REMOTE", "$LOCAL" ]`

Arguments needed by [`rsync.program`](#rsyncprogram) to perform a single-file rsync.

Fort will replace `"$REMOTE"` with the remote URL it needs to download, and `"$LOCAL"` with the target local directory where the file is supposed to be dropped.

### `incidences`

- **Type:** JSON Object array
- **Availability:** JSON only

A listing of actions to be performed by validation upon encountering certain error conditions. See [Incidences](incidence.html).

### `init-locations`

- **Type:** JSON Object array
- **Availability:** JSON only

List of URLs from where the TALs will be fetched when [`--init-tals`](#--init-tals) is utilized. Each URL can have an optional `accept-message` that will be displayed at the terminal. When this message is displayed, the word **"yes"** is expected by FORT to download the corresponding TAL file; this way an explicit acceptance is obtained to comply with the printed message.

By default it has 4 URLs from each TAL that doesn't require and explicit politics acceptance by the user, and 1 URL that does have an acceptance message so that FORT can proceed with its download.

This is a JSON array of objects, where each object has a mandatory `url` member, and an optional `accept-message` member. The default value is:

<pre><code>
"init-locations": [
	{
		"url": "https://www.arin.net/resources/manage/rpki/arin.tal",
		"accept-message": "Please download and read ARIN Relying Party Agreement (RPA) from https://www.arin.net/resources/manage/rpki/rpa.pdf. Once you've read it and if you agree ARIN RPA, type 'yes' to proceed with ARIN's TAL download:"
	},
	{
		"url": "https://raw.githubusercontent.com/NICMx/FORT-validator/master/examples/tal/lacnic.tal"
	},
	{
		"url": "https://raw.githubusercontent.com/NICMx/FORT-validator/master/examples/tal/ripe.tal"
	},
	{
		"url": "https://raw.githubusercontent.com/NICMx/FORT-validator/master/examples/tal/afrinic.tal"
	},
	{
		"url": "https://raw.githubusercontent.com/NICMx/FORT-validator/master/examples/tal/apnic.tal"
	}
]</code></pre>

## Deprecated arguments

### `--sync-strategy`

- **Type:** Enumeration (`off`, `strict`, `root`, `root-except-ta`)
- **Availability:** `argv` and JSON
- **Default:** `root-except-ta`

> ![img/warn.svg](img/warn.svg) This argument **will be DEPRECATED**. Use [`--rsync.strategy`](#--rsyncstrategy) or [`--rsync.enabled`](#--rsyncenabled) (if rsync is meant to be disabled) instead.

rsync synchronization strategy. Commands the way rsync URLs are approached during downloads.

Despite this argument will be deprecated, it still can be utilized. Its possible values and behaviour will be as listed here:
- `off`: will disable rsync execution, setting [`--rsync.enabled`](#--rsyncenabled) as `false`. So, using `--sync-strategy=off` will be the same as `--rsync.enabled=false`.
- `strict`: will be the same as `--rsync.strategy=strict`, see [`strict`](#strict).
- `root`: will be the same as `--rsync.strategy=root`, see [`root`](#root).
- `root-except-ta`: will be the same as `--rsync.strategy=root-except-ta`, see [`root-except-ta`](#root-except-ta).

### `--rrdp.enabled`

- **Type:** Boolean (`true`, `false`)
- **Availability:** `argv` and JSON
- **Default:** `true`

> ![img/warn.svg](img/warn.svg) This argument **will be DEPRECATED**. Use [`--http.enabled`](#--httpenabled) instead.

### `--rrdp.priority`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 60
- **Range:** 0--100

> ![img/warn.svg](img/warn.svg) This argument **will be DEPRECATED**. Use [`--http.priority`](#--httppriority) instead.

### `--rrdp.retry.count`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 2
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

> ![img/warn.svg](img/warn.svg) This argument **will be DEPRECATED**. Use [`--http.retry.count`](#--httpretrycount) instead.

### `--rrdp.retry.interval`

- **Type:** Integer
- **Availability:** `argv` and JSON
- **Default:** 5
- **Range:** 0--[`UINT_MAX`](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/limits.h.html)

> ![img/warn.svg](img/warn.svg) This argument **will be DEPRECATED**. Use [`--http.retry.interval`](#--httpretryinterval) instead.
