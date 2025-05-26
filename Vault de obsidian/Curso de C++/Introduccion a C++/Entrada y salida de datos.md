- La entrada y salida de datos se realiza con las bibliotecas *iostream*
```c++
	#include <iostream> // Esta biblioteca se usa para entrada y salida de datos 
	#include <ionmanip> // Esta biblioteca se usa para std::precision
	/*
	 // Se puede usar un espacio de nombre para omitir el uso de std:: delante de las 
        funciones de entrada y salida de teclado (se explicara mas adelantes)*/
	//ejemplo
	using namespace std;
	int main(int argc,char **argv){
		// En los ejemplos siguientes se muestran algunas de las entradas y salidas 
	    
	    // El ejemplo sig es una salida de teclado;
		// Asi se usa sin el namespace
		std::cout << "Hola" <<std::endl; // <-- endl es marca un final de linea
	   
	   //Asi se usa con namespace
		cout << "Hola" <<endl;

		//Funcion de entrada de teclado que recibe un dato
		std::cin >> entrada;

		std::cout      // Imprime en consola el mensaje
		std::cin       // Recibe un mensaje de la console por el teclado
		std::cerr      // Imprime errores en la consola
		std::clog      // Imprime mensaje de registros en la consola 
		std::getline(std::cin,nombre_de_la_variable)
        //El ejemplo anterior se usa para leer cadena con espacios 
	    //El sig ejemplo permite leer varias variables en una linea
		int age {0};
		std::string name;
		std::cin >> name >> age;
		std::precision(20); // Para controlar la precision de std::cout 
		std::boolalpha      // Da salida de true o false en el cout
	}

```