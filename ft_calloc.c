/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:21:11 by tgrossma          #+#    #+#             */
/*   Updated: 2021/07/16 13:04:33 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*ptr_copy;
	size_t	i;
	size_t	max;

	max = count * size;
	ptr = malloc(max);
	if (!ptr)
		return (NULL);
	i = 0;
	ptr_copy = (char *)ptr;
	while (i < max)
	{
		ptr_copy[i] = '\0';
		i++;
	}
	return (ptr);
}
