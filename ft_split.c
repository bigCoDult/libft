/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbaek <sanbaek@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:00:52 by sanbaek           #+#    #+#             */
/*   Updated: 2024/04/05 20:00:52 by sanbaek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_words_length(char const *s, char c)
{
	size_t	i_i;
	size_t	s_i;

	s_i = 0;
	i_i = 1;
	while (s[s_i] != '\0')
	{
		while (s[s_i] == c)
			s_i++;
		if (s[s_i] != '\0')
		{
			i_i++;
			while (s[s_i] != c && s[s_i] != '\0')
				s_i++;
			if (s[s_i] != '\0')
				i_i++;
		}
	}
	return (i_i);
}

static size_t	*calloc_words(char const *s, char c)
{
	size_t	*in;
	size_t	i_i;

	i_i = get_words_length(s, c);
	in = (size_t *)ft_calloc(i_i + 1, sizeof(size_t));
	if (in == NULL)
		return (NULL);
	in[0] = 0;
	if (i_i > 1)
		in[0] = i_i;
	return (in);
}

static size_t	*set_words(size_t *in, char const *s, char c)
{
	size_t	i_i;
	size_t	s_i;

	s_i = 0;
	i_i = 1;
	while (s[s_i] != '\0')
	{
		while (s[s_i] == c)
			s_i++;
		if (s[s_i] != '\0')
		{
			in[i_i++] = s_i;
			while (s[s_i] != c && s[s_i] != '\0')
				s_i++;
			in[i_i++] = s_i - 1;
		}
	}
	return (in);
}

static char	**set_sp(char const *s, char **sp, size_t *in)
{
	size_t	i_i;
	size_t	w_i;

	i_i = 1;
	w_i = 0;
	while (i_i < in[0])
	{
		sp[w_i] = (char *)ft_calloc((in[i_i + 1] - in[i_i] + 1) + 1, 1);
		if (sp[w_i] == NULL)
		{
			while (w_i)
				free(sp[w_i--]);
			free(sp);
			return (NULL);
		}
		ft_memmove(sp[w_i++], s + in[i_i], in[i_i + 1] - in[i_i] + 1);
		i_i += 2;
	}
	free(in);
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	*in;

	in = set_words(calloc_words(s, c), s, c);
	if (in == NULL)
		return (NULL);
	sp = (char **)ft_calloc((in[0] / 2 + 1), sizeof(char *));
	if (sp == NULL)
		return (NULL);
	return (set_sp(s, sp, in));
}
