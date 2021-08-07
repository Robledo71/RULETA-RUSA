#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
using namespace std;
/*
	1. Mostrar matriz y saludar, la matriz debe de ser de 12 por 3 
	2. Pedir cantidad de apuesta 
	3.
*/
main(){
	setlocale(LC_ALL,"spanish");
	int tabla[12][3], filas=0, col = 0, cnt=0, apuesta=0, opc=0, num=0;
	
	for(filas=0;filas<12;filas++){			//rellenamos la matriz					123
		for(col=0;col<3;col++){												//	456
			cnt = cnt + 1;
			tabla[filas][col] = cnt;
		}
	}
	cout<<"\t\t\t RULETA AMERICANA"<<endl;
	cout<<"\t\t\t******************"<<endl;
	cout<<"\t\t\t BIENVENIDO"<<endl;
	for(filas=0;filas<12;filas++){
		cout<<"\t\t\t";
		for(col=0;col<3;col++){
			cout<<tabla[filas][col]<<" ";
		}
		cout<<endl;
	}
	cout<<"\tIngrese la cantidad a apostar: "<<endl;
	cout<<"\t";
	cin>>apuesta;
	cout<<"\tSeleccione la manera de apostar:"<<endl;
	cout<<"\t1. Por número \n\t 2. 0 y 00 "<<endl;
	cout<<"Opción:"<<endl;
	cout<<"\t"<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			cout<<"Ingrese al número: "<<endl;
			cin>>num;
			
			break;
		case 2:
			
			break;
	}

	
}
