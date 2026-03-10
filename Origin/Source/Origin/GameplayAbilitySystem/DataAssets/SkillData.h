#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkillData.generated.h"

UCLASS(BlueprintType)
class ORIGIN_API USkillData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSubclassOf<class UGameplayAbility> AbilityClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTexture2D* Icon;
};