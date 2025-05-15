/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:34:58 by anakash           #+#    #+#             */
/*   Updated: 2025/05/01 10:35:00 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	while (nb >= count)
	{
		if ((count * count) == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(81));
}
*/
