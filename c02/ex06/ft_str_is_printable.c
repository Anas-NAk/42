/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:10:25 by anakash           #+#    #+#             */
/*   Updated: 2025/04/21 15:32:12 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= ' ' && str[counter] <= '~')))
			return (0);
		counter++;
	}
	return (1);
}

/*
int main()
{
	char string[] = "djfidi%#$# fg()+_)";
	printf("Does it only contain printable (%s)? Yes-> 1, No-> 0 : %d",
		 string,ft_str_is_printable(string));

}
*/
