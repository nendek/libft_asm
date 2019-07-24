global _ft_tolower

section .text

_ft_tolower:
	cmp rdi, 65
	jl return
	cmp rdi, 90
	jg return
	add rdi, 32

return:
	mov rax, rdi
	ret
