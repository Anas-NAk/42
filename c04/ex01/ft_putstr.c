/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:43:42 by anakash           #+#    #+#             */
/*   Updated: 2025/04/28 16:43:45 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count_str;

	count_str = 0;
	while (str[count_str] != '\0')
		count_str++;
	write(1, str, count_str);
}
/*
int main()
{
	ft_putstr("Anas Nakash");
}
*/
