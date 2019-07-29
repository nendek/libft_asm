global _ft_memdel

extern _free

section .text

_ft_memdel:
	push rbp
	mov rbp, rsp
	test rdi, rdi
	je end
	mov rdi, [rdi]
	call _free
	mov rdi, 0

end:
	mov rsp, rbp
	pop rbp
	ret
