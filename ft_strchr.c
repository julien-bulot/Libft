/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:52:13 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/10 12:01:58 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	i = -1;
	uc = (unsigned char)c;
	while (s[++i])
	{
		if (s[i] == uc)
			return ((char *)(s + i));
	}
	if (!uc)
		return ((char *)(s + i));
	return (NULL);
}
