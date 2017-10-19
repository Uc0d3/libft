/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:16:52 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 13:55:42 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *s;

	if (dest == NULL || src == NULL)
		return (dest);
	s = dest;
	while ((*s = *src) != 0)
	{
		s++;
		src++;
	}
	*s = *src;
	return (dest);
}
