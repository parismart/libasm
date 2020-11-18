global	ft_strdup			;Declaramos la etiqueta ft_strdup como global
extern	ft_strlen			;Incluimos la etiqueta ft_strlen como externa
extern	ft_strcpy			;Incluimos la etiqueta ft_strcpy como externa
extern	malloc				;Incluimos la funcion malloc como externa

section	.text				;Directiva de la Seccion de Codigo

ft_strdup:					;Etiqueta del comienzo del programa [ft_strdup(RDI, RSI)]
	cmp		rdi, 0			;Comprobamos fin de linea \0
	je		ret_error		;Saltamos a la etiqueta ret_error si se cumple la condicion.
	call	ft_strlen		;Llamamos a la funcion [RAX = ft_strlen(RDI)]
	inc		rax				;Incrementamos RAX en uno para el \0
	push	rdi				;Guardamos la string a copiar en la cima de la la pila (stack)
	mov		rdi, rax		;Copiamos el lenght de la string que tenemos en RAX a RDI
	call	malloc			;Llamamo a la funcion [RAX = malloc(RDI)]
	cmp		rax, 0			;Comprobamos la que la reserva de memoria no sea NULL
	jle		ret_error		;Si es NULL o un entero negativo saltamos a la etiqueta ret_error
	mov		rdi, rax		;Copiamos la reserva de memoria que tenemos en RAX a RDI
	pop		rsi				;Cargamos la string a copiar en el registro de origen RSI
	call	ft_strcpy		;Llamamos a la funcion [RAX = ft_strcpy(RDI, RSI)]
	ret						;Return (Fin del programa)

ret_error:
	mov		rax, 0			;Copiamos \0 en RAX
	ret						;Return (Fin del programa)
