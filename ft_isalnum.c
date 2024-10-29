/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:16:39 by smomeu            #+#    #+#             */
/*   Updated: 2024/10/21 21:20:49 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d", ft_isalnum('1'));

	return (0);
}