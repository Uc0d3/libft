/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:14:25 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 13:42:44 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	if (n && dest != NULL && src != NULL)
	{
		d = dest;
		s = src;
		while (n--)
			if ((*d++ = *s++) == c)
				return (d);
	}
	return (0);
}
