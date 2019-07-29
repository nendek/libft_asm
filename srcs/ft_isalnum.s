global _ft_isalnum

extern _ft_isalpha
extern _ft_isdigit

section .text

_ft_isalnum:
	call _ft_isalpha
	cmp rax, 1
	je success
	call _ft_isdigit
	cmp rax, 0
	je fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
