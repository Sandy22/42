/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:45:39 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/14 04:13:25 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*temp1;
	char	*temp2;

	temp1 = dst;
	temp2 = (char *)src;
	i = 0;
	while (i < n)
	{
		*(temp1 + i) = *(temp2 + i);
		i++;
	}
	return (dst);
}
