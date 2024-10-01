# Libft

## Overview

This project is focused on creating a custom C library called **`libft`** that replicates several essential functions from the standard C library. The goal is to gain a deeper understanding of low-level programming by re-implementing functions for string manipulation, memory management, character validation, and more. 

By recreating functions like `atoi`, `memcpy`, `strdup`, and others, this project provides an opportunity to explore how these foundational operations work internally, without relying on the pre-built C standard library. The resulting library can be used in future C projects, offering flexibility and a deeper connection to how these fundamental tools operate under the hood.


## Project Structure

Below is a breakdown of each C file in this repository and its purpose:

| File              | Description                                                                                      |
|-------------------|--------------------------------------------------------------------------------------------------|
| **`ft_atoi.c`**   | Implements the conversion of a string to an integer using the `atoi` function.                    |
| **`ft_bzero.c`**  | Defines the `bzero` function, which sets a block of memory to zero.                               |
| **`ft_calloc.c`** | Provides the implementation of `calloc` for memory allocation and initialization to zero.         |
| **`ft_isalnum.c`**| Checks if a character is alphanumeric using the `isalnum` function.                               |
| **`ft_isalpha.c`**| Verifies if a character is a letter using the `isalpha` function.                                 |
| **`ft_isascii.c`**| Checks if a character is part of the ASCII set with the `isascii` function.                       |
| **`ft_isdigit.c`**| Implements the `isdigit` function to check if a character is a digit.                             |
| **`ft_isprint.c`**| Determines if a character is printable using `isprint`.                                           |
| **`ft_itoa.c`**   | Converts an integer to a string using the `itoa` function.                                        |
| **`ft_memchr.c`** | Locates a byte in memory using the `memchr` function.                                             |
| **`ft_memcmp.c`** | Compares two blocks of memory with the `memcmp` function.                                         |
| **`ft_memcpy.c`** | Copies memory between two locations using `memcpy`.                                               |
| **`ft_memmove.c`**| Safely copies memory blocks even when they overlap using `memmove`.                               |
| **`ft_memset.c`** | Initializes a block of memory with a specific value using `memset`.                               |
| **`ft_putchar_fd.c`**| Writes a character to a file descriptor.                                                      |
| **`ft_putendl_fd.c`**| Writes a string to a file descriptor, followed by a newline.                                   |
| **`ft_putnbr_fd.c`**| Outputs an integer to a file descriptor.                                                        |
| **`ft_putstr_fd.c`**| Writes a string to a file descriptor.                                                          |
| **`ft_split.c`**  | Splits a string into an array of substrings based on a delimiter.                                 |
| **`ft_strchr.c`** | Locates a character within a string using the `strchr` function.                                  |
| **`ft_strdup.c`** | Duplicates a string using `strdup`, allocating memory for the new string.                         |
| **`ft_striteri.c`**| Applies a function to each character of a string, passing its index as a parameter.              |
| **`ft_strjoin.c`**| Joins two strings into a new string using the `strjoin` function.                                 |
| **`ft_strlcat.c`**| Concatenates two strings, ensuring the destination buffer does not overflow.                      |
| **`ft_strlcpy.c`**| Copies a string into a buffer of limited size using `strlcpy`.                                    |
| **`ft_strlen.c`** | Calculates the length of a string using `strlen`.                                                 |
| **`ft_strmapi.c`**| Applies a function to each character of a string, creating a new string with the results.          |
| **`ft_strncmp.c`**| Compares two strings up to a specified number of characters using `strncmp`.                      |
| **`ft_strnstr.c`**| Searches for a substring within a string, limiting the search to a certain number of characters.   |
| **`ft_strrchr.c`**| Locates the last occurrence of a character in a string using `strrchr`.                           |
| **`ft_strtrim.c`**| Trims characters from the beginning and end of a string using `strtrim`.                          |
| **`ft_substr.c`** | Extracts a substring from a string, given a starting position and length.                         |
| **`ft_tolower.c`**| Converts a character from uppercase to lowercase using `tolower`.                                 |
| **`ft_toupper.c`**| Converts a character from lowercase to uppercase using `toupper`.                                 |
| **`libft.h`**     | Header file that contains function declarations and macros used throughout the project.            |
| **`main.c`**      | Contains the main function, which serves as the entry point for the program.                      |
| **`Makefile`**    | File that defines the rules for compiling the library. 



<!-- ## Getting Started

### Prerequisites

To build and run this project, you will need:

- A C compiler (e.g., `gcc`)
- [Any other dependencies or tools needed, e.g., "Make sure `make` is installed if using the Makefile."]

### Building the Project

To compile all the C files and create an executable, run the following command:

```bash
gcc -o my_program file1.c file2.c file3.c file4.c file5.c -->