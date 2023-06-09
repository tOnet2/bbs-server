#ifndef POLLFD_CONTROL_H_SENTRY
#define POLLFD_CONTROL_H_SENTRY

#include "typedefs.h"
#include <inttypes.h>
#include <poll.h>
#include <stdlib.h>

void fill_initial_pollfd_arr(struct pollfd *pf, const size_t pflen);
int32_t extern_pollfd_array(struct pollfd **pf, nfds_t *pollfd_count);
int32_t realloc_to_POLLFD_ARR_LENGTH(struct pollfd **pf, size_t pfal);
void set_pollfd_by_connections(struct pollfd *pfds, size_t *pfli, const size_t pfds_len, _connect *f); 

#endif
