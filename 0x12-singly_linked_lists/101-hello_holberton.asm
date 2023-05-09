section .data
    message db "Hello, Holberton", 0Ah  ; message string with newline character
    format db "%s", 0Ah                ; format string for printf with newline character
    extern printf                      ; declare printf function from C library

section .text
    global main
main:
    push rbp                ; save base pointer
    mov rbp, rsp            ; set up stack frame

    push qword message      ; push address of message string onto the stack
    push qword format       ; push address of format string onto the stack
    call printf             ; call printf function
    add rsp, 16             ; clean up the stack

    mov rsp, rbp            ; restore stack pointer
    pop rbp                 ; restore base pointer
    xor eax, eax            ; set return value to 0
    ret                     ; return from main function
