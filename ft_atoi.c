/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 16:51:05 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/05 17:32:10 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	reatoi(int x)
{
	if (x == -1)
		return (0);
	return (-1);
}

int			ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int i;
	int a;

	result = 0;
	sign = 1;
	i = 0;
	a = 0;
	while (str[i] != '\0' && str[i] != '\e')
	{
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '-' && (!(ft_isdigit(str[i + 1]))))
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			a++;
			if (a > 10)
				return (reatoi(sign));
		}
		i++;
	}
	return (sign * result);
}
