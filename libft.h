/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:02:35 by mgouraud          #+#    #+#             */
/*   Updated: 2025/04/23 15:55:00 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define BIN_BASE "01"
# define OCT_BASE "012345678"
# define HEX_LOWER_BASE "0123456789abcdef"
# define HEX_UPPER_BASE "0123456789ABCDEF"
/* Max open `fd` system can support */
# define MAX_FD 1024

# ifndef BUFFER_SIZE
/* `get_next_line()` default buffer size
To change size, compile program with -D BUFFER_SIZE=<size> */
#  define BUFFER_SIZE 1
# endif

/* `t_list` struct contain `void*` pointer to a content
and `t_list*` pointer to next list element */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//* FT_IS
/* Take a `char` as an `int`
Check if the given `char` is alphanumeric
Return `1` if alphanumeric, `0` if not */
int		ft_isalnum(int c);
/* Take a `char` as an `int`
Check if the given `char` is alphabetic
Return `1` if alphabetic, `0` if not */
int		ft_isalpha(int c);
/* Take a `char` as an `int`
Check if the given `char` is part of the ASCII table (from 0 to 127)
Return `1` if ASCII, `0` if not */
int		ft_isascii(int c);
/* Take a `char` as an `int`
Check if the given `char` is a digit
Return `1` if digit, `0` if not */
int		ft_isdigit(int c);
/* Take a `char` as an `int` and a set as `char*`
Check if the given `char` is part of the given set
Return `1` if in set, `0` if not
/!\ Warning: set must end with `\0`*/
int		ft_isinset(int c, const char *set);
/* Take a `char*`
Check if the given `string` is a number
Trim whitespaces and accept one `-` or `+` at the beginning of the number
Return `1` if it is a number, `0` if not*/
int		ft_isnumber(char *str);
/* Take a `char` as an `int`
Check if the given `char` is ASCII printable
Return `1` if printable, `0` if not */
int		ft_isprint(int c);
/* Take a `char*`
Check if the given `string` is not NULL
and if it contains other `char` than whitespaces before `\0`
Return `1` if valid, `0` if not */
int		ft_isvalid_str(const char *str);
/* Take a `char` as an `int`
Check if the given `char` is a whitespace
Return `1` if whitespace, `0` if not */
int		ft_iswhitespace(int c);

//* FT_LST
/* Take a `t_list*` element and put it at the end of given `t_list**`
If `t_list**` is `NULL`, the element is put in it,
becoming the chain beginning */
void	ft_lstadd_back(t_list **lst, t_list *new);
/* Take a `t_list*` element and put it at the beginning of given `t_list**`
If `t_list**` is `NULL`, the element is put in it,
becoming the chain beginning */
void	ft_lstadd_front(t_list **lst, t_list *new);
/* Take a `t_list**` to clear and free it completely
For each list element, apply `(*del)` function to its `lst.content`
then free `t_list*` element */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/* Take a `t_list*` element to clear and free it
Apply `(*del)` function to its `lst.content`
then free `t_list*` element
/!\ Warning: relink previous element with the next one of the list
is not done by this function */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/* Apply the given `(f*)` function to the content of each `t_list*` element */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/* Return the last element of the given `t_list*`
If `t_list**` is `NULL`, return `NULL` */
t_list	*ft_lstlast(t_list *lst);
/* Return a copy of the given `t_list*` with `(*f)` applied on each content
If `t_list*` is `NULL` or if a malloc error occur, return `NULL`
`(*del)` function is used to free the new `t_list*` if a problem occur
in the middle of its creation */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/* Return a newly malloc'ed `t_list*` element with the given `content` */
t_list	*ft_lstnew(void *content);
/* Return the second-to-last element of the given `t_list*`
If `t_list**` has less than two elements
(including `t_list**` being `NULL`), return `NULL` */
t_list	*ft_lstsecondtolast(t_list *lst);
/* Return size of the given `t_list*` */
int		ft_lstsize(t_list *lst);

//* FT_MATH
/* Take two `int`
Return the biggest one
If egal, return `a`*/
int		ft_max(int a, int b);
/* Take two `int`
Return the smallest one
If egal, return `a`*/
int		ft_min(int a, int b);
/* Take two `int`: a number `nb` and a `power`
Return the result of `nb` by its `power`
If `power` < 0, return `0`*/
int		ft_pow(int nb, int power);

//* FT_MEM
/* Take a `void*` and set the `n` first bytes to `\0` */
void	ft_bzero(void *s, size_t n);
/* Same as `<stdlib.h> calloc()`
Check `man 3 calloc` */
void	*ft_calloc(size_t nmemb, size_t size);
/* Take a `void*` and search in the first `n` bytes for an `int` value
If found, return a `void*` to the found byte address, else return `NULL` */
void	*ft_memchr(const void *s, int c, size_t n);
/* Take two `void*` and compare them on the `n` first bytes
If similar, return `0`
Else return difference between `i_byte` from `s1` and `i_byte` from `s2` */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* Copy `n` bytes from `void* src` to `void* dest`
Does not care if the memory portions overlap each other */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* Copy `n` bytes from `void* src` to `void* dest`
Opposite to `ft_memcpy()`, `ft_memmove()` do care if
the memory portions overlap each other. If it does, can begin
copy from the end of each memory portion */
void	*ft_memmove(void *dest, const void *src, size_t n);
/* Take a `void*` and set `n` first bytes to given `int` value */
void	*ft_memset(void *s, int c, size_t n);

