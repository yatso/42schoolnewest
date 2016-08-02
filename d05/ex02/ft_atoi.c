/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 20:52:59 by yso               #+#    #+#             */
/*   Updated: 2016/07/19 22:51:45 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(char c)
{
	if ((c >= 48) && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	nbr;
	int i;
	int neg;

	nbr = 0;
	i = 0;
	neg = 1;
	while ((str[i] < 33) || (str[i] == '\n') || (str[i] == ' '))
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (ft_isnum(str[i]) == 1)
	{
		nbr *= 10;
		nbr += (str[i] - 48) * neg;
		i++;
	}
	return (nbr);
}