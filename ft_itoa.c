/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:14:40 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/05 09:44:12 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*c;

	if (!(c = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n < 0)
	{
		c[0] = '-';
		c[1] = '\0';
		c = ft_strjoin(c, ft_itoa(-n));
	}
	else if (n >= 10)
	{
		c = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	else
	{
		c[0] = (n + 48);
		c[1] = '\0';
	}
	return (c);
}
