/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:13:52 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 15:47:54 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*ptr;

	if (dst == NULL || n <= 0)
		return ;
	ptr = (unsigned char *)dst;
	while (n--)
		*ptr++ = 0;
}
