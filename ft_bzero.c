/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:02:12 by smomeu            #+#    #+#             */
/*   Updated: 2024/10/27 19:48:51 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		*t = (unsigned char)c;
		t++;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buffer[50];

	for (int i = 0; i < 10; i++)
		buffer[i] = 1;

	ft_bzero(buffer, 5);

	for (int i = 0; i < 10; i++)
		printf("%d ", buffer[i]);

	return (0);
}