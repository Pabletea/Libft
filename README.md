# Libft

## Overview

This project is focused on creating a custom C library called **`libft`** that replicates several essential functions from the standard C library. The goal is to gain a deeper understanding of low-level programming by re-implementing functions for string manipulation, memory management, character validation, and more. 

By recreating functions like `atoi`, `memcpy`, `strdup`, and others, this project provides an opportunity to explore how these foundational operations work internally, without relying on the pre-built C standard library. The resulting library can be used in future C projects, offering flexibility and a deeper connection to how these fundamental tools operate under the hood.


## Project Structure

Below is a breakdown of each C file in this repository and its purpose:

| File                        | Description                                                                                              |
|-----------------------------|----------------------------------------------------------------------------------------------------------|
| **`ft_atoi.c`**              | Implements the conversion of a string to an integer.                            |
| **`ft_bzero.c`**             | Sets a block of memory to zero.                                       |
| **`ft_calloc.c`**            | Allocates memory and initializes it to zero.                 |
| **`ft_isalnum.c`**           | Checks if a character is alphanumeric.                                       |
| **`ft_isalpha.c`**           | Verifies if a character is a letter.                                         |
| **`ft_isascii.c`**           | Checks if a character is part of the ASCII.                               |
| **`ft_isdigit.c`**           | Checks if a character is a digit.                                     |
| **`ft_isprint.c`**           | Determines if a character is printable.                                                   |
| **`ft_memchr.c`**            | Locates a byte in memory.                                                     |
| **`ft_memcmp.c`**            | Compares two blocks of memory.                                                 |
| **`ft_memcpy.c`**            | Copies memory between two locations.                                                       |
| **`ft_memmove.c`**           | Safely copies memory blocks even when they overlap.                                       |
| **`ft_memset.c`**            | Initializes a block of memory with a specific value.                                   |
| **`ft_putchar_fd.c`**        | Writes a character to a file descriptor.                                                                  |
| **`ft_putendl_fd.c`**        | Writes a string to a file descriptor, followed by a newline.                                              |
| **`ft_putnbr_fd.c`**         | Outputs an integer to a file descriptor.                                                                  |
| **`ft_putstr_fd.c`**         | Writes a string to a file descriptor.                                                                     |
| **`ft_split.c`**             | Splits a string into an array of substrings based on a delimiter.                                         |
| **`ft_strchr.c`**            | Locates a character within a string.                                          |
| **`ft_strdup.c`**            | Duplicates a string, allocating memory for the new string.                                 |
| **`ft_striteri.c`**          | Applies a function to each character of a string, passing its index as a parameter.                       |
| **`ft_strjoin.c`**           | Joins two strings into a new string.                                         |
| **`ft_strlcat.c`**           | Concatenates two strings, ensuring the destination buffer does not overflow.                              |
| **`ft_strlcpy.c`**           | Copies a string into a buffer of limited size.                                            |
| **`ft_strlen.c`**            | Calculates the length of a string.                                                         |
| **`ft_strmapi.c`**           | Applies a function to each character of a string, creating a new string with the results.                 |
| **`ft_strncmp.c`**           | Compares two strings up to a specified number of characters.                              |
| **`ft_strnstr.c`**           | Searches for a substring within a string, limiting the search to a certain number of characters.          |
| **`ft_strtrim.c`**           | Trims characters from the beginning and end of a string.                                  |
| **`ft_substr.c`**            | Extracts a substring from a string, given a starting position and length.                                 |
| **`ft_tolower.c`**           | Converts a character from uppercase to lowercase.                                         |
| **`ft_toupper.c`**           | Converts a character from lowercase to uppercase.                                         |
| **`ft_lstadd_back_bonus.c`** | Adds an element at the end of a linked list.                                  |
| **`ft_lstadd_front_bonus.c`**| Adds an element at the beginning of a linked list.                           |
| **`ft_lstclear_bonus.c`**    | Deletes and frees the entire linked list.                                        |
| **`ft_lstdelone_bonus.c`**   | Deletes and frees a single element of a linked list.                            |
| **`ft_lstiter_bonus.c`**     | Iterates through a linked list and applies a function to each element.            |
| **`ft_lstlast_bonus.c`**     | Returns the last element of a linked list.                                        |
| **`ft_lstmap_bonus.c`**      | Applies a function to each element of a list, creating a new list with the modified elements.|
| **`ft_lstnew_bonus.c`**      | Allocates and returns a new element for the linked list.                           |
| **`ft_lstsize_bonus.c`**     | Counts the number of elements in a linked list.                                   |
| **`libft.h`**                | Header file that contains function declarations and macros used throughout the project.                   |
| **`main.c`**                 | Contains the main function, which serves as the entry point for the program.                              |
| **`Makefile`**               | File that defines the rules for compiling the library.                                                    |




## Getting Started

### Prerequisites

To build and run this project, you will need:

- A C compiler (e.g., `gcc`)
- [Any other dependencies or tools needed, e.g., "Make sure `make` is installed if using the Makefile."]

### Building the Project

To compile all the C files and create an executable, run the following command:

```bash
make all , make bonus 