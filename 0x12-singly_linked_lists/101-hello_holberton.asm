section .data
	line db 'Hello, Holberton', 10	;10 - ASCII code for newline, 0 - null
	fmt db '%s', 0

section .text
	global main
	external printf

main:
	push line
	call printf		;call printf func

	add rsp, 8

	mov eax, 0		;system call num for exit
	ret			;call OS
