/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:50:46 by ttaquet           #+#    #+#             */
/*   Updated: 2023/12/15 18:07:32 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "itsmylib.h"
#include <string.h>

unsigned int	ft_strlcpy(char	*dest, const char	*src, unsigned int size)
{
	int	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
