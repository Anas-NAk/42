/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:04:06 by anakash           #+#    #+#             */
/*   Updated: 2025/04/21 15:09:27 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'A' && str[counter] <= 'Z')))
			return (0);
		counter++;
	}
	return (1);
}
/*
int main()
{
	char string[] = "";
	printf("Does it only Upper letters (%s)? Yes-> 1, No-> 0 : %d",
		 string,ft_str_is_uppercase(string));

}
*/
