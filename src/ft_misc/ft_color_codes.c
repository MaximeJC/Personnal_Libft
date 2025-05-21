#include "libft.h"

void	ft_color_codes(void)
{
	ft_putendl_fd("\033[0;30mBlack				\\033[0;30m", 1);
	ft_putendl_fd("\033[0;31mRed				\\033[0;31m", 1);
	ft_putendl_fd("\033[0;32mGreen				\\033[0;32m", 1);
	ft_putendl_fd("\033[0;33mYellow				\\033[0;33m", 1);
	ft_putendl_fd("\033[0;34mBlue				\\033[0;34m", 1);
	ft_putendl_fd("\033[0;35mPurple				\\033[0;35m", 1);
	ft_putendl_fd("\033[0;36mCyan				\\033[0;36m", 1);
	ft_putendl_fd("\033[0;37mWhite				\\033[0;37m", 1);
	ft_putendl_fd("\033[1;37mBold White			\\033[1;37m\033[0;0m", 1);
	ft_putendl_fd("\033[1;31mBold Red			\\033[1;31m\033[0;0m", 1);
	ft_putendl_fd("\033[3;37mItalic White			\\033[3;37m\033[0;0m", 1);
	ft_putendl_fd("\033[4;37mUnderline White 		\\033[2;37m\033[0;0m", 1);
	ft_putendl_fd("\033[9;37mStrike White			\\033[9;37m\033[0;0m", 1);
	ft_putendl_fd("\033[37;46mWhite on Cyan			\\033[37;46m\033[0;0m", 1);
	ft_putendl_fd("\033[1;31;46mBold Italic Red on White	\
\\033[1;31;46m\033[0;0m", 1);
	ft_putendl_fd("\033[0;0mReset				\\033[0;0m", 1);
}
