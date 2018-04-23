/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 12:26:19 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/23 12:42:59 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
		n--;
	}
	return (0);
}

int		main()
{
	char *s2 = "iuud";
	char *s1 = "iuuj";
	printf("%d", ft_strncmp(s1, s2, 4));
	printf("%d", strncmp(s1, s2, 4));
}
