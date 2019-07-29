global _ft_bzero

section .text

_ft_bzero:
	test rsi, rsi
	jz end
	mov [rdi], byte 0
	dec rsi
	inc rdi
	jmp _ft_bzero

end:
	ret
