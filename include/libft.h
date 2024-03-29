/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:02:00 by johnavar          #+#    #+#             */
/*   Updated: 2024/02/11 19:12:20 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Headers
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdbool.h>
# include <stdarg.h>
# include "get_next_line.h"
# include "ft_printf.h"

// Structs
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_hash_item
{
	char				*key;
	char				*value;
	struct s_hash_item	*next;
}	t_hash_item;

typedef struct s_hashmap
{
	t_hash_item		**items;
	size_t			size;
	size_t			count;
}	t_hashmap;

typedef struct s_radix
{
	int	base;
	int	len;
	int	expo;
	int	max;
	int	*output;
	int	*counter;
}	t_radix;

// Boolean
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_ispunct(int c);

// Math
bool			ft_isprime(size_t n);
size_t			ft_nextprime(size_t n);

// String
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int i);
char			*ft_strdup(const char *s);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *str, const char *substr, size_t n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_subsplit(char const *s, char *set);
char			*ft_strjoin_var(char *first, ...);

// Conversion
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_tolower(int i);
int				ft_toupper(int i);

// Memory
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *str, int c, size_t n);
void			ft_memclear(void **ptr);
void			*ft_realloc(void *ptr, size_t size);

// Put
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

// List
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

// Matrix
void			ft_mtx_free(char ***matrix);
char			**ft_mtx_extend(char **matrix, char *str);
char			**ft_mtx_dup(char **tokens);
int				ft_mtx_len(char **matrix);
void			ft_mtx_putfd(char **mtx, int fd, bool nl);
char			**ft_lsttomatrix(t_list *lst);
t_list			*ft_mtxtolst(char **mtx);

// Sort
void			ft_selection_sort(int *nbrs, int len);
void			ft_bubble_sort(int *nbrs, int len);
void			ft_insertion_sort(int *nbrs, int len);
void			ft_shell_sort(int *nbrs, int len);
void			ft_merge_sort(int *nbrs, int len);
void			ft_quick_sort(int *nbrs, int len);
void			ft_heap_sort(int *nbrs, int len);
void			ft_counting_sort(int *nbrs, int len);
void			ft_radix_sort(int *nbrs, int len, int base);

// Hashmap
unsigned long	ft_hash_algo(char *key, unsigned int size);
void			ft_hash_collision(t_hashmap *table, unsigned long index,
					t_hash_item *new_item);
bool			ft_hash_delete(t_hashmap *table, char *key);
void			ft_hash_freeitem(t_hash_item *item);
void			ft_hash_freetable(t_hashmap *table);
t_hash_item		*ft_hash_getitem(t_hashmap *table, char *key);
char			*ft_hash_getvalue(t_hashmap *table, char *key);
t_hash_item		*ft_hash_insert(char *key, char *value, t_hashmap *table);
t_hash_item		*ft_hash_newitem(char *key, char *value);
t_hashmap		*ft_hash_newtable(size_t size);
void			ft_hash_printtable(t_hashmap *table);
void			ft_hash_resize(t_hashmap *table);

#endif
