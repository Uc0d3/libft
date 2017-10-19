/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:16:00 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 13:50:33 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char *s;

	if (n > 0 && dst != NULL)
	{
		s = (unsigned char*)dst;
		while (n-- > 0)
			*s++ = (unsigned char)c;
	}
	return (dst);
}
