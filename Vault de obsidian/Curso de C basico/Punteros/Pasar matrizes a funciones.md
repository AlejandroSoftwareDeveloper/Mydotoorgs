- Para pasar matrices en c como parametro  de puntero en una funcion se usa las siguientes declaraciones, las cuales se pueden usuar indistintamente
```c
void display2DArray(int arr[][5], int rows); 

void display2DArray(int (*arr)[5], int rows); 

```

- Ejemplo de uso de las matrices
```c

void display2DArray(int arr[][5], int rows) {  
		for (int i = 0; i<rows; i++) {  
			for (int j = 0; j<5; j++) {  
			printf("%d", arr[i][j]);  
		}  
		printf("\n");  
	}  
}  

void main() {  
	int matrix[2][5] = {  
		{1, 2, 3, 4, 5},  
		{6, 7, 8, 9, 10}
	};
	  
display2DArray(matrix, 2);  
}


```

- Ejemplo de como pasar la matricez a la funcion
```c
void display2DArrayUnknownSize(int *arr, int rows, int cols) {  
	for(int i=0; i<rows; i++) {  
		for(int j=0; j<cols; j++) {  
		printf("%d ", *(arr + (i*cols) + j));  
		//printf("%d ", arr[i][j]); si se usa vizuliza de esta forma
		//dara error, usar la anterior o la sig
		printf("%d ", (arr+i)[j]);
	}  
		printf("\n");  
		}  
}

display2DArrayUnknownSize(&matrix[0][0], 2, 5);


```


Ojo seguir Buscando en el libro Understanding and Using C pointers a partir de la pagina 112