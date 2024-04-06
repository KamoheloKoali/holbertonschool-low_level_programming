#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void test_good_close(int close, int fd);
void test_file_to(ssize_t check, char *file, int fd_from, int fd_to);
void test_file_from(ssize_t check, char *file, int fd_from, int fd_to);
void test_num_args(int argc);

#endif /* MAIN_H */

