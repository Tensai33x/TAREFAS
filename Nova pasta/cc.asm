section .data
    msg db "Hello, World!", 0Dh, 0Ah, 0

section .text
    global _start

_start:
    mov edx, 15         ; tamanho da mensagem
    mov ecx, msg        ; endereço da mensagem
    mov ebx, 1          ; handle de saída (stdout)
    mov eax, 4          ; código da função WriteFile (no Windows, use WriteConsoleA via syscall)
    ; Em Windows, normalmente se usa funções da API, não syscalls diretos.
    ; O jeito mais fácil é usar o linker do MASM ou criar um executável via C.

    ; Para simplificar, use C para imprimir "Hello, World!" no Windows:
    ; Veja abaixo.