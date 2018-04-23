/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:43:17 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/14 04:33:43 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	int			j;
	size_t		dest_len;
	size_t		src_len;

	i = ft_strlen(dest);
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dest_len + 1)
		return (src_len + size);
	if (size > dest_len + 1)
	{
		while (i < size - 1)
			*(dest + i++) = *(src + j++);
		*(dest + i) = '\0';
	}
	return (dest_len + src_len);
}
