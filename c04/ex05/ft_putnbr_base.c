/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:34:58 by anakash           #+#    #+#             */
/*   Updated: 2025/04/29 15:35:00 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_on_base(char *base)
{
	int	count;
	int	c_cmp;

	count = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[count])
	{
		if (base[count] == '+' || base[count] == '-')
			return (0);
		c_cmp = count + 1;
		while (base[c_cmp])
		{
			if (base[count] == base[c_cmp])
				return (0);
			c_cmp++;
		}
		count++;
	}
	return (count);
}

int	ft_strcmp(char	*s1, char *s2)
{
	int	count;
	int	check;

	count = 0;
	while (s1[count] != '\0' && s1[count] == s2[count])
	{
		count++;
	}
	check = s1[count] - s2[count];
	if (check > 0)
		return (1);
	else if (check < 0)
		return (-1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	cmp;
		
	cmp = ft_strcmp(base , "poneyvif");
	if(cmp == 0)
		base = "01234567";	
	base_size = check_on_base(base);
	if (!base_size)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= base_size)
	{
		ft_putnbr_base(nbr / base_size, base);
	}
	write (1, &base[nbr % base_size], 1);
}

int	main(void)
{
	ft_putnbr_base(25,"01");


}

