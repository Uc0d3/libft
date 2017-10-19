/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:41:13 by rmuntean          #+#    #+#             */
/*   Updated: 2016/12/22 20:10:26 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lentoc(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	len;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	split = (char **)malloc(sizeof(char **) * (len + 1));
	i = 0;
	j = 0;
	if (!split)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		len = ft_lentoc((s + i), c);
		if (s[i])
			split[j++] = ft_strsub(s, i, len);
		i += len;
	}
	split[j] = NULL;
	return (split);
}
