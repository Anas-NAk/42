/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:21:31 by anakash           #+#    #+#             */
/*   Updated: 2025/04/21 14:30:06 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'a' && str[counter] <= 'z')
				|| (str[counter] >= 'A' && str[counter] <= 'Z')))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/*
int main()
{
	char string[] = "Anas Nakkash";
	printf("Does it only contain letters (%s)? Yes-> 1, No-> 0 : %d",
		 string,ft_str_is_alpha(string));

}*/
