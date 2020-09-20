segment .text
		global ft_strcpy

ft_strcpy:
		mov rcx, 0 					; start rcx w/ 0
		mov dl, BYTE [rsi + rcx]	; save rsi[rcx] in dl
		mov BYTE [rdi + rcx], dl	; save dl in rdi[rcx]
loop:
		inc rcx						; rcx++
		cmp BYTE [rsi + rcx], 0x0		; check if rsi[rcx] is \0
		je end						; exit
		mov dl, BYTE [rsi + rcx]	; save rsi[rcx] in dl
		mov BYTE [rdi + rcx], dl	; save dl in rdi[rcx]
		jmp loop					; go to loop

end:
		mov rax, rdi				; set rdi in rax
		ret							; return

