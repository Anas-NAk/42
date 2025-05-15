/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:37:33 by anakash           #+#    #+#             */
/*   Updated: 2025/04/28 08:41:54 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
void	rec(int x)
{
	char digit;
	
	if(x >= 10)
	{
		rec(x/10);
	}
	digit = (x%10) + '0';
	write(1, &digit,1);
}

int	main()
{
	int x=ft_strlen("3ewfwregergere2fgergerfggrege");
	
	if(x >= 10)
		rec(x);
	else
	{	
	char d = x + '0';
	write(1, &d,1);
	}	
}
*/
