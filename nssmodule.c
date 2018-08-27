#include "nssmodule.h"

#include <stddef.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <nss.h>
#include <netdb.h>
#include <stdio.h>
#include <ares.h>

enum nss_status _nss_thingymcconfig_gethostbyname4_r(const char *name,
		struct gaih_addrtuple **pat, char *buffer, size_t buflen, int *errnop,
		int *h_errnop, int32_t *ttlp) {
	printf("%s\n", __func__);
	return NSS_STATUS_NOTFOUND;
}

enum nss_status _nss_thingymcconfig_gethostbyname3_r(const char *name, int af,
		struct hostent *result, char *buffer, size_t buflen, int *errnop,
		int *h_errnop, int32_t *ttlp, char **canonp) {
	printf("%s\n", __func__);
	return NSS_STATUS_NOTFOUND;
}

enum nss_status _nss_thingymcconfig_gethostbyname2_r(const char *name, int af,
		struct hostent *host, char *buffer, size_t buflen, int *errnop,
		int *h_errnop) {
	printf("%s\n", __func__);
	return NSS_STATUS_NOTFOUND;
}

enum nss_status _nss_thingymcconfig_gethostbyname_r(const char *name,
		struct hostent *result_buf, char *buf, size_t buflen, int *errnop,
		int *h_errnop) {
	printf("%s\n", __func__);
	return NSS_STATUS_NOTFOUND;
}

