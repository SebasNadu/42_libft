<picture>
	<img alt="libft" src="https://github.com/SebasNadu/42_libft/assets/98430438/dd0300ba-2982-4c91-a9d9-8df8488c99da">
</picture>

## Description

Libft is the first project at 42 School. It consist on recreate from scratch some of the standard functions of C, in order to create your own library. This library can be used in future projects at 42 School. This project is a great opportunity to improve your skills in C programming language and to understand the logic behind some of the standard functions of C. After finish this project, you can incorporate new functions to your library and use it in your future projects.

The mandatory part of the project contains functions from `<ctype.h>`, `<string.h>` and `<stdlib.h>` libraries and other functions like itoa, strjoin or split.
The bonus contains functions to work with linked lists. I added extra functions from other projects like ft_printf and get_next_line.

## How to use it

#### Clone the repository inside your project folder.

```bash
git clone https://github.com/SebasNadu/42_libft.git
```

```bash
make -C 42_libft
```

#### Include the library in your project.

```c
#include "./42_libft/include/libft.h" (Path to the library header)
```

#### Compile your project with the library.

```bash
cc -o my_program my_program.c -L42_libft -lft
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
[ft_isdigit](#ft_isdigit)| [ft_strlen](#ft_strlen) | [ft_calloc](#ft_calloc) | [ft_strjoin](#ft_strjoin) | [ft_lstadd_front](#ft_lstadd_front) | [ft_printf_fd](#ft_printf_fd)
[ft_isalnum](#ft_isalnum)| [ft_bzero](#ft_bzero) | | [ft_strtrim](#ft_strtrim) | [ft_lstsize](#ft_lstsize) | [get_next_line](#get_next_line)
[ft_isascii](#ft_isascii)| [ft_memcpy](#ft_memcpy) | | [ft_split](#ft_split) | [ft_lstlast](#ft_lstlast) | [ft_isblank](#ft_isblank)
[ft_isprint](#ft_isprint)| [ft_memmove](#ft_memmove) | | [ft_itoa](#ft_itoa) | [ft_lstadd_back](#ft_lstadd_back) | [ft_isputc](#ft_isputc)
[ft_toupper](#ft_toupper)| [ft_strlcpy](#ft_strlcpy) | | [ft_strmapi](#ft_strmapi) | [ft_lstdelone](#ft_lstdelone) | [ft_isspace](#ft_isspace)
[ft_tolower](#ft_tolower)| [ft_strlcat](#ft_strlcat) | | [ft_striteri](#ft_striteri) | [ft_lstclear](#ft_lstclear) | [ft_isupper](#ft_isupper)
| | [ft_strchr](#ft_strchr) | | [ft_putchar_fd](#ft_putchar_fd) | [ft_lstiter](#ft_lstiter) | [ft_extend_matrix](#ft_extend_matrix)
| | [ft_strrchr](#ft_strrchr) | | [ft_putstr_fd](#ft_putstr_fd) | [ft_lstmap](#ft_lstmap) | [ft_matrixdup](#ft_matrixdup)
| | [ft_strncmp](#ft_strncmp) | | [ft_putenl_fd](#ft_putendl_fd) | | [ft_matrixfree](#ft_matrixfree)
| | [ft_memchr](#ft_memchr) | | [ft_putnbr_fd](#ft_putnbr_fd) | | [ft_matrixlen](#ft_matrixlen)
| | [ft_memcmp](#ft_memcmp) | | | | [ft_memclear](#ft_memclear)
| | [ft_strnstr](#ft_strnstr) | | | | [ft_realloc](#ft_realloc)
| | [ft_strdup](#ft_strdup) | | | | [ft_bubble_sort](#ft_bubble_sort)
| | | | | | [ft_insertion_sort](#ft_insertion_sort)
| | | | | | [ft_selection_sort](#ft_selection_sort)
| | | | | | [ft_shell_sort](#ft_shell_sort)
| | | | | | [ft_merge_sort](#ft_merge_sort)
| | | | | | [ft_quick_sort](#ft_quick_sort)
| | | | | | [ft_heap_sort](#ft_heap_sort)
| | | | | | [ft_counting_sort](#ft_counting_sort)
| | | | | | [ft_radix_sort](#ft_radix_sort)
| | | | | | [ft_isprime](#ft_isprime)
| | | | | | [ft_next_prime](#ft_next_prime)
| | | | | | [ft_sqrt](#ft_sqrt)
| | | | | | [ft_power](#ft_power)
| | | | | | [ft_mtx_putfd](#ft_mtx_putfd)
| | | | | | [ft_lsttomtx](#ft_lsttomtx)
| | | | | | [ft_mtxtolist](#ft_mtxtolist)
| | | | | | [ft_subsplit](#ft_subsplit)
| | | | | | [ft_strjoin_var](#ft_strjoin_var)

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

    The function ft_lstadd_back adds the new element to the end of the list(lst). The function
    recives as parameters the address of a pointer to the first link of a list, and the address of
    a pointer to the node node to be added to the list.

### [ft_lstadd_front](/src/lst/ft_listadd_front)

```c
void ft_lstadd_front(t_list **lst, t_list *new)
```

    The funcion ft_lstadd_front adds the new element as the first element of the list(lst). The
    function recives as parameter the address of a pointer to the first link of a list, and the
    adress of a pointer to the node to be added to the list.

### [ft_lstclear](/src/lst/ft_lstclear.c)

```c
void	ft_lstclear(t_list **lst, void (*del)(void*))
```

    The function ft_lstclear frees all the elements of the list(lst) and the list itself.

### [ft_lstdelone](/src/lst/ft_lstdelone.c)

```c
void	ft_lstdelone(t_list *lst, void (*del)(void*))
```

    The function ft_lstdelone frees the content of the node and the node itself.

### [ft_lstiter](/src/lst/ft_lstiter.c)

```c
void	ft_lstiter(t_list *lst, void (*f)(void *))
```

    The function ft_lstiter iterates the list(lst) and applies the function f to the content
    of each element.

### [ft_lstlast](/src/lst/ft_lstlast.c)

```c
t_list	*ft_lstlast(t_list *lst)
```

    The function ft_lstlast returns the last element of the list(lst).

### [ft_lstmap](/src/lst/ft_lstmap.c)

```c
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
```

    The function ft_lstmap applies the function f to each element of the list(lst) and
    returns a new list with the result.

### [ft_lstnew](/src/lst/ft_lstnew.c)

```c
t_list	*ft_lstnew(void *content)
```

    The function ft_lstnew creates a new node and returns a pointer to it.

### [ft_lstsize](/src/lst/ft_lstsize.c)

```c
int	ft_lstsize(t_list *lst)
```

    The function ft_lstsize returns the number of elements in the list(lst).

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

### [ft_realloc](/src/mem/ft_realloc.c)

```c
void	*ft_realloc(void *ptr, size_t size);
```

    The function ft_realloc changes the size of the memory block pointed to by ptr to size bytes.
    It returns a pointer to the reallocated memory block.

### [ft_putchar_fd](/src/put/ft_putchar_fd.c)

```c
void	ft_putchar_fd(char c, int fd);
```

    The function ft_putchar_fd writes the character c to the given file descriptor fd.

### [ft_putendl_fd](/src/put/ft_putendl_fd.c)

```c
void	ft_putendl_fd(char *s, int fd);
```

    The function ft_putendl_fd writes the string s to the given file descriptor fd followed by a
    newline.

### [ft_putnbr_fd](/src/put/ft_putnbr_fd.c)

```c
void	ft_putnbr_fd(int n, int fd);
```

    The function ft_putnbr_fd writes the integer n to the given file descriptor fd.

### [ft_putstr_fd](/src/put/ft_putstr_fd.c)

```c
void	ft_putstr_fd(char *s, int fd);
```

    The function ft_putstr_fd writes the string s to the given file descriptor fd.

### [ft_split](/src/str/ft_split.c)

```c
char	**ft_split(char const *s, char c);
```

    The function ft_split splits the string s into an array of strings separated by the character c.

### [ft_strchr](/src/str/ft_strchr.c)

```c
char	*ft_strchr(const char *s, int c);
```

    The function ft_strchr searches for the first occurrence of the character c in the string s.

### [ft_strdup](/src/str/ft_strdup.c)

```c
char	*ft_strdup(const char *s1);
```

    The function ft_strdup returns a pointer to a new string which is a duplicate of the string
    s1.

### [ft_striteri](/src/str/ft_striteri.c)

```c
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
```

    The function ft_striteri applies the function f to each character of the string s and its index.

### [ft_strjoin](/src/str/ft_strjoin.c)

```c
char	*ft_strjoin(char const *s1, char const *s2);
```

    The function ft_strjoin concatenates the strings s1 and s2 and returns a pointer to a new
    string.

### [ft_strlcat](/src/str/ft_strlcat.c)

```c
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
```

    The function ft_strlcat concatenates the strings src and dst and returns the total length of the
    resulting string.

### [ft_strlcpy](/src/str/ft_strlcpy.c)

```c
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
```

    The function ft_strlcpy copies at most dstsize - 1 characters from the string src to the
    buffer dst, NUL-terminating the result. The function returns the total length of the
    result.

### [ft_strlen](/src/str/ft_strlen.c)

```c
size_t	ft_strlen(const char *s);
```

    The function ft_strlen returns the length of the string s.

### [ft_strmapi](/src/str/ft_strmapi.c)

```c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

    The function ft_strmapi applies the function f to each character of the string s and returns a
    new string.

