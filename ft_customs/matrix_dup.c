/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:44:14 by ngordobi          #+#    #+#             */
/*   Updated: 2025/05/05 11:48:00 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**matrix_dup(char **matrix)
{
	char	**dup;
	int		size;
	int		i;
	int		j;

	if (!matrix)
		return (NULL);
	size = matrix_size(matrix);
	dup = malloc((size + 1) * sizeof(char *));
	if (!dup)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		dup[i] = ft_strdup(matrix[i]);
		if (!dup[i])
			return (free_matrix(dup), NULL);
	}
	dup[i] = NULL;
	return (dup);
}
