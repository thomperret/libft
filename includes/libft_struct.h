/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperret <tperret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:05:08 by tperret           #+#    #+#             */
/*   Updated: 2014/11/06 18:05:13 by tperret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCT_H
# define LIBFT_STRUCT_H

typedef struct			s_list_dnew
{
	void				*data;
	struct s_list_dnew	*prev;
	struct s_list_dnew	*next;
}						t_dnew;

typedef struct			s_dlist
{
	size_t				size;
	t_dnew				*head;
	t_dnew				*tail;
}						t_dlist;

#endif
