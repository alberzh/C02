/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:28:42 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/24 14:00:52 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/* int main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "helloworld";
	char    str3[] = "hello world";
	char	str4[] = "";

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
	if (ft_str_is_lowercase(str4))
		printf("'%s' is lower case.\n", str4);
	else
		printf("'%s' is not lower case.\n", str4);
	return (0);
} */