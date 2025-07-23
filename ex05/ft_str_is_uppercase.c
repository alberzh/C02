/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:16 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/23 18:08:57 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (!str)
		return (1);
	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/* int main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "HELLOWORLD";
	char    str3[] = "hello world";
	char	str4[] = "";

	if (ft_str_is_uppercase(str1))
		printf("'%s' is upper case.\n", str1);
	else
		printf("'%s' is not upper case.\n", str1);
	if (ft_str_is_uppercase(str2))
		printf("'%s' is upper case.\n", str2);
	else
		printf("'%s' is not upper case.\n", str2);
	if (ft_str_is_uppercase(str3))
		printf("'%s' is upper case.\n", str3);
	else
		printf("'%s' is not upper case.\n", str3);
	if (ft_str_is_uppercase(str4))
		printf("'%s' is upper case.\n", str4);
	else
		printf("'%s' is not upper case.\n", str4);
	return (0);
} */