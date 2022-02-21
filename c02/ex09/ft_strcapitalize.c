/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:12:20 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/26 15:29:40 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
		{
				str[0] -= 32;
		}
		if (str[i] == (' ') && (str [i + 1] <= 'z' && str [i + 1] >= 'a'))
		{
				str[i + 1] -= 32;
		}
		if (str[i] == ('-') && (str[i + 1] <= 'z' && str[i + 1] >= 'a'))
		{
				str[i + 1] -= 32;
		}
		if (str[i] == ('+') && (str[i + 1] <= 'z' && str[i + 1] >= 'a'))
		{
				str [i + 1] -= 32;
		}
	i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ca+pi-tal ize first letter of each word";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
