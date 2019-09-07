#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    //Declaración de variables:
    //Variables enteras.
    int opnSelec; //Contiene la opción seleccionada.
    int factA; //Contiene el primer operando.
    int factB; //Contiene el segundo operando.

    //Variables flotantes.
    float oprA = 0;
    float oprB = 0;
    float sum;
    float dif;
    float prod;
    float cnte;

    //Banderas de verificación. Variables eneteras cortas.
    short int flagOprACargado = 0;
    short int flagOprBCargado = 0;
    short int flagDivOK = 0;
    short int flagFactAOK = 0;
    short int flagFactBOK = 0;
    short int flagCalculosRealizados = 0;

    //Variable caracter.
    char salir = 'n';

    do
    {
        opnSelec = Menu(oprA, oprB);
        switch(opnSelec)
        {
            //Opción para ingresar el primer operando.
            case 1:
            system("cls");
            printf("\n************************************************");
            printf("\n* Ingresar 1er operando A: ");
            scanf("%f", &oprA);
            flagOprACargado = 1;
            system("cls");
            break;

            //Opción para ingresar el segundo operando.
            case 2:
            system("cls");
            printf("\n************************************************");
            printf("\n* Ingresar 2do operando B: ");
            scanf("%f", &oprB);
            flagOprBCargado = 1;
            system("cls");
            break;

            //Opción que realiza el calculo de todas las operaciones.
            case 3:
            if((flagOprACargado == 1) && (flagOprBCargado == 1))
            {
                //Operación suma
                sum = Suma(oprA, oprB);

                //Operación resta
                dif = Resta(oprA, oprB);

                //Operación Multiplicación
                prod = Multiplicacion(oprA, oprB);

                //Operación División
                if(oprB != 0)
                {
                    cnte = Division(oprA, oprB);
                    flagDivOK = 1;
                }

                //Operación factorial de A
                if(oprA >= 0)
                {
                    factA = Factorial(oprA);
                    flagFactAOK = 1;
                }

                //Operación factorial de B
                if(oprB >= 0)
                {
                    factB = Factorial(oprB);
                    flagFactBOK = 1;
                }

                flagCalculosRealizados = 1;

                system("cls");
                printf("\n************************************************");
                printf("\n* Todas las operaciones fueron calculadas!     *");
                printf("\n************************************************\n");
            }
            else
            {
                if((flagOprACargado == 0) && (flagOprBCargado == 0))
                {
                    system("cls");
                    printf("\n************************************************************");
                    printf("\n* Los operadores no fueron cargados, vuelva a intentarlo!  *");
                    printf("\n************************************************************\n");
                }
                else
                {

                    if(flagOprACargado == 0)
                    {
                        system("cls");
                        printf("\n******************************************************");
                        printf("\n* El operando A no fue cargado, vuelva a intentarlo! *");
                        printf("\n******************************************************\n");
                    }
                    else
                    {
                        system("cls");
                        printf("\n******************************************************");
                        printf("\n* El operando B no fue cargado, vuelva a intentarlo! *");
                        printf("\n******************************************************\n");
                    }
                }
            }
            break;

            //Opción que imprime en pantalla todos los resultados de las operaciones realizadas.
            case 4:

            if(flagCalculosRealizados == 1)
            {
                system("cls");

                ImprimeResultados(oprA, oprB, sum, dif, prod, cnte, flagDivOK, factA, flagFactAOK, factB, flagFactBOK);
            }
            else
            {
                system("cls");
                printf("\n************************************************************");
                printf("\n* No han podido imprimirse los resultados ya que estos no  *");
                printf("\n* fueron calculados, vuelva a intentarlo!                  *");
                printf("\n************************************************************\n");
            }
            break;

            //Opción salir del programa.
            case 5:
            system("cls");
            printf("\n************************************************");
            printf("\n* El programa finalizo correctamenete!         *");
            printf("\n************************************************");
            salir = 's';
            break;

            //Opción por defecto.
            default:
            system("cls");
            printf("\n************************************************************");
            printf("\n* La opcion ingresada no es correcta, vuelva a intentarlo! *");
            printf("\n************************************************************\n");
        }

	}
	while(salir != 's');

return 0;

}
