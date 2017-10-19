/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:12:18 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/06 12:18:53 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*p;
	unsigned int	i;

	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		p = str;
		i = 0;
		while (*s && str)
			*p++ = f(i++, *s++);
		return (str);
	}
	return (NULL);
}
