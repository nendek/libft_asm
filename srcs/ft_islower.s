global _ft_islower

section .text

_ft_islower:	
	cmp rdi, 97
	jl fail
	cmp rdi, 122
	jg fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
