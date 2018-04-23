/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 15:44:14 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/20 15:47:00 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*trimmed_string;
	char			*beg;
	unsigned int	len;

	if (!s)
		return ((void*)0);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		++s;
	if (!*s)
		return (ft_memalloc(1));
	len = ft_strlen(s) - 1;
	beg = (char*)s;
	s += len;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		--s;
	len = (++s - beg);
	s = beg;
	trimmed_string = (char*)ft_strnew(len * sizeof(char));
	if (!trimmed_string)
		return ((void*)0);
	beg = trimmed_string;
	while (len--)
		*trimmed_string++ = *s++;
	return (beg);
}
