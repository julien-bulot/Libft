/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:43:49 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/10 13:47:16 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	i = -1;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (++i < n)
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
	return (0);
}
