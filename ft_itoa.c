/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbaek <sanbaek@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:48:50 by sanbaek           #+#    #+#             */
/*   Updated: 2024/04/02 09:48:50 by sanbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*ft_get_min_info(int n, int *min_info)
{
	if (n < 0)
	{
		min_info[0] = 1;
		min_info[1] = -n;
		min_info[2] = -n;
		min_info[3] = 2;
	}
	else
	{
		min_info[0] = 0;
		min_info[1] = n;
		min_info[2] = n;
		min_info[3] = 1;
	}
	return (min_info);
}

static char	*ft_deal_largest_min(void)
{
	char	*str;

	str = (char *)ft_calloc(12, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memmove(str, "-2147483648", 12);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		min_info[4];

	if (n == -2147483648)
		return (ft_deal_largest_min());
	ft_get_min_info(n, min_info);
	while (min_info[1] > 9)
	{
		min_info[1] /= 10;
		min_info[3]++;
	}
	str = (char *)ft_calloc(min_info[3] + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (min_info[0] == 1)
		str[0] = '-';
	while (min_info[3] > min_info[0])
	{
		min_info[3]--;
		str[min_info[3]] = (min_info[2] % 10) + '0';
		min_info[2] /= 10;
	}
	return (str);
}
