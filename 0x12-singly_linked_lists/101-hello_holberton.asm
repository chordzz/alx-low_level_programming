SECTION .data
message:	db "Hello, Holberton", 0
fomart:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, message
	mov edi, fomart
	mov eax, 0
	call printf

	mov eax, 0
	ret
