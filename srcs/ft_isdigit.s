global _ft_isdigit

section .text

_ft_isdigit:
	cmp rdi, 48
	jl fail
	cmp rdi, 57
	jg fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
