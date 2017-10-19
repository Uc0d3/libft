/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:14:26 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 14:03:33 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = 0;
	if (s == NULL)
		return ((char*)s);
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		else if (*(s + 1) == c && c == 0)
			return (char *)(s + 1);
		else if (*(s + 1) == 0 && last == 0)
			return (NULL);
		s++;
	}
	return (char *)(last);
}
