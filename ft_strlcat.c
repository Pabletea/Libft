/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:53:45 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/23 14:12:40 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_dst = 0;
	len_dst = ft_strlen(dst);
	while (src[i - len_dst] && i + 1 < size)
	{
		dst[i] = src[i - len_dst];
		i++;
	}
	if (len_dst < size)
		dst[i] = '\0';
	return (len_dst + ft_strlen(src));
}
