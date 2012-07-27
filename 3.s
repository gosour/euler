	.file	"3.c"
	.section	.rodata
.LC1:
	.string	"%ld"
.LC2:
	.string	"Echo:%ld\n"
.LC3:
	.string	"%ld is the largest prime\n"
	.align 8
.LC5:
	.string	"%d has crossed the huddles, lets check if it's a prime\n"
.LC6:
	.string	"Root is %d\n"
.LC7:
	.string	"j is currently: %d\n"
.LC8:
	.string	"The largest is %d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	$0, -20(%rbp)
	movq	-32(%rbp), %rax
	cvtsi2sd	%eax, %xmm0
	movabsq	$4611686018427387904, %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm1
	call	pow
	cvttsd2si	%xmm0, %eax
	movl	%eax, -24(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L2
.L17:
	movl	$0, -20(%rbp)
	cmpq	$2, -8(%rbp)
	je	.L3
	cmpq	$3, -8(%rbp)
	jne	.L4
.L3:
	movq	-32(%rbp), %rax
	movq	%rax, %rdx
	sarq	$63, %rdx
	idivq	-8(%rbp)
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L4
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	jmp	.L5
.L4:
	cmpq	$2, -8(%rbp)
	je	.L20
	cmpq	$3, -8(%rbp)
	je	.L20
	movq	-8(%rbp), %rax
	leaq	-1(%rax), %rcx
	movabsq	$3074457345618258603, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	cvtsi2ss	%eax, %xmm0
	movq	-8(%rbp), %rax
	subq	$1, %rax
	cvtsi2sdq	%rax, %xmm1
	movsd	.LC4(%rip), %xmm2
	divsd	%xmm2, %xmm1
	unpcklpd	%xmm1, %xmm1
	cvtpd2ps	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L19
	ucomiss	%xmm1, %xmm0
	je	.L7
.L19:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rcx
	movabsq	$3074457345618258603, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	cvtsi2ss	%eax, %xmm0
	movq	-8(%rbp), %rax
	addq	$1, %rax
	cvtsi2sdq	%rax, %xmm1
	movsd	.LC4(%rip), %xmm2
	divsd	%xmm2, %xmm1
	unpcklpd	%xmm1, %xmm1
	cvtpd2ps	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L20
	ucomiss	%xmm1, %xmm0
	jne	.L20
.L7:
	cmpq	$2, -8(%rbp)
	je	.L11
	movq	-8(%rbp), %rax
	andl	$1, %eax
	testq	%rax, %rax
	je	.L21
.L11:
	movq	-32(%rbp), %rax
	movq	%rax, %rdx
	sarq	$63, %rdx
	idivq	-8(%rbp)
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L22
.L12:
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	movq	$2, -16(%rbp)
	jmp	.L13
.L16:
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	movq	-8(%rbp), %rax
	movq	%rax, %rdx
	sarq	$63, %rdx
	idivq	-16(%rbp)
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L14
	movl	$1, -20(%rbp)
	jmp	.L15
.L14:
	addq	$1, -16(%rbp)
.L13:
	movl	-24(%rbp), %eax
	cltq
	cmpq	-16(%rbp), %rax
	jge	.L16
.L15:
	cmpl	$0, -20(%rbp)
	jne	.L10
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L5
.L20:
	nop
	jmp	.L10
.L21:
	nop
	jmp	.L10
.L22:
	nop
.L10:
	subq	$1, -8(%rbp)
.L2:
	cmpq	$1, -8(%rbp)
	jg	.L17
.L5:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC4:
	.long	0
	.long	1075314688
	.ident	"GCC: (GNU) 4.7.0 20120507 (Red Hat 4.7.0-5)"
	.section	.note.GNU-stack,"",@progbits
