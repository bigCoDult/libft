/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbaek <sanbaek@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:20:59 by sanbaek           #+#    #+#             */
/*   Updated: 2024/03/26 12:21:07 by sanbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*dest_tmp;
	unsigned char	char_c;

	dest_tmp = (unsigned char *)dest;
	char_c = (unsigned char)c;
	while (count--)
		*dest_tmp++ = char_c;
	return (dest);
}
