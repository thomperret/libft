/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:08:25 by tperret           #+#    #+#             */
/*   Updated: 2014/11/11 14:36:37 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*memory;
	unsigned int	counter;
	char			*e;

	counter = 0;
	memory = (void *)malloc(size);
	if (!memory)
		return (NULL);
	e = (char *)memory;
	if (memory != NULL)
	{
		while (counter++ < size)
			*e++ = 0;
	}
	return (memory);
}
