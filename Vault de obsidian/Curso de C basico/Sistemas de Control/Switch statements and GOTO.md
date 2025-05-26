- La condicional switch recibe un parametro y esta se compara por los *case* que examinan si tienen la misma condicion que se le esta pasando al swicth
- El switch debe cumplir varias condiciones para funcionar correctamente:
	1. Se despues del *case* no hace falta poner parentesis.
	2. Dentro del *case* se ejecuta todas las condiciones condiciones que se pongan.
	3. El switch se le pone una condicion *default* (No obligatoria) por defecto para que se ejecute en caso de que de las demas opciones no coincidan.
	4. Si no se pone *break* al final de un *case* se evaluara los siguientes *case*.

```c
    size_t i = 1;
		_Bool is_true(){
			return 1;
		}
		
    switch (i) {
        case 0: 
            printf("El valor es cero \n");   //Los case pueden 
            i = is_true();                   //ejecutar varias 
            break;                           //varias condiciones
        case 1:
            printf("El valor es uno \n");  //Como i == 1
        case 2:                            //Se evalua case 1: 
                                           //al no haber break 
            printf("El valor es dos \n");  //se evalua case 2
            break;                         //sin preguntar
        case 3:
            printf("El valor es tres \n");
            break;
        default:
            printf("No coincide con ningun valor predeterminado.");
            //Este se ejecutara si no coincide con ninguna de las 
            //opciones anteriores
    }
```

- Los GOTO saltan de un punto del codigo al otro con la etiqueta señalada
- No se aconseja usar GOTO a menos que sea nesesario los GOTO ya que tiende a crear codigo espagueti.
```c
//Este un caso muy especifico de goto donde se puede usar sin problema
//Aqui en vez de varias break por funcion se usa un solo goto para
//terminar el ciclo de las funciones
for(int i = 0;i < 10;i++){
	for(int j = 0;j< 10;j++){
		for(int k = 0;k < 10;k++){
				//si quiero salir del ciclo total tengo que hacer un break
				//en cada uno de los loops 
			if(i == 5)
				break;
			else
				funcion_a_ejecutar();
		}
		if(i == 5)
				break;
			else
				funcion_a_ejecutar();
	}
	if(i == 5)
			break;
		else
			funcion_a_ejecutar();
}


for(int i = 0;i < 10;i++){
	for(int j = 0;j< 10;j++){
		for(int k = 0;k < 10;k++){
			if(i == 5)
	      goto label1;
		}
	}
}

label1:  
	printf("Termino el ciclo me voy a saltar el proximo printf.");
goto label2;
	printf("No me veras nunca el goto me va a saltar siempre.");

label2:
return 0;
```