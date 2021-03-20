// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadCSVAtRunTime.h"
#include <Runtime/Core/Public/Misc/Paths.h>
#include <Runtime/Core/Public/HAL/PlatformFilemanager.h>


FString UReadCSVAtRunTime::LoadFileToString(FString Filename)
{
    FString directory = FPaths::ProjectContentDir();
    FString myFilePath = directory / Filename;

    FString result;
        
    if (FPaths::FileExists(myFilePath)) {
        if (FFileHelper::LoadFileToString(result, *myFilePath))
        {
            return result;
        }
    }
    
    return FString("We have an error!");
}


TArray<FString> UReadCSVAtRunTime::LoadFileToStringArray(FString Filename)
{
    FString directory = FPaths::ProjectContentDir();
    TArray<FString> result;
    IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
    
    if (file.CreateDirectory(*directory)) {
        FString myFile = directory + "/" + Filename;
        FFileHelper::LoadFileToStringArray(result,*myFile);
    }
    
    return result;
}
