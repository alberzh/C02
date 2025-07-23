/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:10:26 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/23 18:16:45 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (!str)
		return (1);
	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/* int main(void)
{
	char	str1[] = "Hello\7World";
	char	str2[] = "HELLO\x01WORLD";
	char    str3[] = "hello world";
	char	str4[] = "";

	if (ft_str_is_printable(str1))
		printf("'%s' is printable.\n", str1);
	else
		printf("Some character is not printable.\n");
	if (ft_str_is_printable(str2))
		printf("'%s' is printable.\n", str2);
	else
		printf("Some character is not printable.\n");
	if (ft_str_is_printable(str3))
		printf("'%s' is printable.\n", str3);
	else
		printf("Some character is not printable.\n");
	if (ft_str_is_printable(str4))
		printf("'%s' is printable.\n", str4);
	else
		printf("Some character is not printable.\n");
	return (0);
} */