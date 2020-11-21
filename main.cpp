#include <iostream>
#include <fstream>
#include "Estructuras/Dato.h"
#include "Estructuras/List.h"
#include "Estructuras/HashEntry.h"

using namespace std;

int main(int argc, char *argv[]) // para poder ejercutar los argumentos
{
  if (argc < 3 || argc >=5) //verifica que este la cantidad correcta de argumentos de 1 a 5 el nombre del archivo tambien se cuenta
    {
        cout << "Argumentos ingresados incorrectamente" << endl;
        return 0;
    }
    char *esArchivoCsv = NULL; //buscar una cadena de texto adentro de otra
    esArchivoCsv = strstr(argv[argc - 1], ".csv");
    if (!esArchivoCsv) {
        cout << "No se especifico el archivo csv" << endl;
        return 0;
    }
    // Carga el archivo
    string myText;
    string Archivocsv = argv[argc - 1];
    // Read from the text file
    ifstream MyReadFile(Archivocsv);
    // Use a while loop together with the getline() function to read the file line by line
    if (MyReadFile.fail()) {
        cout << "Error al leer el archivo" << endl;
        return 0;
    }

    if (strcmp(argv[1],"-estad")==0){
        List<Dato>Lista;
        getline(MyReadFile, myText); //salto la primera linea
        while (getline(MyReadFile, myText, ',')) {
            Dato d;
        }

    }


// Close the file
    MyReadFile.close();
    return 0;
}