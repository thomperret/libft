/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:18:59 by tperret           #+#    #+#             */
/*   Updated: 2014/11/11 15:46:20 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char*)b;
	if (!t)
		return (NULL);
	while (n)
	{
		*t++ = c;
		n--;
	}
	return (b);
}
