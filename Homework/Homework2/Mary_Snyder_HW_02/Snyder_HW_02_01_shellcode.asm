section .text
	global _start

_start:
	jmp	short	myShell

shellcode:
	pop esi				; esi now represents the string (db)
	xor	eax, eax		; Clear eax by xoring

	mov	byte 	[esi + 7], al	; Place a null byte into the first # (after the '/bin/ls')
	mov	byte	[esi + 10], al	; Place a null byte into the second # (after the '-a')

	mov	long	[esi + 11], esi	; Get the address of '/bin/ls' and store it in AAAA
	lea 		ebx, [esi + 8]	; Get the address of '-a' and store it in ebp
	mov long	[esi + 15], ebx	; Store the address in BBBB (esi + 15)
	mov	long	[esi + 19], eax	; Places NULL in CCCC


	mov	byte 	al, 0x0b	; 0x0b is the execve system call
	mov		ebx, esi	; ebx = argument 1
	lea		ecx, [esi + 11]	; argument pointer
	lea		edx, [esi + 19]	; environment pointer
	int		0x80		; invoke system call

myShell:
	call	shellcode
	db	'/bin/ls#-a#AAAABBBBCCCC'
