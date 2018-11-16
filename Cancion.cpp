#include "Cancion.h"
#include <string>

using std::string;

Cancion::Cancion(){
	titulo = "Empty";
	genero = "unknown";
	duracion = 0;
	repeticiones=0;
}

Cancion::Cancion(string Titulo, string Genero, double Duracion, int Repeticiones){
	this->titulo=Titulo;
	this->genero=Genero;
	this->duracion=Duracion;
	this->repeticiones=Repeticiones;
}

string Cancion::getGenero(){
	return genero;
}

void Cancion::setGenero(string genero){
	this->genero=genero;
}

string Cancion::getTitulo(){
	return titulo;
}

void Cancion::setTitulo(string titulo){
	this->titulo=titulo;
}

double Cancion::getDuracion(){
	return duracion;
}

void Cancion::setDuracion(double duracion){
	this->duracion=duracion;
}

int Cancion::getRepeticiones(){
	return repeticiones;
}

void Cancion::setRepeticiones(int repeticiones){
	this->repeticiones=repeticiones;
}