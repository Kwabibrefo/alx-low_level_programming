section .data
    message db 'Hello, Holberton',0x0A,0

section .text
    global main
    extern printf
main:
    push rbp
    mov rbp, rsp

    mov rdi, message
    call printf

    xor eax, eax
    leave
    ret
