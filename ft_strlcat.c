/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:47:24 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/10/23 21:53:44 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = size - ft_strlen(dest) - 1;
	if (size < (unsigned) ft_strlen(dest) + 1 || size == 0)
		return (size + ft_strlen(src));
	else
	{
		while (*src != '\0' && j-- != 0)
		{
			*(dest + i) = *src;
			i++;
			src++;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(dest) + ft_strlen(src));
}