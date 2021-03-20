// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime/Core/Public/Misc/FileHelper.h>
#include "ReadCSVAtRunTime.generated.h"


/**
 * 
 */
UCLASS()
class MYPROJECT2_API UReadCSVAtRunTime : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
        UFUNCTION(BlueprintCallable, Category = "File I/O")
        static FString LoadFileToString(FString filename);
    
        UFUNCTION(BlueprintCallable, Category = "File I/O")
        static TArray<FString> LoadFileToStringArray(FString filename);
    
    
    
	
};
