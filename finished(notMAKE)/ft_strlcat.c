/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimitop <tsimitop@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:24 by tsimitop          #+#    #+#             */
/*   Updated: 2023/10/16 17:48:31 by tsimitop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlen(const char *str);
//if dest is 0 line 29

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = 0;
	if (!dst)
		return (0);
	if (!src)
		return (dstlen);
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srclen + dstlen);
}

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int main()
// {
// 	char	dest[30];
// 	memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	size_t x = ft_strlcat(dest, src, 6);
// 	// size_t x = strlcat(dest, src, 6);
// 	printf("%s\n%lu", dest, x);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	srclen;
// 	size_t	dstlen;

// 	srclen = ft_strlen(src);
// 	dstlen = ft_strlen(dst);
// 	i = 0;
// 	j = 0;
// 	if (!dst)//if dest is 0
// 		return (srclen + dstsize);
// 	if (dstlen >= dstsize)
// 		return (srclen + dstsize);
// 	while (dst[i] != '\0')
// 		i++;
// 	while (src[j] != '\0' && (i + 1) < dstsize)
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (srclen + dstlen);
// }
