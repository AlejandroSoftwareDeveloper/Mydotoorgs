- Las variables en c sigue los siguientes reglas
 1. No se puede usar solo caracteres extraños $@% etc...
 
```c
int a$ejandor; // Error al compilar 
```
 
 2. Se puede inicializar con un guion bajo ( _ ) o letras minusculas, mayusculas y números.
 
```c
int _al3jand0r = 1;   //declaracion correcta de variable
int x = 12,y = 34,z;  //declaracion de variables en una linea
```

 3. No pueden empezar con números, ni tener espacios intermedios.
 
```c
int 3alej andro; //Esta declaracion dara error al compilar
		//Por tener espacios intermedios y empezar con un número
```

  4. No se puede usar palabras reservadas para la declaracion de variables.
  
```c
 int int = 0; //Error por usar palabras resevadas como nombres.
```

 5. Es mejor evitar poner variables inicializadas y no inicilizada juntas.
 
 ```c
 int x,y = 90; 
```







