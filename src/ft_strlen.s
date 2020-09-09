segment .text
		global ft_strlen

ft_strlen:
		mov rax, -1					; start rax w/ -1
loop:
		inc rax						; rax++
		cmp BYTE [rdi + rax], 0		; compare str[i] to \0 and set value to NF
		jne loop					; jump if ZF==1
		ret							; return rax
