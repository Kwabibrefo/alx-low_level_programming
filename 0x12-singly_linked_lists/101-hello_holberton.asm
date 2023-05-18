section .data
	format db "Hello, Holberton\n", 0

section .text
	global	main
	extern	printf

main:
	push	format
	mov	rdi, format
	xor	eax, eax
	call 	printf
	xor  	eax, eax
	ret
