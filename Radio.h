#ifndef RADIO_H
#define RADIO_H

#include "Cancion.h"
#include <string>

using std::string;

#include <vector>
using std::vector;

class Radio{
	private:
		string nombreR;
		string generoR;
		vector <Cancion*> listaR;
	public:
		Radio();
		Radio(string, string);
		string getNombreR();
		void setNombreR(string);
		string getGeneroR();
		void setGeneroR(string);
		vector <Cancion*> getListaR();
		void setListaR(vector <Cancion*>);
		void addCancionR(Cancion*);
		~Radio();
	
};

#endif