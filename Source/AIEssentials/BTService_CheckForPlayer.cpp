// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_CheckForPlayer.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "AIEssentialsCharacter.h"
#include "EnemyCharacter.h"
#include "EnemyAI.h"

UBTService_CheckForPlayer::UBTService_CheckForPlayer()
{
    bCreateNodeInstance = true;
}

void UBTService_CheckForPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSecond)
{
    AEnemyAI *EnemyPC = Cast<AEnemyAI>(OwnerComp.GetAIOwner());
    
    if(EnemyPC)
    {
        AAIEssentialsCharacter *Enemy = Cast<AAIEssentialsCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
        
        if(Enemy)
        {
            OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->EnemyKeyID, Enemy);
        }
    }
}
