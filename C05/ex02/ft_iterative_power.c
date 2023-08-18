/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  muvural < muvural@student.42heilbronn.de    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:52:03 by  muvural           #+#    #+#            */
/*   Updated: 2022/06/22 13:45:37 by muvural            ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power--)
		result *= nb;
	return (result);
}
