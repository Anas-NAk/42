/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:35:30 by anakash           #+#    #+#             */
/*   Updated: 2025/04/23 11:36:44 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*copy_str;
	char	*copy_find;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		copy_find = to_find;
		copy_str = str;
		while (*copy_str != '\0' && *copy_find != '\0'
			&& *copy_str == *copy_find)
		{
			copy_str++;
			copy_find++;
		}
		if (*copy_find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "anas Waanaj";
	char	fun[] = "anaj";

	printf("this word (%s) exist in :%s\n",fun ,ft_strstr(str, fun));
	printf("this word (%s) exist in :%s",fun ,strstr(str, fun));
}
*/
