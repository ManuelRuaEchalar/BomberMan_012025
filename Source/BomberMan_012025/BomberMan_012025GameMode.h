#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GoombaEnemigo.h"
#include "Bomba.h"
#include "BomberMan_012025GameMode.generated.h"

class ABloque;
class AFabricaBloques;
class ADirectorMapa;
class ATablero;
class ABombaBase;

UCLASS(minimalapi)
class ABomberMan_012025GameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABomberMan_012025GameMode();
    virtual void BeginPlay() override;

    // Fábrica para crear los diferentes tipos de bloques (sin UPROPERTY)
    AFabricaBloques* FabricaDeBloques;

    // Director del patrón Builder (sin UPROPERTY)
    ADirectorMapa* DirectorMapa;

    // Tablero actual del juego (sin UPROPERTY)
    ATablero* TableroJuego;

    // Array con todos los bloques creados (se mantiene UPROPERTY por ser contenedor de UObjects)
    UPROPERTY(VisibleAnywhere, Category = "Bloques")
    TArray<ABloque*> aBloques;

    // Matriz nativa C++ (sin UPROPERTY)
    TArray<TArray<int32>> aMapaBloques;

    // Posición inicial de los bloques
    UPROPERTY(EditAnywhere, Category = "Spawns")
    float XInicial = 0.0f;

    UPROPERTY(EditAnywhere, Category = "Spawns")
    float YInicial = 0.0f;

    // Tamaño de los bloques
    UPROPERTY(EditAnywhere, Category = "Spawns")
    float AnchoBloque = 100.0f;

    UPROPERTY(EditAnywhere, Category = "Spawns")
    float LargoBloque = 100.0f;

    // Métodos para la gestión de bloques
    UFUNCTION(BlueprintCallable, Category = "GamePlay")
    void SpawnBloque(FVector posicion, int32 tipoBloque);

    UFUNCTION(BlueprintCallable, Category = "GamePlay")
    void DestruirBloque();

    // Referencia al bloque que se va a destruir
    UPROPERTY(VisibleAnywhere)
    ABloque* BloqueActual;

    // Método para construir un mapa según el tipo especificado
    ATablero* ConstruirMapa(FString TipoMapa);

    // Referencia al prototipo de Goomba
    UPROPERTY(VisibleAnywhere, Category = "Enemigos")
    AGoombaEnemigo* GoombaPrototipo;

    // Array con todos los Goombas creados
    UPROPERTY(VisibleAnywhere, Category = "Enemigos")
    TArray<AGoombaEnemigo*> aGoombas;

    // Métodos para gestionar los Goombas
    UFUNCTION(BlueprintCallable, Category = "Enemigos")
    void CrearGoombaPrototipo(FVector Ubicacion);

    UFUNCTION(BlueprintCallable, Category = "Enemigos")
    void ClonarGoomba(FVector Ubicacion);

    UFUNCTION(BlueprintCallable, Category = "Enemigos")
    void DestruirGoomba();

    // NUEVAS PROPIEDADES Y MÉTODOS PARA BOMBAS (PATRÓN COMPOSITE)

    // Array con todas las bombas creadas
    UPROPERTY(VisibleAnywhere, Category = "Bombas")
    TArray<ABombaBase*> aBombas;

    // Métodos para gestionar las bombas
    UFUNCTION(BlueprintCallable, Category = "Bombas")
    void CrearBombas();

    UFUNCTION(BlueprintCallable, Category = "Bombas")
    void IniciarExplosiones();

    UFUNCTION(BlueprintCallable, Category = "Bombas")
    void CrearBombaNormal(FVector Posicion);

    UFUNCTION(BlueprintCallable, Category = "Bombas")
    void CrearBombaEspecial(FVector Posicion);

private:
    // Método helper para generar posiciones aleatorias para las bombas
    FVector GenerarPosicionAleatoria();
};