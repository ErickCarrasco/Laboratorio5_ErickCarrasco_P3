#include "Artista.h"
#include "Cancion.h"

#include <vector>;
using std::vector;

#include <string>
using std::string;

Artista::Artista(){
	nombreA="None";
	numerorep=0;
}

Artista::~Artista(){
	cout<<"Data formatted"<<endl;
}

Artista::Artista(string nombreA, int numerorep){
	this->nombreA=nombreA;
	this->numerorep=numerorep;
}

string Artista::getNombreA(){
	return nombreA;
}

void Artista::setNombreA(string nombreA){
	this->nombreA=nombreA;
}

int Artista::getNumerorep(){
	return numerorep;
}

void Artista::setNumerorep(int numerorep){
	this->numerorep=numerorep;
}

vector <Cancion*> Artista::getLista(){
	return listaC;
}

void Artista::setLista(vector <Cancion*>){
	this->listaC=listaC;
}

void Artista::addCanciones(Cancion e){
	listaC.push_back(e);
}