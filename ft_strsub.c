/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:39:00 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 14:01:06 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (len <= 0 || s == NULL)
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s))
		return (NULL);
	str = ft_strnew(len);
	if (str)
		ft_memcpy(str, s + start, len);
	return (str);
}
