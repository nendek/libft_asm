global _ft_puts

section .text

_ft_puts:
	cmp rdi, 0
	je puts_null
	mov rsi, rdi
	mov rdx, 0

compute_len:
	cmp [rdi], byte 0
	je puts
	inc rdx
	inc rdi
	jmp compute_len

puts_null:
	mov rdx, null.len
	lea rsi, [rel null.string]

puts:
	mov rdi, 1
	mov rax, 0x2000004
	syscall

	mov rdx, newline.len
	mov rax, 0x2000004
	lea rsi, [rel newline.string]
	syscall

end:
	mov eax, 10
	ret

section .data
newline:
	.string db 0xa
	.len equ $ - newline.string

null:
	.string db "(null)"
	.len equ $ - null.string
