	.file	"6-size.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Size of a char: %zu byte(s)\n"
.LC1:
	.string	"Size of an int: %zu byte(s)\n"
	.align 8
.LC2:
	.string	"Size of a long int: %zu byte(s)\n"
	.align 8
.LC3:
	.string	"Size of a long long int: %zu byte(s)\n"
.LC4:
	.string	"Size of a float: %zu byte(s)\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 1
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	mov	esi, 4
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	printf@PLT
	mov	esi, 8
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	mov	esi, 8
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
	mov	esi, 4
	lea	rdi, .LC4[rip]
	mov	eax, 0
	call	printf@PLT
	mov	eax, 0
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
