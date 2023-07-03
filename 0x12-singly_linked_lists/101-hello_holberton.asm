section .data
	line db "Hello, Holberton", 10, 0	;10 - ASCII code for newline, 0 - null

section .text
	extern printf

global _start

_start:
	sub rsp, 8		;stack align
	mov edi, line		;string address load
	xor eax, eax		;clear register
	call printf		;call printf func

	xor edi, edi		;exit status 0
	mov eax, 60		;system call num for exit
	syscall			;call OS
