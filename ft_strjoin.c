/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:09:37 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/24 11:20:24 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	if (s1 && !s2)
		i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i++])
	{
		new_str[i] = s1[i];
	}
	i = 0;
	while (s2[i++])
	{
		new_str[len_s1 + i] = s2[i];
	}
	new_str[(len_s1 + i) + 1] = '\0';
	return (new_str);
	return (NULL);
}
