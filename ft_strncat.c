/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:13:35 by rmuntean          #+#    #+#             */
/*   Updated: 2016/12/22 20:08:40 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len;

	if (dest != NULL && src != NULL)
	{
		dest_len = ft_strlen(dest);
		while (n-- && *src != 0)
			*(dest + dest_len++) = *src++;
		*(dest + dest_len) = '\0';
	}
	return (dest);
}
