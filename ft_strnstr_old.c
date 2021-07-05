/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:59:00 by tgrossma          #+#    #+#             */
/*   Updated: 2021/06/28 13:59:00 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
		else if (haystack[i] == needle[j])
			j++;
		else if (j != 0)
		{
			i = i - j + 1;
			j = 0;
		}
		i++;
	}
	if (needle[j] == '\0')
		return ((char *)haystack + i - j);
	return (0);
}
