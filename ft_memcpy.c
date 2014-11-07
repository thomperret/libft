/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:10:06 by tperret           #+#    #+#             */
/*   Updated: 2014/11/07 10:06:45 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str == NULL || str2 == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (str);
}
