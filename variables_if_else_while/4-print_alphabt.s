	.file	"4-print_alphabt.c"
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
	movb	$97, -3(%rbp)
	movb	$101, -2(%rbp)
	movb	$113, -1(%rbp)
	jmp	.L2
.L5:
	movzbl	-3(%rbp), %eax
	cmpb	-2(%rbp), %al
	je	.L3
	movzbl	-3(%rbp), %eax
	cmpb	-1(%rbp), %al
	jne	.L4
.L3:
	movzbl	-3(%rbp), %eax
	addl	$1, %eax
	movb	%al, -3(%rbp)
	jmp	.L2
.L4:
	movsbl	-3(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	movzbl	-3(%rbp), %eax
	addl	$1, %eax
	movb	%al, -3(%rbp)
.L2:
	cmpb	$122, -3(%rbp)
	jle	.L5
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