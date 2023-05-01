section .data
    format db "Hello, Holberton!\n", 0

section .text
    global _start

_start:
    ; prepare arguments for printf
    push format
    call printf
    add rsp, 8 ; clean up the stack

    ; exit the program
    mov eax, 60 ; system call for exit
    xor edi, edi ; return 0
    syscall

