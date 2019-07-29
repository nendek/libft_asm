global _ft_memalloc
extern _ft_bzero
extern _malloc

section .text

_ft_memalloc:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je end

alloc:
	mov r8, rdi
	sub rsp, 16
	call _malloc
	add rsp, 16
	push rax

init:
	mov rdi, r8
	call _ft_bzero
	pop rax

end:
	mov rsp, rbp
	pop rbp
	ret
