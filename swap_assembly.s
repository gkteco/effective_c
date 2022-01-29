	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_swap                           ; -- Begin function swap
	.p2align	2
_swap:                                  ; @swap
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	str	x1, [sp, #16]
	ldr	x8, [sp, #24]
	ldr	w9, [x8]
	str	w9, [sp, #12]
	ldr	x8, [sp, #16]
	ldr	w9, [x8]
	ldr	x8, [sp, #24]
	str	w9, [x8]
	ldr	w9, [sp, #12]
	ldr	x8, [sp, #16]
	str	w9, [x8]
	mov	w9, #0
	mov	x0, x9
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	stur	wzr, [x29, #-4]
	sub	x0, x29, #8                     ; =8
	mov	w9, #17
	stur	w9, [x29, #-8]
	sub	x1, x29, #12                    ; =12
	mov	w9, #24
	stur	w9, [x29, #-12]
	str	w8, [sp, #16]                   ; 4-byte Folded Spill
	bl	_swap
	ldur	w8, [x29, #-8]
                                        ; implicit-def: $x1
	mov	x1, x8
	ldur	w8, [x29, #-12]
                                        ; implicit-def: $x2
	mov	x2, x8
	adrp	x10, l_.str@PAGE
	add	x10, x10, l_.str@PAGEOFF
	mov	x0, x10
	mov	x10, sp
	str	x1, [x10]
	str	x2, [x10, #8]
	bl	_printf
	ldr	w8, [sp, #16]                   ; 4-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"a=%d, b=%d"

.subsections_via_symbols
