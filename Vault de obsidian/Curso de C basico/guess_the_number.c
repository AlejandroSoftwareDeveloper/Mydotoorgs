#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>      //Para obtener el id de los procesos
// #include <time.h>     

int main()
{
    int times = 5;
    int numero = 0,valor = 0;
    
    // printf("Id del proceso %d",getpid());

    printf("Hola juguemos un juego tienes 5 oportunidades para adivinar un numero del 1 al 50 \n Deseas jugar \n [1] - Si o [2] - No \n");
    scanf("%d",&numero);

    if(numero == 1){

        srand(getpid());
        numero = (rand() % 50) + 1;

        while (times > 0) {
            printf("Seleccione un numero: "); 
            scanf("%d",&valor);

            if(valor == numero){
                printf("Felicidades el numero era %d\n",valor);
                break;
            }

            if(times == 1){
                printf("Lo siento has perdido el numero era %d\n",numero);
                break;
            }

            if(valor < 0 || valor > 50){
                times -= 1;
                printf("Valor diferente a los valores preestablecidos, te quedan %d intento(s) \n",times);
                continue;
            }

            if(times > 1){
                times -= 1;
                printf("%s un poco pero estas cerca te quedan %d intento(s) \n",valor > numero ?"Te pasaste":"Te falta",times);
                continue;
            }   
        }
    }
    printf("Gracias por jugar.\n");
    return 0;
}


