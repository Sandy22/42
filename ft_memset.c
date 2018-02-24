/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:20:37 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/22 13:53:57 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>

void*	ft_memset(void *b, int c, size_t len)
{
	void *res = b;
	while (len > 0)
	{
		*(char *)b = (unsigned char) c;
		b++;
		len--;
	}
	return res;
}

int		main()
{
	char s[20] = "abcdefghijklmnop";
	printf("%s\n", memset(s + 10, 'X', 2));
	char t[20] = "abcdefghijklmnop";
	printf("%s", ft_memset(t + 10, 'X', 2));
}
