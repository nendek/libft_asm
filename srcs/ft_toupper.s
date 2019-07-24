global _ft_toupper

section .text

_ft_toupper:
	cmp rdi, 97
	jl return
	cmp rdi, 122
	jg return
	sub rdi, 32

return:
	mov rax, rdi
	ret
