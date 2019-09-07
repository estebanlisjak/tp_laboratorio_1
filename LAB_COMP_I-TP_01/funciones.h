/**
*\brief Muestra el menu para el usuario y devuelve la opcion selecionada.
*\param operando A, es un valor flotante.
*\param operando B, es un valor flotante.
*\return Devuelve un valor entero.
*
*/
int Menu(float operandoA, float operandoB);

/**
*\brief Realiza la suma los valores que recibe y devuelve la misma.
*\param sumandoA, es un valor flotante.
*\param sumandoB, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Suma(float sumandoA, float sumandoB);

/**
*\brief Realiza la sustracción de los valores que recibe y devuelve la diferencia.
*\param minuendo, es un valor flotante.
*\param sustraendo, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Resta(float minuendo, float sustraendo);

/**
*\brief Realiza la multiplicacion de los valores que recibe y devuelve el producto.
*\param factorA, es un valor flotante.
*\param factorB, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Multiplicacion(float factorA, float factorB);

/**
*\brief Realiza la division de los valores que recibe y devuelve el cociente.
*\param dividendo, es un valor flotante.
*\param divisor, es un valor flotante.
*\return Devuelve un valor flotante.
*
*/
float Division(float dividendo, float divisor);

/**
*\brief Calcula el factorial del valor que recibe y devuelve el resultado.
*\param factor, es un valor flotante.
*\return Devuelve un valor entero
*
*/
int Factorial(float factor);

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
void ImprimeResultados(float oprA, float oprB, float suma, float diferencia, float producto, float cociente, short int flagDivisionOK, int factorialA, short int flagFactorialAOK, int factorialB, short int flagFactorialBOK);
