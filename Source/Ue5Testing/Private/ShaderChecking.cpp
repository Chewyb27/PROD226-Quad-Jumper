// ShaderChecking.cpp

#include "ShaderChecking.h"
#include "ShaderCompiler.h"

bool UShaderChecking::AreShadersCompiled()
{
    return !FShaderCompilingManager::Get().IsCompiling();
}
