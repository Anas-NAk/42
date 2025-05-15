/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:40:18 by anakash           #+#    #+#             */
/*   Updated: 2025/04/22 08:48:05 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a' && str[counter] <= 'z'))
			str[counter] = str[counter] - 32;
		counter++;
	}
	return (str);
}
/*
int main()
{
	char string[] = "Anas NaKKash";
	printf("This string before confert : (%s)\n", string);
	printf("This string after confert : (%s)",ft_strupcase(string));

}
*/
