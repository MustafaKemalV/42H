/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  muvural < muvural@student.42heilbronn.de    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:57:31 by  muvural           #+#    #+#            */
/*   Updated: 2022/06/19 17:00:03 by  muvural          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
