/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:45:57 by mgouraud          #+#    #+#             */
/*   Updated: 2024/11/04 21:21:06 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	else
		return (ft_pow(nb, power - 1) * nb);
}
