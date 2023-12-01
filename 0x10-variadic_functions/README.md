# Variadic Functions in C89
Variadic functions are functions that accepts a variable number of arguments.
This means that, the function accepts any arguments of any type, from char, int, float, double, long etc.
A char or a signed int is promoted to an int, or and unsigned int. A float is promoted to a double
The Variadic type is va_list, used to name the optional arguments.
The macros are
1. va_start, where the the initialization starts. it starts from the next argument passed to it.
2. va_arg, used to call the members in va_list, and each call give the next successive argument
3. va_end, frees va_list.
