/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_only_whitespaces.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:46:19 by ghambrec          #+#    #+#             */
/*   Updated: 2025/04/07 15:47:30 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_str_only_whitespaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(" \n\t\n\r", str[i]))
			return (0);
		i++;
	}
	return (1);
}
