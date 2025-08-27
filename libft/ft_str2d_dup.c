/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:47:52 by ghambrec          #+#    #+#             */
/*   Updated: 2025/08/27 16:41:33 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	**ft_str2d_dup(char **arr)
{
	int		i;
	char	**copy;

	i = 0;
	while (arr[i])
		i++;
	copy = (char **)malloc((i + 1) * sizeof(*copy));
	if (!copy)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		copy[i] = ft_strdup(arr[i]);
		if (!copy[i])
		{
			while (--i >= 0)
				free(copy[i]);
			free(copy);
			return (NULL);
		}
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