### [ft_strncmp](/src/str/ft_strncmp.c)

```c
int	ft_strncmp(const char *s1, const char *s2, size_t n);
```

    The function ft_strncmp compares the first n bytes of the strings s1 and s2.
    0 if s1 == s2
    < 0 if s1 < s2
    > 0 if s1 > s2

### [ft_strnstr](/src/str/ft_strnstr.c)

```c
char	*ft_strnstr(const char *str, const char *substr, size_t len);
```

    The function ft_strnstr searches for the first occurrence of the substring substr in the string
    str, up to a maximum of len characters. It returns a pointer to the beginning of the
    substring, or NULL if the substring is not found.

### [ft_strrchr](/src/str/ft_strrchr.c)

```c
char	*ft_strrchr(const char *s, int c);
```

    The function ft_strrchr searches for the last occurrence of the character c in the string s.
    It returns a pointer to the character, or NULL if the character is not found.

### [ft_strtrim](/src/str/ft_strtrim.c)

```c
char	*ft_strtrim(char const *s, char const *set);
```

    The function ft_strtrim removes any leading or trailing characters from the string s that
    are contained in the string set.

### [ft_substr](/src/str/ft_substr.c)

```c
char	*ft_substr(char const *s, unsigned int start, size_t len);
```

    The function ft_substr copies the substring of the string s from the character at position
    start to the character at position start + len - 1.

