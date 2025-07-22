/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:01:38 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/22 16:27:24 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_num(char n)
{
	return (n >= '0' && n <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (!is_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* 
int	main(void)
{
	char	str1[] = "1234567890";
	char	str2[] = "Hi!!1234";

	if (ft_str_is_numeric(str1))
		printf("'%s' is numeric.\n", str1);
	else
		printf("'%s' is not numeric.\n", str1);
	if (ft_str_is_numeric(str2))
		printf("'%s' is numeric.\n", str2);
	else
		printf("'%s' is not numeric.\n", str2);
	return (0);
}
 */