/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimitop <tsimitop@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:58:56 by tsimitop          #+#    #+#             */
/*   Updated: 2023/10/19 21:18:52 by tsimitop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_atoi(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// }
#include <stdio.h>

int	main(void)
{
	const char	*str = "onetwothrefour";

	
	printft("%s%d", atoi(&str), atoi(&str));
	return (0);
}