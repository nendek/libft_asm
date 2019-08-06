global _ft_bzero

section .text

_ft_bzero:
	push rdi
	push rsi
	
while:
	test rsi, rsi
	jz end
	mov [rdi], byte 0
	dec rsi
	inc rdi
	jmp while

end:
	pop rsi
	pop rdi
	ret
