section .data
    string: db "Hello, Holberton", 10

section .text
    global _start

_start:
    ; write "Hello, Holberton" to stdout
    mov eax, 4      ; write system call
    mov ebx, 1      ; file descriptor (stdout)
    mov ecx, string ; address of the string
    mov edx, 16     ; length of the string
    int 0x80        ; system call interrupt

    ; write newline to stdout
    mov eax, 4      ; write system call
    mov ebx, 1      ; file descriptor (stdout)
    mov ecx, 0x0a   ; ASCII code for newline
    mov edx, 1      ; length (1 byte)
    int 0x80        ; system call interrupt

    ; exit program with status code 0
    mov eax, 1      ; exit system call
    xor ebx, ebx    ; status code 0
    int 0x80        ; system call interrupt
