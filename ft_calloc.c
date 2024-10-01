/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:06:59 by pabalons          #+#    #+#             */
/*   Updated: 2024/10/01 12:13:41 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	size_t	num_of_bytes;

	num_of_bytes = size * nmemb;
	if (size && nmemb && (num_of_bytes % size || num_of_bytes % nmemb))
		return (NULL);
	res = malloc(num_of_bytes);
	if (!res)
		return (NULL);
	ft_bzero(res, num_of_bytes);
	return ((void *)res);
}
