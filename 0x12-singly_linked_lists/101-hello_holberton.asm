	extern	printf
	section .data

msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0        ; 10 is the value for new line character

	section .text

	global main
main:
	push    rbp

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	        call    printf

	pop	rbp

	mov	rax,0
	ret			; return
