/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:51:04 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/10 14:40:45 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!little[0])
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && i + little_len - 1 < len)
	{
		j = 0;
		while (little[j] && little[j] == big[j + i])
		{
			j++;
		}
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
