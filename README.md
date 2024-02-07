<div>
	<h1 align="center">LIBFT</h1>
</div>

## Description

Libft is the first project at 42 School. It consist on recreate from scratch some of the standard functions of C, in order to create your own library. This library can be used in future projects at 42 School. This project is a great opportunity to improve your skills in C programming language and to understand the logic behind some of the standard functions of C. After finish this project, you can incorporate new functions to your library and use it in your future projects.

The mandatory part of the project contains functions from `<ctype.h>`, `<string.h>` and `<stdlib.h>` libraries and other functions like itoa, strjoin or split.
The bonus contains functions to work with linked lists. I added extra functions from other projects like ft_printf and get_next_line.

## How to use it

#### Clone the repository inside your project folder.

```bash
git clone https://github.com/SebasNadu/42_libft.git
```

#### Go to the libft folder and compile it.

```bash
cd libft && make
```

#### Include the library in your project.

```c
#include "libft.h"
```

#### Compile your project with the library.

```bash
cc -o my_program my_program.c -L. -lft
```

#### Makefile Rules

`make` - Compile the **mandatoy** part.

`make bonus` - Compile the **bonus** part.

`make all` - Compile **mandatory**, **bonus** and **extra** parts.

`make clean` - Remove the object files.

`make fclean` - Remove the object files and the executable.

`make re` - Remove the object files and the executable and recompile all.

## Index

