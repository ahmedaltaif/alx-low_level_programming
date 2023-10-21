#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
void error_file(int file_from, int file_to, char *argv[]);
void c_elf(int elf);
void p_entry(unsigned long int _entry, unsigned char *e_entry);
void ptype(unsigned int e_type, unsigned char *e_entry);
void pabi(unsigned char *e_entry);
void posabi(unsigned char *e_entry);
void pversion(unsigned char *e_entry);
void pmagic(unsigned char *e_entry);
void pdata(unsigned char *e_entry);
void pclass(unsigned char *e_entry);
void pcheck(unsigned char *e_entry);











#endif
