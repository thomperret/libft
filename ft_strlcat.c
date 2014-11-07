/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:01:10 by tperret           #+#    #+#             */
/*   Updated: 2014/11/07 10:31:43 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;
	size_t len2;

	i = 0;
	len = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (size > (len + 1))
	{
		while (i < (size - len - 1))
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	if (size >= len)
		return (len + len2);
	return ((len + len2) - (len - size));
}
