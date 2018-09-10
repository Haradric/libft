
cmake_minimum_required(VERSION 3.8.0)

project(libft)

set(CMAKE_STATIC_LIBRARY_PREFIX "")

add_library(libft STATIC "")

target_compile_options(libft PUBLIC -Wall -Wextra -Werror)
target_include_directories(libft PUBLIC include)

target_sources(libft
    PRIVATE
        src/ft_atoi.c
        src/ft_bzero.c
        src/ft_isalnum.c
        src/ft_isalpha.c
        src/ft_isascii.c
        src/ft_isdigit.c
        src/ft_isprint.c
        src/ft_isspace.c
        src/ft_itoa.c
        src/ft_lstadd.c
        src/ft_lstdel.c
        src/ft_lstdelone.c
        src/ft_lstdup.c
        src/ft_lstdupelem.c
        src/ft_lstfind.c
        src/ft_lstfreeelem.c
        src/ft_lstfreelist.c
        src/ft_lstgetelem.c
        src/ft_lstgetlast.c
        src/ft_lstinsert.c
        src/ft_lstisinlist.c
        src/ft_lstiter.c
        src/ft_lstlen.c
        src/ft_lstmap.c
        src/ft_lstnew.c
        src/ft_lstpushback.c
        src/ft_lstpushfront.c
        src/ft_lstremoveelem.c
        src/ft_lstrsort.c
        src/ft_lstsort.c
        src/ft_lstswap.c
        src/ft_memalloc.c
        src/ft_memccpy.c
        src/ft_memchr.c
        src/ft_memcmp.c
        src/ft_memcpy.c
        src/ft_memdel.c
        src/ft_memmove.c
        src/ft_memset.c
        src/ft_nbrlen.c
        src/ft_power.c
        src/ft_putchar.c
        src/ft_putchar_fd.c
        src/ft_putendl.c
        src/ft_putendl_fd.c
        src/ft_putnbr.c
        src/ft_putnbr_fd.c
        src/ft_putstr.c
        src/ft_putstr_fd.c
        src/ft_realloc.c
        src/ft_strcat.c
        src/ft_strchr.c
        src/ft_strclr.c
        src/ft_strcmp.c
        src/ft_strcpy.c
        src/ft_strdel.c
        src/ft_strdup.c
        src/ft_strequ.c
        src/ft_striter.c
        src/ft_striteri.c
        src/ft_strjoin.c
        src/ft_strlcat.c
        src/ft_strlen.c
        src/ft_strmap.c
        src/ft_strmapi.c
        src/ft_strncat.c
        src/ft_strncmp.c
        src/ft_strncpy.c
        src/ft_strnequ.c
        src/ft_strnew.c
        src/ft_strnstr.c
        src/ft_strrchr.c
        src/ft_strsplit.c
        src/ft_strstr.c
        src/ft_strsub.c
        src/ft_strtolower.c
        src/ft_strtoupper.c
        src/ft_strtrim.c
        src/ft_tolower.c
        src/ft_toupper.c
        src/ft_wcharlen.c
        src/ft_wchartochar.c
)
