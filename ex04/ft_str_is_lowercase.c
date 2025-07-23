/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:28:42 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/22 17:03:05 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (!is_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* int main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "helloworld";
	char    str3[] = "hello world";

	if (ft_str_is_lowercase(str1))
		printf("'%s' is lower case.\n", str1);
	else
		printf("'%s' is not lower case.\n", str1);
	if (ft_str_is_lowercase(str2))
		printf("'%s' is lower case.\n", str2);
	else
		printf("'%s' is not lower case.\n", str2);
	if (ft_str_is_lowercase(str3))
		printf("'%s' is lower case.\n", str3);
	else
		printf("'%s' is not lower case.\n", str3);
	return (0);
} */