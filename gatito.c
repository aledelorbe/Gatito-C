#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int turnos, ganar;
char gato[3][3];  


/* 
Funcion la cual inicializa una matriz 3x3 con los numeros del 1 al 9. De esta manera un usuario podra seleccionar 
cualquiera de las 9 posiciones que hay en el tablero para poder tirar.
*/
void iniciarMatriz()
{
	int i, j; 
	int k = 1; 
	
	for(j = 0; j < 3; j++)
	{
		for(i = 0; i  < 3; i++)
		{
			gato[j][i] = k + '0'; 
			k++; 		
		}
	}
}



/*
Funcion la cual unicamente se encarga de imprimir el tablero. Esta funcion se mandara a llamar 
cada que un jugador haya realizado un tiro.
*/
void imprimir()
{
	int i, j; 
	
	for(i = 0; i < 3; i++)
	{
	 	for(j = 0; j < 3; j++)
		{
			printf("%c ", gato[i][j]); 	
		}
	 	printf("\n"); 
	}	
}


/*
Funcion la cual se encarga de evaluar si alguno de los dos jugadores ya ha ganado el juego o si el juego termino 
en un empate.
*/
int verGanar()
{		
	//Evaluacion de todas las posibles maneras en las maneras en las que haya podido ganar el jugador 1.
	if( (gato[0][0] == 'x' && gato[0][1] == 'x' && gato[0][2] == 'x') || (gato[1][0] == 'x' && gato[1][1] == 'x' && gato[1][2] == 'x') 
		|| (gato[2][0] == 'x' && gato[2][1] == 'x' && gato[2][2] == 'x') || (gato[0][0] == 'x' && gato[1][0] == 'x' && gato[2][0] == 'x')
		|| (gato[0][1] == 'x' && gato[1][1] == 'x' && gato[2][1] == 'x') || (gato[0][2] == 'x' && gato[1][2] == 'x' && gato[2][2] == 'x')
		|| (gato[0][0] == 'x' && gato[1][1] == 'x' && gato[2][2] == 'x') || (gato[0][2] == 'x' && gato[1][1] == 'x' && gato[2][0] == 'x') )
	{
		printf("\n ¡Felicidades! Has ganado."); 	
		ganar = 1; 
		return 0; 
	}
		
	//Evaluar si hubo un empate.
	if(turnos == 9)
	{
		printf("\n\tEmpate."); 
		ganar = 1; 
		return 0; 
	}
		
	//Evaluacion de todas las posibles maneras en las maneras en las que haya podido ganar el jugador 2.
	if( (gato[0][0] == '0' && gato[0][1] == '0' && gato[0][2] == '0') || (gato[1][0] == '0' && gato[1][1] == '0' && gato[1][2] == '0') 
		|| (gato[2][0] == '0' && gato[2][1] == '0' && gato[2][2] == '0') || (gato[0][0] == '0' && gato[1][0] == '0' && gato[2][0] == '0')
		|| (gato[0][1] == '0' && gato[1][1] == '0' && gato[2][1] == '0') || (gato[0][2] == '0' && gato[1][2] == '0' && gato[2][2] == '0')
		|| (gato[0][0] == '0' && gato[1][1] == '0' && gato[2][2] == '0') || (gato[0][2] == '0' && gato[1][1] == '0' && gato[2][0] == '0') )
	{
		printf("\n ¡Felicidades! Has ganado."); 	
		ganar = 1; 
		return 0; 
	}
		
	return 0; 	
}


/*
Funcion que se encarga de sustituir en la posicion que indique determinado jugador ya sea una equis o un circulo, 
segun sea el caso. Tambien le avisara al jugador si donde desea tirar, la casilla ya esta ocupada.
*/
int evaluacion(char tiro, int jugador)
{
	int completo = 0; 
	
	if(jugador == 1) //jugador 1 son las x
	{	
		do
		{
			if(tiro == '1')
			{
				if(gato[0][0] == '0' || gato[0][0] == 'x')
				{ 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[0][0] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '2')
			{
			    if(gato[0][1] == '0' || gato[0][1] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[0][1] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '3')
			{
			    if(gato[0][2] == '0' || gato[0][2] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[0][2] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '4')
			{
			    if(gato[1][0] == '0' || gato[1][0] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[1][0] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '5')
			{
			    if(gato[1][1] == '0' || gato[1][1] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[1][1] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '6')
			{
			    if(gato[1][2] == '0' || gato[1][2] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[1][2] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '7')
			{
			    if(gato[2][0] == '0' || gato[2][0] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[2][0] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '8')
			{
			    if(gato[2][1] == '0' || gato[2][1] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[2][1] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '9')
			{
			    if(gato[2][2] == '0' || gato[2][2] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[2][2] = 'x'; 
				    imprimir(); 
				    break; 
				}
			}

		}while(completo != 1); 			
	}
	else
	{
		do
		{
	
			if(tiro == '1')
			{
				if(gato[0][0] == '0' || gato[0][0] == 'x')
				{ 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[0][0] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '2')
			{
			    if(gato[0][1] == '0' || gato[0][1] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[0][1] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '3')
			{
			    if(gato[0][2] == '0' || gato[0][2] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[0][2] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '4')
			{
			    if(gato[1][0] == '0' || gato[1][0] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[1][0] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '5')
			{
			    if(gato[1][1] == '0' || gato[1][1] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[1][1] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '6')
			{
			    if(gato[1][2] == '0' || gato[1][2] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[1][2] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '7')
			{
			    if(gato[2][0] == '0' || gato[2][0] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[2][0] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '8')
			{
			    if(gato[2][1] == '0' || gato[2][1] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[2][1] = '0'; 
				    imprimir(); 
				    break; 
				}
			}
			
			if(tiro == '9')
			{
			    if(gato[2][2] == '0' || gato[2][2] == 'x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n"); 
				    sleep(1); 
				    return 1; 
				}
				else
				{
				    system("CLS"); 
				    turnos++; 	
				    gato[2][2] = '0'; 
				    imprimir(); 
				    break;
				}
			}
		}while(completo != 1);
	}
	
	// Despues de que un jugador tira, se evalua si este ya gano o resulto en un empate.
	return verGanar();
}


/*
Funcion para solicitar a determinado jugador, la posicion donde desea tirar.
*/
int tiro(int jugador)
{
	char tiro;
	
	do{
		fflush(stdin);	
		printf("\nJugador %d, haga su tiro, indique la casilla donde deseas tirar: ", jugador);
		scanf("%c",&tiro);
				
	}while(evaluacion(tiro,jugador) != 0);
	
	return 0;
}


/*
Funcion para mandar a llamar a todas las demas funciones anteriores. Se coloco en una funcion aparte y no dentro del main, para que 
esta funicon pueda ser "portable".
*/
void gatito()
{
	char eleccion;
	int resp;
	
	do{
		system("CLS");
		turnos = 0;
		ganar = 0;
		
		iniciarMatriz();
		imprimir();
	
		do{
			system("COLOR 4");
			resp=tiro(1);
			if(ganar == 1)
				break;
			
			system("COLOR 1");
			resp=tiro(2);
			if(ganar == 1)
				break;
		}while(resp != 1);	
		
		fflush(stdin);
		printf("\n\nDeseas volver a jugar?(S/N): ");
		scanf("%c",&eleccion);
	}while(eleccion == 's' || eleccion == 'S');
	
	printf("\nBueno :c\n");
	sleep(1);
}



int main()
{

gatito();

return 0;	
}





