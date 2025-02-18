/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquitian <fquitian@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:54:39 by fquitian          #+#    #+#             */
/*   Updated: 2025/02/17 13:32:33 by fquitian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* void	to_uppercase(unsigned int i, char *c)
{
	(void)i; //
	if (islower(*c))
		*c = toupper(*c);
}
void	add_index(unsigned int i, char *c)
{
	*c = *c + i;
}
int	main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "abcdefg";
	// Teste 1: Converte para maiúsculas
	ft_striteri(str1, to_uppercase);
	printf("String após ft_striteri (to_uppercase): \"%s\"\n", str1);
	// Teste 2: Adiciona o índice ao valor de cada caractere
	ft_striteri(str2, add_index);
	printf("String após ft_striteri (add_index): \"%s\"\n", str2);
	return (0);
}*/
