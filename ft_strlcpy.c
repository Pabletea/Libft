/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:50:28 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/23 13:24:42 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	len;

	len = 0;
	while ((*src + len) && --siz)
		*dst++ = *(src + len++);
	*dst = '\0';
	while (*(src + len))
		len++;
	return (len);
}
