/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:44:14 by ngordobi          #+#    #+#             */
/*   Updated: 2025/05/01 11:30:18 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	free_matrix(char **matrix)
{
	int	i;

	if (!matrix)
		return (-1);
	i = -1;
	while (matrix[++i] != NULL)
	{
		if (matrix[i])
			free(matrix[i]);
		matrix[i] = NULL;
	}
	free(matrix);
	matrix = NULL;
	return (0);
}
