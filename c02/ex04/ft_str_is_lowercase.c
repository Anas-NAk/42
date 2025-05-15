/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:54:05 by anakash           #+#    #+#             */
/*   Updated: 2025/04/21 15:03:16 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'a' && str[counter] <= 'z')))
			return (0);
		counter++;
	}
	return (1);
}
/*
int main()
{
	char string[] = "djfAnbjvbjdf";
	printf("Does it only contain lower letters (%s)? Yes-> 1, No-> 0 : %d",
		 string,ft_str_is_lowercase(string));

}
*/
