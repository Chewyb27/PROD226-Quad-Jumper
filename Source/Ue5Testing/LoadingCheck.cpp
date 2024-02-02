// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadingCheck.h"

// Sets default values
ALoadingCheck::ALoadingCheck()
{
 	// Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Check if the shader is compiled
    if (FShaderPipeline::IsFinishedCompiling())
    {
        // Shader is compiled, perform your logic here
        UE_LOG(LogTemp, Warning, TEXT("Shader is compiled!"));
    }
    else
    {
        // Shader is not compiled, handle the case accordingly
        UE_LOG(LogTemp, Error, TEXT("Shader is not compiled!"));
    }
}

// Called when the game starts or when spawned
void ALoadingCheck::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALoadingCheck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

