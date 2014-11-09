/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:57:14 by tperret           #+#    #+#             */
/*   Updated: 2014/11/09 10:38:53 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str1;
	char		*str2;
	char		*temp;
	size_t		i;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	if (str1 == NULL || str2 == NULL)
		return (0);
	temp = (char *)malloc(sizeof(*temp) * ft_strlen(str2));
	if (temp == NULL)
		return (NULL);
	temp = ft_strcpy(temp, str2);
	while (i < len)
	{
		str1[i] = temp[i];
		i++;
	}
	return (str1);
}
