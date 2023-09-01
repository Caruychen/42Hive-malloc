#ifndef MALLOC_H
# define MALLOC_H

# include <sys/mman.h>
# include <sys/resource.h>
# include <unistd.h>
# include <pthread.h>

# define SIZE_TINY_HEAP (getpagesize())
# define SIZE_SMALL_HEAP (getpagesize() * 0x20)
# define SIZE_TINY_BLOCK (SIZE_TINY_HEAP / 0x80)
# define SIZE_SMALL_BLOCK (SIZE_SMALL_HEAP / 0x80)

void	*malloc(size_t size);

#endif
