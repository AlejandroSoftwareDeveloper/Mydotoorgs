- Los ciclos for trabajan cuatro estados
	- inicializacion 
	- chequeo de iteracion
	- ejecucion de iteracion 
	- modificacion de ciclo (incremento o decremento, si existe el ciclo)
```c
int end = 10,init = 0;              //Inicializacion
while(init <= end){                 //Chequeo de iteracion
	printf("Incremento a %d\n",init); // ejecucion de iteracion
	init++;                           // iteracion
}
```

- Los ciclos for pueden iterar sobre varios elementos a la vez.
```c
//Aqui se itera sobre los elementos i e j
for(int i = 0,j = 2;i <= 5; i++,j = j + 2)
{
	printf("%5d",i*j);
}
```

- Se pueden ejecutar operaciones dentro de los ciclos for.
```c	
	unsigned long long sum = 0LL;
	unsigned int count     = 5;
	for(int i = 0;i < count;sum += i++) 
	{
	 // En este caso se sumara antes de incrementar i 
	 // y despues se incrementara i
		printf("%5d",sum);
	}	
```
