/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:33:10 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/20 17:34:15 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	unsigned int	len;
	char			*str;

	len = 0;
	while (*src++)
		++len;
	src -= (len + 1);
	str = (char*)malloc(len * sizeof(char) + 1);
	if (!str)
		return ((void*)0);
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (str - len);
}
