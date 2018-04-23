/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:45:39 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/22 14:20:29 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*res = dst;
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
		n--;
	}
	return res; 
}

int		main()
{
	const char src[50] = "httpchscscldsldvdvd";
	char dest[50];
	
	printf("Before = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("After = %s\n", dest);

//	ft_memcpy();
}
