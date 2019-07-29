global _ft_memalloc

extern _ft_bzero
extern _malloc

section .text

_ft_memalloc:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10
	test rdi, rdi
	je end

alloc:
	mov [rbp - 0x10], rdi
	call _malloc
	test rax, rax
	je end
	push rax

init:
	mov rdi, rax
	mov rsi, [rbp - 0x10]
	call _ft_bzero
	pop rax

end:
	mov rsp, rbp
	pop rbp
	ret
