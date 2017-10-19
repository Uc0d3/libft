/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:11:48 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/23 15:34:35 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*s;

	nbr = n;
	len = ft_nbrlen(nbr);
	s = ft_strnew(len);
	if (!s)
		return (NULL);
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		s[0] = '0';
	len--;
	while (nbr)
	{
		s[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
