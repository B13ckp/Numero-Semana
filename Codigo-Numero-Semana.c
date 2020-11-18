/* Jhovanny Daniel Beltran Lugo */

#include <stdio.h>

int main(){
	
	int numero;
	
	printf("digita un numero del 1 al 7: ");
	scanf("%i",&numero);
	
	if (numero == 1 ){
    printf("Lunes");
  }else if (numero == 2){
    printf("martes");
  }else if (numero == 3){
    printf("Miércoles");
  }else if (numero == 4){
    printf("Jueves");
  }else if (numero == 5){
    printf("Viernes");
  }else if (numero == 6){
    printf("Sabado");
  }else if (numero == 7){
    printf("Domingo");
  }

    return 0;
}