### [ft_atoi](/src/to/ft_atoi.c)

```c
int	ft_atoi(const char *str);
```

    The function ft_atoi converts the initial portion of the string pointed to by str to an integer
    representation.

### [ft_itoa](/src/to/ft_itoa.c)

```c
char	*ft_itoa(int n);
```

    The function ft_itoa converts the integer n to a string representation.

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

### [ft_memclear](/src/mem/ft_memclear.c)

```c
void	ft_memclear(void *s, size_t n);
```

    The function ft_memclear free the memory area pointed to by s and sets it to NULL.

### [ft_extend_matrix](/src/mem/ft_extend_matrix.c)

```c
void	**ft_extend_matrix(void **matrix, char *str);
```

    The function ft_extend_matrix extends the matrix with the string str. The function returns a
    pointer to a new matrix with the string in the last position and it frees the old matrix.

### [ft_matrixdup](/src/mem/ft_matrixdup.c)

```c
void	**ft_matrixdup(void **mtx);
```

    The function ft_matrixdup duplicates the matrix(mtx). The function returns a pointer to a new
    matrix with the same content as mtx.

### [ft_matrixfree](/src/mem/ft_matrixfree.c)

```c
void	ft_matrixfree(void **mtx);
```

    The function ft_matrixfree frees the matrix(mtx).

