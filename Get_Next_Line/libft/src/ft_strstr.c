/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:01:42 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/14 04:38:29 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		k;
	int		flag;

	if (!ft_strlen(to_find))
		return ((char *)str);
	i = -1;
	flag = 0;
	while (*(str + ++i) && !flag)
	{
		if (*(str + i) == *(to_find + 0))
		{
			j = 0;
			k = i;
			flag = 1;
			while (*(to_find + j))
				if (*(to_find + j++) != *(str + k++))
					flag = 0;
			if (flag)
				return ((char *)str + i);
		}
	}
	return (NULL);
}
