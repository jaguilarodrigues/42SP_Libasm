segment .text
		global ft_write
		extern __errno_location

ft_write:
		mov rax, 1               ; set rax to user func read
		syscall                 ; call system
		cmp rax, 0              ; check error
		jl error                ; go to error
		ret                     ; return

error:
		neg rax					; set negative rax
		push rax				; put rax in top of stack
		call __errno_location	; call error number
		pop rbx					; get rbx from top stack
		mov [rax], rbx			; set error in ptr rax
		mov rax, -1				; set return to -1
		ret
