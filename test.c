#include "libft.h" // Incluimos tu librería libft.h
#include <stdio.h>

int	main(void)
{
	char	*str;
	size_t	len;
	char	*s1;
	char	*s2;
	char	*joined_str;
	char	*num_str;
	int		num;

	// Prueba de ft_strlen
	str = "Hello, 42!";
	len = ft_strlen(str);
	printf("Length of '%s' is %zu\n", str, len);
	// Prueba de ft_strjoin
	s1 = "Hello";
	s2 = "World";
	joined_str = ft_strjoin(s1, s2);
	if (joined_str)
	{
		printf("Joined string: %s\n", joined_str);
		free(joined_str); // Recuerda liberar la memoria cuando usas malloc
	}
	// Prueba de ft_atoi
	num_str = "42";
	num = ft_atoi(num_str);
	printf("String '%s' converted to integer: %d\n", num_str, num);
	return (0);
}
