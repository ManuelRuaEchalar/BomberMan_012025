// MapaOBuilder.cpp - Implementaci�n del Builder concreto para mapa en forma de "O"
#include "MapaOBuilder.h"

AMapaOBuilder::AMapaOBuilder()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AMapaOBuilder::BuildBordes()
{
    // Asegurarnos de que el tablero exista
    if (!TableroActual) return;

    // Construir los bordes superior e inferior
    for (int32 j = 0; j < TableroActual->Ancho; j++)
    {
        TableroActual->MapaBloques[0][j] = ATablero::ACERO;
        TableroActual->MapaBloques[1][j] = ATablero::ACERO;
        TableroActual->MapaBloques[2][j] = ATablero::ACERO;

        TableroActual->MapaBloques[TableroActual->Alto - 1][j] = ATablero::ACERO;
        TableroActual->MapaBloques[TableroActual->Alto - 2][j] = ATablero::ACERO;
        TableroActual->MapaBloques[TableroActual->Alto - 3][j] = ATablero::ACERO;
    }

    // Construir los bordes laterales
    for (int32 i = 3; i < TableroActual->Alto - 3; i++)
    {
        TableroActual->MapaBloques[i][0] = ATablero::ACERO;
        TableroActual->MapaBloques[i][1] = ATablero::ACERO;
        TableroActual->MapaBloques[i][2] = ATablero::ACERO;

        TableroActual->MapaBloques[i][TableroActual->Ancho - 1] = ATablero::ACERO;
        TableroActual->MapaBloques[i][TableroActual->Ancho - 2] = ATablero::ACERO;
        TableroActual->MapaBloques[i][TableroActual->Ancho - 3] = ATablero::ACERO;
    }
}

void AMapaOBuilder::BuildEstructuraInterna()
{
    // Asegurarnos de que el tablero exista
    if (!TableroActual) return;

    // Crear una estructura en forma de "O" con pasillos anchos
    // La "O" tendr� un anillo interno de bloques y un pasillo

    // Anillo interno de bloques (forma "O")
    int32 grosorBorde = TableroActual->ANCHO_PASILLO + 2; // Los bordes externos m�s el pasillo
    int32 anchoInterior = 4; // Grosor del anillo interno

    // Construir los bordes internos horizontales
    for (int32 i = grosorBorde; i < grosorBorde + anchoInterior; i++)
    {
        for (int32 j = grosorBorde; j < TableroActual->Ancho - grosorBorde; j++)
        {
            TableroActual->MapaBloques[i][j] = ATablero::CONCRETO;
            TableroActual->MapaBloques[TableroActual->Alto - 1 - i][j] = ATablero::CONCRETO;
        }
    }

    // Construir los bordes internos verticales
    for (int32 i = grosorBorde + anchoInterior; i < TableroActual->Alto - grosorBorde - anchoInterior; i++)
    {
        for (int32 j = grosorBorde; j < grosorBorde + anchoInterior; j++)
        {
            TableroActual->MapaBloques[i][j] = ATablero::CONCRETO;
            TableroActual->MapaBloques[i][TableroActual->Ancho - 1 - j] = ATablero::CONCRETO;
        }
    }

    // Agregar bloques de madera aleatorios en las zonas vac�as
    // Zona central grande
    for (int32 i = grosorBorde + anchoInterior; i < TableroActual->Alto - grosorBorde - anchoInterior; i++)
    {
        for (int32 j = grosorBorde + anchoInterior; j < TableroActual->Ancho - grosorBorde - anchoInterior; j++)
        {
            // Asegurar que dejamos grupos de 3x3 vac�os para pasillos
            if (i % 6 < 3 && j % 6 < 3)
            {
                TableroActual->MapaBloques[i][j] = ATablero::VACIO; // Garantizar pasillos
            }
            else if (FMath::RandRange(0, 10) > 5)
            {
                TableroActual->MapaBloques[i][j] = ATablero::MADERA;
            }
        }
    }
}

void AMapaOBuilder::BuildPowerUps()
{
    // Asegurarnos de que el tablero exista
    if (!TableroActual) return;

    // Colocar burbujas en puntos estrat�gicos alrededor del mapa
    int32 grosorBorde = TableroActual->ANCHO_PASILLO + 2;

    // Cuatro esquinas del pasillo exterior
    TableroActual->MapaBloques[grosorBorde][grosorBorde] = ATablero::BURBUJA;
    TableroActual->MapaBloques[grosorBorde][TableroActual->Ancho - grosorBorde - 1] = ATablero::BURBUJA;
    TableroActual->MapaBloques[TableroActual->Alto - grosorBorde - 1][grosorBorde] = ATablero::BURBUJA;
    TableroActual->MapaBloques[TableroActual->Alto - grosorBorde - 1][TableroActual->Ancho - grosorBorde - 1] = ATablero::BURBUJA;

    // Algunos PowerUps adicionales en el centro
    int32 centroX = TableroActual->Ancho / 2;
    int32 centroY = TableroActual->Alto / 2;

    // Colocar burbujas en diferentes posiciones interiores
    for (int32 i = 0; i < 6; i++)
    {
        int32 offsetX = FMath::RandRange(-10, 10);
        int32 offsetY = FMath::RandRange(-10, 10);

        int32 posX = FMath::Clamp(centroX + offsetX, grosorBorde + 5, TableroActual->Ancho - grosorBorde - 5);
        int32 posY = FMath::Clamp(centroY + offsetY, grosorBorde + 5, TableroActual->Alto - grosorBorde - 5);

        // Colocar burbuja solo si no hay un bloque VACIO
        if (TableroActual->MapaBloques[posY][posX] != ATablero::VACIO)
        {
            TableroActual->MapaBloques[posY][posX] = ATablero::BURBUJA;
        }
    }
}