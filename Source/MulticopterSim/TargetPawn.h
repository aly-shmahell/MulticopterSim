/*
* Class declaration for target pawn class in MulticopterSim
*
* Copyright (C) 2019 Simon D. Levy
*
* MIT License
*/

#pragma once

#define WIN32_LEAN_AND_MEAN

// Math support
#define _USE_MATH_DEFINES
#include <math.h>

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TargetPawn.generated.h"

UCLASS(Config=Game)
class ATargetPawn : public APawn
{
    private:

		GENERATED_BODY()

        // StaticMesh component that will be the visuals for our flying pawn 
        UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
            class UStaticMeshComponent* _targetMesh;

    public:

        virtual void Tick(float DeltaSeconds) override;

        ATargetPawn();

        ~ATargetPawn();
};
