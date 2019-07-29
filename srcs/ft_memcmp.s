global _ft_memcmp

section .text

_ft_memcmp:
	mov rax, -1
	test rdi, rdi
	je error
	test rsi, rsi
	je error
	mov r8, rdi
	mov r9, rsi
	xor rax, rax
	test rdx, rdx
	je error
	xor rbx, rbx
	xor rcx, rcx

memcmp:
	mov al, byte[rdi + rcx]
	mov bl, byte[rsi + rcx]
	cmp rcx, rdx
	jge end
	add rcx, 1
	cmp al, bl
	je memcmp

end:
	sub rax, rbx
	mov rdi, r8
	mov rsi, r9
	ret

error:
	ret
