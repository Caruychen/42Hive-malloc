#ifndef MALLOC_STRUCT_H
# define MALLOC_STRUCT_H

/*
 * Header for the allocated blocks. Stores size of the block and padding
 */
typedef struct s_alloc_header
{
  size_t	size;
  size_t  padding;
}	t_alloc_header;

/*
 * Doubly linked list pointing to free memory blocks
 */
typedef struct s_block
{
  struct s_block	*prev;
  struct s_block	*next;
  size_t          size;
}	t_block;

/*
 * Doubly linked list pointing to memory heaps containing blocks
 */
typedef struct s_heap
{
  struct s_heap *prev;
  struct s_heap	*next;
  void          *data;
  t_block       *head;
  size_t        size;
  size_t        used;
}	t_heap;

#endif
