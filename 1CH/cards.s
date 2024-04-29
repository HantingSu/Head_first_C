	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 4
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	callq	_puts
	leaq	-7(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	$0, -12(%rbp)
	movsbl	-7(%rbp), %ecx
	cmpl	$75, %ecx
	jne	LBB0_2
## %bb.1:
	movl	$10, -12(%rbp)
	jmp	LBB0_12
LBB0_2:
	movsbl	-7(%rbp), %eax
	cmpl	$81, %eax
	jne	LBB0_4
## %bb.3:
	movl	$10, -12(%rbp)
	jmp	LBB0_11
LBB0_4:
	movsbl	-7(%rbp), %eax
	cmpl	$74, %eax
	jne	LBB0_6
## %bb.5:
	movl	$10, -12(%rbp)
	jmp	LBB0_10
LBB0_6:
	movsbl	-7(%rbp), %eax
	cmpl	$65, %eax
	jne	LBB0_8
## %bb.7:
	movl	$11, -12(%rbp)
	jmp	LBB0_9
LBB0_8:
	leaq	-7(%rbp), %rdi
	callq	_atoi
	movl	%eax, -12(%rbp)
LBB0_9:
	jmp	LBB0_10
LBB0_10:
	jmp	LBB0_11
LBB0_11:
	jmp	LBB0_12
LBB0_12:
	movl	-12(%rbp), %esi
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Enter the card_name: "

L_.str.1:                               ## @.str.1
	.asciz	"%2s"

L_.str.2:                               ## @.str.2
	.asciz	"The card value is: %i\n"


.subsections_via_symbols
