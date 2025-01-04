#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "EquippedOneHandedWeapon"),
	ECS_EquippedTwohandedWeapon UMETA(DisplayName = "EquippedTwoHandedWeapon")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Dead UMETA(DisplayName = "Dead"),
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_HitReaction UMETA(DisplayName = "HitReaction"),
	EAS_Attacking UMETA(DisplayName = "Attacking"),
	EAS_EquippingWeapon UMETA(DisplayName= "Equipping Weapon"),
	EAS_Dodging UMETA(DisplayName = "Dodging")
};

UENUM(BlueprintType)
enum EDeathPose
{
	EDP_Death1 UMETA(DisplayName = "Death1"),
	EDP_Death2 UMETA(DisplayName = "Death2"),
	EDP_Death3 UMETA(DisplayName = "Death3"),
	EDP_Death4 UMETA(DisplayName = "Death4"),
	EDP_Death5 UMETA(DisplayName = "Death5"),
	EDP_MAX UMETA(DisplayName = "DefaultMAX")
};

UENUM(BlueprintType)
enum ECorpsePose
{
	ECP_Death1 UMETA(DisplayName = "Death1"),
	ECP_Death2 UMETA(DisplayName = "Death2"),
	ECP_Death3 UMETA(DisplayName = "Death3"),
	ECP_Death4 UMETA(DisplayName = "Death4"),
	ECP_Death5 UMETA(DisplayName = "Death5"),
	ECP_MAX UMETA(DisplayName = "DefaultMAX")
};

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	
	EES_NoState UMETA(DisplayName = "NoState"),

	EES_Dead UMETA(DisplayName = "Dead"),
	EES_Patrolling UMETA(DisplayName = "Patrolling"),
	EES_Chasing UMETA(DisplayName = "Chasing"),
	EES_Attacking UMETA(DisplayName = "Attacking"),
	EES_Engaged UMETA(DisplayName = "Engaged")
};