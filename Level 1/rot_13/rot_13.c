/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:34:16 by tojoniaina        #+#    #+#             */
/*   Updated: 2024/06/28 21:28:04 by torandri         ###   ########.fr       */
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
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
