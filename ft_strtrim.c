/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:11:27 by rmuntean          #+#    #+#             */
/*   Updated: 2016/12/22 20:11:03 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhite(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned	int i;
	size_t			len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (ft_iswhite(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_iswhite(s[len]))
		len--;
	str = ft_strsub(s, i, len + 1 - i);
	return (str);
}
