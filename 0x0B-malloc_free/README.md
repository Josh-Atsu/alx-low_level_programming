# Malloc, Free
AUTOMATIC AND DYNAMIC ALLOCATION, MALLOC AND FREE

The "malloc" function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operation system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function "free".

Malloc in some cases fails and as such returns a "NULL".

