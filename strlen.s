global	ft_strlen					;Declaramos la etiqueta ft_strlen como global

section	.text						;Directiva de la Seccion de Codigo

ft_strlen:							;Etiqueta del comienzo del programa [RAX = ft_strlen(RDI)]
	mov		rcx, 0					;Inicializamos el contador a Zero. (i = 0)
	jmp		loop					;Saltamos al bucle

loop:								;Etiqueta del bucle
	cmp		byte[rdi + rcx], 0		;Comprobamos fin de linea \0
	je		end						;Saltamos a la etiqueta end del final del programa si se cumple la condicion.
	inc		rcx						;Incrementamos el contador RCX en 1 (i++)
	jmp		loop					;Saltamos al comienzo del bucle

end:
	mov		rax, rcx				;Copiamos el contador RCX en RAX
	ret								;Return (Fin del programa)
