/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:15:17 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/11 14:00:56 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(to_find);
	if (!str || !to_find)
		return (str);
	if (!*to_find)
		return (str);
	while (i < (int)ft_strlen(str))
	{
		if (!ft_strncmp((str + i), to_find, len))
			return (str + i);
		i++;
	}
	return (NULL);
}