### [ft_matrixlen](/src/mem/ft_matrixlen.c)

```c
int	ft_matrixlen(void **mtx);
```

    The function ft_matrixlen returns the length of the matrix(mtx).

### [ft_printf](/src/printf/ft_printf.c)

```c
int	ft_printf(const char *format, ...);
```

    The function ft_printf is my own implementation of the function printf. It receives the
    format string and the arguments to be formatted. The function returns the number of
    characters printed.

### [ft_printf_fd](/src/printf/ft_printf_fd.c)

```c
int	ft_printf_fd(int fd, const char *format, ...);
```

    The function ft_printf_fd is my own implementation of the function printf with the option of
    a file descriptor. It receives the file descriptor, the format string and the arguments
    to be formatted. The function returns the number of characters printed.

### [get_next_line](/src/gnl/get_next_line.c)

```c
char	*get_next_line(int fd);
```

    The function get_next_line reads a line from a file descriptor. It returns a pointer to the
    line or NULL if it fails. A line is a sequence of characters terminated by a newline
    character ('\n') or a null byte. get_next_line use a buffer for each file descriptor, making
    possible to read from multiple files without loosing data.

### [ft_bubble_sort](/src/sort/ft_bubble_sort.c)

```c
void	ft_bubble_sort(int *nbrs, int len);
```

    The function ft_bubble_sort sorts the array nbrs of size len in ascending order. Bubble sort
    is a simple sorting algorithm that repeatedly swaps adjacent elements if they are in wrong
    order. Each iteration, the largest element is placed at the end of the array, reducing the each
    time the number of elements to be compared, if the elements are in correct order, it will stop.

| TC(Best) | TC(Average) | TC(Worst) | SC(Worst) |
| :------: | :---------: | :-------: | :-------: |
|   O(n)   |   O(n^2)    |  O(n^2)   |   O(1)    |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_insertion_sort](/src/sort/ft_insertion_sort.c)

```c
void	ft_insertion_sort(int *nbrs, int len);
```

    The function ft_insertion_sort sorts the array nbrs of size len in ascending order. Insertion
    sort is a simple sorting algorithm that builds the final sorted array one item at a time. It
    is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort,
    or merge sort. However, insertion sort provides several advantages:
    - It is a stable sort, which means that it preserves the relative order of equal elements.
    - It is an in-place sort, which means that it does not require any additional memory
    	allocations or copies.

| TC(Best) | TC(Average) | TC(Worst) | SC(Worst) |
| :------: | :---------: | :-------: | :-------: |
|   O(n)   |   O(n^2)    |  O(n^2)   |   O(1)    |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_selection_sort](/src/sort/ft_selection_sort.c)

```c
void	ft_selection_sort(int *nbrs, int len);
```

    The function ft_selection_sort sorts the array nbrs of size len in ascending order. Selection
    sort is a simple sorting algorithm that repeatedly finds the minimum element in the array
    and swaps it with the first element. It is a stable sort, which means that it preserves the
    relative order of equal elements. Selection sort is inefficient on large lists, and it does
    not require any additional memory allocations or copies.

| TC(Best) | TC(Average) | TC(Worst) | SC(Worst) |
| :------: | :---------: | :-------: | :-------: |
|  O(n^2)  |   O(n^2)    |  O(n^2)   |   O(1)    |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_shell_sort](/src/sort/ft_shell_sort.c)

```c
void	ft_shell_sort(int *nbrs, int len);
```

    The function ft_shell_sort sorts the array nbrs of size len in ascending order. Shell sort is a
    sorting algorithm that is a generalization of insertion sort. It starts by sorting pairs of
    elements far apart from each other, then progressively reducing the gap between elements to be
    compared. By starting with far apart elements, it can move some out-of-place elements into
    position faster than a simple nearest neighbor exchange. It is not a stable sort, which means
    that it does not preserve the relative order of equal elements. Shell sort is efficient on small
    lists, and it does not require any additional memory allocations or copies. It has little
    better performance than insertion sort, but with more complexity affecting for example best time
    complexity cases in its performance.

