#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, x, y;
    printf("ASCII ezpz versi%cn 1.0\n", 162);
    printf("Opci%cn #1: Consultar el caracter ASCII imprimible de un n%cmero espec%cfico\nOpci%cn #2: Listado completo del c%cdigo ASCII\nOpci%cn #3: Cerrar el programa\nOpci%cn #9: Acerca del programa\nSeleccione la opci%cn deseada: ", 162, 163, 161, 162, 162, 162, 162,162);
    scanf("%d", &y);
        while (y!=1 && y!=2 && y!=3 && y!=9) {
            system("cls");
            printf("Opci%cn invalida\nPor favor, intente de nuevo\n", 162);
            system("pause");
            system("cls");
            printf("Opci%cn #1: Consultar el caracter ASCII el caracter ASCII imprimible de un n%cmero espec%cfico\nOpci%cn #2: Listado completo del c%cdigo ASCII\nOpci%cn #3: Cerrar el programa\nOpci%cn #9: Acerca del programa\nSeleccione la opci%cn deseada: ", 162, 163, 161, 162, 162, 162, 162,162);
            scanf("%d", &y);
        }
    if (y==1) {
        system("cls");
        printf("Escriba el n%cmero al que desea consultar su caracter ASCII imprimible: ", 163);
        scanf("%d", &x);
        while (x<=32){
            system("cls");
            printf("Los n%cmeros del 0 al 31 son caracteres ASCII de control, por tanto, no son imprimir%cn\nPor favor, intente con los caracteres del 33 al 255\n", 163, 160);
            system("pause");
            system("cls");
                printf("Escriba el n%cmero que desea consultar su caracter ASCII imprimible: ", 163);
                scanf("%d", &x);
        }
        printf("El caracter ASCII correspondiente al n%cmero %d es: %c\n", 163, x, x);
        system("pause");
        system("cls");
        main();
    }

    else if (y==2) {
        system("cls");
        printf("Listado de caracteres ASCII imprimibles\n");
        for (i=33; i<=126; i++) {
            printf("\nEl caracter ASCII correspondiente al n%cmero %d es: %c\n", 163, i, i);
        }
        for (i=128; i<=255; i++) {
            printf("\nEl caracter ASCII correspondiente al n%cmero %d es: %c\n", 163, i, i);
    }
        system("\n");
        system("pause");
        system("cls");
        main();
    }

    else if (y==3) {
        printf("\n%cGracias por usar ASCII ezpz versi%cn 1.0!\n-TheArielX\n", 173, 162);
        system("exit");
    }

    else if (y==9) {
        system("cls");
        printf("Nombre: ASCII ezpz\nVersi%cn del programa: 1.0\nFecha de lanzamiento: 13/7/2016\nSitio Web: https://github.com/TheArielX/programas-por-practica/blob/master/ASCIIezpz.c\nDesarrollado por: TheArielX\nGithub: https://github.com/TheArielX\n", 162);
        system("pause");
        system("cls");
        main();
    }
}
