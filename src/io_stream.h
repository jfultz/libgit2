/*
 * Copyright (C) the libgit2 contributors. All rights reserved.
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */
#ifndef INCLUDE_io_stream_h__
#define INCLUDE_io_stream_h__

#include "common.h"
#include "git2/sys/io_stream.h"

GIT_INLINE(int) git_io_stream_connect(git_io_stream *st)
{
	return st->connect(st);
}

GIT_INLINE(ssize_t) git_io_stream_read(git_io_stream *st, void *data, size_t len)
{
	return st->read(st, data, len);
}

GIT_INLINE(ssize_t) git_io_stream_write(git_io_stream *st, void *data, size_t len, int flags)
{
	return st->write(st, data, len, flags);
}

GIT_INLINE(int) git_io_stream_close(git_io_stream *st)
{
	return st->close(st);
}

GIT_INLINE(void) git_io_stream_free(git_io_stream *st)
{
	return st->free(st);
}

#endif
