/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:53 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/24 09:05:36 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
