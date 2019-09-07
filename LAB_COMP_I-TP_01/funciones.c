#include <stdio.h>

/**
*\brief Muestra el menu para el usuario y devuelve la opcion selecionada.
*\param operando A, es un valor flotante.
*\param operando B, es un valor flotante.
*\return Devuelve un valor entero.
*
*/
int Menu(float operandoA, float operandoB)
{
    printf("\n************************************************");
    printf("\n**************   CALCULADORA   *****************");
    printf("\n************************************************");
    printf("\n* (1) : Ingresar primer  operando (A = %.2f)" , operandoA);
    printf("\n************************************************");
    printf("\n* (2) : Ingresar segundo operando (B = %.2f)" , operandoB);
    printf("\n************************************************");
    printf("\n* (3) : Calcular todas las operaciones         *");
    printf("\n************************************************");
    printf("\n* (4) : Informar resultados                    *");
    printf("\n************************************************");
    printf("\n* (5) : Salir del programa                     *");
    printf("\n************************************************");

    int opcionSelecionada;
    printf("\nOpcion selecccionada: ");
    scanf("%d" , &opcionSelecionada);

    return (opcionSelecionada);
}

/**
*\brief Realiza la suma los valores que recibe y devuelve la misma.
*\param sumandoA, es un valor flotante.
*\param sumandoB, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Suma(float sumandoA, float sumandoB)
{
	float suma;
	suma = sumandoA + sumandoB;
	return(suma);
}

/**
*\brief Realiza la sustración de los valores que recibe y devuelve la diferencia.
*\param minuendo, es un valor flotante.
*\param sustraendo, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Resta(float minuendo, float sustraendo)
{
	float diferencia;
	diferencia = minuendo - sustraendo;
	return (diferencia);
}

/**
*\brief Realiza la multiplicacion de los valores que recibe y devuelve el producto.
*\param factorA, es un valor flotante.
*\param factorB, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Multiplicacion(float factorA, float factorB)
{
	float producto;
	producto = factorA * factorB;
	return(producto);
}

/**
*\brief Realiza la division de los valores que recibe y devuelve el cociente.
*\param dividendo, es un valor flotante.
*\param divisor, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Division(float dividendo, float divisor)
{
	float cociente;
	cociente = dividendo / divisor;
	return (cociente);
}

/**
*\brief Calcula el factorial del valor que recibe y devuelve el resultado.
*\param factor, es un valor flotante.
*\return Devuelve un valor entero
*
*/
int Factorial(float factor)
{
	int factorParteEntera = (int)factor;
	int factorial = 1;

	for(int i = 1; i <= factorParteEntera; i++)
	{
		factorial *= i;
	}

	return (factorial);
}

/**
*\brief Imprime en pantalla los resultados de las operaciones: Adición, Sustracción, Division, Multiplicacion y el Factorial. No devuelve ningún valor.
*\param oprA, representa al valor del operador A. Es un valor flotante.
*\param oprB, representa al valor del operador B. Es un valor flotante.
*\param suma, representa al valor de la operción suma. Es un valor flotante.
*\param diferencia, representa al valor de la operción sustracción. Es un valor flotante.
*\param producto, representa al valor de la operción multiplicación. Es un valor flotante.es un valor flotante.
*\param cociente, representa al valor de la operción division. Es un valor flotante.
*\param flagDivisionOK, indica que la division se realizó correctamente si su valor "1" y "0" en caso contrario. Es un valor entero corto.
*\param factorialA, representa al resultado de la operación factorial. Es un valor entero.
*\param flagFactorialAOK, indica que la operación factorial se realizó correctamente si su valor "1" y "0" en caso contrario. Es un valor entero corto.
*\param factorialB, representa al resultado de la operación factorial. Es un valor entero.
*\param flagFactorialBOK, indica que la operación factorial se realizó correctamente si su valor "1" y "0" en caso contrario. Es un valor entero corto.
*\return No devuelve ningún valor.
*
*/
void ImprimeResultados(float oprA, float oprB, float suma, float diferencia, float producto, float cociente, short int flagDivisionOK, int factorialA, short int flagFactorialAOK, int factorialB, short int flagFactorialBOK)
{
    printf("\n************************************************");
    printf("\n* Resultados de las operaciones realizadas     *");
    printf("\n************************************************");

    printf("\n* Suma: (A + B) = (%.2f + %.2f) = %.2f\n", oprA,oprB, suma);

    printf("\n* Resta: (A - B) = (%.2f - %.2f) = %.2f\n", oprA, oprB, diferencia);

    printf("\n* Multiplicacion: (A * B) = (%.2f * %.2f) = %.2f\n", oprA, oprB, producto);

    if(flagDivisionOK == 1)
    {
        printf("\n* Division: (A / B) = (%.2f / %.2f) = %.2f\n", oprA, oprB, cociente);
    }
    else
    {
        printf("\n* Division: No es posible dividir por cero!    *\n");
    }

    if(flagFactorialAOK == 1)
    {
        printf("\n* Factorial: (A!) = (%d!) = %d\n" , (int)oprA, factorialA);
    }
    else
    {
        printf("\nFactorial A: No es posible calcular el factorial de un numero negativo *\n");
    }

    if(flagFactorialBOK == 1)
    {
        printf("\n* Factorial: (B!) = (%d) = %d\n" , (int)oprB, factorialB);
    }
    else
    {
        printf("\nFactorial B: No es posible calcular el factorial de un numero negativo *\n");
    }

    printf("\n************************************************\n");
}


