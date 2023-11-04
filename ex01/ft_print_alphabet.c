/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:36:06 by alejango          #+#    #+#             */
/*   Updated: 2023/08/10 17:45:03 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	my_character;

	my_character = 'a';
	while (my_character <= 122)
	{
		write(1, &my_character, 1);
		my_character += 1;
	}
}
