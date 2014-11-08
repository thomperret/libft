/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 09:50:21 by tperret           #+#    #+#             */
/*   Updated: 2014/11/08 09:50:23 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;
    
	if (s != NULL && f != NULL)
	{
		i = 0;
		s2 = (char *)malloc(sizeof(*s2) * ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			s2[i] = f(s[i]);
			i++;
		}
		return (s2);
	}
	return (0);
}