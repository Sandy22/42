/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 12:42:51 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/23 16:27:23 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return s;
		else
			s++;
	}
	return NULL;
}

int		main()
{
	char *s1 = "dssdadds";
	printf("%s", strchr(s1, 'a'));
	printf("%s", ft_strchr(s1, 'a'));
}
