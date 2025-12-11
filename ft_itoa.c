/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:45:21 by jbulot            #+#    #+#             */
/*   Updated: 2025/12/11 15:22:41 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	nb_digits;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	nb_digits = 0;
	if (n < 0)
	{
		nb_digits++;
		n *= -1;
	}
	while (n)
	{
		nb_digits++;
		n /= 10;
	}
	return (nb_digits);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		nb_digits;
	long	ln;

	ln = n;
	nb_digits = count_digits(n);
	nb = ft_calloc(nb_digits + 1, sizeof(*nb));
	if (!nb)
		return (NULL);
	if (n < 0)
	{
		nb[0] = '-';
		ln *= -1;
	}
	if (!n)
		nb[0] = '0';
	else
	{
		while (ln)
		{
			nb[--nb_digits] = ln % 10 + '0';
			ln /= 10;
		}
	}
	return (nb);
}
