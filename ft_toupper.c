/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 15:03:15 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/22 15:04:25 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 92 && c <= 122)
	{
		return (c-32);
	}
	return c;
}

int		main()
{
	printf("%d", toupper('f'));
	printf("%d", ft_toupper('f'));
}
