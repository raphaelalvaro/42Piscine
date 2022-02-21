/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:31:30 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/26 15:29:08 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h.>
#include <string.h>
int	main(void)
{
	char	a[]  = "Destination";
	char	b[]  = "Source";
	unsigned int	n;

	n = 7;
	printf("%s \n", a);
	ft_strncpy(a, b, n);
	printf("String is now: %s", a);
	return (0);
}*/
