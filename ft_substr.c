/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:34:29 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/27 12:20:00 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sub_len;

	if (!s)
		return (NULL);
	sub_len = 0;
	while (s[sub_len])
		sub_len++;
	if (start >= sub_len)
		return (ft_strdup(""));
	if (len > sub_len - start)
		len = sub_len - start;
	substr = (char *)malloc(sizeof(char) + (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	len;

	len = 0;
	if (siz)
	{
		while (*(src + len) && --siz)
		{
			*dst++ = *(src + len);
			len++;
		}
		*dst = '\0';
	}
	while (src[len])
		len++;
	return (len);
}
