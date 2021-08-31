/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:59:10 by tgrossma          #+#    #+#             */
/*   Updated: 2021/06/28 13:59:10 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
//trims any char from set of the start and end of s1
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;
	char		*ptr;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && is_set(s1[start], set))
		start++;
	while (end > 0 && is_set(s1[end], set))
		end--;
	if (start > end)
		ptr = (char *)malloc(sizeof(char) * 1);
	else
		ptr = (char *)malloc((end - start + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (start > end)
		ptr[0] = '\0';
	else
		ft_memcpy(ptr, &s1[start], end - start + 1);
	return (ptr);
}
