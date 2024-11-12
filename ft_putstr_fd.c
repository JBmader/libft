/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmader <jmader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:09:22 by jmader            #+#    #+#             */
/*   Updated: 2024/11/12 18:25:46 by jmader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	int		i;

	if (fd < 0 || !s)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
