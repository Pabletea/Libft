/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:06:59 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/27 11:47:33 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total_size;
	unsigned char	*ptr_byte;
	size_t			i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	total_size = nmemb * size;
	ptr_byte = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		ptr_byte[i] = 0;
		i++;
	}
	return (ptr);
}
