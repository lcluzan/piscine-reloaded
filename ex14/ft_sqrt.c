/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <lcluzan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:32:32 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/06 11:32:49 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_sqrt(int nb)
{
    int    index;

    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    index = 2;
    while (index * index <= nb && index <= 46340)
    {
        if (index * index == nb)
            return (index);
        index++;
    }
    return (0);
}
