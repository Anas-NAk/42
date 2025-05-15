/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:21:30 by anakash           #+#    #+#             */
/*   Updated: 2025/04/21 17:31:45 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z'))
			str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);
}
/*
int main()
{
	char string[] = "ANaS NakD54&A*kasH";
	printf("This string before confert : (%s)\n", string);
	printf("This string after confert : (%s)",ft_strupcase(string));

}
*/
