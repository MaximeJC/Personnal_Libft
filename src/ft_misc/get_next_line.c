/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:47:06 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:56:37 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_haslb(const char *s);
static int	gnl_read(int fd, char **str);
static int	gnl_badnoread(ssize_t read_size, char **str);
static char	*gnl_return(char stock[], char *str);

char	*get_next_line(int fd)
{
	static char	stock[MAX_FD][BUFFER_SIZE + 1] = {0};
	char		*str;
	int			return_value;

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_strdup(stock[fd]);
	ft_bzero(stock[fd], BUFFER_SIZE + 1);
	if (str == NULL)
		return (NULL);
	else if (ft_haslb(str) == 0)
	{
		while (1 == 1)
		{
			return_value = gnl_read(fd, &str);
			if (return_value == -1)
				return (NULL);
			else if (return_value == 0)
				break ;
			else if (return_value == 2)
				return (str);
		}
	}
	return (gnl_return(stock[fd], str));
}

static int	ft_haslb(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		return (i + 1);
	return (0);
}

static int	gnl_read(int fd, char **str)
{
	char		buf[BUFFER_SIZE + 1];
	char		*temp_str;
	ssize_t		read_size;

	ft_bzero(buf, BUFFER_SIZE + 1);
	read_size = read(fd, buf, BUFFER_SIZE);
	if (read_size <= 0)
		return (gnl_badnoread(read_size, str));
	else
	{
		temp_str = ft_strdup(*str);
		free(*str);
		if (temp_str == NULL)
			return (-1);
		*str = ft_strjoin(temp_str, buf);
		free(temp_str);
		if (*str == NULL)
			return (-1);
		if (ft_haslb(*str) > 0)
			return (0);
		return (1);
	}
}

static int	gnl_badnoread(ssize_t read_size, char **str)
{
	if (read_size <= -1)
	{
		free(*str);
		return (-1);
	}
	else
	{
		if (ft_haslb(*str) > 0)
			return (0);
		else if (*str[0] == '\0')
		{
			free(*str);
			return (-1);
		}
		else
			return (2);
	}
}

static char	*gnl_return(char stock[], char *str)
{
	int	i;
	int	nl_pos;

	i = 0;
	nl_pos = ft_haslb(str);
	while (stock[i] != '\0')
		i++;
	while (str[nl_pos + i] != '\0')
	{
		stock[i] = str[nl_pos + i];
		i++;
	}
	ft_bzero(str + nl_pos, ft_strlen(str) - nl_pos);
	return (str);
}
