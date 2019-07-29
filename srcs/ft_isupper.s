global _ft_isupper

section .text

_ft_isupper:	
	cmp rdi, 65
	jl fail
	cmp rdi, 90
	jg fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
