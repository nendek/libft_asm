global _ft_strchr

section .text

_ft_strchr:
	push rbp
	mov rbp, rsp

search:
	cmp byte [rdi], sil
	je found
	test byte [rdi], 0
	jne not_found
	inc rdi
	jmp search

found:
	mov rax, rdi
	jmp end

not_found:
	mov rax, 0

end:
	mov rsp, rbp
	pop rbp
	ret
