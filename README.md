```
888 d8b 888       .d888 888
888 Y8P 888      d88P"  888
888     888      888    888
888 888 88888b.  888888 888888
888 888 888 "88b 888    888
888 888 888  888 888    888
888 888 888 d88P 888    Y88b.
888 888 88888P"  888     "Y888
```

## 🗺️  Overview

This is a custom C library that includes numerous general purpose functions for 42 project assignments.

## 🎯 Included Functions

- Character functions:
	- `ft_isalpha`
	- `ft_isdigit`
	- `ft_isalnum`
	- `ft_isascii`
	- `ft_isprint`
	- `ft_toupper`
	- `ft_tolower`

- String functions:
	- `ft_strlen`
	- `ft_strlcpy`
	- `ft_strlcat`
	- `ft_strchr`
	- `ft_strrchr`
	- `ft_strncmp`
	- `ft_strnstr`
	- `ft_substr`
	- `ft_strjoin`
	- `ft_strtrim`
	- `ft_split`
	- `ft_strmapi`
	- `ft_striteri`

- Memory functions:
	- `ft_calloc`
	- `ft_memset`
	- `ft_bzero`
	- `ft_memcpy`
	- `ft_memmove`
	- `ft_memchr`
	- `ft_memcmp`
	- `ft_strdup`

- Number Conversion:
	- `ft_atoi`
	- `ft_itoa`

- Writing to File Descriptor:
	- `ft_putchar_fd`
	- `ft_putstr_fd`
	- `ft_putendl_fd`
	- `ft_putnbr_fd`

- List Manipulation (Bonus):
	- `ft_lstnew`
	- `ft_lstadd_front`
	- `ft_lstsize`
	- `ft_lstlast`
	- `ft_lstadd_back`
	- `ft_lstdelone`
	- `ft_lstclear`
	- `ft_lstiter`
	- `ft_lstmap`

- Extra (Added post-project due to their usefulness):
	- `ft_free2d` -- Frees memory for a dynamically-allocated 2D array
	- `ft_islower` -- Checks if a character is a lowercase alphabet
	- `ft_isupper` -- Checks if a character is an uppercase alphabet
	- `ft_strtol` -- Convert a string to a long (For more robust error-handling as compared to `ft_atoi`)


## 📁 Project Structure

The initial `libft` project has since been integrated with the `ft_printf` and `get_next_line` projects to create a more comprehensive integrated library that can be used for any type of project assignment in the future.

```
libft
├─ Makefile
├─ README.md
├─ includes
│  ├─ extra.h
│  ├─ ft_printf.h
│  ├─ get_next_line_bonus.h
│  ├─ libft.h
│  └─ test.h
├─ libft.a
├─ src
│  ├─ extra
│  │  ├─ ft_free2d.c
│  │  ├─ ft_islower.c
│  │  ├─ ft_isupper.c
│  │  └─ ft_strtol.c
│  ├─ ft_printf
│  │  ├─ ft_build_int_output.c
│  │  ├─ ft_build_ptr_output.c
│  │  ├─ ft_build_str_output.c
│  │  ├─ ft_format_utils.c
│  │  ├─ ft_general_utils.c
│  │  ├─ ft_printf.c
│  │  ├─ ft_printf_c.c
│  │  ├─ ft_printf_i.c
│  │  ├─ ft_printf_p.c
│  │  ├─ ft_printf_rawf.c
│  │  ├─ ft_printf_s.c
│  │  ├─ ft_printf_utils.c
│  │  ├─ ft_printf_x.c
│  │  ├─ ft_ptoa.c
│  │  ├─ ft_set_format.c
│  │  └─ ft_utohex.c
│  ├─ get_next_line
│  │  ├─ get_next_line_bonus.c
│  │  └─ get_next_line_utils_bonus.c
│  └─ libft
│     ├─ ft_atoi.c
│     ├─ ft_bzero.c
│     ├─ ft_calloc.c
│     ├─ ft_isalnum.c
│     ├─ ft_isalpha.c
│     ├─ ft_isascii.c
│     ├─ ft_isdigit.c
│     ├─ ft_isprint.c
│     ├─ ft_itoa.c
│     ├─ ft_lstadd_back_bonus.c
│     ├─ ft_lstadd_front_bonus.c
│     ├─ ft_lstclear_bonus.c
│     ├─ ft_lstdelone_bonus.c
│     ├─ ft_lstiter_bonus.c
│     ├─ ft_lstlast_bonus.c
│     ├─ ft_lstmap_bonus.c
│     ├─ ft_lstnew_bonus.c
│     ├─ ft_lstsize_bonus.c
│     ├─ ft_memchr.c
│     ├─ ft_memcmp.c
│     ├─ ft_memcpy.c
│     ├─ ft_memmove.c
│     ├─ ft_memset.c
│     ├─ ft_putchar_fd.c
│     ├─ ft_putendl_fd.c
│     ├─ ft_putnbr_fd.c
│     ├─ ft_putstr_fd.c
│     ├─ ft_split.c
│     ├─ ft_strchr.c
│     ├─ ft_strdup.c
│     ├─ ft_striteri.c
│     ├─ ft_strjoin.c
│     ├─ ft_strlcat.c
│     ├─ ft_strlcpy.c
│     ├─ ft_strlen.c
│     ├─ ft_strmapi.c
│     ├─ ft_strncmp.c
│     ├─ ft_strnstr.c
│     ├─ ft_strrchr.c
│     ├─ ft_strtrim.c
│     ├─ ft_substr.c
│     ├─ ft_tolower.c
│     └─ ft_toupper.c
└─ test.c
```

## 🚀 Usage

`make all`
