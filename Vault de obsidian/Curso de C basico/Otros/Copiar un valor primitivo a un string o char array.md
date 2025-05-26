```c 
	int elemento = 100;
	float valorf = 100.00;
	char array[10];

 //Guarda en array el elemento de tipo int convertido a string
 //o cadena de char
	sprintf(array,"%d",elemento);
// Guarda en array el elemento de tipo float de 2 espacios despues 
// de la coma convertido a string o a cadena de char	
 sprintf(array,"%.2f",elemento);
	
```