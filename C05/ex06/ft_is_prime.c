/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:51:32 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/15 16:23:26 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{	
		if (i != nb && nb % i == 0)
			return (0);
		else
			i++;
	}
	if (nb <= 1)
		return (0);
	else
		return (1);
}
