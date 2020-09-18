segment .text
		global ft_strcmp

ft_strcmp:
		mov rax, 0			; start rax
		jmp loop			; start loop
loop:
		mov al, BYTE [rdi]	; s1
		mov bl, BYTE [rsi]	; s2
		cmp al, 0x0			; s1==null
		je end
		cmp bl, 0x0			; s2==null
		je end
		cmp al, bl			; s1==s2
		jne end				;
		inc rdi				; s1++
		inc rsi				; s2++
		jmp loop			; go to loop

end:
		movzx rax, al		; rax to al
		movzx rbx, bl		; rbx to bl
		sub rax, rbx		; rax - rbx
		ret					; return
