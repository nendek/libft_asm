global _ft_strdup
extern _ft_strlen
extern _malloc

section .text

_ft_strdup:
	push rbp
	mov rbp, rsp
	test rdi, rdi
	jz end

len:
	mov r8, rdi
	call _ft_strlen
	inc rax

alloc:
	mov rdi, rax
	push r8
	push rdi
	call _malloc
	test rax, rax
	je end

dup:
	pop rcx
	pop rsi
	mov rdi, rax
	cld
	rep movsb

end:
	mov rsp, rbp
	pop rbp
	ret
