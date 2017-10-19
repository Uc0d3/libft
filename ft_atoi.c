/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuntean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:11:25 by rmuntean          #+#    #+#             */
/*   Updated: 2017/01/07 11:46:56 by rmuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		semn;

	i = 0;
	num = 0;
	semn = 1;
	while (str[i] >= 1 && str[i] <= 32)
		i++;
	if (str[i] == '-')
		semn = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (int)str[i] - 48;
		if ((num * semn) > 2147483647)
			return (-1);
		else if ((num * semn) < -2147483648)
			return (0);
		i++;
	}
	return (num * semn);
}
