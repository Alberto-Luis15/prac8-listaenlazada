#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct NoDo{
	int dato;
	NoDo *sig, *anterior;
	NoDo(int Dato1){
		dato=Dato1;
		sig=NULL;
		}
};

void adherir(struct NoDo*&, int);
void mostrar(struct NoDo*& lista);
void mostrar1(struct NoDo*& lista);

int main(int argc, char** argv){
	int option, add;
	struct NoDo *lista(0);
	while (option!=3){
	
	cout<<"Selecciona una opcion del Menu"<<endl;
	cout<<"1. Llenar nodos"<<endl;
	cout<<"2. Mostrar datos de nodos"<<endl;
	cout<<"3. Exit"<<endl;
	cin>>option;
	switch (option){
		case 1:
			cout<<"Llenar nodos: "<<endl;
			cin>>add;
			adherir(lista,add);
			break;
		case 2:
			cout<<"Mostrando datos: "<<endl;
			mostrar(lista);
			mostrar1(lista);
			break;
		case 3:
			cout<<"Salir del programa: "<<endl;
		default: 
			cout<<".:Bye:. presiona una tecla"<<endl;
			break;
			
	}
}
	
	
	return 0;
}

void adherir(NoDo*& lista, int add)
{
	NoDo *nuevo=new NoDo(0);
	nuevo->anterior=NULL;
	nuevo->dato=add;
	nuevo->sig=NULL;
	if(lista==NULL)lista=nuevo;
	else{
		NoDo *auxiliar=lista;
		while(auxiliar->sig!=NULL){
			auxiliar=auxiliar->sig;
		}
		nuevo->anterior=auxiliar;
		auxiliar->sig=nuevo;
	}
} 
void mostrar(NoDo*& lista)
{
	NoDo *auxiliar=lista;
	while(auxiliar!=NULL){
		cout<<auxiliar->dato <<" ";
		auxiliar=auxiliar->sig;
		
 }
 	cout<<endl;
}
void mostrar1(NoDo*& lista)
{
	NoDo *auxiliar=lista;
	while(auxiliar->sig!=NULL){
		auxiliar=auxiliar->sig;
}
	while(auxiliar!=NULL){
		cout<<auxiliar->dato <<" ";
		auxiliar=auxiliar->anterior;
 } 
 cout<<endl;
} 
