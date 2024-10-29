/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:31:14 by smomeu            #+#    #+#             */
/*   Updated: 2024/09/13 20:36:05 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		return (size + j);
	l = size - i - 1;
	while (k < l)
	{
		if (src[k] == '\0')
			break ;
		dest[i + k] = src[k];
		k++;
	}
	dest[k + i] = '\0';
	return (j + i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20] = "Hello";
// 	char	src[100] = "World";

// 	printf("%d\n", ft_strlcat(dest, src, 20));
// 	printf("%s", dest);
// 	return (0);
// }
