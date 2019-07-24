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
	jc error
	cmp rax, 0
	je end

	mov rdx, rax
	mov rax, 0x2000004
	mov rdi, 1
	syscall
	jc error
	pop rdi
	jmp loop

error:
	mov rax, -1

end:
	mov rsp, rbp
	pop rbp
	ret

section .data

buffer:
	.string times 255 db 0
	.len equ $ - buffer.string
