global _ft_isprint

section .text

_ft_isprint:
	cmp rdi, 32
	jl fail
	cmp rdi, 126
	jg fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
