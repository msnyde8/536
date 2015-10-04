extern printf ;

[SECTION .data] ;
	msg db "Hello, World!", 0xa, 0

[SECTION .text]
	global	main
main:
	push	msg
	call	printf
	add	esp, byte 4
return:
	mov eax, 0
	ret
