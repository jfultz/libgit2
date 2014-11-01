/*
 * Copyright (C) the libgit2 contributors. All rights reserved.
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */
#ifndef INCLUDE_sys_git_io_stream_h__
#define INCLUDE_sys_git_io_stream_h__

#include "git2/common.h"
#include "git2/types.h"

GIT_BEGIN_DECL

/**
 * Every stream must have this struct as its first element, so the
 * API can talk to it. You'd define your stream as
 *
 *     struct my_stream {
 *             git_io_stream parent;
 *             ...
 *     }
 *
 * and fill the functions
 */
typedef struct git_io_stream {
	int (*connect)(struct git_io_stream *);
	ssize_t (*read)(struct git_io_stream *, void *, size_t);
	ssize_t (*write)(struct git_io_stream *, void *, size_t, int);
	int (*close)(struct git_io_stream *);
	void (*free)(struct git_io_stream *);
} git_io_stream;

#endif
