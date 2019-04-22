/*
  Archivo: DispositivoEntradaSalida.h

  Autores:  Ángel García Baños
            Crhistian García Urbano        1832124
            Nicolas Jaramillo Mayor        1840558

  Email:  nicolas.jaramillo@correounivalle.edu.co
          garcia.crhistian@correounivalle.edu.co

  Fecha creación:       2018/02/28
  Última modificación:  2019/04/20
  Versión: 0.6.2
  Licencia: GPL


  Clase: DispositivoEntradaSalida
  Responsabilidad: manejar las entradas y salidas del juego Tetris sobre un terminal. Y ello implica leer la entrada e imprimir
  en la salida. Es una clase abstracta que debe implementarse en las clases derivadas.
  Colaboración: ninguna
*/

#ifndef DispositivoEntradaSalida_HH
#define DispositivoEntradaSalida_HH

#include <string>
using namespace std;


class DispositivoEntradaSalida
{
  protected:
  /*
    int fila_Tablero;
    int columna_Tablero;
    int alto_Tablero;
    int ancho_Tablero;
    
    int fila_FichaSiguiente;
    int columna_FichaSiguiente;
    int alto_FichaSiguiente;
    int ancho_FichaSiguiente;
  */
    
    int fila_nombre;
    int columna_nombre;
    int ancho_nombre;
    
    int fila_puntos;
    int columna_puntos;
    int ancho_puntos;
    
    int fila_tesoros;
    int columna_tesoros;
    
    int fila_ganadores;
    int columna_ganadores;
    int ancho_ganadores;
    int alto_ganadores;
    
    int fila_mensaje; 
    int columna_mensaje;
    
  public:
    DispositivoEntradaSalida(/*
                             int fila_Tablero=2,
                             int columna_Tablero=2,
                             int alto_Tablero=20,
                             int ancho_Tablero=10,
                             
                             int fila_FichaSiguiente=2,
                             int columna_FichaSiguiente=20,
                             int alto_FichaSiguiente=4,
                             int ancho_FichaSiguiente=4,
                             */
                             
                             int fila_nombre=0,
                             int columna_nombre=0,
                             int ancho_nombre=3,
                             
                             int fila_puntos=0,
                             int columna_puntos=14,
                             int ancho_puntos=10,
                             
                             int fila_tesoros=0,
                             int columna_tesoros=28,
                             
                             int fila_ganadores=11,
                             int columna_ganadores=4,
                             int ancho_ganadores=10,
                             int alto_ganadores=10,
                             
                             int fila_mensaje=36, 
                             int columna_mensaje=2
                            );
    virtual ~DispositivoEntradaSalida();
    virtual string leerNombre() = 0;
    virtual int leerJugada() = 0;
    virtual bool leerSiVolverAJugar() = 0;
    virtual void imprimirTablero(int fila, int columna, int valor) = 0;
    //virtual void imprimirFichaSiguiente(int fila, int columna, int valor) = 0;
    virtual void imprimirNombre(string nombre) = 0;
    virtual void imprimirPuntos(int puntos) = 0;
    virtual void imprimirGanadores(string ganadores) = 0;
};

#endif




