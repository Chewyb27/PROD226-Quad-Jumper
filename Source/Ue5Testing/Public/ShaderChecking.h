// ShaderChecking.h

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShaderChecking.generated.h"

/**
 *
 */
UCLASS()
class UE5TESTING_API UShaderChecking : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Shader Compilation")
        static bool AreShadersCompiled();
};
