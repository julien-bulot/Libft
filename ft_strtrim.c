/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:11:28 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/11 13:28:25 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	size_t			begin;
	size_t			end;
	size_t			s1_len;

	begin = 0;
	s1_len = ft_strlen(s1);
	end = s1_len - 1;
	while (is_in_set(set, s1[begin]) && s1[begin])
		begin++;
	if (begin < s1_len)
		while (is_in_set(set, s1[end]) && end >= 0)
			end--;
	else
		end = s1_len;
	trim = ft_substr(s1, begin, s1_len - begin - (s1_len - end) + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
