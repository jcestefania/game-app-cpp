// proyecto_app_2.cpp : Gabriel Nassri y Juan Carlos Estefanía
// Este programa es una aplicación de juegos en la que el usuario puede elegir entre tres juegos diferentes: Piedra, Papel o Tijeras, Adivina el número y Pares o Nones

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Inicializamos la semilla para la generación de números aleatorios una vez
void inicializarGeneradorAleatorio() {
    srand(time(NULL));
}

// Aquí definimos una función para generar un número aleatorio
int generaNumeroAleatorio(int limite_inferior, int limite_superior) {
    return limite_inferior + rand() % (limite_superior - limite_inferior + 1);
}

// Aquí se encuentra el void para Piedra, Papel o Tijeras
void piedraPapelTijera(int nrondas) {
    cout << "-------------------------------------" << endl;
    cout << "Bienvenido a Piedra, Papel y Tijeras" << endl;
    cout << "-------------------------------------" << endl;

    int puntosmaquina = 0;
    int puntosusuario = 0;
    for (int i = 1; i <= nrondas; i++) {     // El bucle for lo utilizamos por si el jugador quiere jugar varias rondas
        int jugada_ordenador;
        int jugada_usuario;
        cout << "Selecciona jugada:" << endl;
        cout << "1-Piedra" << endl;
        cout << "2-Papel" << endl;
        cout << "3-Tijera" << endl;
        do {
            cin >> jugada_usuario;
        } while (jugada_usuario < 1 || jugada_usuario > 3);
        jugada_ordenador = generaNumeroAleatorio(1, 3);
        cout << "Intento " << i << endl;
        if (jugada_ordenador == 1)                                   // Las condiciones para poder decir quien ha ganado o perdido
            cout << "La jugada del ordenador es Piedra" << endl;
        if (jugada_ordenador == 2)
            cout << "La jugada del ordenador es Papel" << endl;
        if (jugada_ordenador == 3)
            cout << "La jugada del ordenador es Tijera" << endl;
        if (jugada_usuario == jugada_ordenador)
            cout << "Empate" << endl;
        if (jugada_usuario == 1 && jugada_ordenador == 2) {
            cout << "Ha ganado el ordenador" << endl;
            puntosmaquina++;
        }
        else if ((jugada_usuario == 1 && jugada_ordenador == 3) || (jugada_usuario == 2 && jugada_ordenador == 1) || (jugada_usuario == 3 && jugada_ordenador == 2)) {
            cout << "Has ganado " << endl;
            puntosusuario++;
        }
        else if ((jugada_usuario == 1 && jugada_ordenador == 2) || (jugada_usuario == 2 && jugada_ordenador == 3) || (jugada_usuario == 3 && jugada_ordenador == 1)) {
            cout << "Has perdido" << endl;
            puntosmaquina++;
        }
        cout << "Tu puntuacion es: " << puntosusuario << endl;
        cout << "La puntuacion del ordenador es: " << puntosmaquina << endl;
        if (puntosusuario > puntosmaquina) {
            cout << "Has ganado" << endl;
        }
        else if (puntosusuario < puntosmaquina) {
            cout << "Has perdido" << endl;
        }
        else if (puntosmaquina == puntosusuario) {
            cout << "Empate" << endl;
        }
    }
}

// Este es el void de Adivina el número
void adivinaNum(int nrondas) {
    cout << "-------------------------------" << endl;
    cout << "Bienvenido a Adivina el numero" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 1; i <= nrondas; i++) {                                // El bucle for que hemos aplicado en todos los juegos es para repetir el proceso dependiendo de las rondas elegidas
        int numero_usuario;
        int numero_ordenador;
        cout << "Intento " << i << endl;
        cout << "Elige un numero del 1-100" << endl;
        do {
            cin >> numero_usuario;
        } while (numero_usuario < 0 || numero_usuario > 101);
        numero_ordenador = generaNumeroAleatorio(1, 100);            // Es similar al anterior juego, definimos las condiciones para poder decir quien gana 
        if (numero_ordenador == numero_usuario)
            cout << "Has acertado el numer " << endl;
        else if (numero_usuario != numero_ordenador)
            cout << "Lo siento, no has acertado el numero" << endl;
    }
}

// Este es el último void para pares nones
// En este juego, a pesar de hacer las condiciones de manera correcta, hay veces en las que el programa no lee el input como debería hacerlo y no logramos dar con ello
void paresNones(int nrondas) {
    int puntosmaquina = 0;
    int puntosusuario = 0;
    cout << "-------------------------" << endl;
    cout << "Bienvenido a Pares Nones" << endl;
    cout << "-------------------------" << endl;
    for (int i = 1; i <= nrondas; i++) {
        int numero_usuario = (1, 10);
        int numero_ordenador = generaNumeroAleatorio(1, 10);
        int eleccion = (1, 2);
        int resultado;
        resultado = numero_usuario + numero_ordenador;
        int par = (2, 4, 6, 8, 10);
        par = resultado % 2 == 0;
        int impar = (1, 3, 5, 7, 9);
        impar = resultado % 2 != 0;
        cout << "Elige: " << endl;
        cout << "1-Pares" << endl;
        cout << "2-Nones" << endl;
        cin >> eleccion;
        cout << "Piensa un numero: " << endl;
        cin >> numero_usuario;
        cout << "Numero ordenador: " << numero_ordenador << endl;
        cout << "Total: " << numero_usuario + numero_ordenador << endl;
        switch (eleccion) {
        case 1:
            cout << "Has elegido pares" << endl;
            break;
        case 2:
            cout << "Has elegido nones" << endl;
        }
        if ((eleccion == 1 && resultado % 2 == 0) || (eleccion == 2 && resultado % 2 != 0)) {
            cout << "Has ganado" << endl;
            puntosusuario++;
        }
        else if ((eleccion == 2 && resultado % 2 == 0) || (eleccion == 1 && resultado && 2 != impar)) {
            cout << "Has perdido " << endl;
            puntosmaquina++;
        }
        cout << "Tu puntuacion es: " << puntosusuario << endl;
        cout << "La puntuacion del ordenador es: " << puntosmaquina << endl;
        if (puntosusuario > puntosmaquina) {
            cout << "Has ganado" << endl;
        }
        else if (puntosusuario < puntosmaquina) {
            cout << "Has perdido" << endl;
        }
        else if (puntosmaquina == puntosusuario) {
            cout << "Empate" << endl;
        }
    }
}

// Aquí es donde hemos programado el menú, dependiendo de la decisión del usuario, le llevará a un juego u otro
int main() {
    inicializarGeneradorAleatorio();
    int opcion;
    cout << "-------------------------------" << endl;
    cout << "Bienvenido a la app de Tip-Top" << endl;
    cout << "-------------------------------" << endl;
    cout << "1- Piedra, Papel o Tijera" << endl;
    cout << "2- Adivina el numero" << endl;
    cout << "3- Pares o nones" << endl;
    cout << "0- salir" << endl;
    cout << "Elige un juego:";
    cin >> opcion;
    int nrondas;

    switch (opcion) {
    case 1:
        cout << "Elige el numero de rondas: ";
        cin >> nrondas;
        piedraPapelTijera(nrondas);
        break;
    case 2:
        cout << "Elige el numero de rondas: ";
        cin >> nrondas;
        adivinaNum(nrondas);
        break;
    case 3:
        cout << "Elige el numero de rondas: ";
        cin >> nrondas;
        paresNones(nrondas);
        break;
    case 0:
        cout << "Has salido";
        break;
    }
    return 0;
}
