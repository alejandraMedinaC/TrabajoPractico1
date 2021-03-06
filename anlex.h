/*********** Librerias utilizadas **************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/************* Definiciones ********************/

//Codigos
#define LITERAL_CADENA 256
#define LITERAL_NUM 257
#define COMA 258
#define DOS_PUNTOS 259
#define L_LLAVE 260
#define R_LLAVE 261
#define L_CORCHETE 262
#define R_CORCHETE 263
#define PR_TRUE 264
#define PR_FALSE 265
#define PR_NULL 266
// Fin Codigos
#define TAMBUFF 5
#define TAMLEX 50
#define TAMHASH 101 


/************* Estructuras ********************/

typedef struct entrada{
	//definir los campos de 1 entrada de la tabla de simbolos
	int compLex;
	char lexema[TAMLEX];	
	struct entrada *tipoDato; // null puede representar variable no declarada	
	// aqui irian mas atributos para funciones y procedimientos...
	
} entrada;

typedef struct {
	int compLex;
	entrada *pe;
} token;

/************* Prototipos ********************/
void insertar(entrada e);
entrada* buscar(const char *clave);
void initTabla();
void initTablaSimbolos();
void sigLex();


