global	ft_write					;Declaramos la etiqueta ft_write como global
extern	__errno_location			;Declaramos la funcion __errno_location(LINUX) como externa (____error en MAC)

section	.text						;Directiva de la Seccion de Codigo

ft_write:							;Etiqueta del comienzo del programa [ft_write(RDI, RSI, RDX)]
	mov		rax, 1					;Copiamos 1 en RAX para llamar sys_Write en LINUX
	syscall							;Llamada al sistema
	cmp		rax, 0					;Comprobamos errores despues de la llamada al sistema
	jl		error					;Si RAX es negativo saltamos a la etiqueta error
	ret								;Return (Fin del programa) Devuelve 0 si no hay errores.

error:
	neg		rax						;Negacion de RAX, lo multiplicamos por -1, ahora es positivo.
	mov		rdx, rax				;Copiamos el numero de error de RAX a RDX
	call	__errno_location		;Llamamos la funcion [RAX = __errno_location(void)], Nos devuelve un int.
	mov		[rax], rdx				;Copiamos el numero de error de RDX a la direccion de memoria que nos ha devuelto la funcion [errno]
	mov		rax, -1					;Copiamos -1 en RAX
	ret								;Return (Fin del programa) Devuelve -1 si hay errores.