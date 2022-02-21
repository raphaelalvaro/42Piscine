/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:47:32 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/27 10:44:50 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	word1 [] = "comparing strings";
	char	word2 [] = "mpa";

	printf("%d\n", strcmp(word1, word2));
	return (0);
}*/
