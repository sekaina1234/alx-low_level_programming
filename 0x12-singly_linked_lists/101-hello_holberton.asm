section .data
    hello db 'Hello, Holberton', 0xA, 0

section .text
    global main

    extern printf

    main:
        push rbp
        mov rbp, rsp

        mov edi, hello
        xor eax, eax
        call printf

        mov eax, 0
        pop rbp
        ret
