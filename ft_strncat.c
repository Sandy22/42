/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:43:02 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/23 18:06:22 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unisgned int	ft_strncat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[j]='\0';
	printf("%d && %d", i, j);
	return dest;
}

int main()
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%d-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "uiop", 0));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "qwerty", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "", 4));
	printf("%s\n", test);
}
