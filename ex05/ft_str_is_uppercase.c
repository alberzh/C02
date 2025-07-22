/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:16 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/22 17:02:43 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (!is_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* int main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "HELLOWORLD";
	char    str3[] = "hello world";

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
	return (0);
} */