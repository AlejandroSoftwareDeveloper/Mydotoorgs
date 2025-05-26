ASSEMBLER ----------------------------------------------------------------------

	(1) Register names are prefixed with '%', so %eax is the 32 bit i386 accumulator.  The registers
	    available on i386 are: %eax, %ebx, %ecx, %edx, %esi, %edi, %ebp and %esp, and most of them
	    have special purposes.

	(2) Add, mov, etc. take arguments in the form SRC,DEST.  So mov %eax,%ecx moves %eax -> %ecx

	(3) Constants are prefixed with '$', and you mustn't forget it!  If you forget it then it
	    causes a read from memory instead, so:
	    mov $2,%eax		moves number 2 into %eax
	    mov 2,%eax		reads the 32 bit word from address 2 into %eax (ie. most likely a mistake)

	(4) gas has a funky syntax for local labels, where '1f' (etc.) means label '1:' "forwards"
	    and '1b' (etc.) means label '1:' "backwards".  Notice that these labels might be mistaken
	    for hex numbers (eg. you might confuse 1b with $0x1b).

	(5) 'ja' is "jump if above", 'jb' for "jump if below", 'je' "jump if equal" etc.

	(6) gas has a reasonably nice .macro syntax, and I use them a lot to make the code shorter and
	    less repetitive.

	For more help reading the assembler, do "info gas" at the Linux prompt.

