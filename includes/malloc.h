#ifndef MALLOC_H
# define MALLOC_H

# include <sys/mman.h>
# include <sys/resource.h>
# include <unistd.h>
# include <pthread.h>

void	*malloc(size_t size);

#endif
