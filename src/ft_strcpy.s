segment .text
		global ft_strcpy

ft_strcpy:
		mov rcx, 0 					; start rcx w/ 0
loop:
		cmp BYTE [rsi + rcx], 0		; check if rsi[rcx] is \0
		je end						; exit
		mov dl, byte [rsi + rcx]	; save rsi[rcx] in dl
		mov byte [rdi + rcx], dl	; save dl in rdi[rcx]
		inc rcx						; rcx++
		jmp loop					; go to loop

end:
		mov rax, rdi				; set rdi in rax
		ret							; return

