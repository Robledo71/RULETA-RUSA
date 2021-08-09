#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <string.h>
using namespace std;
/*
	1. Mostrar matriz y saludar, la matriz debe de ser de 12 por 3 
	2. Pedir cantidad de apuesta 
	3. Realizar tipo de apuesta por numero, 0 y 00, por pares, impares, color, filas y columnas
	
*/
main(){
	setlocale(LC_ALL,"spanish");
	int tabla[12][3], filas=0, col = 0, cnt=0, apuesta=0, apuestaTotal = 0, opc=0, num=0, aleatorio=0, opc2=0, par=0, impar=0, color=0, posfilas=0,poscol=0, band=0;
	char ceros[3][3] = {"0","00"}; 
	char opc_ceros[3];
	
	for(filas=0;filas<12;filas++){			//rellenamos la matriz de numeros				
		for(col=0;col<3;col++){												
			cnt = cnt + 1;
			tabla[filas][col] = cnt;
		}
	}
	
	while(opc2 != 2){
		cout<<"\t\t\t RULETA AMERICANA"<<endl;
		cout<<"\t\t\t******************"<<endl;
		cout<<"\t\t\t BIENVENIDO !"<<endl;
		cout<<"\t\t\t";
		for(filas=0;filas<3;filas++){		//Se muestra 0 y 00
			for(col=0;col<3;col++){
				cout<<ceros[filas][col];
			}
		}
		cout<<endl;
		for(filas=0;filas<12;filas++){		//Se muestra la tabla
			cout<<"\t\t\t";
			for(col=0;col<3;col++){
				cout<<tabla[filas][col]<<" ";
			}
			cout<<endl;
		}
		cout<<"\n\tIngrese la cantidad a apostar: "<<endl;
		cout<<"\t";
		cin>>apuesta;		//Se ingresa la cantidad a apostar
		cout<<"\tSeleccione la manera de apostar:"<<endl;
		cout<<"\t1. Por número"<<endl;
		cout<<"\t2. Por 0 y 00"<<endl;
		cout<<"\t3. Por algún par"<<endl;
		cout<<"\t4. Por algún impar"<<endl;
		cout<<"\t5. Por color"<<endl;
		cout<<"\t6. Por fila"<<endl;
		cout<<"\t7. Por columna"<<endl;
		cout<<"\tOpción:"<<endl;
		cout<<"\t";
		cin>>opc;	//Se selecciona la manera de apostar
		while((opc<1) || (opc>7)){
			cout<<"Opción no valida, intente de nuevo..."<<endl;
			cin>>opc;
		}
		switch(opc){
			case 1:		//Por numero
				cout<<"\tIngrese al número: "<<endl;
				cout<<"\t";
				cin>>num;
				cout<<"\tPresione ENTER para girar la ruleta"<<endl;
				getch();
				aleatorio = rand()%37;		//Se escoge un numero aleatorio del 0 al 36
				cout<<"\tEl número que salio en la ruleta fue: "<<aleatorio<<endl;		//Se menciona el numero aleatorio
				if(num == aleatorio){
					cout<<"\n\tFelicidades, apuesta triplicada"<<endl;
					apuesta = apuesta * 3;		//La apuesta se triplica
					apuestaTotal = apuestaTotal + apuesta;
					cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t1. Si	2.No"<<endl;
					cout<<"\t";
					cin>>opc2;
				}else{
					cout<<"\tGana la casa, pierde su apuesta"<<endl;
					apuestaTotal = apuestaTotal - apuesta;
					cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t";
					cout<<"\t1. Si	2.No"<<endl;
					cin>>opc2;
				}
				break;
				
			case 2:		//Por 0 y 00
				fflush(stdin);		//borra memoria del buffer para que no se salte cuando se tenga que escribir la opcion
				cout<<"\tElija 0 o 00"<<endl;
				cout<<"\t";
				gets(opc_ceros);		//Comando para asignar un valor a una variable char "gets(nombre_de_la_variable_tipo_char)
				cout<<"\tPresione ENTER para girar la ruleta"<<endl;
				getch();
				aleatorio = rand()%2;
				cout<<"\tEl número que ha salido en la ruleta es: "<<ceros[aleatorio]<<endl;
				if(strcmp(opc_ceros,ceros[aleatorio]) == 0){
					cout<<"\tFelicidades, apuesta triplicada"<<endl;
					apuesta = apuesta * 3;
					apuestaTotal = apuestaTotal + apuesta;
					cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t1. Si	2.No"<<endl;
					cout<<"\t";
					cin>>opc2;
				}else{
					cout<<"\tGana la casa, pierde su apuesta"<<endl;
					apuestaTotal = apuestaTotal - apuesta;
					cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t";
					cout<<"\t1. Si	2.No"<<endl;
					cin>>opc2;
				}
				break;
				
				case 3:		//Por algun numero par
					cout<<"\tPresione ENTER para girar la ruleta"<<endl;
					getch();
					aleatorio = rand()%37;
					cout<<"\tEl número que salió en la ruleta es: "<<aleatorio<<endl;
					if(aleatorio % 2 == 0){
						cout<<"\tFelicidades! apuesta duplicada"<<endl;
						apuesta = apuesta * 2;
						apuestaTotal = apuestaTotal + apuesta;
						cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
						cout<<"\tQuiere seguir jugando?"<<endl;
						cout<<"\t1. Si	2.No"<<endl;
						cout<<"\t";
						cin>>opc2;
					}else{
						cout<<"\tGana la casa, pierde su apuesta"<<endl;
						apuestaTotal = apuestaTotal - apuesta;
						cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
						cout<<"\tQuiere seguir jugando?"<<endl;
						cout<<"\t";
						cout<<"\t1. Si	2.No"<<endl;
						cin>>opc2;
					}
					break;
					
				case 4:		//Por algun numero impar
					cout<<"\tPresione ENTER para girar la ruleta"<<endl;
					getch();
					aleatorio = rand()%37;
					cout<<"\tEl número que salió en la ruleta es: "<<aleatorio<<endl;
					if(aleatorio % 2 == 1){
						cout<<"\tFelicidades! apuesta duplicada"<<endl;
						apuesta = apuesta * 2;
						apuestaTotal = apuestaTotal + apuesta;
						cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
						cout<<"\tQuiere seguir jugando?"<<endl;
						cout<<"\t1. Si	2.No"<<endl;
						cout<<"\t";
						cin>>opc2;
					}else{
						cout<<"\tGana la casa, pierde su apuesta"<<endl;
						apuestaTotal = apuestaTotal - apuesta;
						cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
						cout<<"\tQuiere seguir jugando?"<<endl;
						cout<<"\t";
						cout<<"\t1. Si	2.No"<<endl;
						cin>>opc2;
					}
					break;
				case 5:		//Por algun color
				cout<<"\tIngrese 1 para rojos o 2 para negros: "<<endl;
				cout<<"\t";
				cin>>color;
				cout<<"\tPresione ENTER para girar la ruleta"<<endl;
				getch();
				aleatorio = rand()%1;
				aleatorio = aleatorio + 1;
				if(aleatorio == 1){
					cout<<"\tLa ruleta ha dado un color rojo!"<<endl;
				}else{
					cout<<"\tLa ruletea ha dado un color negro!"<<endl;
				}
				if(aleatorio == color){
					cout<<"\tFelicidades! apuesta duplicada"<<endl;
					apuesta = apuesta * 2;
					apuestaTotal = apuestaTotal + apuesta;
					cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t1. Si	2.No"<<endl;
					cout<<"\t";
					cin>>opc2;
				}else{
					cout<<"\tGana la casa, pierde su apuesta"<<endl;
					apuestaTotal = apuestaTotal - apuesta;
					cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t";
					cout<<"\t1. Si	2.No"<<endl;
					cin>>opc2;
				}
					break;
				case 6:		//por fila
				cout<<"\tIngrese la fila deseada del 1 al 12: "<<endl;
				cout<<"\t";
				cin>>posfilas;
				while((posfilas<1) || (posfilas>12)){
					cout<<"\tOpción invalida, intente de nuevo..."<<endl;
					cin>>posfilas;
				}
				posfilas = posfilas - 1;
				cout<<"\tPresione ENTER para girar la ruleta"<<endl;
				getch();
				aleatorio = rand()%37;
				cout<<"\tEl número que salió en la ruleta es: "<<aleatorio<<endl;
				for(filas=posfilas;filas<posfilas+1;filas++){
					for(col=0;col<3;col++){
						if(aleatorio == tabla[filas][col]){
							band=1;
						}
					}
				}
				if(band == 1){
					cout<<"\tFelicidades! apuesta duplicada"<<endl;
					apuesta = apuesta * 2;
					apuestaTotal = apuestaTotal + apuesta;
					cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t1. Si	2.No"<<endl;
					cout<<"\t";
					cin>>opc2;
				}else{
					cout<<"\tGana la casa, pierde su apuesta"<<endl;
					apuestaTotal = apuestaTotal - apuesta;
					cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t";
					cout<<"\t1. Si	2.No"<<endl;
					cin>>opc2;
				}
				band=0;
					break;
				case 7:		//por columna
				cout<<"\tIngrese la columna deseada del 1 al 3: "<<endl;
				cout<<"\t";
				cin>>poscol;
				while((poscol<1) || (poscol>3)){
					cout<<"\tOpción invalida, intente de nuevo..."<<endl;
					cin>>poscol;
				}
				poscol = poscol - 1;
				cout<<"\tPresione ENTER para girar la ruleta"<<endl;
				getch();
				aleatorio = rand()%37;
				cout<<"\tEl número que salió en la ruleta es: "<<aleatorio<<endl;
				for(filas=0;filas<12;filas++){
					for(col=poscol;col<poscol+1;col++){
						if(aleatorio == tabla[filas][col]){
							band = 1;
						}
					}
				}
				if(band == 1){
					cout<<"\tFelicidades! apuesta duplicada"<<endl;
					apuesta = apuesta * 2;
					apuestaTotal = apuestaTotal + apuesta;
					cout<<"\tSu dinero total ha incrementado a: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t1. Si	2.No"<<endl;
					cout<<"\t";
					cin>>opc2;
				}else{
					cout<<"\tGana la casa, pierde su apuesta"<<endl;
					apuestaTotal = apuestaTotal - apuesta;
					cout<<"\tSu cuenta queda en: "<<apuestaTotal<<endl;
					cout<<"\tQuiere seguir jugando?"<<endl;
					cout<<"\t";
					cout<<"\t1. Si	2.No"<<endl;
					cin>>opc2;
				}
				band=0;
					break;
		}
		system("cls");		//borra el contenido de la pantalla para que no se sature de cosas
	}
	cout<<"\t\t\tSaliendo del programa, hasta luego..."<<endl;
	getch();

}
