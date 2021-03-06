/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:27:00 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/18 17:00:26 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int m;

	m = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 1 || nb <= 0)
		return (0);
	while (m <= nb / 3)
	{
		if (nb % m == 0)
			return (0);
		m = m + 2;
	}
	return (1);
}
