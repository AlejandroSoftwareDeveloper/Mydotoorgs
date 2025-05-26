-  Error de ejecucion: Cuando el programa una vez compilado lanza un error durante la ejecucion
```c++
	int main(){
		//Error de compilacion falta el ; al final de la linea
		std::cout<< "Hola mundo" << std::endl
	}
```
-  Error de compilacion: Cuando el compilado lanza un error durante el proceso de compilacion
 ```c++
 	int main(){
		
		int a {4};
		int b {4};
		//Error de ejecucion no se puede dividir entre 0
		int c = 10 /(a - b);
		std::cout<< "El valor de c es :"<< c << std::endl
	}
```
