	.file	"0-positive_or_negative.c"
	.text
	.section	.rodata
.LC0:
	.string	"is positive"
.LC1:
	.string	"is zero"
.LC2:
	.string	"is negative"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	call	rand@PLT
	movl	%eax, -4(%rbp)
.L2:
	endbr64
	movl	$0, %edi
	call	time@PLT
	call	rand@PLT
	subl	$1073741823, %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jle	.L3
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
.L3:
	cmpl	$0, -4(%rbp)
	jne	.L4
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
.L4:
	cmpl	$0, -4(%rbp)
	jns	.L5
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
.L5:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
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
