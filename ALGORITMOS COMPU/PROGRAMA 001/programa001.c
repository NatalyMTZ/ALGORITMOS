#include <stdio.h>
#include<stdbool.h>

    int n=0;
    int b=0;
    int i=0;
    int a [100];
    int num = 0;
    int cont = 0;
    bool bandera;

void captura(){
    printf("Ingresa el tamanio del arreglo: ");
    scanf("%d, &n ", &n);

    for (i=0; i<n; i++){
        printf("Ingrese el valor: \n");
        scanf("%d, &num", &num);
        a[i] = num;
    }
    printf("Valor a buscar: \n");
    scanf("%d, &b", &b);
}

void busqueda(){
    bandera=false;
    for(i=0; i<n; i++){
        if(a[i]==b){
            cont++;
            bandera=true;
        }
    }
}

void mostrar(){
    if (bandera == true){
        printf("Existe \n");
        printf("Contador: %d \n", cont);
    }else{
        printf("No existe el numero: %d \n", b);
    }
}

int main(){
    captura();
    busqueda();
    mostrar();
}
