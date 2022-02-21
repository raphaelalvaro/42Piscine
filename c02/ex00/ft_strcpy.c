/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:31:03 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/26 15:29:01 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char	*dest,	char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "";

	printf("%lu\n", strlen(dest));
	ft_strcpy(dest, "String!");	
	printf("%s", dest);
}*/
