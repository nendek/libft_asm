global _ft_isascii

section .text

_ft_isascii:
	cmp rdi, 0
	jl fail
	cmp rdi, 127
	jg fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
