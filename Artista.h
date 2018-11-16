#ifndef ARTISTA_H
#define ARTISTA_H

#include "Cancion.h"
#include <string>
using std::string;

#include <vector>;
using std::vector;

class Artista{
	private:
		string nombreA;
		int numerorep;
		vector <Cancion*> listaC;
	public:
		Artista();
		Artista(string, int);
		string getNombreA();
		void setNombreA(string);
		int getNumerorep();
		void setNumerorep(int);
		vector <Cancion*> getLista();
		void setLista(vector <Cancion*>);
		void addCanciones(Cancion);
		~Artista();
	
};

#endif