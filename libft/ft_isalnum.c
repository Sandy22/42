/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:03:30 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/22 16:07:51 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>

int		ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c<= 57))
	{
		return (1);
	}
	return (0);
}

int		main()
{
	printf("%d", isalnum('a'));
	printf("%d", ft_isalnum('a'));
}
