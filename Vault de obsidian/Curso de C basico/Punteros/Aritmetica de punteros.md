La aritmetica de punteros te permite incrementar o decrementar la direccion de punteros sumando valores enteros al puntero.
Esta accion solo funciona bien con arreglos

```c 
	int array[] = "Hola me llamo Alejandro";
	int *ptr    = array;

	printf("%c",*ptr); //Aqui se motrara el carater 'H'  
	ptr++              //incremento en uno, tambien puedo escribirlo ptr = ptr + 1
	//
	printf("%c",*ptr); //Aqui se motrara el carater 'o'  

	--ptr
	printf("%c",*ptr); //Aqui se motrara el carater 'H' nuevamente 
	
```

- Otro ejemplo de aritmetica de punteros
```c
	int arraySum(int array[],const int n){
			int sum = 0,*ptr;
			int *const arrayEnd = array + n;
			for(ptr = array;ptr < arrayEnd;ptr++ ){
					sum += *ptr;
			 }
			 return sum;
	}	

	void main(){
		int arraySum(int array[],const int n);
		int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};
		printf("The sum is %i\n",arraySum(values,10));
	}
```

