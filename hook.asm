EXTERN UpdateTimestampsOrig: QWORD

_TEXT SEGMENT

UpdateTimestampsOrigWrapper PROC
	; Overwritten instructions
	mov [rsp+18h], rbx
	push rdi
	sub rsp, 30h
	mov rbx, rcx

	mov rax, UpdateTimestampsOrig
	add rax, 0Dh
	jmp rax
UpdateTimestampsOrigWrapper ENDP

_TEXT ENDS

END