global _ft_isprint

section .text

_ft_isprint:
	cmp rdi, 31
	jl fail
	cmp rdi, 127
	jg fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
