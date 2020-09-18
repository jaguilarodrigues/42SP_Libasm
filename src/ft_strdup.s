segment .text
		global ft_strdup
		extern ft_strlen
		extern ft_strcpy
		extern malloc

ft_strdup:
		call ft_strlen	; rax = ft_strlen(rdi)
		inc rax			; rax++ (\0)
		push rdi		; save rdi [arg(0)] in top of stack
		mov rdi, rax	; rdi = rax (len for word)
		call malloc		; malloc(rax)
		pop r8			; get [arg(0)] save in the top of stack and put in the r8
		mov rsi, r8		; save in the rsi
		mov rdi, rax	; put end of new str in rdi
		call ft_strcpy	; copy rsi in the rdi
		ret				; return
