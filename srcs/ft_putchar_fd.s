global _ft_putchar_fd

section .text

_ft_putchar_fd:
	push rbp
	mov rbp, rsp
	push rdi
	mov rdi, rsi
	lea rsi, [rsp]
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	pop rdi
	mov rsp, rbp
	pop rbp
	ret
