/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:48:41 by smomeu            #+#    #+#             */
/*   Updated: 2024/10/30 01:27:41 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == c)
		return (i);
}

int	main(void)
{
	const char *s;
	int c;

	printf("%s", strchr(s, c));
}