/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:38:56 by mbaloyi           #+#    #+#             */
/*   Updated: 2018/06/05 10:35:57 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (char*)malloc(sizeof(char*) * size);
	if (!(fresh))
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
