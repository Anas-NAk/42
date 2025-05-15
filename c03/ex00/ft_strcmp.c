/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:09:56 by anakash           #+#    #+#             */
/*   Updated: 2025/04/22 11:29:41 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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
/*
int main()
{
	printf("This cmpirsion bwteen two varible: %d\n",ft_strcmp("a","A"));
	printf("This cmpirsion bwteen two varible: %d",strcmp("a","A"));
}
*/
