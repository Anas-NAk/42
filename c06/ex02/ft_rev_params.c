/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:25:25 by anakash           #+#    #+#             */
/*   Updated: 2025/05/05 14:25:27 by anakash          ###   ########.fr       */
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

	count = argc;
	while (1 < count)
	{
		write(1, argv[count - 1], ft_strlen(argv[count - 1]));
		write(1, "\n", 1);
		count--;
	}
}
