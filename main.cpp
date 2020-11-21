#include <iostream>
#include <fstream>
#include "Estructuras/AVLTree.h"
#include "Estructuras/BinaryTree.h"
#include "Estructuras/Dato.h"
#include "Estructuras/HashEntry.h"
#include "Estructuras/HashMap.h"
#include "Estructuras/HashMapTree.h"
#include "Estructuras/List.h"
#include "Estructuras/Node.h"
#include "Estructuras/Queue.h"
#include "Estructuras/Stack.h"
#include "Estructuras/TreeNode.h"

using namespace std;

int main(int argc, char *argv[]) // para poder ejercutar los argumentos
{
    if (argc < 3 || argc >=
                    5) //verifica que este la cantidad correcta de argumentos de 1 a 5 el nombre del archivo tambien se cuenta
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
    // Create a text string, which is used to output the text file
    string myText;
    string Archivocsv = argv[argc - 1];
    // Read from the text file
    ifstream MyReadFile(Archivocsv);
    // Use a while loop together with the getline() function to read the file line by line
    if (MyReadFile.fail()) {
        cout << "Error al leer el archivo" << endl;
        return 0;
    }
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        //cout << myText;
    }

// Close the file
    MyReadFile.close();
    return 0;
}