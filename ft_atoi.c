/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smomeu <smoemu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:55:11 by smomeu            #+#    #+#             */
/*   Updated: 2024/09/16 15:04:12 by smomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	toi;

	i = 0;
	neg = 1;
	toi = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		toi = toi * 10 + str[i] - '0';
		i++;
	}
	toi *= neg;
	return (toi);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = " ---+--+1234ab567";

// 	printf("%d", ft_atoi(str));
// 	return (0);
// }
