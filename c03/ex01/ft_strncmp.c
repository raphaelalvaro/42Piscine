/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:18:29 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/27 10:44:57 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
				i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	word[] = "compare unsigned int";
	char	word2[] = "compa";
	int	n;

	n = 6;
	printf ("%d\n", ft_strncmp(word, word2, n));
	printf ("%d\n", strncmp(word, word2, n));
	return (0);
}*/
