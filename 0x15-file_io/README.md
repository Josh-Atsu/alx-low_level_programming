#FILE DESCRIPTORS
##POSIX and UNIX
In Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, corresponding to the three standard streams:

Integer value	Name		<unistd.h> symbolic constant[1]		<stdio.h> file stream[2]
0		Standard input	STDIN_FILENO				stdin
1		Standard output	STDOUT_FILENO				stdout
2		Standard error	STDERR_FILENO				stderr


fopen - open a file
fclose - close a file
getc - read a character from a file
puts - writes a cha into a file
getw -  read or gets an integer
putw - wrire  an integer 
fprintf - print formated text into a file
fscanf - reads formated from a file
fgets - reads strings of chr from a file 
fputs - writes strings of char
feof - detect a file marker in a single file
