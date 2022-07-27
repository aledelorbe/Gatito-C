#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int turnos;
char gato[3][3];  
int ganar;


void iniciarMatriz()
{
	int i,j;
	int k=1;
	
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			gato[j][i]=k+'0';
			k++;		
		}
	}
}




void imprimir()
{
	int i,j;
	
	for(i=0;i<3;i++)
	{
	 	for(j=0;j<3;j++)
		{
			printf("%c ",gato[i][j]);	
		}
	 	printf("\n");
	}	
}


int verGanar()
{		
	if( (gato[0][0]=='x' && gato[0][1]=='x' && gato[0][2]=='x') || (gato[1][0]=='x' && gato[1][1]=='x' && gato[1][2]=='x') 
		|| (gato[2][0]=='x' && gato[2][1]=='x' && gato[2][2]=='x') || (gato[0][0]=='x' && gato[1][0]=='x' && gato[2][0]=='x')
		|| (gato[0][1]=='x' && gato[1][1]=='x' && gato[2][1]=='x') || (gato[0][2]=='x' && gato[1][2]=='x' && gato[2][2]=='x')
		|| (gato[0][0]=='x' && gato[1][1]=='x' && gato[2][2]=='x') || (gato[0][2]=='x' && gato[1][1]=='x' && gato[2][0]=='x') )
	{
		printf("\n ¡Felicidades! Has ganado.");	
		ganar=1;
		return 0;
	}
		
	if(turnos==9)
	{
		printf("\n\tEmpate.");
		ganar=1;
		return 0;
	}
		
	if( (gato[0][0]=='0' && gato[0][1]=='0' && gato[0][2]=='0') || (gato[1][0]=='0' && gato[1][1]=='0' && gato[1][2]=='0') 
		|| (gato[2][0]=='0' && gato[2][1]=='0' && gato[2][2]=='0') || (gato[0][0]=='0' && gato[1][0]=='0' && gato[2][0]=='0')
		|| (gato[0][1]=='0' && gato[1][1]=='0' && gato[2][1]=='0') || (gato[0][2]=='0' && gato[1][2]=='0' && gato[2][2]=='0')
		|| (gato[0][0]=='0' && gato[1][1]=='0' && gato[2][2]=='0') || (gato[0][2]=='0' && gato[1][1]=='0' && gato[2][0]=='0') )
	{
		printf("\n ¡Felicidades! Has ganado.");	
		ganar=1;
		return 0;
	}
		
	return 0;	
}



int evaluacion(char tiro, int jugador)
{
	int completo=0;
	
	if(jugador==1) //jugador 1 son las x
	{	
		do
		{
			if(tiro=='1')
			{
				if(gato[0][0]=='0' || gato[0][0]=='x')
				{ 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[0][0]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='2')
			{
			    if(gato[0][1]=='0' || gato[0][1]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[0][1]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='3')
			{
			    if(gato[0][2]=='0' || gato[0][2]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[0][2]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='4')
			{
			    if(gato[1][0]=='0' || gato[1][0]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[1][0]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='5')
			{
			    if(gato[1][1]=='0' || gato[1][1]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[1][1]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='6')
			{
			    if(gato[1][2]=='0' || gato[1][2]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[1][2]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='7')
			{
			    if(gato[2][0]=='0' || gato[2][0]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[2][0]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='8')
			{
			    if(gato[2][1]=='0' || gato[2][1]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[2][1]='x';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='9')
			{
			    if(gato[2][2]=='0' || gato[2][2]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[2][2]='x';
				    imprimir();
				    break;
				}
			}

		}while(completo!=1);			
	}
	else
	{
		do
		{
	
			if(tiro=='1')
			{
				if(gato[0][0]=='0' || gato[0][0]=='x')
				{ 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[0][0]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='2')
			{
			    if(gato[0][1]=='0' || gato[0][1]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[0][1]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='3')
			{
			    if(gato[0][2]=='0' || gato[0][2]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[0][2]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='4')
			{
			    if(gato[1][0]=='0' || gato[1][0]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[1][0]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='5')
			{
			    if(gato[1][1]=='0' || gato[1][1]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[1][1]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='6')
			{
			    if(gato[1][2]=='0' || gato[1][2]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[1][2]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='7')
			{
			    if(gato[2][0]=='0' || gato[2][0]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[2][0]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='8')
			{
			    if(gato[2][1]=='0' || gato[2][1]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[2][1]='0';
				    imprimir();
				    break;
				}
			}
			
			if(tiro=='9')
			{
			    if(gato[2][2]=='0' || gato[2][2]=='x')
			    { 
				    printf("\nCasilla ocupada. Vuelve a tirar.\n");
				    sleep(1);
				    return 1;
				}
				else
				{
				    system("CLS");
				    turnos++;	
				    gato[2][2]='0';
				    imprimir();
				    break;
				}
			}
		}while(completo!=1);
	}
	
	return verGanar();
}


int tiro(int jugador)
{
	char tiro;
	
	do{
		fflush(stdin);	
		printf("\nJugador %d, haga su tiro, indique la casilla donde deseas tirar: ",jugador);
		scanf("%c",&tiro);
				
	}while(evaluacion(tiro,jugador)!=0);
	
	return 0;
}



void gatito()
{
	char eleccion;
	int resp;
	
	do{
		system("CLS");
		turnos=0;
		ganar=0;
		
		iniciarMatriz();
		imprimir();
	
		do{
			system("COLOR 4");
			resp=tiro(1);
			if(ganar==1)
				break;
			
			system("COLOR 1");
			resp=tiro(2);
			if(ganar==1)
				break;
		}while(resp!=1);	
		
		fflush(stdin);
		printf("\n\nDeseas volver a jugar?(S/N): ");
		scanf("%c",&eleccion);
	}while(eleccion=='s' || eleccion=='S');
	
	printf("\nBueno :c\n");
	sleep(1);
}



int main()
{

gatito();

return 0;	
}





