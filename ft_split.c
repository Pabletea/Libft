/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:56:31 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/24 13:45:07 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	new_str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i + k] && s[i + k] != c)
				k++;
			new_str[j] = ft_substr(s, i, k);
			j++;
			i += k;
		}
		else
			i++;
	}
	new_str[j] = NULL;
	return (new_str);
}
