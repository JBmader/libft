/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <jmader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:13:14 by jmader            #+#    #+#             */
/*   Updated: 2024/11/08 12:57:21 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	char			*str;

	i = 0;
	j = start;
	slen = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	if (start < slen)
	{
		while (j < start + len && s[j] != '\0')
		{
			str[i] = s[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
