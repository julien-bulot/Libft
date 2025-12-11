/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:03:54 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/11 11:40:59 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		sub = ft_calloc(1, sizeof(*sub));
		if (!sub)
			return (NULL);
	}
	else
	{
		i = ft_strlen(s + start);
		if (i > len)
			i = len;
		sub = malloc(sizeof(*sub) * (i + 1));
		if (!sub)
			return (NULL);
		sub[i] = 0;
		while (i-- > 0)
			sub[i] = s[start + i];
	}
	return (sub);
}
