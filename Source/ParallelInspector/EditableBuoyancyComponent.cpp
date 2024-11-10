// Fill out your copyright notice in the Description page of Project Settings.


#include "EditableBuoyancyComponent.h"

void UEditableBuoyancyComponent::SetBuoyancyCoefficient(float NewValue)
{
	BuoyancyData.BuoyancyCoefficient = NewValue;
}