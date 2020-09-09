segment .text
		global ft_strcpy

ft_strcpy:
		mov rcx, 0 					;
loop:
		cmp BYTE [rsi + rcx], 0		;
		je end						;
		mov dl, byte [rsi + rcx]	;
		mov byte [rdi + rcx], dl	;
		inc rcx						;
		jmp loop					;

end:
		mov rax, rdi				;
		ret							;

