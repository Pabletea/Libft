/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 07:43:07 by pabalons          #+#    #+#             */
/*   Updated: 2024/09/27 12:44:53 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c);
static char	*fill_word(const char *str, int start, int end);
static void	*ft_free(char **strs, int count);
static void	ft_initiate_vars(int *i, int *j, int *s_word);
int			ft_strlen(const char *str);
void		*ft_calloc(size_t nmemb, size_t size);

char	**ft_split(const char *s, char c)
{
	char	**arr_str;
	int		i;
	int		j;
	int		s_word;

	*i = 0;
	*j = 0;
	*s_word = -1;
	arr_str = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!arr_str)
		return (NULL);
	while (i++ <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			arr_str[j] = fill_word(s, s_word, i);
			if (!(arr_str[j]))
				return (ft_free(arr_str, j));
			s_word = -1;
			j++;
		}
	}
	return (arr_str);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	count_words(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total_size;
	unsigned char	*ptr_byte;
	size_t			i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	total_size = nmemb * size;
	ptr_byte = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		ptr_byte[i] = 0;
		i++;
	}
	return (ptr);
}
