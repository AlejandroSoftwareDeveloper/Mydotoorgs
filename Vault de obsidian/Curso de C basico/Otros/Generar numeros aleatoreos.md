```c
	#include <time.h>
	#include <unistd.h>     //Aqui esta la funcion getpid()
	#include <stdlib.h>
	
	int main(){
	  srand(getpid());     //genera una template de numero aletorio
	  int num = rand() % 20; //genera numero del 0 al 19
    printf("Id del proceso %d",getpid());
		return 0;
	}
	
```