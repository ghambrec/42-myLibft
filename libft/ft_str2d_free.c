/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:41:51 by ghambrec          #+#    #+#             */
/*   Updated: 2025/08/27 16:45:19 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_str2d_free(char **str2d)
{
	int	pos;

	if (!str2d)
		return ;
	pos = 0;
	while (str2d[pos])
	{
		free(str2d[pos]);
		str2d[pos] = NULL;
		pos++;
	}
	free(str2d);
}
