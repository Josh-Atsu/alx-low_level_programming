# 0x1C-makefiles
The make utility is a software tool for managing and maintaining
computer programs consisting many component files. The make utility
automatically determines which pieces of a large program need to be
recompiled, and issues commands to recompile them.

• Make reads its instruction from Makefile (called the descriptor file) by
default.

• Makefile sets a set of rules to determine which parts of a program
need to be recompile, and issues command to recompile them.

• Makefile is a way of automating software building procedure and other
complex tasks with dependencies.

• Makefile contains: dependency rules, macros and suffix(or implicit)
rules

## Basic examples
Let's start by printing the classic "Hello World" on the terminal. Create a empty directory `myproject` containing a file `Makefile` with this content:

	say_hello:
        	echo "Hello World"
Now run the file by typing make inside the directory `myproject`. The output will be:

	$ make
	echo "Hello World"
	Hello World

In the example above, `say_hello` behaves like a function name, as in any programming language. This is called the __target__. The __prerequisites__ or __dependencies__ follow the __target__. For the sake of simplicity, we have not defined any __prerequisites__ in this example. The command `echo "Hello World"` is called the __recipe__. The __recipe__ uses __prerequisites__ to make a __target__. The __target__, __prerequisites__, and __recipes__ together make a rule.

To summarize, below is the syntax of a typical rule:

	target: prerequisites
		recipe
