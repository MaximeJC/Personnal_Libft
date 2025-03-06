/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_codes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:04:14 by mgouraud          #+#    #+#             */
/*   Updated: 2025/03/06 14:16:25 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_color_codes(void)
{
	ft_putendl_fd("\033[0;30mBlack  \\033[0;30m", 1);
	ft_putendl_fd("\033[0;31mRed    \\033[0;31m", 1);
	ft_putendl_fd("\033[0;32mGreen  \\033[0;32m", 1);
	ft_putendl_fd("\033[0;33mYellow \\033[0;33m", 1);
	ft_putendl_fd("\033[0;34mBlue   \\033[0;34m", 1);
	ft_putendl_fd("\033[0;35mPurple \\033[0;35m", 1);
	ft_putendl_fd("\033[0;36mCyan   \\033[0;36m", 1);
	ft_putendl_fd("\033[0;37mWhite  \\033[0;37m", 1);
	ft_putendl_fd("\033[0;0mReset  \\033[0;0m", 1);
}
