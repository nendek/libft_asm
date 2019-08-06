global _ft_cat

section .text

_ft_cat:
	push rbp
	mov rbp, rsp

loop:
	push rdi
	lea rsi, [rel buffer.string]
	mov rdx, buffer.len
	mov rax, 0x2000003
	syscall
	jc end
	cmp rax, 0
	je end

	mov rdx, rax
	mov rax, 0x2000004
	mov rdi, 1
	syscall
	jc end
	pop rdi
	jmp loop

end:
	mov rsp, rbp
	pop rbp
	ret

section .data

buffer:
	.string resb 255
	.len equ $ - buffer.string
