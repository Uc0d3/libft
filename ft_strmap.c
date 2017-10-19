/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:15:14 by rmuntean          #+#    #+#             */
/*   Updated: 2016/12/22 20:08:15 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*p;

	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		p = str;
		while (*s && str)
			*p++ = f(*s++);
		return (str);
	}
	return (NULL);
}
