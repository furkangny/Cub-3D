/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:18:35 by fgunay            #+#    #+#             */
/*   Updated: 2024/05/15 18:18:36 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_spaceskip(char *line, int *i)
{
	while (line[*i] == ' ' || line[*i] == '\t' || line[*i] == '\n')
		(*i)++;
	return (1);
}

int	ft_atoi2(char *line, int *i)
{
	int	num;

	num = 0;
	ft_spaceskip(line, i);
	while (line[*i] >= '0' && line[*i] <= '9')
	{
		num = num * 10 + (line[*i] - 48);
		(*i)++;
	}
	return (num);
}

int	ft_strerror2(int err)
{
	if (err == -11)
		printf("Error : Malloc fail (map table)\n");
	else if (err == -12)
		printf("Error : Invalid map\n");
	else if (err == -13)
		printf("Error : Map isn't a rectangle\n");
	else if (err == -14)
		printf("Error : No resolution specified\n");
	else if (err == -15)
		printf("Error : Missing texture\n");
	else if (err == -16)
		printf("Error : Missing floor/ceiling color\n");
	else if (err == -17)
		printf("Error : No starting position\n");
	else if (err == -18)
		printf("Error : Multiple starting positions\n");
	else if (err == -19)
		printf("Error : Map isn't surrounded by walls\n");
	else if (err == -20)
		printf("Error: Multiple input!\n");
	else if (err == -21)
		printf("Error: Map error!\n");
	return (-1);
}

int	ft_strerror(int err)
{
	if (err == -1)
		printf("Error : Couldn't open file (FD)\n");
	else if (err == -2)
		printf("Error : Couldn't parse file (GNL)\n");
	else if (err == -3)
		printf("Error : Resolution specified twice\n");
	else if (err == -4)
		printf("Error : Invalid resolution\n");
	else if (err == -5)
		printf("Error : Floor/ceiling specified twice\n");
	else if (err == -6)
		printf("Error : Invalid floor/ceiling line\n");
	else if (err == -7)
		printf("Error : Texture path specified twice\n");
	else if (err == -8)
		printf("Error : Malloc fail (texture path)\n");
	else if (err == -9)
		printf("Error : Invalid texture image\n");
	else if (err == -10)
		printf("Error : Invalid line in file\n");
	else
		exit (ft_strerror2(err));
	exit (err);
}
