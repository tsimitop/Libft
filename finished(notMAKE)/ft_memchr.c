/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimitop <tsimitop@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:44:54 by tsimitop          #+#    #+#             */
/*   Updated: 2023/10/18 19:37:32 by tsimitop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	// if (!s)
	// 	return (NULL);
	str = (unsigned char *)s;
	// if (!str)
	// 	return (NULL);
	while (n-- > 0) //str[i] != '\0' && 
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	// if (str[i] == '\0')
	// 	return (&str[i]);
	return (NULL);
}

// if (str[i] == '\0')
// {
// 	return (NULL); //CHECK HOW TO RETURN NULL
// }
// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*uc;

// 	i = 0;
// 	uc = s;
// 	while (uc[i] != '\0')
// 	{
// 		if (uc[i] == c)
// 		{
// 			return (uc);
// 		}
// 		i++;
// 	}
// 	if (uc[i] == '\0')
// 	{
// 		return (NULL); //CHECK HOW TO RETURN NULL
// 	}
// }

// int main(void)
// {
// 	char str[50] = "'Let's talk about the weather'";
// 	memchr(str, 't', 8);
// 	printf("After memset: %s\n", str);
// 	return (0);
// }
