global _ft_memset

section .text

_ft_memset:
	mov rax, rsi
	mov rcx, rdx
	cld
	rep stosb
	mov rax, rdi
	ret
