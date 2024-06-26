/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:43:42 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/17 16:04:40 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))

{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (tab[i][0] != '0')
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
