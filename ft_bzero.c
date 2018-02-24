/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:32:41 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/22 14:18:06 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char *res = s;
	while (n > 0)
	{
		*(char *)s = '0';
		s++;
		n--;
	}
}

int		main()
{
	char s[20] = "abcdefghijklmnop";
	bzero(s, 2);
	char t[20] = "abcdefghijklmnop";
	ft_bzero(t, 2);
}
