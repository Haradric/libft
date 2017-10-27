/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraslav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 17:22:04 by mbraslav          #+#    #+#             */
/*   Updated: 2016/11/27 17:22:08 by mbraslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	t_byte	*str1;
	t_byte	*str2;
	size_t	i;

	i = 0;
	str1 = (t_byte *)s1;
	str2 = (t_byte *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
