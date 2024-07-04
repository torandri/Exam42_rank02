/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:16:03 by torandri          #+#    #+#             */
/*   Updated: 2024/06/28 22:39:58 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
			i++;
		while (i-- > 0)
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
