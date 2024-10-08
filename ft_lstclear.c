/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbaek <sanbaek@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:45:42 by sanbaek           #+#    #+#             */
/*   Updated: 2024/10/08 15:32:27 by sanbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
		ft_lstdelone(ft_lstlast(*lst), del);
	free(lst);
	return ;
}
