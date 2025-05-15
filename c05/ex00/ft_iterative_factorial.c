/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:22:57 by anakash           #+#    #+#             */
/*   Updated: 2025/04/30 16:23:13 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	count;

	count = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (nb >= count)
	{
		fact *= count;
		count++;
	}
	return (fact);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(50));
}
*/
