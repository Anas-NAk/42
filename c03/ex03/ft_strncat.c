/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:02:09 by anakash           #+#    #+#             */
/*   Updated: 2025/04/23 10:02:22 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*copy;

	copy = dest;
	while (*copy != '\0')
	{
		copy++;
	}
	while (*src && nb > 0)
	{
		*copy++ = *src++;
		nb--;
	}
	*copy = '\0';
	return (dest);
}
/*
int main()
{
	char c[] ="Anas", cc[] = " Nakkas";
	printf("This cmpirsion bwteen two varible: %s",ft_strncat(c,cc,3));
}
*/
