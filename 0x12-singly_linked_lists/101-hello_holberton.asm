section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0   ; "%s" for string, 10 for newline, 0 to terminate the format string

section .text
    global main
    extern printf

main:
    ; Call printf to print the string
    mov rdi, format
    mov rsi, hello
    xor rax, rax     ; Clear RAX register for vararg (no floating-point arguments)
    call printf

    ; Exit the program
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; exit status 0
    syscall
