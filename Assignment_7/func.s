	.file	"func.c"
	.text
	.globl	func
	.type	func, @function
func:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movq	$0, -16(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	cmpl	$1, -20(%rbp)
	je	.L20
	cmpl	$2, -20(%rbp)
	je	.L21
	cmpl	$3, -20(%rbp)
	je	.L22
	cmpl	$4, -20(%rbp)
	je	.L23
	cmpl	$5, -20(%rbp)
	je	.L24
	cmpl	$7, -20(%rbp)
	jne	.L25
	jmp	.L19
.L20:
	nop
.L3:
	movl	$1, -4(%rbp)
	movl	$10, -8(%rbp)
	jmp	.L14
.L21:
	nop
.L5:
	movl	$2, -4(%rbp)
	movl	$20, -8(%rbp)
	jmp	.L14
.L22:
	nop
	jmp	.L7
.L23:
	nop
.L7:
	movl	$3, -4(%rbp)
	movl	$30, -8(%rbp)
	jmp	.L14
.L24:
	nop
.L10:
	movl	$4, -4(%rbp)
	movl	$40, -8(%rbp)
	jmp	.L14
.L19:
.L12:
	movl	$5, -4(%rbp)
	movl	$50, -8(%rbp)
	jmp	.L14
.L25:
	nop
.L13:
	movl	$5, -4(%rbp)
	movl	$60, -8(%rbp)
.L14:
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	cltq
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	func, .-func
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$4, %edi
	call	func
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 14.2.1 20250110 (Red Hat 14.2.1-7)"
	.section	.note.GNU-stack,"",@progbits
