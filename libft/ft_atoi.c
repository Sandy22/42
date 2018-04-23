/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:06:01 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/20 16:12:25 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef MAX_LONG
# define MAX_LONG 9223372036854775807l
#endif

int		ft_atoi(const char *str)
{
	unsigned long	num;
	t_bool			negflag;

	num = 0ul;
	while (*str == ' ' || (*str > 8 && *str < 14))
		++str;
	negflag = (*str == '-');
	str += (negflag || *str == '+');
	while (*str > 47)
	{
		if (*str > 57)
			break ;
		num = (num * 10ul) + (unsigned long)(*str - 48);
		if (num > MAX_LONG)
			return ((int)(MAX_LONG + negflag));
		++str;
	}
	if (negflag)
		num = -num;
	return ((int)(num));
}
