	extern printf
	global main
main:
	mov	eax, 0
	call	printf
	mov	edi, msg
section		.data
	msg db 'Hello, Holberton\n', 0
