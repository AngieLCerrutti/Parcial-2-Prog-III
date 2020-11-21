#ifndef PARCIAL_2_PROG_III_DATO_H
#define PARCIAL_2_PROG_III_DATO_H

#include <string>

using namespace std;

class Dato {
private:
    int id;
    char sexo;
    int edad;
    string tiempo; //(el año o los meses)
    string pais;
    string provincia;
    bool cuidados_intensivos;
    int dia_cuid_intensivos;
    int mes_cuid_intensivos;
    int anio_cuid_intensivos;
    bool fallecido;
    string clasificacion;

public:
    Dato(int id, char sexo, int edad, const string &tiempo, const string &pais, const string &provincia,
         bool cuidadosIntensivos, int diaCuidIntensivos, int mesCuidIntensivos, int anioCuidIntensivos, bool fallecido,
         const string &clasificacion);


};


Dato::Dato(int id, char sexo, int edad,
           const string &tiempo,
           const string &pais,
           const string &provincia,
           bool cuidadosIntensivos,
           int diaCuidIntensivos,
           int mesCuidIntensivos,
           int anioCuidIntensivos,
           bool fallecido,
           const string &clasificacion) : id(id), sexo(sexo), edad(edad), tiempo(tiempo), pais(pais),
                                          provincia(provincia), cuidados_intensivos(cuidadosIntensivos),
                                          dia_cuid_intensivos(diaCuidIntensivos),
                                          mes_cuid_intensivos(mesCuidIntensivos),
                                          anio_cuid_intensivos(anioCuidIntensivos), fallecido(fallecido),
                                          clasificacion(clasificacion) {}



