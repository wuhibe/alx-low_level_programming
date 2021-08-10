#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef unsigned int ssize_t;
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t l\
etters);
int append_text_to_file(const char *filename, char *\
text_content);
int create_file(const char *filename, char *text_con\
tent);

#endif
#endif
