# libft

In this project, I created my very first library of very useful standard functions.

### Table of Contents
* [Function Overview](#functionoverview)
* [Bonus](#bonusfunctions)
* [Installation & Usage](#installation&usage)

<a name="functionoverview"/>

## Function Overview

| Function | Description |
| :---: | :---: |
| `ft_atoi` | Converts ASCII string to integer. |
| `ft_bzero` | Writes zeroes to a byte string. |
| `ft_calloc` | Allocates memory for an array of `nmemb` elements of `size bytes each and returns a pointer to the allocated memory. The memory is set to zero. |
| `ft_isalnum` | Alphanumeric character test |
| `ft_isalpha` | Alphabetic character test |
| `ft_isascii` | Tests for ASCII character. |
| `ft_isdigit` | Decimal-digit character test |
| `ft_isprint` | Printing character test (space character inclusive) |
| `ft_itoa` | Allocates (with `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| `ft_memchr` | Locates byte in byte string. |
| `ft_memcmp` | Compares byte string. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies byte string. |
| `ft_memset` | Fills a byte string with a byte value. |
| `ft_putchar_fd` | Outputs the character ’c’ to the given file descriptor. |
| `ft_putendl_fd` | Outputs the string ’s’ to the given file descriptor, followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer ’n’ to the given file descriptor. |
| `ft_putstr_fd` | Outputs the string ’s’ to the given file descriptor. |
| `ft_split` | Allocates (with `malloc(3)`) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must be ended by a `NULL` pointer. |
| `ft_strchr` | Locate character in string. |
| `ft_strdup` | Saves a copy of a string. |
| `ft_striteri` | Applies the function f to each character of the string passed as argument, and passing its index as first argument.  Each character is passed by address to f to be modified if necessary. |
| `ft_strjoin` | Allocates (with `malloc(3)`) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| `ft_strlcat` | Size-bounded string copying and concatenation - ensuring it ends with `\0`. |
| `ft_strlcpy` | Copies `n - 1` bytes from a source string to a destination string. |
| `ft_strlen` | Finds length of string. |
| `ft_strmapi` | Applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with `malloc(3)`) resulting from successive applications of ’f’. |
| `ft_strncmp` | Compares strings. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_strrchr` | Locates character in string. |
| `ft_strtrim` | Allocates (with `malloc(3)`) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| `ft_substr` | Allocates (with `malloc(3)`) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
| `ft_tolower` | Upper case to lower case letter conversion |
| `ft_toupper` | Lower case to upper case letter conversion |

<a name="bonusfunctions"/>

## Bonus

For the bonus part I implemented a struct defining linked lists:
```
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;
```
Bonus functions to implement:
| Function | Description |
| :---: | :---: |
| `ft_lstadd_back` | Adds the element ’new’ at the end of the list. |
| `ft_lstadd_front` | Adds the element ’new’ at the beginning of the list. |
| `ft_lstclear` | Deletes and frees the given element and every successor of that element, using the function ’del’ and `free(3)`. Finally, the pointer to the list must be set to `NULL`. |
| `ft_lstdelone` | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed. |
| `ft_lstiter` | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |
| `ft_lstlast` | Returns the last element of the list. |
| `ft_lstmap` | Iterates the list ’lst’ and applies the function ’f’ to the content of each element.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of an element if needed. |
| `ft_lstnew` | Allocates (with `malloc(3)`) and returns a new element.  The variable ’content’ is initialized with the value of the parameter ’content’.  The variable ’next’ is initialized to `NULL`. |
| `ft_lstsize` | Counts the number of elements in a list. |

<a name="installation&usage"/>

## Installation & Usage
To test my library, just clone the repository like this:
```
git clone https://github.com/zangelis/libft.git
cd libft
```
The Makefile compiles all the SRCS and BONUS files and generates the output file `libft.a`. Here are some of the commandes you can try:
```
make		- compile without bonus functions
make bonus	- compile with bonus functions
make clean	- remove object files
make fclean	- remove object files and binary file (program)
make re		- re-compile
```
