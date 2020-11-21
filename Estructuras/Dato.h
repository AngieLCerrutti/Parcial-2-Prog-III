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
    string departamento;
    string pcarga;
    string fechainicio;
    string fechaapertura;
    int sepi;
    string fechainternacion;
    bool cuidados_intensivos;
    string fechacuidado;
    bool fallecido;
    string fechafallecido;
    bool asistenciarespiratoria;
    int cargaprovincia;
    string financiamiento;
    string clasificacion;
    string clasificacionr;
    int residenciaprovinciaid;
    string fechadiagnostico;
    int resideciadepartamentoid;
    string ultimaactualizacion;

    friend ostream &operator<<(ostream &os, const Dato &dato) {
        os << "/n ID: " << dato.id << "/nSexo:" << dato.sexo << "/nEdad: " << dato.edad << "/nTiempo: " << dato.tiempo
        << "/nPais: " << dato.pais << "/nProvincia: " << dato.provincia << "/nDepartamento: " << dato.departamento <<
       "/nProvincia de carga: " << dato.pcarga << "/nFecha incio de sintomas: " << dato.fechainicio << "/nFecha apertura:"
        << dato.fechaapertura << "/nSepi apertura: " << dato.sepi << "/nFecha internacion: " << dato.fechainternacion <<
        "/nCuidados intensivos: " << dato.cuidados_intensivos << "/nFecha cuidados intensivos: " << dato.fechacuidado <<
        "/nFallecido: " << dato.fallecido << "/nFecha fallecido: " << dato.fechafallecido << "/nAsistencia respiratoria: " <<
        dato.asistenciarespiratoria << "/nProvincia de carga: " << dato.cargaprovincia << "/nFinanciamineto: " << dato.financiamiento <<
        "/nClasificacion: " << dato.clasificacion << "/nClasificacion resumen: " << dato.clasificacionr << "/nID provincia de residencia: " <<
        dato.residenciaprovinciaid << "/nFecha diagnostico: " << dato.fechadiagnostico <<"/nID departamento de residencia: " << dato.resideciadepartamentoid <<
        "/nUltima actualizacion: " << dato.ultimaactualizacion;
        return os;
    }
};

#endif //PARCIAL_2_PROG_III_DATO_H