/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:20:07 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/10 17:04:04 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *p;

	p = malloc(size);
	if (size == 0)
		return ((void*)0);
	if (p)
		ft_bzero(p, size);
	return (p);
}
