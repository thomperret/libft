/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 09:46:52 by tperret           #+#    #+#             */
/*   Updated: 2014/11/08 09:50:09 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;
    
	i = 0;
	s = (char *)malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
