section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10, 0

section .text
    global main

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Call printf with the message
    mov rdi, format
    mov rsi, hello
    call printf

    ; Call printf with the new line
    mov rdi, format
    mov rsi, newline
    call printf

    ; Clean up the stack frame
    mov rsp, rbp
    pop rbp

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status 0
    syscall

section .bss
    resb 1              ; Reserve 1 byte for the null terminator of the string
