/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:29:44 by anakash           #+#    #+#             */
/*   Updated: 2025/05/05 15:29:47 by anakash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort(char **str, int count);
int		ft_strlen(char *str);
int		ft_strcmp(char	*s1, char *s2);

int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	sort(argv + 1, argc - 1);
	while (argc > count)
	{
		write(1, argv[count], ft_strlen(argv[count]));
		write(1, "\n", 1);
		count++;
	}
}

void	sort(char **str, int count)
{
	int		count_external;
	int		count_internal;
	char	*save_str;

	count_external = 0;
	while (count_external < count -1)
	{
		count_internal = 0;
		while (count_internal < count - count_external - 1)
		{
			if (ft_strcmp(str[count_internal], str[count_internal + 1]) > 0)
			{
				save_str = str[count_internal];
				str[count_internal] = str[count_internal + 1];
				str[count_internal + 1] = save_str;
			}
			count_internal++;
		}
		count_external++;
	}
}

int	ft_strlen(char *str)
{
	int	count_str;

	count_str = 0;
	while (str[count_str] != '\0')
		count_str++;
	return (count_str);
}

int	ft_strcmp(char	*s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s1[count] == s2[count])
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
