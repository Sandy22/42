/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:44:32 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/20 14:55:31 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*temp1;
	char	*temp2;
	size_t	i;

	i = 0;
	temp1 = (char *)src;
	temp2 = (char *)dest;
	if (temp1 < temp2)
		while ((int)(--len) >= 0)
			*(temp2 + len) = *(temp1 + len);
	else
		while (i < len)
		{
			*(temp2 + i) = *(temp1 + i);
			i++;
		}
	return (dest);
}
