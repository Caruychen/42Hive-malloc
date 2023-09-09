/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:39:18 by cchen             #+#    #+#             */
/*   Updated: 2023/07/09 10:40:29 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"
// DELETE
#include <stdio.h>

void	*malloc(size_t size)
{
	void	*ptr;

	printf("%zu\n", size);
  printf("%d\n", SIZE_TINY_HEAP);
  printf("%d\n", SIZE_TINY_BLOCK);
  printf("%d\n", SIZE_SMALL_HEAP);
  printf("%d\n", SIZE_SMALL_BLOCK);
	ptr = NULL;
	return ptr;
}
