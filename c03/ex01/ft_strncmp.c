/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:15:46 by anakash           #+#    #+#             */
/*   Updated: 2025/04/26 15:01:58 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	int				check;
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while (n - 1 > count && s1[count] != '\0' && s1[count] == s2[count])
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
/*
int main()
{
	printf("%d \n",ft_strncmp("aaaaa","aaA", 999999999));
	printf("%d",strncmp("aaaa","aaA", 99999999));
}
*/
