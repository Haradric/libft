/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraslav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 16:55:35 by mbraslav          #+#    #+#             */
/*   Updated: 2016/11/26 16:55:42 by mbraslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		dstlen;
	int		free;
	int		srclen;
	int		i;
	char	*d;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	free = size - dstlen - 1;
	d = dst + dstlen;
	i = 0;
	while (i < free && src[i] != '\0')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (((dstlen < (int)size) ? dstlen : size) + srclen);
}
