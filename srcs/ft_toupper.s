global _ft_toupper

extern _ft_islower

section .text

_ft_toupper:
	call _ft_islower
	cmp rax, 0
	je return
	sub rdi, 32

return:
	mov rax, rdi
	ret
