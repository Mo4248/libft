/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42toiyo.srclenp>         +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:31:14 by smomeu            #+#    #+#             */
/*   Updated: 2024/10/29 22:59:04 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (size <= dstlen)
		return (size + srclen);
	while (i < (size - dstlen - 1))
	{
		if (src[i] == '\0')
			break ;
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (srclen + dstlen);
}
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello";
	char	src[100] = "World";

	printf("%zu\n", ft_strlcat(dest, src, 20));
	printf("%s", dest);
	return (0);
}
