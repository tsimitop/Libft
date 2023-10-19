/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimitop <tsimitop@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:03:29 by tsimitop          #+#    #+#             */
/*   Updated: 2023/10/18 19:44:45 by tsimitop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n-- > 0)
	{
		str1 = *(unsigned char*)s1++;//error: operand of type 'const void'
									// where arithmetic or pointer type
									//is required str2 = (unsigned char)*s2++;
		str2 = *(unsigned char*)s2++;
		if (str1 != str2)
			return (str1 - str2);
	}
	return (0);
}
/*
Removed the check for '\0' in the loop because you don't need to stop at
'\0' when comparing memory blocks. Memory comparison functions like memcmp
are supposed to compare raw memory, not C-style strings. If you want to
compare C-style strings, use strcmp or a similar function.

if (str1 == '\0' && str2 == '\0') //forces it to stop at '\0' else it doesn't stop
from strcmp
{
	return (0);
}
*/
