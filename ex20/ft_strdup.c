/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:47:42 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/16 13:48:22 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	char	*str;

	str = s;
	while (*str)
		++str;
	return (str - s);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;
	size_t	len;

	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	return (ft_strcpy(str, src));
}
