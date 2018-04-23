/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:33:10 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/20 13:39:39 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	char	*temp;
	int		i;

	i = 0;
	temp = src;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	src = temp;
	result = (char*)malloc(sizeof(*src) * (i + 1));
	temp = result;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	return (result);
}
