#include <iostream>
#include <stdlib.h>

class automataFD{
    private: // Atributos
        string conjuntoEstados[];   // Conjunto finito de estados
        string alfabeto[];  // Alfabeto
        string estadoInicial;  // Estado inicial en el cual el automata empezara
        string estadosFinales[];  // Estados finales de aceptacion por el automata

    public:
        void automataFD(string); // metodo donde se asignara la cadena de entrada al automata
        void movimientoCadena(string); // metodo donde se ira moviendo el apuntador de toda la cadena
        void validacionCadena(string); // metodo donde se procesara y validara el simbolo de entrada
        void estadoFinal(); // metodo donde se regresara el estado en el cual termino el automata

};

class automataFND{
private: // Atributos
    string conjuntoEstados[];   // Conjunto finito de estados
    string alfabeto[];  // Alfabeto
    string estadoInicial;  // Estado inicial en el cual el automata empezara
    string estadosFinales[];  // Estados finales de aceptacion por el automata

public:
    void automataFD(string); // metodo donde se asignara la cadena de entrada al automata
    void movimientoCadena(string); // metodo donde se ira moviendo el apuntador de toda la cadena
    void validacionCadena(string); // metodo donde se procesara y validara el simbolo de entrada
    void estadosFinales(); // metodo donde se regresaran los estados del automata

};
