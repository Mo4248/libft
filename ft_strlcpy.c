/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:56:11 by smomeu            #+#    #+#             */
/*   Updated: 2024/11/01 19:35:37 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char			src[] = "12345678";
	char			dest[100];
	size_t			size;
	unsigned int	x;

	size = sizeof(src) / sizeof(src[0]);
	size = 3;
	x = ft_strlcpy(dest, src, size);
	printf("src:\t%s\n", src);
	printf("dst:\t%s\n", dest);
	printf("size:\t%zu\n", size);
	printf("return:\t%d", x);
	return (0);
}