**NOTE:** After I finished the project, I organized the files in different directories to make it more clear. The content table does not represent the actual organization of the files.
</br>
Mandatory from `<ctype.h>` | Mandatory from `<string.h>` | Mandatory from `<stdlib.h>` | Mandatory non-standard | Bonus Functions | Extra Functions
:---: | :---: | :---: | :---: | :---: | :---:
[ft_isalpha](#ft_isalpha)| [ft_memset](#ft_memset) | [ft_atoi](#ft_atoi) | [ft_substr](#ft_substr) | [ft_lstnew](#ft_lstnew) | [ft_printf](#ft_printf)
[ft_isdigit](#ft_isdigit)| [ft_strlen](#ft_strlen) | [ft_calloc](#ft_calloc) | [ft_strjoin](#ft_strjoin) | [ft_lstadd_front](#ft_lstadd_front) | [get_next_line](#get_next_line)
[ft_isalnum](#ft_isalnum)| [ft_bzero](#ft_bzero) | | [ft_strtrim](#ft_strtrim) | [ft_lstsize](#ft_lstsize) | [ft_isblank](#ft_isblank)
[ft_isascii](#ft_isascii)| [ft_memcpy](#ft_memcpy) | | [ft_split](#ft_split) | [ft_lstlast](#ft_lstlast) | [ft_isputc](#ft_isputc)
[ft_isprint](#ft_isprint)| [ft_memmove](#ft_memmove) | | [ft_itoa](#ft_itoa) | [ft_lstadd_back](#ft_lstadd_back) | [ft_isspace](#ft_isspace)
[ft_toupper](#ft_toupper)| [ft_strlcpy](#ft_strlcpy) | | [ft_strmapi](#ft_strmapi) | [ft_lstdelone](#ft_lstdelone) | [ft_isupper](#ft_isupper)
[ft_tolower](#ft_tolower)| [ft_strlcat](#ft_strlcat) | | [ft_striteri](#ft_striteri) | [ft_lstclear](#ft_lstclear) | [ft_extend_matrix](#ft_extend_matrix)
| | [ft_strchr](#ft_strchr) | | [ft_putchar_fd](#ft_putchar_fd) | [ft_lstiter](#ft_lstiter) | [ft_matrixdup](#ft_matrixdup)
| | [ft_strrchr](#ft_strrchr) | | [ft_putstr_fd](#ft_putstr_fd) | [ft_lstmap](#ft_lstmap) | [ft_matrixfree](#ft_matrixfree)
| | [ft_strncmp](#ft_strncmp) | | [ft_putenl_fd](#ft_putendl_fd) | | [ft_matrixlen](#ft_matrixlen)
| | [ft_memchr](#ft_memchr) | | [ft_putnbr_fd](#ft_putnbr_fd) | | [ft_memclear](#ft_memclear)
| | [ft_memcmp](#ft_memcmp)
| | [ft_strnstr](#ft_strnstr)
| | [ft_strdup](#ft_strdup)

## Content

### [ft_isalpha](/src/is/ft_isalpha.c)

```c
int	ft_isalpha(int c);
```

    The function ft_isalpha returns 1 if c is a letter, and 0 otherwise.

### [ft_isdigit](/src/is/ft_isdigit.c)

```c
int	ft_isdigit(int c);
```

    The function ft_isdigit returns 1 if c is a digit, and 0 otherwise.

### [ft_isalnum](/src/is/ft_isalnum.c)

```c
int	ft_isalnum(int c);
```

    The function ft_isalnum returns 1 if c is a letter or a digit, and 0 otherwise.

### [ft_isascii](/src/is/ft_isascii.c)

```c
int	ft_isascii(int c);
```

    The function ft_isascii returns 1 if c is an ASCII character, and 0 otherwise.

### [ft_isprint](/src/is/ft_isprint.c)

```c
int	ft_isprint(int c);
```

    The function ft_isprint returns 1 if c is printable, and 0 otherwise.
    Printable characters are those characters in the range [32, 126].

### [ft_isblank](/src/is/ft_isblank.c)

```c
int	ft_isblank(int c);
```

    The function ft_isblank returns 1 if c is a blank character, and 0 otherwise.
    A blank character is either a space or a tab.

### [ft_isputc](/src/is/ft_isputc.c)

```c
int	ft_ispunct(int c);
```

    The function ft_ispunct returns 1 if c is a punctuation character, and 0 otherwise.

### [ft_isspace](/src/is/ft_isspace.c)

```c
int	ft_isspace(int c);
```

    The function ft_isspace returns 1 if c is a space, and 0 otherwise. Space characters are ' '
    (space), '\t'(tab), '\n'(newline), '\v'(vertical tab), '\f'(form feed), '\r'(carriage return).

### [ft_isupper](/src/is/ft_isupper.c)

```c
int	ft_isupper(int c);
```

    The function ft_isupper returns 1 if c is an uppercase letter, and 0 otherwise.

### [ft_lstadd_back](/src/lst/ft_lstadd_back.c)
```c
void	ft_lstadd_back(t_list **lst, t_list *new)
```
	The function ft_lstadd_back adds the new element to the end of the list(lst). The function recives as
	parameters the address of a pointer to the first link of a list, and the address of a pointer
	to the node node to be added to the list.

### [ft_lstadd_front](/src/lst/ft_listadd_front)
```c
void ft_lstadd_front(t_list **lst, t_list *new)
```
	The funcion ft_lstadd_front adds the new element as the first element of the list(lst). The function recives
	as parameter the address of a pointer to the first link of a list, and the adress of a pointer to the
	node to be added to the list.
### [ft_bzero](/src/mem/ft_bzero.c)

```c
void	ft_bzero(void *s, size_t n);
```

    The function ft_bzero sets the first n bytes of the memory area pointed to by s to 0.

### [ft_calloc](/src/mem/ft_calloc.c)

```c
void	*ft_calloc(size_t count, size_t size);
```

    The function ft_calloc allocates memory for an array of count elements of size bytes each and
    returns a pointer to the allocated memory. The memory is set to zero.

### [ft_memchr](/src/mem/ft_memchr.c)

```c
void	*ft_memchr(const void *s, int c, size_t n);
```

    The function ft_memchr scans the initial n bytes of the memory area pointed to by s for the
    first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted
    as unsigned char. The function returns a pointer to the matching byte or NULL if the character
    is not found.

### [ft_memcmp](/src/mem/ft_memcmp.c)

```c
int	ft_memcmp(const void *s1, const void *s2, size_t n);
```

    The function ft_memcmp compares the first n bytes of the memory areas pointed to by s1 and s2.
    Both s1 and s2 are interpreted as unsigned char. The function returns 0 if the memory areas
    pointed to by s1 and s2 are equal, and a non-zero value otherwise.

### [ft_memcpy](/src/mem/ft_memcpy.c)

```c
void	*ft_memcpy(void *dest, const void *src, size_t n);
```

    The function ft_memcpy copies n bytes from memory area src to memory area dest. The memory areas
    must not overlap. The function returns a pointer to dest.

### [ft_memmove](/src/mem/ft_memmove.c)

```c
void	*ft_memmove(void *dest, const void *src, size_t n);
```

    The function ft_memmove copies n bytes from memory area src to memory area dest. The memory areas
    may overlap. The function returns a pointer to dest.

### [ft_memset](/src/mem/ft_memset.c)

```c
void	*ft_memset(void *b, int c, size_t len);
```

    The function ft_memset fills the first len bytes of the memory area pointed to by b with the
    constant byte c.

### [ft_toupper](/src/to/ft_toupper.c)

```c
int	ft_toupper(int c);
```

    The function ft_toupper returns the uppercase version of c.

### [ft_tolower](/src/to/ft_tolower.c)

```c
int	ft_tolower(int c);
```

    The function ft_tolower returns the lowercase version of c.
