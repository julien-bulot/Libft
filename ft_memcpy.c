/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:55:22 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/09 17:00:51 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*udest;
	unsigned char	*usrc;

	if (!dest && !src)
		return (dest);
	i = -1;
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	while (++i < n)
		udest[i] = usrc[i];
	return (dest);
}
