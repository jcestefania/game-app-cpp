# Game App C++

Este proyecto es una aplicación de juegos en C++ que permite al usuario elegir entre tres juegos diferentes: **Piedra, Papel o Tijeras**, **Adivina el Número** y **Pares o Nones**. El programa utiliza la generación de números aleatorios para los juegos que lo requieren.

## Funcionalidades
- **Piedra, Papel o Tijeras**: Compite contra la computadora en este juego clásico. Gana puntos al seleccionar la opción correcta en cada ronda.
- **Adivina el Número**: Intenta adivinar un número aleatorio generado por la computadora dentro de un rango de 1 a 100.
- **Pares o Nones**: Elige entre pares o nones y suma un número que elijas con el número aleatorio de la computadora. Gana si tu elección coincide con el resultado de la suma.

## Requisitos
- Compilador de C++ (por ejemplo, g++)
- Sistema operativo compatible con C++ (Windows, Linux, Mac)

## Instalación
1. Clona el repositorio:
2. ```bash
   git clone https://github.com/jcestefania/game-app-cpp.git

3. Navega al directorio del proyecto:
4. ```bash
   cd game-app-cpp

5. Compila el archivo fuente:
6. ```bash
   g++ proyecto_app_2.cpp -o game-app

7. Ejecuta la aplicación:
8. ```bash
   ./game-app

## Uso
Al ejecutar la aplicación, verás un menú con tres opciones de juego. Selecciona un juego ingresando el número correspondiente:
- 1: Piedra, Papel o Tijeras
- 2: Adivina el Número
- 3: Pares o Nones
- 0: Salir de la aplicación

Sigue las instrucciones en pantalla para jugar. Puedes jugar varias rondas según lo desees.

## Estructura del Código
El archivo proyecto_app_2.cpp contiene la implementación de la aplicación y se organiza de la siguiente manera:

- Funciones:
  - inicializarGeneradorAleatorio(): Inicializa la semilla para la generación de números aleatorios.
  - generaNumeroAleatorio(int limite_inferior, int limite_superior): Genera un número aleatorio dentro de un rango dado.
  - piedraPapelTijera(int nrondas): Lógica para el juego de Piedra, Papel o Tijeras.
  - adivinaNum(int nrondas): Lógica para el juego Adivina el Número.
  - paresNones(int nrondas): Lógica para el juego de Pares o Nones.
  - main(): Menú principal y control de flujo de la aplicación.

## Autores
- Gabriel Nassri
- Juan Carlos Estefanía
