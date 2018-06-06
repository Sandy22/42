/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 12:26:19 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/20 14:53:38 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (*(temp1 + i) && *(temp1 + i) == *(temp2 + i) && i < (int)n - 1)
		i++;
	if (n)
		return (*(temp1 + i) - *(temp2 + i));
	return (0);
}
