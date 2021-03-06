/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#ifndef YAKSUR_H_INCLUDED
#define YAKSUR_H_INCLUDED

#include "yaksuri.h"

int yaksur_init_hook(void);
int yaksur_finalize_hook(void);
int yaksur_type_create_hook(yaksi_type_s * type);
int yaksur_type_free_hook(yaksi_type_s * type);

int yaksur_ipack(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type,
                 yaksi_request_s ** request);
int yaksur_iunpack(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type,
                   yaksi_request_s ** request);

#endif /* YAKSUR_H_INCLUDED */
