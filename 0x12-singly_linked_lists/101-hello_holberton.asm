	SECTION .data
str:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main

main:
	sub rsp, 8

	mov esi, str
	mov edi, fmt
	mov eax, 0
	call printf

	add rsp, 8

	mov eax, 0
	ret
