global _ft_isalpha

section .text

_ft_isalpha:
	cmp rdi, 65
	jl fail
	cmp rdi, 90
	jle success
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
