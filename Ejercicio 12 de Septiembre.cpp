#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	struct Nodo *siguiente;
}*inicio,*aux,*actual; 

void  insertarNodo(int);
void mostrarNodos();
int main(int argc, char** argv){
	inicio=NULL;


	insertarNodo(10);
	insertarNodo(20);
	insertarNodo(30);
	
	mostrarNodos();
	
	cin.get();
	return 0;
}

void insertarNodo(int valor){

	actual=inicio;	

	if(actual=NULL){
		aux=new Nodo();
		aux->dato=valor;
		aux->siguiente=NULL;
		inicio=aux;
	}else{
		}while(actual->siguiente!=NULL){
			actual=actual->siguiente;
		}
			aux=new Nodo();
			aux->dato=valor;
			aux->siguiente=NULL;
			actual->siguiente=aux;
}



void mostrarNodos(){
	actual=inicio;
	while(actual!=NULL){
		cout<<" -> "<<actual->dato<<" ";
		actual=actual->siguiente;
	}
}

void ordenarNodos(){
	if(inicio!=NULL){
		anterior=NULL;
		aux=NULL;
		actual=inicio;
		while((actual->siguiente!=NULL)&&(actual->dato <actual->actual->siguiente->dato)){
			anterior=actual;
			actual=actual->siguiente;
		
		}
		if(actual->siguiente==NULL){
			aux=actual;
			actual=actual->siguiente;
			inicio=actual;
			aux->siguiente=aux;
		}else{
			aux=actual;
			actual=actual->siguiente;
			incio=actual;
			aux->siguiente=actual->siguiente;
			actual->siguiente=aux;
		}else{
			aux=actual;
			actual=actual->siguiente;
			anterior->siguiente=actual;
			aux->siguiente=actual->siguiente;
			actual->siguiente=aux;
			
		}
	}
}
