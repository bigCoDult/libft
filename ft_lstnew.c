/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbaek <sanbaek@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 07:57:55 by sanbaek           #+#    #+#             */
/*   Updated: 2024/04/18 07:57:55 by sanbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	char	*str;
	size_t	str_len;

	new_node = (t_list *)malloc(sizeof(t_list));
	str = (char *)content;
	str_len = ft_strlen(str);
	new_node->next = NULL;
	ft_memmove(new_node->content, (const void *)str, str_len);
	return (new_node);
}
