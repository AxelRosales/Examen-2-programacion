#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>
#include<stdio.h>

using namespace std;
HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
/*****************/
int i=0, partido1=0, partido2=0, partido3=0, partidoc=0;

string nombrec[3], cedulac[3], edadc[3], partido[3], nombres[100], cedulas[100], edades[100];
/******************/
void gotoxy(int x ,int y);
void cuadro(int x1, int y1, int x2, int y2);

/******************/
void gotoxy(int x ,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
void pintarfondo(int fondo, int frente) {
    int color = (fondo << 4) + frente;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void cuadro(int x1, int y1, int x2, int y2)
{
	int i;
	
	for (i=x1; i<=x2;i++)
	{
		gotoxy(i,y1); printf("%c",205);   
		gotoxy(i,y2); printf("%c",205);   
	}

	for (i=y1; i<=y2;i++)
	{
		gotoxy(x1,i); printf("%c",186);  
		gotoxy(x2,i); printf("%c",186);   
	}

	
	gotoxy(x1,y1); printf("%c",201);   
	gotoxy(x1,y2); printf("%c",200);  
	gotoxy(x2,y1); printf("%c",187);  
	gotoxy(x2,y2); printf("%c",188);  

}

void cuadropintado(int x1, int y1, int x2, int y2, int fondocolor)
{
	int i;
	pintarfondo(fondocolor, 0);
	for (i=x1; i<=x2;i++)
	{
		gotoxy(i,y1); printf("%c",205);   
		gotoxy(i,y2); printf("%c",205);   
	}

	for (i=y1; i<=y2;i++)
	{
		gotoxy(x1,i); printf("%c",186);  
		gotoxy(x2,i); printf("%c",186);   
	}

	
	gotoxy(x1,y1); printf("%c",201);   
	gotoxy(x1,y2); printf("%c",200);  
	gotoxy(x2,y1); printf("%c",187);  
	gotoxy(x2,y2); printf("%c",188);  

}
/****************/

void resultadovoto()
{
	if (partidoc = 1)
	{
	system("cls");
	SetConsoleTextAttribute (hConsoleHandle, 2);
	cuadro(2,2,80,20);
	SetConsoleTextAttribute (hConsoleHandle, 14); 
	gotoxy (3,3); cout << "****** Registro del votante ******" <<endl;
	
	gotoxy (4,6); cout << " Cedula del votante: " << cedulas[i] <<endl;
	gotoxy (4,7); cout << " Nombre del votante: " << nombres[i] <<endl;
	gotoxy (4,8); cout << " Edad del votante: " << edades[i] <<endl;
	gotoxy (4,9); cout << " Usted voto por el primer candidato: "<<endl;
	gotoxy(27,15); cout<<"<Pulse tecla para Abandonar>";
	getch();
	partido1= partido1 + 1;
	}else if (partidoc = 2)
	{
	system("cls");
	SetConsoleTextAttribute (hConsoleHandle, 2);
	cuadro(2,2,80,20);
	SetConsoleTextAttribute (hConsoleHandle, 14); 
	gotoxy (3,3); cout << "****** Registro del votante ******" <<endl;
	
	gotoxy (4,6); cout << " Cedula del votante: " << cedulas[i] <<endl;
	gotoxy (4,7); cout << " Nombre del votante: " << nombres[i] <<endl;
	gotoxy (4,8); cout << " Edad del votante: " << edades[i] <<endl;
	gotoxy (4,9); cout << " Usted voto por el segundo candidato: " <<endl;
	gotoxy(27,15); cout<<"<Pulse tecla para Abandonar>";
	getch();
	partido2= partido2 + 1;
	}else if (partidoc = 3)
	{
	system("cls");
	SetConsoleTextAttribute (hConsoleHandle, 2);
	cuadro(2,2,80,20);
	SetConsoleTextAttribute (hConsoleHandle, 14); 
	gotoxy (3,3); cout << "****** Registro del votante ******" <<endl;
	
	gotoxy (4,6); cout << " Cedula del votante: " << cedulas[i] <<endl;
	gotoxy (4,7); cout << " Nombre del votante: " << nombres[i] <<endl;
	gotoxy (4,8); cout << " Edad del votante: " << edades[i] <<endl;
	gotoxy (4,9); cout << " Usted voto por el tercer candidato: " <<endl;
	gotoxy(27,15); cout<<"<Pulse tecla para Abandonar>";
	getch();
	partido3= partido3 + 1;
	}
}

void votacion()
{

	char opcion1, sigue;
do{
		
		
					
	system("cls");
	SetConsoleTextAttribute (hConsoleHandle, 2);
	cuadro(2,2,100,30);
	SetConsoleTextAttribute (hConsoleHandle, 14); 
	
	gotoxy (3,3); cout << "** Votando **";
	
	gotoxy (6,6); cout << " Ingrese el nombre del votante: " ;
	cin >> nombres[i];
	gotoxy (6,8) ;cout << " Ingrese la cedula del votante: " ;
	cin >> cedulas[i];
	gotoxy (6,10); cout << " Ingrese la Edad del votante: " ;
	cin >> edades[i];
	gotoxy (6,13); cout << " Eliga el Partido politico a votar, 1, 2, 3: ";
    cin >> partidoc;
	
	
	   SetConsoleTextAttribute (hConsoleHandle, 15);
		gotoxy(12,25);cout << "LOS DATOS SON CORRECTOS:	(S/N)";
	   opcion1=getch();
	    if (toupper(opcion1)=='S'){
           resultadovoto();
	    }
	 
	 }while (toupper(opcion1)=='N');
	    
  
    

	
}


void ingreso()
{
	
	char opcion;
	
	do{
		
		
		system("cls");
		SetConsoleTextAttribute (hConsoleHandle, 10);
		cuadro(10,5,100,28);
		cuadro(33,1,80,3);
		SetConsoleTextAttribute (hConsoleHandle, 15);	
       gotoxy(40,02); cout << " Ingrese los Datos del candidato(Maximo 3) " <<endl;
     	
     	
 	   SetConsoleTextAttribute (hConsoleHandle, 15);
	   gotoxy(12,6); cout << " Ingrese el nombre del Candidato: " ;
 	   cin >> nombrec[i];
	
	   SetConsoleTextAttribute (hConsoleHandle, 15);
		gotoxy(12,8);cout << " Ingrese la cedula del Candidato: ";
    	cin >> cedulac[i];
	
	   SetConsoleTextAttribute (hConsoleHandle, 15);
		gotoxy(12,10);cout << " Ingrese la Edad del Candidato: ";
       cin >> edadc[i];
	
	   SetConsoleTextAttribute (hConsoleHandle, 15);
		gotoxy(12,12); cout << " Ingrese el nombre del Partido politico del Candidato: ";
	    cin >> partido[i];
	    
       
	 gotoxy(20,20); cout << "Desea ingresar otro candidato, S/N:";
     cin >> opcion;
     i++;
    }while (opcion == 'S' || opcion == 's');
}

void ganador()
{
	if(partido1 > partido2 && partido1 > partido3)
	{
		gotoxy(4,14); cout << "**** El ganador es el primer candidato ****";
	}else if(partido2 > partido1 && partido2 > partido3)
	{
		gotoxy(4,14); cout << "**** El ganador es el segundo candidato ****";
	}else if(partido3 > partido1 && partido3 > partido2)
	{
		gotoxy(4,14); cout << "**** El ganador es el tercer candidato ****";
	}
}

void resultados()
{
    system("cls");
	SetConsoleTextAttribute (hConsoleHandle, 2);
	cuadro(2,2,100,30);
	SetConsoleTextAttribute (hConsoleHandle, 14); 
	
	
    SetConsoleTextAttribute (hConsoleHandle, 15);
	gotoxy(27,3); cout<<"**** Resultados de las votaciones ****";  
	           
	gotoxy(4,6); cout<<"Cantidad de votos para el primer candidato: "  <<partido1;
	
	
	gotoxy(4,8); cout<<"Cantidad de votos para el segundo candidato: "  <<partido2;
	
	
	gotoxy(4,10); cout<<"Cantidad de votos para el tercer candidato: "  <<partido3;
	
	gotoxy(4,12); cout<<" GANADOR : "  ;ganador();
	
	gotoxy(27,25); cout<<"<Pulse tecla para Abandonar>";
	getch();
}

void registro()
{
	system("cls");
	gotoxy(40,02); cout << "** Candidatos **" << endl;

for (int indice =0 ;(indice<i);indice++)
{
	cout << "Nombre del candidato:, " << nombrec[indice];
	cout << " Cedula del candidato:, " <<cedulac[indice];
	cout << " Edad del candidato:, " <<edadc[indice];
	cout << " Partido politico del candidato:, " <<partido[indice] << endl;
}
    gotoxy(30,25); cout<<"<Pulse tecla para Abandonar>";
	getch();
}

menu()
{
	char opc,conti;
	do{
		system("cls");
		SetConsoleTextAttribute (hConsoleHandle, 10);
		cuadro(16,2,65,6); 
		cuadro(8,8,72,23);
		cuadro(8,24,72,26); 
		cuadro(15,20,27,22); 
		SetConsoleTextAttribute (hConsoleHandle, 15);
	    gotoxy(34,4);printf(" Votaciones ");
        SetConsoleTextAttribute (hConsoleHandle, 15);
	    gotoxy(15,10);printf("[1]  Ingreso de candidatos ");
		gotoxy(15,12);printf("[2]  Candidatos ");
		gotoxy(15,14);printf("[3]  Votar ");
		gotoxy(15,16);printf("[4]  Resultados de las votaciones ");
		gotoxy(16,21);printf("<[5] Salir>");
		
		SetConsoleTextAttribute(hConsoleHandle,14);
		gotoxy(15,25);printf("Su opcion es: ");
		opc=getch();

		switch(opc)
			{
			case '1': ingreso();break;
			case '2': registro(); break;
			case '3': votacion(); break;
			case '4': resultados(); break;
			case '5': 
				
			system("cls");
			gotoxy(20,10);printf("Estas seguro Que Deseas Salir del Sistema");
			SetConsoleTextAttribute (hConsoleHandle, 2);
			gotoxy(20,15);printf("Desea Continuar S/N");
			conti=getch();

			if (conti=='N' || conti=='n')
			menu();
			else if (conti=='S' || conti=='s')
			break; 
			}
		}while(opc!='5');
}

int main(int argc, char** argv) {
menu();
	return 0;
}
