/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:30:43 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/11 14:43:01 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		nb_words;
	size_t	i;

	i = -1;
	nb_words = 0;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			nb_words++;
	return (nb_words);
}

static int	split_words(char **split, char const *s, char c, int i)
{
	size_t	begin;
	size_t	end;

	begin = 0;
	end = 0;
	while (s[end])
	{
		if (s[end] == c || !s[end])
			begin = end + 1;
		if (s[end] != c && (s[end + 1] == c || !s[end + 1]))
		{
			split[i] = malloc(sizeof(**split) * (end - begin + 2));
			if (!split[i])
			{
				while (--i >= 0)
					free(split[i]);
				return (0);
			}
			ft_strlcpy(split[i], s + begin, end - begin + 2);
			i++;
		}
		end++;
	}
	split[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = malloc(sizeof(*split) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	if (!split_words(split, s, c, 0))
	{
		free(split);
		return (NULL);
	}
	return (split);
}
