section .data
	hello db 'Hello, Holberton', 0
	format db "%s", 0

section .text
	extern printf

global _start
_start:
	push hello
	push format
	call printf

	add rsp, 16 ; Restore the stack pointer

	mov eax, 60 ; Exit syscall number
	xor edi ; Exit status 0
	syscall
