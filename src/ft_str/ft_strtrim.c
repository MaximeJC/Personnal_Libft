#include "libft.h"

static void	ft_getstr(char *str, char const *s1, char const *set, int str_len);
static int	ft_getstrlen(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		str_len;
	char	*str;

	str = "";
	str_len = ft_getstrlen(s1, set);
	if (str_len == 0)
	{
		str = ft_calloc(1, sizeof(char));
		if (str == NULL)
			return (NULL);
		return (str);
	}
	str = ft_calloc(str_len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_getstr(str, s1, set, str_len);
	return (str);
}

static int	ft_getstrlen(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (s1[i])
	{
		len++;
		i++;
	}
	i--;
	while (i >= 0 && ft_isinset(s1[i], set) && len != 0)
	{
		len--;
		i--;
	}
	return (len);
}

static void	ft_getstr(char *str, char const *s1, char const *set, int str_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (s1[i] && str_len > 0)
	{
		str[j] = s1[i];
		i++;
		j++;
		str_len--;
	}
}
