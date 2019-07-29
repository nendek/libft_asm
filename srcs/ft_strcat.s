global _ft_strcat

section .text

_ft_strcat:
	push rdi

go_end:
	cmp [rdi], byte 0
	je cat
	inc rdi
	jmp go_end

cat:
	cmp [rsi], byte 0
	je end
	mov r8, [rsi]
	mov [rdi], r8
	inc rsi
	inc rdi
	jmp cat

end:
	pop rax
	ret
