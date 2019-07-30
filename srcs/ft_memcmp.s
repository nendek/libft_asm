global _ft_memcmp

section .text

_ft_memcmp:
	mov rcx, rdx
	cld
	repe cmpsb
	dec rsi
	dec rdi
	xor rax, rax
	xor rbx, rbx
	mov al, [rdi]
	mov bl, [rsi]
	cmp eax, 127
	jg overflow
	cmp ebx, 127
	jg overflow
	sub rax, rbx
	ret

overflow:
	cmp al, bl
	jg ret_pos
	jl ret_neg
	jmp ret_same

ret_pos:
	mov rax, 1
	ret

ret_neg:
	mov rax, -1
	ret

ret_same:
	mov rax, 0
	ret
