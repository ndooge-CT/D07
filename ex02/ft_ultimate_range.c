/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:40:39 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/16 16:16:10 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = max - min;
	if (min >= max)
		return 0;
	*range = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (min < max) 
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return size;	
}

