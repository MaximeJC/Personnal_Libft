/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 07:46:42 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:34:18 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getnbrlen(int n);
static void	ft_revstr(char *tab, int size);
static void	ft_inttostr(int n, int nbr_len, int sign, char *nbr);

char	*ft_itoa(int n)
{
	char	*nbr;
	int		nbr_len;
	int		sign;

	sign = 0;
	nbr_len = ft_getnbrlen(n);
	nbr = ft_calloc(nbr_len + 1, sizeof(char));
	if (nbr == NULL)
		return (NULL);
	if (n == INT_MIN)
	{
		(void)ft_strlcpy(nbr, "-2147483648", 13);
		return (nbr);
	}
	ft_inttostr(n, nbr_len, sign, nbr);
	return (nbr);
}

static void	ft_inttostr(int n, int nbr_len, int sign, char *nbr)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	while (i < nbr_len - sign)
	{
		nbr[i] = ((n % 10) + '0');
		n /= 10;
		i++;
	}
	if (sign == 1)
		nbr[i] = '-';
	ft_revstr(nbr, nbr_len);
	nbr[nbr_len] = '\0';
}

static int	ft_getnbrlen(int n)
{
	int	len;
	int	multiply;

	multiply = 1;
	len = 1;
	if (n >= 1000000000 || n <= -1000000000)
		len = 10;
	else
	{
		while ((n / (10 * multiply)) != 0)
		{
			len++;
			multiply *= 10;
		}
	}
	if (n < 0)
		len++;
	return (len);
}

static void	ft_revstr(char *tab, int size)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
