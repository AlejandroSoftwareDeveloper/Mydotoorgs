- C++ es un lenguaje multiparadigma compilado, que debido a la compilacion genera un codigo de bajo nivel cercano al hardware.
## Ejemplo de codigo de c++

```c++
	#include <iostream>

	consteval int get_value(){
		return 3;
	}

	int main(){
		constexp int value = get_value();
		std::cout<< "value : " << value << std::end;
		return 0;
	}
```

## Como funciona un programa en c++
- Un programa en c++ se lee de arriba hacia abajo y de izquerda a derecha
- Para que se pueda ejecutar el codigo se debe compilar con ![[Herramientas a installar]] como codigo anterior o cualquier codigo similar se debe tener como partida una funcion *main*.
- El proceso para genera un codigo final se llama compilacion y tiene cuatro fases:
1. Preprosesado:
    - Se copia a todas las funciones del preprocesador en el lugar donde se invocan.  
2. Compilado
    - Se genera el codigo objeto de todo los archivo cpp incluyendo sus headers (.h).
3. Ensamblado
    - Se convierte todos los archivo de codigo objetos a codigo maquina.
4. Enlazado
    - Se unen todos los archivos en codigo maquina para hacer un solo objeto ejecutable. 

 ## Compilar con gcc
 ```shell
   
   g++ -c main.cpp 

   g++ -o main.o main.exe

   g++ -o main.cpp main.exe -Wall

```

  - En los ejemplos anteriores se ven tres formas de compilar en c/c++
  1. Compila a codigo objeto 
  2. Compila de codigo obj a exe
  3. Compila directamente de cpp a exe 
  4. En la tercera linea -Wall es una bandera (flag) que se usa para ejcutar la compilacion de cierta forma en este caso la flag -Wall es para detectar errores.




