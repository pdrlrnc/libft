# libft

A custom implementation of essential C standard library functions — built from scratch as part of the 42 School curriculum.

## 📚 Description

This project consists of recreating a set of basic C functions, including memory manipulation, string handling, character checking, and linked list operations, without using the standard library (except `write`, `malloc`, and `free`).

It’s a foundational project aimed at deepening understanding of low-level programming and memory management in C.

## 🧱 Functions Implemented

### Part 1 – Libc functions
Re-implemented standard functions like:

- `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`
- `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`
- `atoi`, `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- `calloc`, `strdup`

### Part 2 – Additional functions

- `substr`, `strjoin`, `strtrim`, `split`
- `itoa`, `strmapi`, `striteri`
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

### Bonus – Linked list functions

- `lstnew`, `lstadd_front`, `lstsize`, `lstlast`, `lstadd_back`
- `lstdelone`, `lstclear`, `lstiter`, `lstmap`

### Bonus bonus - Functions I added because I needed them for other projects

- `ft_strdup_append`, `ft_shrink_split`, `ft_clean_split_error`, `ft_splitlen`
- `ft_splitfree`, `ft_splitfree_error`, `ft_str_isdigit`, `ft_lst_contains_int`
- `ft_atoi_l`, `ft_isspace`, `ft_strcmp`, `ft_realloc`, `ft_strdup_n`

## 🔧 How to Use

```bash
git clone https://github.com/pdrlrnc/libft.git
cd libft
make
```

Include the compiled `libft.a` in your C project and use `#include "libft.h"` in your source files.

## 🛠 Requirements

- GCC compiler
- `make`

## 📁 Structure

```
libft/
├── ft_*.c         # Source files
├── libft.h        # Function declarations
├── Makefile
└── libft.a        # Compiled static library (after make)
```

## ✅ Status

✅ All mandatory and bonus functions implemented and tested.

## 🧠 Credits

Project developed at [42 Lisboa](https://42lisboa.com) by [@pdrlrnc](https://github.com/pdrlrnc).
