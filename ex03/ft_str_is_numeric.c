/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:01:38 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/23 17:52:12 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (!str)
		return (1);
	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str1[] = "1234567890";
	char	str2[] = "Hi!!1234";
	char	str3[] = "";

	if (ft_str_is_numeric(str1))
		printf("'%s' is numeric.\n", str1);
	else
		printf("'%s' is not numeric.\n", str1);
	if (ft_str_is_numeric(str2))
		printf("'%s' is numeric.\n", str2);
	else
		printf("'%s' is not numeric.\n", str2);
	if (ft_str_is_numeric(str3))
		printf("'%s' is numeric.\n", str3);
	else
		printf("'%s' is not numeric.\n", str3);
	return (0);
}