/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:03:35 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/10 11:20:00 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	if (siz <= dst_len)
		return (ft_strlen(src) + siz);
	i = 0;
	while (src[i] && dst_len + i < siz - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (ft_strlen(src) + dst_len);
}
