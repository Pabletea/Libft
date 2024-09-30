/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:01:02 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/25 10:14:05 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		int_len(int n);

char	*ft_itoa(int n)
{
	char		*str_res;
	size_t		len;
	long int	num;

	num = n;
	len = int_len(n);
	str_res = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_res)
		return (NULL);
	*(str_res + len) = '\0';
	if (n < 0)
	{
		*str_res = '-';
		num = -num;
	}
	while (num)
	{
		str_res[--len] = num % 10 + '0';
		num /= 10;
	}
	if (n == 0)
		str_res[0] = '0';
	return (str_res);
}

int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
