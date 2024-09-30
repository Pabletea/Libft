/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:26:46 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/25 13:39:04 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tar;
	char	*res;
	char	*tmp;

	tar = (char)c;
	tmp = (char *)s;
	res = NULL;
	while (*tmp)
	{
		if (*tmp == tar)
			res = tmp;
		tmp++;
	}
	if (!tar)
		return (tmp);
	else
		return (res);
}
