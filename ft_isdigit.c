/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:50:34 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/20 19:56:57 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c > '0' && c < '9')
		return 1;
	else
		return 0;
}

int		main()
{
	printf("%d\n", isdigit('3'));
	printf("%d\n", isdigit('e'));

	printf("%d\n", ft_isdigit('3'));
	printf("%d", ft_isdigit('e'));
}
