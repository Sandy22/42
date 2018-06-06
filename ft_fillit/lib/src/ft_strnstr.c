/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:52:57 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/14 04:21:17 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			flag;

	i = 0;
	flag = 1;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		j = 0;
		if (*(haystack + i) == *(needle + 0))
		{
			k = i;
			flag = 1;
			while (*(haystack + k) && *(needle + j) && j < len && k < len)
				if (*(haystack + k++) != *(needle + j++))
					flag = 0;
			if (flag && !*(needle + j))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
