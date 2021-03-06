/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 11:10:33 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/02 11:10:35 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenc(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		++s;
		++len;
	}
	return (len);
}
