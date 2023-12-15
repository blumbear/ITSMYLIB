/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:40:41 by ttaquet           #+#    #+#             */
/*   Updated: 2023/12/15 18:07:32 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "itsmylib.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char )c))
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
