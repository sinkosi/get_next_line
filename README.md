# GET NEXT LINE (GNL)<!-- omit in toc -->

This code is a recreation of the C Standard Funciton "getline()".
This project must also manage how to handle FILE DESCRIPTORS (FD)

- [Project Purpose](#project-purpose)
- [Instructions](#instructions)
- [Mandatory Part](#mandatory-part)
- [How To Use](#how-to-use)
- [Final Mark - 123/100 👍](#final-mark---123100-)

## Project Purpose

You are now starting to understand that it will get tricky to read data from a file descriptor if you don’t know its size beforehand. What size should your buffer be? How
many times do you need to read the file descriptor to retrieve the data?

It is perfectly normal and natural that, as a programmer, you would want to read a
“line” that ends with a line break from a file descriptor. For example each command that
you type in your shell or each line read from a flat file.

Thanks to the project get_next_line, you will finally be able to write a function
that will allow you to read a line ending with a newline character from a file descriptor.
You’ll be able to add this function to your libft if you feel like it and most importantly,
use it in all the future projects that will require it.

## Instructions

- The libc functions allowed on this project are read, malloc and free.

## Mandatory Part

- Write a function that returns a line read from a file descriptor.
- What we call a “line” is a succession of characters that end with ’\n’ (ascii code0x0a) or with End Of File (EOF).
- Your function must be prototyped as follow :
int get_next_line(const int fd, char **line);
- The first parameter is the file descriptor that will be used to read.
- The second parameter is the address of a pointer to a character that will be used
to save the line read from the file descriptor.
- The return value can be 1, 0 or -1 depending on whether a line has been read,
when the reading has been completed, or if an error has happened respectively.
- Your function get_next_line must return its result without ’\n’.
- Calling your function get_next_line in a loop will then allow you to read the text
available on a file descriptor one line at a time until the end of the text, no matter
the size of either the text or one of its lines.
- Finally we consider that get_next_line has an undefined behavior when reading
from a binary file. However, if you wish, you can make this behavior coherent.
- Global variables are forbidden.
- Static variables are allowed.

## How To Use

After cloning run "gcc -Werror -Wextra -Wall main.c getnextline.c ./libft/includes/libft.h"

Then call "a.out".

You are free to create your own main.c file.

## Final Mark - 123/100 👍
