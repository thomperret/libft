/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:19:29 by tperret           #+#    #+#             */
/*   Updated: 2014/11/04 12:06:52 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	char	*string;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	if ((string = (char *)malloc(sizeof(*string) * i + 1)) == NULL);
		return (NULL);
		i = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
