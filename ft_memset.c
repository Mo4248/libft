/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:46:54 by smomeu            #+#    #+#             */
/*   Updated: 2024/10/27 19:52:28 by smomeu           ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buffer[50];

	for (int i = 0; i < 10; i++)
		buffer[i] = 1;

	ft_memset(buffer, 2, 5);

	for (int i = 0; i < 10; i++)
		printf("%d ", buffer[i]);

	return (0);
}