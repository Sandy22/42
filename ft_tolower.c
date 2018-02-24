/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:56:22 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/22 15:01:50 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c+32);
	}
	return c;
}

int		main()
{
	printf("%d", tolower('&'));
	printf("%d", ft_tolower('&'));
}
