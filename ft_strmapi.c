/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 09:51:39 by tperret           #+#    #+#             */
/*   Updated: 2014/11/09 10:46:17 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		s2 = (char *)malloc(sizeof(*s2) * ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			s2[i] = f(i, s[i]);
			i++;
		}
		return (s2);
	}
	return (0);
}
