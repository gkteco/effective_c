	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #160                    ; =160
	stp	x29, x30, [sp, #144]            ; 16-byte Folded Spill
	add	x29, sp, #144                   ; =144
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, _b@GOTPAGE
	ldr	x8, [x8, _b@GOTPAGEOFF]
	adrp	x9, _z@GOTPAGE
	ldr	x9, [x9, _z@GOTPAGEOFF]
	mov	w10, #1024
	stur	w10, [x29, #-4]
	stur	wzr, [x29, #-8]
	stur	w10, [x29, #-12]
	stur	wzr, [x29, #-16]
	str	x8, [sp, #24]                   ; 8-byte Folded Spill
	str	x9, [sp, #16]                   ; 8-byte Folded Spill
LBB0_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB0_2 Depth 2
                                        ;       Child Loop BB0_4 Depth 3
                                        ;     Child Loop BB0_19 Depth 2
	ldr	x0, [sp, #24]                   ; 8-byte Folded Reload
	mov	w1, #32
	mov	x8, #1760
	mov	x2, x8
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	_memset
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	mov	w1, #127
	ldr	x2, [sp, #8]                    ; 8-byte Folded Reload
	bl	_memset
	stur	wzr, [x29, #-24]
	mov	w9, #1024
	stur	w9, [x29, #-28]
	stur	wzr, [x29, #-32]
LBB0_2:                                 ;   Parent Loop BB0_1 Depth=1
                                        ; =>  This Loop Header: Depth=2
                                        ;       Child Loop BB0_4 Depth 3
	ldur	w8, [x29, #-32]
	cmp	w8, #90                         ; =90
	b.ge	LBB0_18
; %bb.3:                                ;   in Loop: Header=BB0_2 Depth=2
	stur	wzr, [x29, #-36]
	mov	w8, #1024
	stur	w8, [x29, #-40]
	stur	wzr, [x29, #-44]
LBB0_4:                                 ;   Parent Loop BB0_1 Depth=1
                                        ;     Parent Loop BB0_2 Depth=2
                                        ; =>    This Inner Loop Header: Depth=3
	ldur	w8, [x29, #-44]
	cmp	w8, #324                        ; =324
	b.ge	LBB0_16
; %bb.5:                                ;   in Loop: Header=BB0_4 Depth=3
	mov	w8, #1
	stur	w8, [x29, #-48]
	mov	w8, #2048
	stur	w8, [x29, #-52]
	mov	w8, #5242880
	stur	w8, [x29, #-56]
	ldur	w8, [x29, #-48]
	ldur	w9, [x29, #-28]
	mul	w8, w8, w9
	ldur	w9, [x29, #-52]
	add	w8, w8, w9
	stur	w8, [x29, #-60]
	ldur	w8, [x29, #-40]
	ldur	w9, [x29, #-60]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-64]
	ldur	w8, [x29, #-8]
	ldur	w9, [x29, #-24]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-68]
	ldur	w8, [x29, #-36]
	ldur	w9, [x29, #-60]
	mul	w8, w8, w9
	asr	w8, w8, #10
	str	w8, [sp, #72]
	ldur	w8, [x29, #-48]
	ldur	w9, [x29, #-68]
	mul	w8, w8, w9
	ldur	w9, [x29, #-4]
	ldr	w10, [sp, #72]
	mul	w9, w9, w10
	subs	w8, w8, w9, asr #10
	str	w8, [sp, #68]
	ldur	w8, [x29, #-4]
	ldur	w9, [x29, #-24]
	mul	w8, w8, w9
	asr	w8, w8, #10
	str	w8, [sp, #64]
	ldur	w8, [x29, #-56]
	ldur	w9, [x29, #-48]
	lsl	w9, w9, #10
	ldr	w10, [sp, #64]
	mul	w9, w9, w10
	add	w8, w8, w9
	ldur	w9, [x29, #-8]
	ldr	w10, [sp, #72]
	mul	w9, w9, w10
	add	w8, w8, w9
	str	w8, [sp, #60]
	ldur	w8, [x29, #-28]
	ldur	w9, [x29, #-36]
	mul	w8, w8, w9
	asr	w8, w8, #10
	str	w8, [sp, #56]
	ldur	w8, [x29, #-16]
	ldur	w9, [x29, #-64]
	mul	w8, w8, w9
	ldur	w9, [x29, #-12]
	ldr	w10, [sp, #68]
	mul	w9, w9, w10
	subs	w8, w8, w9
	mov	w9, #30
	mul	w8, w9, w8
	ldr	w9, [sp, #60]
	sdiv	w8, w8, w9
	add	w8, w8, #40                     ; =40
	str	w8, [sp, #52]
	ldur	w8, [x29, #-16]
	ldr	w9, [sp, #68]
	mul	w8, w8, w9
	ldur	w9, [x29, #-12]
	ldur	w10, [x29, #-64]
	mul	w9, w9, w10
	add	w8, w8, w9
	mov	w9, #15
	mul	w8, w9, w8
	ldr	w9, [sp, #60]
	sdiv	w8, w8, w9
	add	w8, w8, #12                     ; =12
	str	w8, [sp, #48]
	ldur	w8, [x29, #-8]
	ldr	w9, [sp, #56]
	mneg	w8, w8, w9
	ldur	w9, [x29, #-16]
	ldur	w10, [x29, #-4]
	ldr	w11, [sp, #56]
	mneg	w10, w10, w11
	ldur	w11, [x29, #-68]
	add	w10, w11, w10, asr #10
	mul	w9, w9, w10
	subs	w8, w8, w9
	ldur	w9, [x29, #-40]
	ldur	w10, [x29, #-28]
	ldur	w11, [x29, #-12]
	mul	w10, w10, w11
	asr	w10, w10, #10
	mul	w9, w9, w10
	subs	w8, w8, w9
	asr	w8, w8, #10
	ldr	w9, [sp, #64]
	subs	w8, w8, w9
	asr	w8, w8, #7
	str	w8, [sp, #44]
	ldr	w8, [sp, #52]
	ldr	w9, [sp, #48]
	mov	w10, #80
	mul	w9, w10, w9
	add	w8, w8, w9
	str	w8, [sp, #40]
	ldr	w8, [sp, #60]
	ldur	w9, [x29, #-56]
	subs	w8, w8, w9
	asr	w8, w8, #15
	strb	w8, [sp, #39]
	ldr	w8, [sp, #48]
	mov	w9, #22
	subs	w8, w9, w8
	b.le	LBB0_14
; %bb.6:                                ;   in Loop: Header=BB0_4 Depth=3
	ldr	w8, [sp, #48]
	cmp	w8, #0                          ; =0
	cset	w8, le
	tbnz	w8, #0, LBB0_14
; %bb.7:                                ;   in Loop: Header=BB0_4 Depth=3
	ldr	w8, [sp, #52]
	cmp	w8, #0                          ; =0
	cset	w8, le
	tbnz	w8, #0, LBB0_14
; %bb.8:                                ;   in Loop: Header=BB0_4 Depth=3
	ldr	w8, [sp, #52]
	mov	w9, #80
	subs	w8, w9, w8
	b.le	LBB0_14
; %bb.9:                                ;   in Loop: Header=BB0_4 Depth=3
	ldrsb	w8, [sp, #39]
	ldrsw	x9, [sp, #40]
	ldr	x10, [sp, #16]                  ; 8-byte Folded Reload
	ldrsb	w11, [x10, x9]
	subs	w8, w8, w11
	b.ge	LBB0_14
; %bb.10:                               ;   in Loop: Header=BB0_4 Depth=3
	ldrb	w8, [sp, #39]
	ldrsw	x9, [sp, #40]
	ldr	x10, [sp, #16]                  ; 8-byte Folded Reload
	add	x9, x10, x9
	strb	w8, [x9]
	ldr	w8, [sp, #44]
	cmp	w8, #0                          ; =0
	cset	w8, le
	tbnz	w8, #0, LBB0_12
; %bb.11:                               ;   in Loop: Header=BB0_4 Depth=3
	ldr	w8, [sp, #44]
	str	w8, [sp, #4]                    ; 4-byte Folded Spill
	b	LBB0_13
LBB0_12:                                ;   in Loop: Header=BB0_4 Depth=3
	mov	w8, #0
	str	w8, [sp, #4]                    ; 4-byte Folded Spill
LBB0_13:                                ;   in Loop: Header=BB0_4 Depth=3
	ldr	w8, [sp, #4]                    ; 4-byte Folded Reload
	adrp	x9, l_.str@PAGE
	add	x9, x9, l_.str@PAGEOFF
	add	x9, x9, w8, sxtw
	ldrb	w8, [x9]
	ldrsw	x9, [sp, #40]
	ldr	x10, [sp, #24]                  ; 8-byte Folded Reload
	add	x9, x10, x9
	strb	w8, [x9]
LBB0_14:                                ;   in Loop: Header=BB0_4 Depth=3
	ldur	w8, [x29, #-40]
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-36]
	mov	w9, #5
	mul	w8, w9, w8
	ldur	w10, [x29, #-40]
	subs	w8, w10, w8, asr #8
	stur	w8, [x29, #-40]
	ldur	w8, [x29, #-20]
	mul	w8, w9, w8
	ldur	w9, [x29, #-36]
	add	w8, w9, w8, asr #8
	stur	w8, [x29, #-36]
	ldur	w8, [x29, #-40]
	ldur	w9, [x29, #-40]
	mul	w8, w8, w9
	mov	w9, #3145728
	subs	w8, w9, w8
	ldur	w9, [x29, #-36]
	ldur	w10, [x29, #-36]
	mul	w9, w9, w10
	subs	w8, w8, w9
	asr	w8, w8, #11
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-40]
	ldur	w9, [x29, #-20]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-40]
	ldur	w8, [x29, #-36]
	ldur	w9, [x29, #-20]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-36]
; %bb.15:                               ;   in Loop: Header=BB0_4 Depth=3
	ldur	w8, [x29, #-44]
	add	w8, w8, #1                      ; =1
	stur	w8, [x29, #-44]
	b	LBB0_4
LBB0_16:                                ;   in Loop: Header=BB0_2 Depth=2
	ldur	w8, [x29, #-28]
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-24]
	mov	w9, #9
	mul	w8, w9, w8
	ldur	w10, [x29, #-28]
	subs	w8, w10, w8, asr #7
	stur	w8, [x29, #-28]
	ldur	w8, [x29, #-20]
	mul	w8, w9, w8
	ldur	w9, [x29, #-24]
	add	w8, w9, w8, asr #7
	stur	w8, [x29, #-24]
	ldur	w8, [x29, #-28]
	ldur	w9, [x29, #-28]
	mul	w8, w8, w9
	mov	w9, #3145728
	subs	w8, w9, w8
	ldur	w9, [x29, #-24]
	ldur	w10, [x29, #-24]
	mul	w9, w9, w10
	subs	w8, w8, w9
	asr	w8, w8, #11
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-28]
	ldur	w9, [x29, #-20]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-28]
	ldur	w8, [x29, #-24]
	ldur	w9, [x29, #-20]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-24]
; %bb.17:                               ;   in Loop: Header=BB0_2 Depth=2
	ldur	w8, [x29, #-32]
	add	w8, w8, #1                      ; =1
	stur	w8, [x29, #-32]
	b	LBB0_2
LBB0_18:                                ;   in Loop: Header=BB0_1 Depth=1
	str	wzr, [sp, #32]
LBB0_19:                                ;   Parent Loop BB0_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #32]
	mov	w9, #1761
	subs	w8, w9, w8
	b.le	LBB0_25
; %bb.20:                               ;   in Loop: Header=BB0_19 Depth=2
	ldr	w8, [sp, #32]
	mov	w9, #80
	sdiv	w10, w8, w9
	mul	w9, w10, w9
	subs	w8, w8, w9
	cbz	w8, LBB0_22
; %bb.21:                               ;   in Loop: Header=BB0_19 Depth=2
	ldrsw	x8, [sp, #32]
	ldr	x9, [sp, #24]                   ; 8-byte Folded Reload
	ldrsb	w10, [x9, x8]
	str	w10, [sp]                       ; 4-byte Folded Spill
	b	LBB0_23
LBB0_22:                                ;   in Loop: Header=BB0_19 Depth=2
	mov	w8, #10
	str	w8, [sp]                        ; 4-byte Folded Spill
LBB0_23:                                ;   in Loop: Header=BB0_19 Depth=2
	ldr	w8, [sp]                        ; 4-byte Folded Reload
	mov	x0, x8
	bl	_putchar
; %bb.24:                               ;   in Loop: Header=BB0_19 Depth=2
	ldr	w8, [sp, #32]
	add	w8, w8, #1                      ; =1
	str	w8, [sp, #32]
	b	LBB0_19
LBB0_25:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-8]
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-4]
	mov	w9, #5
	mul	w8, w9, w8
	ldur	w10, [x29, #-8]
	subs	w8, w10, w8, asr #7
	stur	w8, [x29, #-8]
	ldur	w8, [x29, #-20]
	mul	w8, w9, w8
	ldur	w10, [x29, #-4]
	add	w8, w10, w8, asr #7
	stur	w8, [x29, #-4]
	ldur	w8, [x29, #-8]
	ldur	w10, [x29, #-8]
	mul	w8, w8, w10
	mov	w10, #3145728
	subs	w8, w10, w8
	ldur	w11, [x29, #-4]
	ldur	w12, [x29, #-4]
	mul	w11, w11, w12
	subs	w8, w8, w11
	asr	w8, w8, #11
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-8]
	ldur	w11, [x29, #-20]
	mul	w8, w8, w11
	asr	w8, w8, #10
	stur	w8, [x29, #-8]
	ldur	w8, [x29, #-4]
	ldur	w11, [x29, #-20]
	mul	w8, w8, w11
	asr	w8, w8, #10
	stur	w8, [x29, #-4]
	ldur	w8, [x29, #-16]
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-12]
	mul	w8, w9, w8
	ldur	w11, [x29, #-16]
	subs	w8, w11, w8, asr #8
	stur	w8, [x29, #-16]
	ldur	w8, [x29, #-20]
	mul	w8, w9, w8
	ldur	w9, [x29, #-12]
	add	w8, w9, w8, asr #8
	stur	w8, [x29, #-12]
	ldur	w8, [x29, #-16]
	ldur	w9, [x29, #-16]
	mul	w8, w8, w9
	subs	w8, w10, w8
	ldur	w9, [x29, #-12]
	ldur	w10, [x29, #-12]
	mul	w9, w9, w10
	subs	w8, w8, w9
	asr	w8, w8, #11
	stur	w8, [x29, #-20]
	ldur	w8, [x29, #-16]
	ldur	w9, [x29, #-20]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-16]
	ldur	w8, [x29, #-12]
	ldur	w9, [x29, #-20]
	mul	w8, w8, w9
	asr	w8, w8, #10
	stur	w8, [x29, #-12]
	mov	w0, #15000
	bl	_usleep
	adrp	x13, l_.str.1@PAGE
	add	x13, x13, l_.str.1@PAGEOFF
	mov	x0, x13
	bl	_printf
	b	LBB0_1
	.cfi_endproc
                                        ; -- End function
	.comm	_b,1760,0                       ; @b
	.comm	_z,1760,0                       ; @z
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	".,-~:;=!*#$@"

l_.str.1:                               ; @.str.1
	.asciz	"\033[23A"

.subsections_via_symbols
