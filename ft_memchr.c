/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:47:55 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/23 13:19:56 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	target;

	str = (unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*str == target)
			return (str);
		str++;
	}
	return (NULL);
}
