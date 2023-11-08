#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char C);
void print_name(char *name, void (*f)(char *));
void (*f)(char *);

#endif