|   TC(Best)   |  TC(Average)   |   TC(Worst)    | SC(Worst) |
| :----------: | :------------: | :------------: | :-------: |
| O(n\*log(n)) | O(n(log(n))^2) | O(n(log(n))^2) |   O(1)    |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_merge_sort](/src/sort/ft_merge_sort.c)

```c
void	ft_merge_sort(int *nbrs, int len);
```

    The function ft_merge_sort sorts the array nbrs of size len in ascending order. Merge sort
    is a divide and conquer algorithm that recursively divides the array into two halves, sorts
    them, and then merges them. It is a stable sort, which means that it preserves the relative
    order of equal elements. Merge sort is efficient on large lists, but it requires
    memory allocations.

|   TC(Best)   | TC(Average)  |  TC(Worst)   | SC(Worst) |
| :----------: | :----------: | :----------: | :-------: |
| O(n\*log(n)) | O(n\*log(n)) | O(n\*log(n)) |   O(n)    |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_quick_sort](/src/sort/ft_quick_sort.c)

```c
void	ft_quick_sort(int *nbrs, int len);
```

    The function ft_quick_sort sorts the array nbrs of size len in ascending order. Quick sort
    is a divide and conquer algorithm that recursively divides the array into two halves, sorts
    them, and then merges them. It can be a stable sort, which means that it preserves the relative
    order of equal elements. Quick sort is efficient on large  and medium lists, it not necessary
    require memory allocations. In worst cases it is slower than merge sort, but in space complexity
    it is better.

|   TC(Best)   | TC(Average)  | TC(Worst) | SC(Worst) |
| :----------: | :----------: | :-------: | :-------: |
| O(n\*log(n)) | O(n\*log(n)) |  O(n^2)   | O(log(n)) |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_heap_sort](/src/sort/ft_heap_sort.c)

```c
void	ft_heap_sort(int *nbrs, int len);
```

    The function ft_heap_sort sorts the array nbrs of size len in ascending order. Heap sort
    is a divide and conquer algorithm that recursively divides the array into two halves, sorts
    them, and then merges them. It is a stable sort, which means that it preserves the relative
    order of equal elements. Heap sort is efficient on large lists, it not required
    memory allocations. It has better performance than quick sort and merge sort, but its implementation
    can be more complex.

|   TC(Best)   | TC(Average)  |  TC(Worst)   | SC(Worst) |
| :----------: | :----------: | :----------: | :-------: |
| O(n\*log(n)) | O(n\*log(n)) | O(n\*log(n)) |   O(1)    |

<sub>TC: Time Complexity, SC: Space Complexity</sub>

### [ft_counting_sort](/src/sort/ft_counting_sort.c)

```c
void	ft_counting_sort(int *nbrs, int len);
```

    The function ft_counting_sort sorts the array nbrs of size len in ascending order. Counting sort
    is a sorting algorithm that sorts the elements of an array by counting the number of occurrences
    of each unique element in the array. It is a stable sort, which means that it preserves the
    relative order of equal elements. Counting sort is efficient on small ranges of numbers. This
    implementation is not limited to positive numbers, also negative.

| TC(Best) | TC(Average) | TC(Worst) | SC(Worst) |
| :------: | :---------: | :-------: | :-------: |
|  O(n+k)  |   O(n+k)    |  O(n+k)   |   O(k)    |

<sub>TC: Time Complexity, SC: Space Complexity, n: number of elements, k: max number value</sub>

### [ft_radix_sort](/src/sort/ft_radix_sort.c)

