#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer(char *buffer, unsigned int size);
int *array_range(int min, int max);
void ximple_print_buffer(int *buffer, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/*void simple_print_buffer(char *buffer, unsigned int size);*/
int main(int argc, char *argv[]);
int _strlen(char *s);
void error(void);
int is_digit(char *c);
int _putchar(char c);

#endif
