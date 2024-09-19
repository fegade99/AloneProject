// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletActor.h"
#include "PlayerCharacter.h"
#include "ZombieCharacter.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABulletActor::ABulletActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	RootComponent = ProjectileMesh;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = 100000.f;
	ProjectileMovement->MaxSpeed = 100000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere collision"));
	CollisionSphere->InitSphereRadius(1.f);

	InitialLifeSpan = 3.0f;
	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void ABulletActor::BeginPlay()
{
	Super::BeginPlay();

	ProjectileMesh->OnComponentHit.AddDynamic(this, &ABulletActor::OnProjectileHit);
}

// Called every frame
void ABulletActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABulletActor::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (ImpactEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
	}
	if (OtherActor && OtherActor->IsA<APlayerCharacter>())
	{
		return;
	}
	AZombieCharacter* Zombie = Cast<AZombieCharacter>(OtherActor);
	if (Zombie)
	{
		Zombie->TakeDamage(BulletDamage);
	}
	Destroy();
}



