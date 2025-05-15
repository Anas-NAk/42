/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 09:49:19 by anakash           #+#    #+#             */
/*   Updated: 2025/05/02 09:49:21 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count_str;

	count_str = 0;
	while (str[count_str] != '\0')
		count_str++;
	return (count_str);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	while (argc > count)
	{
		write(1, argv[count], ft_strlen(argv[count]));
		write(1, "\n", 1);
		count++;
	}
}
