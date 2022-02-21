/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:05:38 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/27 10:43:29 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
			n++;
	while (src[i] != '\0')
	{
			dest[n] = src[i];
			i++;
			n++;
	}
	dest[n] = '\0';
	return (dest);
}

int	main(void)
{
	char	word1[12] = "start";
	char	word2[] = "end";

	printf("%s", ft_strcat(word1, word2));
	return (0);
}
