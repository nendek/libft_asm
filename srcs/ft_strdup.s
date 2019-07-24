global _ft_strdup
extern _ft_strlen
extern _malloc

section .text

_ft_strdup:
	push rbp
	mov rbp, rsp
	mov rax, rdi
	test rdi, rdi
	jz end

len:
	push rdi
	call _ft_strlen
	pop rdi
	inc rax

alloc:
	mov r8, rdi
	mov rdi, rax
	push r8
	push rdi
	sub rsp, 16
	call _malloc
	add rsp, 16

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
