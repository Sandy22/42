/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:28:34 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/23 16:41:51 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *res = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			res = s;
		}
		else
			s++;
	}
	return res;
}

int		main()
{
	char *s1 = "dssdadds";
	printf("%s", strrchr(s1, 'a'));
	printf("%s", ft_strrchr(s1, 'a'));
}
