/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimitop <tsimitop@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:44:29 by tsimitop          #+#    #+#             */
/*   Updated: 2023/10/18 18:28:03 by tsimitop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n-- > 0)
	{
		str1 = (unsigned char)*s1++;//it is needed within, can't declare and just call, it's not a fuunction...
		str2 = (unsigned char)*s2++;
		if (str1 != str2)
		{
			return (str1 - str2);
		}
		if (str1 == '\0') //forces it to stop at '\0' else it doesn't stop
		{
			return (0);
		}
	}
	return (0);
}
