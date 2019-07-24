global _ft_memcpy

section .text

_ft_memcpy:
	mov rcx, rdx
	cld
	rep movsb
	mov rax, rdi
	ret
