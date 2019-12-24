/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2aff_last_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vehernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:59:01 by vehernan          #+#    #+#             */
/*   Updated: 2019/12/09 13:59:11 by vehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int				main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
	}
	return (0);
}
