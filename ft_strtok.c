/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:22:28 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/29 07:43:16 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtok(char *str, char token)
{
	static char *stock;
	char		*ptr;
	int			i;

	i = 0;
	stock = NULL;
	ptr = NULL;
	if (str != NULL)
		stock = ft_strdup(str);
	while (*stock != '\0')
	{
		if (i == 0 && *stock != token)
		{
			i = 1;
			ptr = stock;
		}
		else if (i == 1 && *stock == token)
		{
			*stock = '\0';
			stock += 1;
			break ;
		}
		stock++;
	}
	return (ptr);
}
