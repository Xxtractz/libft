/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:52:18 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/01 18:21:48 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	n;

	i = ft_strlen(s1);
	n = 0;
	while (s2[n])
	{
		s1[i + n] = s2[n];
		n++;
	}
	s1[i + n] = '\0';
	return (s1);
}
