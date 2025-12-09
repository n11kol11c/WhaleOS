; simple bootloader written in asm (nasm)
; currently booting from floppy disk

org 0x7C00
bits 16

; make a newline nasm macro
%define ENDL 0x0D, 0x0A

; automaticly jumps to main because of 
; functions infront the main program register
start:
    jmp main

; push sectors for printing to screen
puts:
    push si
    push ax

.loop:
    lodsb
    or al, al
    jz .done

    mov ah, 0x0e
    int 0x10

    jmp .loop

.done:
    pop ax
    pop si
    ret

main:
    mov ax, 0
    mov ds, ax
    mov es, ax

    mov ss, ax
    mov sp, 0x7C00

    mov si, msg_hello
    call puts

    hlt

.halt:
    jmp .halt


msg_hello: db "Welcome to WhaleOS!", ENDL, 0

times 510-($-$$) db 0
dw 0AA55h
