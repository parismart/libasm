global	ft_strcmp						;Declaramos la etiqueta ft_strcmp como global

section	.text							;Directiva de la Seccion de Codigo

ft_strcmp:								;Etiqueta del comienzo del programa [ft_strcmp(RDI, RSI)]
	mov		rcx, 0						;Inicializamos el contador a Zero.
	jmp		loop						;Saltamos al bucle

loop:									;Etiqueta del bucle
	mov 	dl, byte[rdi + rcx]			;Copiamos un char de la string de destino RDI al resgistro temporal de 8 bits DL (la parte baja de DX)
	cmp 	byte[rsi + rcx], dl			;Comprobamos si el char copiado en DL es igual al char de la string de origen RSI
	jne		end							;Si no son iguales saltamos a la etiqueta end
	cmp		dl, 0						;Comprobamos fin de linea \0
	je		end							;Saltamos a la etiqueta end del final del programa si se cumple la condicion.
	inc		rcx							;Incrementamos el contador RCX en 1
	jmp		loop						;Saltamos al comienzo del bucle

end:
	movzx	rax, byte[rdi + rcx]		;Copiamos el char de la string de destino a RAX (MOV con extension de zeros, permite copiar 0 bits en 64 bits)
	movzx	rdx, byte[rsi + rcx]		;Copiamos el char de la string de origen a RDX
	sub 	rax, rdx					;Restamos RDX (char de origen) a RAX (char de destino)
	ret									;Return (Fin del programa)