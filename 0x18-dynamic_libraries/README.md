#Dynamic libraries
A library is a collection of object files grouped into one unit to ease programming work distribution or to structure software development into units. You can create two kinds of C libraries.

A dynamic library (also named 'shared library', with extension .so) is not part of an executable file linked with it. Executable files with dynamic libraries are thus smaller and the same dynamic library can be reused (shared) by several running programs. Such programs map the dynamic library code at some a priori different virtual address, so that the library code must avoid absolute addressing and must be 'position independent'.
