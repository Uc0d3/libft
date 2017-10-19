/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:14:33 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 13:43:56 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;

	if (n != 0 && s != NULL)
	{
		src = (unsigned char *)s;
		while (n--)
			if (*src++ == (unsigned char)c)
				return (unsigned char *)(--src);
	}
	return (NULL);
}
