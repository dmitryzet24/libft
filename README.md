isalpha     |   2   |
isdigit     |   2   |
isalnum     |
isascii     |
isprint     |
strlen      |   4   |
memset      |
bzero       |
memcpy      |
memmove     |
strlcpy     |      |
strlcat     |
toupper     |   2   |
tolower     |   2   |
strchr      |
strrchr     |
strncmp     |	3	|
memchr      |
memcmp      |
strnstr     |
atoi        |		|
calloc      |
strdup      |		|	

ft_substr
char *ft_substr(char const *s, unsigned int start, size_t len);

ft_strjoin
char *ft_strjoin(char const *s1, char const *s2);

ft_strtrim
char *ft_strtrim(char const *s1, char const *set);

ft_split
char **ft_split(char const *s, char c);

ft_itoa
char *ft_itoa(int n);

ft_strmapi
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

ft_striteri
void ft_striteri(char *s, void (*f)(unsigned int, char*));

ft_putchar_fd
void ft_putchar_fd(char c, int fd);

ft_putstr_fd
void ft_putstr_fd(char *s, int fd);

ft_putendl_fd
void ft_putendl_fd(char *s, int fd);

ft_putnbr_fd
void ft_putnbr_fd(int n, int fd);

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
