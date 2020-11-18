global	ft_strcpy					;Declaramos la etiqueta ft_strcpy como global

section	.text						;Directiva de la Seccion de Codigo

ft_strcpy:							;Etiqueta del comienzo del programa
	mov		rcx, 0					;Inicializamos el contador
	jmp		loop					;Saltamos al bucle

loop:								;Etiqueta del bucle
	cmp		byte[rsi + rcx], 0		;Comprobamos fin de linea \0  [ft_strcpy(RDI, RSI)]
	je		end						;Saltamos a la etiqueta end del final del programa si se cumple la condicion.
	mov		dl, byte[rsi + rcx]		;Copiamos un char del origen RSI al resgistro temporal RDX
	mov		byte[rdi + rcx], dl		;Copiamos el char de RDX a RDI
	inc		rcx						;Incrementamos el contador RCX en 1
	jmp		loop					;Saltamos al comienzo del bucle


end:								;Etiqueta del final del programa
	mov 	byte[rdi + rcx], 0		;Copiamos \0 al final de la string de destino
	mov		rax, rdi				;Copiamos la string de destino RDI en RAX
	ret								;Return (Fin del programa)

