/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:47:58 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/14 04:12:51 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*temp;
	size_t		i;

	temp = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*(temp + i) == (char)c)
			return ((void *)temp + i);
		i++;
	}
	return (NULL);
}
