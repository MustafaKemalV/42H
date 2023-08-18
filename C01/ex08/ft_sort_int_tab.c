/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  muvural < muvural@student.42heilbronn.de    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:54:52 by  muvural           #+#    #+#            */
/*   Updated: 2022/06/13 19:57:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_swap;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp_swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp_swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
