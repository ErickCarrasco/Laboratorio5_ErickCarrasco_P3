#ifndef CANCION_H
#define CANCION_H
#include <string>
using std::string;

class Cancion{
	private:
		string genero;
		string titulo;
		double duracion;
		int repeticiones;
	public:
		Cancion();
		Cancion(string, string, double, int);
		string getGenero();
		void setGenero(string);
		string getTitulo();
		void setTitulo(string);
		double getDuracion();
		void setDuracion(double);
		int getRepeticiones();
		void setRepeticiones(int);
		~Cancion();



};

#endif