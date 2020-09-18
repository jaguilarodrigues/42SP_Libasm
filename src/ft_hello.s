section .data
	text db "Hello World!", 10

section .text
	global ft_hello

ft_hello:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, 13
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
