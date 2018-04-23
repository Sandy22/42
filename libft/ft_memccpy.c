/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:30:12 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/23 18:44:13 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
		if (*(char *)src == c)
			break;
		src++;
		dst++;
		n--;
	}
	if (n == 0)
		return NULL;
	else
		return dst;
}

int		main()
{
	const char src[50] = "httpchscscldsldvdvd";
	char dest[50];
	
	printf("Before = %s\n", dest);
	memccpy(dest, src, 'p', strlen(src) + 1);
	printf("After = %s\n", dest);

	const char src1[50] = "httpchscscldsldvdvd";
	char dest1[50];
	
	printf("Before = %s\n", dest1);
	ft_memccpy(dest1, src1, 'p', strlen(src1) + 1);
	printf("After = %s\n", dest1);

}
