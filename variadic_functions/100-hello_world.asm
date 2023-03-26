global _start

section .text:
	

section .data:
	message: db "Hello, World", 10
	message_lenght equ $-message
