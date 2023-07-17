/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaskiri <shaskiri@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:12:14 by shaskiri          #+#    #+#             */
/*   Updated: 2023/07/16 20:17:29 by shaskiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && k < len)
		{
			k++;
			j++;
			if (!to_find[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
