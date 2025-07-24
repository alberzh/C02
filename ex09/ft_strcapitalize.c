/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:16:47 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/24 12:38:56 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_first;

	if (!str)
		return (str);
	i = 0;
	capitalize_first = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capitalize_first)
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !capitalize_first)
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			capitalize_first = 0;
		else
			capitalize_first = 1;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str1[] = "hoLa mUndo! @# ( ) / qué haceMos poR aQuí?";
	char	str2[] = "42 is the answer. hello world!";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	printf("'%s'\n", str1);
	printf("'%s'\n", str2);
	return (0);
} */
