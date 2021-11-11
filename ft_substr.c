/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:17:31 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/11/11 16:58:30 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	if (s == NULL)
		return (NULL);
	if ((int) len > ft_strlen((char *)(s + start)))
		len = ft_strlen((char *)(s + start));
	ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if ((unsigned int) ft_strlen((char *) s) <= start)
		return (ft_strdup(""));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (len-- != 0)
	{
		*(ptr + i) = *(char *)(s + start);
		i++;
		start++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
