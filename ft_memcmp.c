/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:14:40 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 13:44:21 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	while (n--)
	{
		a = (unsigned char *)s1++;
		b = (unsigned char *)s2++;
		if (*a != *b)
			return (*a - *b);
	}
	return (0);
}
