	.file	"8-print_base16.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movb	$48, -2(%rbp)
	cmpb	$57, -2(%rbp)
	jg	.L2
	movb	$48, -2(%rbp)
	jmp	.L3
.L4:
	movsbl	-2(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	movzbl	-2(%rbp), %eax
	addl	$1, %eax
	movb	%al, -2(%rbp)
.L3:
	cmpb	$57, -2(%rbp)
	jle	.L4
	jmp	.L5
.L2:
	cmpb	$57, -2(%rbp)
	jne	.L5
	movb	$97, -1(%rbp)
	jmp	.L6
.L7:
	movsbl	-1(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	movzbl	-1(%rbp), %eax
	addl	$1, %eax
	movb	%al, -1(%rbp)
.L6:
	cmpb	$102, -1(%rbp)
	jle	.L7
.L5:
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
