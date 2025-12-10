/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:08:07 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/10 10:36:54 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*udest;
	unsigned char	*usrc;

	if (!src && !dest)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	while (n-- > 0)
		udest[n] = usrc[n];
	return (dest);
}
