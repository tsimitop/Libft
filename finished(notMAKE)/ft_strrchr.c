/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimitop <tsimitop@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:22:21 by tsimitop          #+#    #+#             */
/*   Updated: 2023/10/18 17:43:40 by tsimitop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occurence;

	i = 0;
	last_occurence = -1; //not found yet
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last_occurence = i;
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	else if (last_occurence >= 0)
	{
		return ((char *)&s[last_occurence]);
	}
	return (NULL);
}
