/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:36:36 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/27 10:44:23 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
			n++;
	while (src[i] != '\0' && i < nb)
	{
			dest[n] = src[i];
			i++;
			n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char word1[12] = "start";
	char word2[] = "end";
	int	n;

	n = 6;
	printf ("%s", ft_strncat(word1, word2, n));
	return (0);
}*/
