##
## Copyright (C) by Argonne National Laboratory
##     See COPYRIGHT in top-level directory
##

if BUILD_CUDA_BACKEND
include $(top_srcdir)/src/backend/cuda/Makefile.mk
endif BUILD_CUDA_BACKEND

include $(top_srcdir)/src/backend/seq/Makefile.mk
include $(top_srcdir)/src/backend/src/Makefile.mk
