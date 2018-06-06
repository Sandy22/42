/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 15:42:47 by smadnaik          #+#    #+#             */
/*   Updated: 2018/04/07 15:42:52 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	if (s && f)
		while (*(s + ++i))
			f(i, s + i);
}
