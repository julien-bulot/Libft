/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:21:13 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/10 12:24:26 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ret;
	size_t			i;
	unsigned char	uc;

	i = -1;
	ret = NULL;
	uc = (unsigned char)c;
	while (s[++i])
	{
		if (s[i] == uc)
			ret = (char *)(s + i);
	}
	if (!uc)
		return ((char *)(s + i));
	return (ret);
}