//* FT_MISC
/* Utility function
Calling it print in the terminal all basic terminal color codes
and exemples of how to associate multiple of them */
void	ft_color_codes(void);
/* Similar to `<stdio.h> printf()`
`%c` `char`
`%d`/`%i` `int` (base 10)
`%p` `void*` pointer argument / pointer address in hexadecimal
`%s` `string`
`%u` `unsigned int` (base 10)
`%x` convert `int` in hexadecimal lowercase format
`%X` convert `int` in hexadecimal uppercase format
`%%` percentage sign */
int		ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));
/* Based on get_next_line subject
Take an `int` and return the next line as `char*`
read in the file pointed by `fd`
If error or end of file reached, return `NULL` */
char	*get_next_line(int fd);

//* FT_PUT
/* Print a given `char` on the given `fd` */
int		ft_putchar_fd(char c, int fd);
/* Print a given `string` on the given `fd`
and add a line break */
int		ft_putendl_fd(char *s, int fd);
/* Print a given `long` on the given `fd` */
int		ft_putlnbr_fd(long n, int fd);
/* Convert a given `unsigned long` to the given `base` `string`
and print it on the given `fd` */
int		ft_putnbr_base_fd(unsigned long nbr, char *base, int fd);
/* Print a given `int` on the given `fd` */
int		ft_putnbr_fd(int n, int fd);
/* Print a given `void*` address on the given `fd` */
int		ft_putptr_fd(void *ptr, int fd);
/* Print a given `string` on the given `fd` */
int		ft_putstr_fd(char *s, int fd);

//* FT_STR
/* Take a `string` and a `char`
Split the given `string` at every found `char c` and
return each piece in a `NULL` terminated `string` array (`char**`)
that is returned (without `c` in each)
If no `char c` is found, the array returned is composed
of the full given `string` followed by `NULL`
Return `NULL` if a malloc or `ft_calloc()` error occur */
char	**ft_split(char const *s, char c);
/* Same as `<string.h> strchr()`
Check `man 3 strchr` */
char	*ft_strchr(const char *s, int c);
/* Take a `string` and return a freeable copy of it
Return `NULL` if a `ft_calloc()` error occur */
char	*ft_strdup(const char *src);
/* Take a `string` and apply `(*f)` to each `char` in it */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/* Take two `string` and return a freeable `string` made from `s1` + `s2`
If a malloc error occur, return `NULL`
/!\ Warning: all given `string` must not be `NULL` */
char	*ft_strjoin(char const *s1, char const *s2);
/* Same as `<string.h> strlcat()`
Check `man 3 strlcat` */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/* Same as `<string.h> strlcpy()`
Check `man 3 strlcpy` */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/* Take a `string` and a `char`
Return the size of the `string` from beginning to first `char c` found
If no `char c` found, return `string` len as `ft_strlen()`*/
size_t	ft_strlen_char(char *str, char c);
/* Take a `string` and return its size */
size_t	ft_strlen(const char *s);
/* Take a `string` and return a freeable copy of it
with `(*f)` applied to each `char` */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* Same as `<string.h> strncmp()`
Check `man 3 strncmp` */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* Same as `<string.h> strndup()`
Check `man 3 strndup` */
char	*ft_strndup(const char *src, size_t len);
/* Same as `<string.h> strnstr()`
Check `man 3 strnstr` */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/* Same as `<string.h> strrchr()`
Check `man 3 strrchr` */
char	*ft_strrchr(const char *s, int c);
/* Same function as `<string.h> strncmp()` but start from the end of the two
`string` and check `n` bytes backward */
int		ft_strrncmp(const char *s1, const char *s2, size_t n);
/* Same as `ft_strjoin()` but take `nb` number of `string`
and join them all together
/!\ Warning: all given `string` must not be `NULL` */
char	*ft_strsjoin(int nb, ...);
/* Take a `string` and return a copy of it without every `char`
from the given `set` at the beginning and at the end of it
Return `NULL` if a `ft_calloc()` error occur */
char	*ft_strtrim(char const *s1, char const *set);
/* Take a `string` and return a sub`string`,
beginning at `start` position of `*s` with max size = `len`
Return `NULL` if a `ft_calloc()` error occur */
char	*ft_substr(char const *s, unsigned int start, size_t len);

//* FT_STRTAB
/* Take a `string` array (`char**`) and free it entirely
First free all array content then free the array itself
/!\ Warning: The array must be `NULL` terminated */
void	ft_strtab_free(char **strtab);
/* Take a `string` array (`char**`) and return its size
/!\ Warning: The array must be `NULL` terminated */
int		ft_strtab_size(char **strtab);

//* FT_TO
/* Same as `<stdlib.h> atoi()`
Check `man 3 atoi` */
int		ft_atoi(const char *nptr);
/* Same as `<stdlib.h> atol()`
Check `man 3 atol` */
long	ft_atol(const char *nptr);
/* Basically the opposite of atoi
Take an `int` and convert it to a freeable `string`
If `ft_calloc()` error, return `NULL` */
char	*ft_itoa(int n);
/* Take a `t_list` and return a `string tab` with `t_list` `content`
/!\ Warning: `t_list` content must be `void *` or `char *` */
char	**ft_lst_to_strtab(t_list *lst);
/* Take a `char` as an `int`
If an uppercase alphabetic `char`, return its lowercase version
Else return given `char` */
int		ft_tolower(int c);
/* Take a `char` as an `int`
If a lowercase alphabetic `char`, return its uppercase version
Else return given `char` */
int		ft_toupper(int c);

#endif