```c
void	ft_radix_sort(int *nbrs, int len, int base);
```

    The function ft_radix_sort sorts the array nbrs of size len in ascending order. Radix sort is a
    non-comparative sorting algorithm that sorts the elements of an array by processing individual
    digits. It is a stable sort, which means that it preserves the relative order of equal elements.
    Radix sort is efficient on large lists. This implementation is not limited to positive numbers,
    also negative and it is possible to change the base of the numbers, affecting the time
    complexity with big numbers.

| TC(Best) | TC(Average) | TC(Worst) | SC(Worst) |
| :------: | :---------: | :-------: | :-------: |
|  O(nk)   |    O(nk)    |   O(nk)   |  O(n+k)   |

<sub>TC: Time Complexity, SC: Space Complexity, n: max number of digits, k: base</sub>

### [ft_isprime](/src/math/ft_isprime.c)

```c
int	ft_isprime(size_t n);
```

    The function ft_isprime checks if a number is prime or not. If the number is prime, it returns true(1),
    otherwise it returns false(0).

### [ft_next_prime](/src/math/ft_next_prime.c)

```c
int	ft_next_prime(size_t n);
```

    The function ft_next_prime returns the next prime number after the number n.

### [ft_sqrt](/src/math/ft_sqrt.c)

```c
int	ft_sqrt(int nb);
```

    The ft_sqrt function computes the square root of a number using the Newton-Raphson method, an iterative
    approach to approximating the square root of a number by repeatedly refining the estimate through a series
    of calculations involving bitwise operations. It returns -1 if the input number is negative. The function
    employs bitwise operations to efficiently reduce the search space for the square root while iteratively
    refining the estimate until it reaches a satisfactory approximation.

### [ft_power](/src/math/ft_power.c)

```c
int	ft_power(int nb, int power);
```

    The ft_power function calculates the result of raising a given number to a specified power using bitwise
    operations. It handles cases where the power is negative or zero, returning 0 and 1 respectively. For
    positive powers, it iteratively computes the result by exploiting binary exponentiation, effectively
    reducing the number of multiplication operations needed to compute the final result. This function
    efficiently performs exponentiation by decomposing the power into its binary representation and employing
    bitwise operations to iteratively compute the result, making it suitable for calculating powers efficiently.

### [ft_mtx_putfd](/src/mtx/ft_mtx_putfd.c)

```c
void	ft_mtx_putfd(t_mtx *mtx, int fd, bool nl);
```

    The function ft_mtx_putfd prints the matrix mtx to the file descriptor fd. If nl is true, it also
    prints a newline character after the matrix is printed.

### [ft_lsttomtx](/src/mtx/ft_lsttomtx.c)

```c
char	**ft_lsttomtx(t_list *lst);
```

    The function ft_lsttomtx creates a matrix from the list(lst). The function recives as parameter
    the address of a pointer to the first link of a list. The function duplicates the content of the list, and
    returns a pointer to the matrix.

### [ft_lsttomtx](/src/mtx/ft_mtxtolst.c)

```c
t_list	*ft_mtxtolst(char **mtx);
```

    The function ft_mtxtolst creates a list from the matrix(mtx). The function recives as parameter
    the address of a pointer to the first link of a matrix. The function duplicates the content of the matrix, and
    returns a pointer to the list.

### [ft_subsplit](/src/str/ft_subsplit.c)

```c
char	**ft_subsplit(char const *s, char *set);
```

    The function ft_subsplit splits the string s into substrings separated by the characters in set.
    It returns a pointer to an array of substrings.

### [ft_strjoin_var](/src/str/ft_strjoin_var.c)

```c
char	*ft_strjoin_var(char *first, ...);
```

    The function ft_strjoin_var concatenates the strings passed as arguments and returns a pointer to
    a new string. The function takes a variable number of arguments, each of which must be a pointer
    to a string, and the last argument must be NULL. if the last argument is NULL, the behavior is
    undefined.

## Issues and improvements

Feel free to open an issue if you find a bug on the project or if you have an idea for a new
function. If you have already found the solution to a bug, I would be very happy to review
your pull request.

If you like this project, feel free to star it 🌟 on GitHub. Thanks!

```

```
