<!-- TODO: Add ft_strtab folder -->

<!-- TODO: ft_strscat - super strcat with args : concat multiple strings together -->

<!-- TODO: ft_sortarray, ft_getarraylen, ft_revarray -->
<!-- TODO: ft_math (sqrt, fact, fibo, isprime, findnextprime) -->
<!-- TODO: ft_putdec_fd -->

# Welcome on my personnal Libft

This lib was created and is used during the 42' school common core. I will update it pretty often, adding multiple functions that are not in the Libft initial project, but that can be usefull for next ones (as long as I have to use it).

## 1. <a name='Summary'></a>Summary

<!-- vscode-markdown-toc -->
* [Summary](#Summary)
* [List of functions](#Listoffunctions)
  1. [Ft_is](#Ft_is)
  2. [Ft_lst](#Ft_lst)
  3. [Ft_math](#Ft_math)
  4. [Ft_mem](#Ft_mem)
  5. [Ft_misc](#Ft_misc)
  6. [Ft_put](#Ft_put)
  7. [Ft_str](#Ft_str)
  8. [Ft_strtab](#Ft_strtab)
  9. [Ft_to](#Ft_to)

<!-- vscode-markdown-toc-config
	numbering=true
	autoSave=true
	/vscode-markdown-toc-config -->
<!-- /vscode-markdown-toc -->

## <a name='Listoffunctions'></a>List of functions

### 1. <a name='Ft_is'></a>Ft_is

Functions used to determine if a variable is in a certain type or contain some. They all take a `char` and treat it as an `int`.

* `ft_isalnum`: Check if a _char_ is alphanumeric _(abc, ABC, 123)_
* `ft_isalpha`: Check if a _char_ is alphabetic _(abc, ABC)_
* `ft_isascii`: Check if a _char_ is in the ASCII table
* `ft_isdigit`: Check if a _char_ is a digit _(123)_
* `ft_isprint`: Check if a _char_ is a printable character from the ASCII table _(between space ' ' and '~')_
* `ft_isvalid_str`: Check if a _string_ is non null, and not only composed of whitespaces
* `ft_iswhitespace`: Check if a _char_ is a whitespace _(space ' ', new line '\n', cariage return '\r', etc.)_

### 2. <a name='Ft_lst'></a>Ft_lst

Functions used for chained lists. The structure is findable in the header file.

* `ft_lstadd_back`: Add the element passed in parameter at the end of the list
* `ft_lstadd_front`: Add the element passed in parameter at the top of the list, updating the list pointer to the element as the new first element of the list
* `ft_lstclear`: Clear every element of the list, setting its pointer to `NULL`
* `ft_lstdelone`: Clear one element of a list. Doesn't relink the list between elements before and after
* `ft_lstiter`: Apply a function passed in parameter to every element of the list
* `ft_lstlast`: Get the last element of the list
* `ft_lstmap`: Apply a function passed in parameter to every element of the list, setting results in a new list that is returned at the end
* `ft_lstnew`: Create a new element, allocating memory space for its content
* `ft_lstsecondtolast`: Get the second to last element _(useful for example to set its next pointer to NULL when deleting the last element of the list)_
* `ft_lstsize`: Get the size of the list

### 3. <a name='Ft_math'></a>Ft_math

Some useful math functions.

* `ft_max`: Return the max value between two _int_
* `ft_min`: Return the min value between two _int_
* `ft_pow`: Return the result of a power^ operation

### 4. <a name='Ft_mem'></a>Ft_mem

Functions operating directly on memory. Operates on bytes.

* `ft_bzero`: Turn every bytes of a string into the null character _('\0')_
* `ft_calloc`: Allocate some memory and set all bytes to null character _('\0')_
* `ft_memchr`: Search and return if found the beginning of a bytes sequence in a memory zone, both passed as parameters
* `ft_memcmp`: Compare every bytes of two memory parts for _n_ bytes
* `ft_memcpy`: Copy a memory part into an other one
* `ft_memmove`: Same as _ft\_memcpy_ but take care of the direction if a zone overlap the other
* `ft_memset`: Turn every bytes of a string into the choosen character

### 5. <a name='Ft_misc'></a>Ft_misc

Some standalone functions that are still pretty useful.

* `ft_printf`: From the "ft_printf" project ; Recreate part of the printf function from the _stdio.h_ library
* `get_next_line`: From the "get_next_line" project ; Return the reading of a file descriptor (from a file or the terminal) line by line (one per function call)

### 6. <a name='Ft_put'></a>Ft_put

Printing functions. The all take a file descriptor as parameter, the one where to print (in a file or in terminal). Some are used by _ft_printf_ function. They all return the lenght of what was printed.

* `ft_putchar_fd`: Print a single character
* `ft_putendl_fd`: Print a string and add a new line after it
* `ft_putlnbr_fd`: Print long number
* `ft_putnbr_base_fd`: Take a base as parameter and print an unsigned long in the choosen base (binary, hexa, etc.)
* `ft_putnbr_fd`: Print int number
* `ft_putptr_fd`: Print address of a pointer
* `ft_putstr_fd`: Print a string

### 7. <a name='Ft_str'></a>Ft_str

Function that operate on strings. Most of them are based on _string.h_ lib.

* `ft_split`: Split a _string_ at every given _char_ into a _string_ array that is returned at the end
* `ft_strchr`: Search a _char_ into a _string_ and return a pointer to its position
* `ft_strdup`: Duplicate a _string_, allocating memory for it
* `ft_striteri`: Apply a function given as parameter to every _char_ of a _string_
* `ft_strjoin`: Allocate some memory to create a new _string_, put two given _string_ in it, and null-terminating the new _string_
* `ft_strlcat`: Put a _string_ at the end of another, assuming it as enough allocated space for it, until everything is copied, or the return string is above or egual to _size_
* `ft_strlcpy`: Copy a _string_ until _size_ is reached into another, no matter it is empty or not
* `ft_strlen`: Return the size of a _string_ passed as parameter
* `ft_strmapi`: Same as _ft\_iteri_, but apply the result to a newly allocated _string_ that is returned
* `ft_strncmp`: Compare two _string_ until _size_ is reached. Return 0 if they are the same, else return difference between _char_ which differ
* `ft_strnstr`: Search for a sub _string_ into a bigger one
* `ft_strrchr`: Same as _ft\_strchr_ but search begin from the end of the _string_
* `ft_strrncmp`: Same as _ft\_strncmp_ but compare the end of the _strings_
* `ft_strsjoin`: Based on _ft\_strjoin_, takes every _strings_ passed in arguments and join them together to return them as one full _string_
* `ft_strtrim`: Trim given _char_ set at the beginning and at the end from a _string_
* `ft_substr`: Return a newly allocated _string_ in the middle of a given bigger one

### 8. <a name='Ft_strtab'></a>Ft_strtab

Function used to treat more easily string arrays.

* `ft_strtab_free`: Fully free a string array passed as parameter
* `ft_strtab_size`: Get the size of a string array

### 9. <a name='Ft_to'></a>Ft_to

Some transformation functions from libraries like _stdlib.h_ or _ctype.h_.

* `ft_atoi`: Return an _int_ from a _string_. The _string_ must have at most a '+' or '-' sign followed only by digits
* `ft_atol`: Same as _ft\_atoi_ but return a _long_ variable
* `ft_itoa`: Turn an _int_ into a _string_
* `ft_tolower`: Turn every uppercase _char_ of a _string_ into lowercase one
* `ft_toupper`: Turn every lowercase _char_ of a _string_ into uppercase one
