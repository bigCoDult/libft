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

// #include "libft.h"
// void insert_front(t_list **phead, char *str);
// void destroy(t_list *head);

// t_list	*ft_lstnew(void *content)
// {
// 	t_list *head;
// 	char* str;
// 	str = "";
// 	ft_memmove(str, content, ft_strlen(content));
// 	head = NULL;

// 	insert_front(&head, str);
// 	destroy (head);
// 	head = NULL;
// 	return (head);
// }

// void insert_front(t_list **phead, char *str)
// {

// 	t_list	*new_node;

// 	new_node = malloc(sizeof(t_list));
// 	new_node->content = str;

// 	new_node->next = *phead;
// 	*phead = new_node;
// }
// void destroy(t_list *head)
// {
// 	t_list	*p;
// 	p = head;

// 	while (p != NULL)
// 	{
// 		t_list	*next = p->next;
// 		free(p);
// 		p = next;
// 	}
// }















	// size_t	len;
	
	// t_list	*new_node = {0};
	
	// new_node = (t_list *)ft_calloc(1, sizeof(t_list));
	// if (new_node == NULL)
	// 	return (NULL);
	
	// new_node->next = NULL;
	// if (content == NULL)
	// {
	// 	new_node->content = NULL;
	// 	return (new_node);
	// }
	// len = ft_strlen((const char *)content);
	// new_node->content = (void *)ft_calloc(len + 1, sizeof(char));
	// if (new_node->content == NULL)
	// {
	// 	free(new_node);
	// 	return (NULL);
	// }
	// ft_memmove(new_node->content, content, len + 1);
	// return (new_node);


