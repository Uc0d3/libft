/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:19:01 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/06 12:19:03 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *copy;

	if (n && dest != NULL && src != NULL)
	{
		copy = dest;
		while (n && *src != '\0')
		{
			*copy++ = *src++;
			n--;
		}
		while (n)
		{
			*copy++ = '\0';
			n--;
		}
	}
	return (dest);
}
