#pragma once
#include <Vector.hpp>
#include <SerieNavidad.hpp>


class Lienzo
{
private:
    Vector posicion; //codigo tiene
    Vector tamano;
public:
    Lienzo(Vector p, Vector t) {
        this->posicion=p;
        this->tamano=t;
    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie){ //codigo de usa, recibe el objeto y lo usa
        serie.Imprimir();
    }
    void Limpiar(){
        system("clear");
    }
};