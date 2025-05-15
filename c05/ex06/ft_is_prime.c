/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:00:52 by anakash           #+#    #+#             */
/*   Updated: 2025/05/01 11:00:53 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (nb > count)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(-26));
}
*/
