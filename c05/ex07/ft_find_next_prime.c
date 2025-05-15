/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:23:29 by anakash           #+#    #+#             */
/*   Updated: 2025/05/01 11:23:31 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (nb > count)
	{
		if (nb % count == 0)
		{
			nb++;
			count = 2;
		}
		count++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(111));
}
*/
