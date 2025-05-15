/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:24:53 by anakash           #+#    #+#             */
/*   Updated: 2025/04/23 09:25:06 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char	*dest, char *src)
{
	char	*copy;

	copy = dest;
	while (*copy != '\0')
	{
		copy++;
	}
	while (*src)
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (dest);
}
/*
int main()
{
	char c[20] ="Anas", a[] = " Nakkash";
	printf("%s\n",ft_strcat(c,a));
	//printf("%s\n",strcat(c,a));
}
*/
