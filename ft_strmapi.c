/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 10:36:05 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/12 10:41:17 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapi;
	unsigned int	i;

	mapi = malloc(sizeof(*mapi) * (ft_strlen(s) + 1));
	if (!mapi)
		return (NULL);
	i = -1;
	while (s[++i])
		mapi[i] = f(i, s[i]);
	mapi[i] = 0;
	return (mapi);
}
