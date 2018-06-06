/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:30:12 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/14 04:11:59 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = dst;
	while (i < n)
	{
		*(temp + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
