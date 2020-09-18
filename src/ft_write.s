segment .text
		global ft_write
		extern __errno_location

ft_write:
		mv rax, 1
		syscall
		cmp rax, 0
		jl error
		ret

error:
		mv rax, -1

