// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuoyancyComponent.h"
#include "EditableBuoyancyComponent.generated.h"

/**
 * 
 */
UCLASS(meta=(BlueprintSpawnableComponent))
class PARALLELINSPECTOR_API UEditableBuoyancyComponent : public UBuoyancyComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category=Buyoancy)
	void SetBuoyancyCoefficient(float NewValue);
};
