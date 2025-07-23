/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:50:23 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/23 15:49:51 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/* int	main(void)
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