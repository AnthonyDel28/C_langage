/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthonyd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 09:35:19 by anthonyd          #+#    #+#             */
/*   Updated: 2019/07/08 09:29:31 by anthonyd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int i;

	if (nb < 3 || !(nb % 2))
		return (nb == 2);
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}
