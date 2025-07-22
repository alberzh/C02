/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:50:23 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/22 12:25:34 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (!is_char(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "Hi!!1234";

	if (ft_str_is_alpha(str1))
		printf("'%s' is alphabetic.\n", str1);
	else
		printf("'%s' is not alphabetic.\n", str1);
	if (ft_str_is_alpha(str2))
		printf("'%s' is alphabetic.\n", str2);
	else
		printf("'%s' is not alphabetic.\n", str2);
	return (0);
}
*/