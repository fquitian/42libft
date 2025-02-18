/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquitian <fquitian@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:55:39 by fquitian          #+#    #+#             */
/*   Updated: 2025/02/17 13:32:33 by fquitian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*char	to_uppercase(unsigned int i, char c)
{
	(void)i;
	if (islower(c))
		return (toupper(c));
	return (c);
}
char	add_index(unsigned int i, char c)
{
	return (c + i);
}
int	main(void)
{
	char	*str = "hello world";
	char	*result;
	// Test 1: Convert to uppercase
	result = ft_strmapi(str, to_uppercase);
	if (result)
	{
		printf("Original string: \"%s\"\n", str);
		printf("Uppercase string: \"%s\"\n", result);
		free(result);
	}
	// Test 2: Add index to each character
	result = ft_strmapi(str, add_index);
	if (result)
	{
		printf("\nOriginal string: \"%s\"\n", str);
		printf("Modified string (add index): \"%s\"\n", result);
		free(result);
	}
	return (0);
}*/
