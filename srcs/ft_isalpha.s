global _ft_isalpha

extern _ft_islower
extern _ft_isupper

section .text

_ft_isalpha:
	call _ft_islower
	cmp rax, 1
	je success
	call _ft_isupper
	cmp rax, 0
	je fail

success:
	mov rax, 1
	ret

fail:
	mov rax, 0
	ret
