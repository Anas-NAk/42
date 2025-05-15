/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:41:18 by anakash           #+#    #+#             */
/*   Updated: 2025/04/22 10:36:52 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			capitalize_next = 0;
		}
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
    char test[]="&$*(hi, how are you? 42wODs forTy-two; fiFty+and+one";
    
	printf("This is string: %s",ft_strcapitalize(test));
	return (0);
}
*/
