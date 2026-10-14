#pragma once
// Auto-generated World class dump (GWorld)
// Game: 暗区突围
// Base: 0x140000000

// 只含当前关卡跑着的类; 全量类型见 Class.h / Struct.h / Enums.h

// ============================================================
// Inheritance: Farmland_715_Main_C : LevelScriptActor : Actor : Object
// Package: /Game/ArtResourceHD/Levels/GameLevels/GameMap/Release/Farmland_715/Farmland_715_Main
// ============================================================
class Farmland_715_Main_C : public LevelScriptActor {
public:
};

// ============================================================
// Inheritance: CAAssembleEnvironment_Uam_C : CAAssembleEnvironment : SGWeaponAssembleEnvironment : SGAssembleBase : Actor : Object
// Package: /Game/FrontEnd/UI/UMG/WareHouse/ItemInspect/CAAssembleEnvironment_Uam
// ============================================================
class CAAssembleEnvironment_Uam_C : public CAAssembleEnvironment {
public:
    ChildActorComponent* Lighting_WeaponShare_Blueprint;                                       // 0x0C80 (0x08)
    ChildActorComponent* Lighting_DefaultLight;                                                // 0x0C88 (0x08)
    ChildActorComponent* Lighting_AccessoryLight;                                              // 0x0C90 (0x08)
    ChildActorComponent* Lighting_OtherLight;                                                  // 0x0C98 (0x08)
    ChildActorComponent* Lighting_WeaponLight;                                                 // 0x0CA0 (0x08)
    ChildActorComponent* Lighting_ClothLight;                                                  // 0x0CA8 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent2D;                                          // 0x0CB0 (0x08)
    SceneComponent* Pivot;                                                                     // 0x0CB8 (0x08)
    SceneComponent* RotateBase;                                                                // 0x0CC0 (0x08)
    StaticMeshComponent* StaticMesh;                                                           // 0x0CC8 (0x08)
    SkeletalMeshComponent* BaseMesh;                                                           // 0x0CD0 (0x08)
    SceneComponent* Scene;                                                                     // 0x0CD8 (0x08)

    // --- Functions ---
    void RefreshConfigByShowType(int32 ShowType, bool CallFunc_EqualEqual_IntInt_ReturnValue);  // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: Lighting_Capture_Accessory_C : Actor : Object
// Package: /Game/FrontEnd/UI/UMG/WareHouse/ItemInspect/Lighting_Capture_Accessory
// ============================================================
class Lighting_Capture_Accessory_C : public Actor {
public:
    SpotLightComponent* Light_F_Fill3;                                                         // 0x0318 (0x08)
    SceneComponent* Actor7;                                                                    // 0x0320 (0x08)
    SceneComponent* Actor9;                                                                    // 0x0328 (0x08)
    SceneComponent* Actor8;                                                                    // 0x0330 (0x08)
    SpotLightComponent* Light_L_Rim2;                                                          // 0x0338 (0x08)
    SpotLightComponent* Light_LD_Rim3;                                                         // 0x0340 (0x08)
    SpotLightComponent* Light_BackLight2;                                                      // 0x0348 (0x08)
    SpotLightComponent* Light_Key_R2;                                                          // 0x0350 (0x08)
    SpotLightComponent* Light_Key_L2;                                                          // 0x0358 (0x08)
    SpotLightComponent* Light_R_Rim2;                                                          // 0x0360 (0x08)
    SceneComponent* Lighting_Accessory_Actor;                                                  // 0x0368 (0x08)
};

// ============================================================
// Inheritance: Lighting_Capture_Cloth_C : Actor : Object
// Package: /Game/FrontEnd/UI/UMG/WareHouse/ItemInspect/Lighting_Capture_Cloth
// ============================================================
class Lighting_Capture_Cloth_C : public Actor {
public:
    PointLightComponent* Light_Specular02;                                                     // 0x0318 (0x08)
    PointLightComponent* Light_Specular01;                                                     // 0x0320 (0x08)
    SpotLightComponent* Light_BackLight2_LightComponent0;                                      // 0x0328 (0x08)
    SceneComponent* Actor3_DefaultSceneRoot;                                                   // 0x0330 (0x08)
    SpotLightComponent* Light_L_Rim2_LightComponent0;                                          // 0x0338 (0x08)
    SpotLightComponent* Light_LD_Rim3_LightComponent0;                                         // 0x0340 (0x08)
    SpotLightComponent* Light_F_Fill3_LightComponent0;                                         // 0x0348 (0x08)
    SpotLightComponent* Light_Key_R2_LightComponent0;                                          // 0x0350 (0x08)
    SpotLightComponent* Light_Key_L2_LightComponent0;                                          // 0x0358 (0x08)
    SceneComponent* Actor2_DefaultSceneRoot;                                                   // 0x0360 (0x08)
    SpotLightComponent* Light_R_Rim2_LightComponent0;                                          // 0x0368 (0x08)
    SceneComponent* Actor_DefaultSceneRoot;                                                    // 0x0370 (0x08)
    SceneComponent* Lighting_Cloth_Actor_DefaultSceneRoot;                                     // 0x0378 (0x08)
};

// ============================================================
// Inheritance: Lighting_Capture_Other_C : Actor : Object
// Package: /Game/FrontEnd/UI/UMG/WareHouse/ItemInspect/Lighting_Capture_Other
// ============================================================
class Lighting_Capture_Other_C : public Actor {
public:
    SpotLightComponent* Light_L_Rim3_LightComponent0;                                          // 0x0318 (0x08)
    SpotLightComponent* Light_LD_Rim4_LightComponent0;                                         // 0x0320 (0x08)
    SpotLightComponent* Light_F_Fill4_LightComponent0;                                         // 0x0328 (0x08)
    SpotLightComponent* Light_R_Rim3_LightComponent0;                                          // 0x0330 (0x08)
    SceneComponent* Actor6_DefaultSceneRoot;                                                   // 0x0338 (0x08)
    SpotLightComponent* Light_Key_R3_LightComponent0;                                          // 0x0340 (0x08)
    SpotLightComponent* Light_Key_L3_LightComponent0;                                          // 0x0348 (0x08)
    SceneComponent* Actor5_DefaultSceneRoot;                                                   // 0x0350 (0x08)
    SpotLightComponent* Light_BackLight3_LightComponent0;                                      // 0x0358 (0x08)
    SceneComponent* Actor4_DefaultSceneRoot;                                                   // 0x0360 (0x08)
    SceneComponent* Lighting_Other_Actor2_DefaultSceneRoot;                                    // 0x0368 (0x08)
};

// ============================================================
// Inheritance: Lighting_Capture_Weapon_C : Actor : Object
// Package: /Game/FrontEnd/UI/UMG/WareHouse/ItemInspect/Lighting_Capture_Weapon
// ============================================================
class Lighting_Capture_Weapon_C : public Actor {
public:
    SpotLightComponent* Light_F_Fill2_LightComponent1;                                         // 0x0318 (0x08)
    SpotLightComponent* Light_BackLight_LightComponent0;                                       // 0x0320 (0x08)
    SpotLightComponent* Light_R_Rim_LightComponent0;                                           // 0x0328 (0x08)
    SpotLightComponent* Light_L_Rim_LightComponent0;                                           // 0x0330 (0x08)
    SpotLightComponent* Light_LD_Rim2_LightComponent0;                                         // 0x0338 (0x08)
    SpotLightComponent* Light_Key_R_LightComponent0;                                           // 0x0340 (0x08)
    SpotLightComponent* Light_Key_L_LightComponent0;                                           // 0x0348 (0x08)
    SceneComponent* Lighting_Capture_Weapone_DefaultSceneRoot;                                 // 0x0350 (0x08)
};

// ============================================================
// Inheritance: Lighting_WeaponShare_Blueprint_C : Actor : Object
// Package: /Game/FrontEnd/UI/UMG/WareHouse/ItemInspect/Lighting_WeaponShare_Blueprint
// ============================================================
class Lighting_WeaponShare_Blueprint_C : public Actor {
public:
    SpotLightComponent* Light_Key_Min_LightComponent1;                                         // 0x0318 (0x08)
    SpotLightComponent* Light_R_Rim4_LightComponent0;                                          // 0x0320 (0x08)
    SpotLightComponent* Light_LD_Rim5_LightComponent0;                                         // 0x0328 (0x08)
    SpotLightComponent* Light_Key_R4_LightComponent0;                                          // 0x0330 (0x08)
    SpotLightComponent* Light_Key_L4_LightComponent0;                                          // 0x0338 (0x08)
    SpotLightComponent* Light_F_Fill5_LightComponent0;                                         // 0x0340 (0x08)
    SpotLightComponent* Light_BackLight4_LightComponent0;                                      // 0x0348 (0x08)
    SceneComponent* Lighting_WeaponShare_Actor_DefaultSceneRoot;                               // 0x0350 (0x08)
    SceneComponent* Lighting_WeaponShare_DefaultSceneRoot;                                     // 0x0358 (0x08)
};

// ============================================================
// Inheritance: BP_SceneRenderingSettings_C : Actor : Object
// Package: /Game/Global/Blueprints/Rendering/BP_SceneRenderingSettings
// ============================================================
class BP_SceneRenderingSettings_C : public Actor {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0318 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0320 (0x08)

    // --- Functions ---
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_SceneRenderingSettings(int32 EntryPoint);                         // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_GameSettingPPPreviewSceneCapture_C : Actor : Object
// Package: /Game/Global/UI/UMG/GameSettingPanel/DescPPT/PostProcess/BP_GameSettingPPPreviewSceneCapture
// ============================================================
class BP_GameSettingPPPreviewSceneCapture_C : public Actor {
public:
    SceneCaptureComponent2D* SceneCaptureComponent2D3;                                         // 0x0318 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent2D2;                                         // 0x0320 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent2D1;                                         // 0x0328 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0330 (0x08)
    bool bInBattleUse;                                                                         // 0x0338 (0x01) BitMask: 0xFF

    // --- Functions ---
    FString GetModuleName();                                                                   // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/BP_UamAICharacter
// ============================================================
class BP_UamAICharacter_C : public BP_UamAICharacterTemplate_HD_C {
public:
    BPC_CharacterAIRandomInventoryComponentV2_C* BPC_CharacterAIRandomInventoryComponentV2;    // 0x2558 (0x08)
};

// ============================================================
// Inheritance: BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/BP_UamAICharacterTemplate
// ============================================================
class BP_UamAICharacterTemplate_C : public CAAICharacter {
public:
    SGCharacterElectricShockEffectComponent* SGCharacterElectricShockEffect;                   // 0x2360 (0x08)
    UACharacterInventoryManagerComponent* UACharacterInventoryManager;                         // 0x2368 (0x08)
    CACharacterAIAimingComponent* SGCharacterAIAiming;                                         // 0x2370 (0x08)
    UAWetnessComponent* UAWetness;                                                             // 0x2378 (0x08)
    SGCharacterTacticalPistolComponent* SGCharacterTacticalPistol;                             // 0x2380 (0x08)
    SGCharacterMovementDBNOComponent* SGCharacterMovementDBNO;                                 // 0x2388 (0x08)
    SGCharacterAITeamComponent* SGCharacterAITeam;                                             // 0x2390 (0x08)
    UACharacterAIStaticsComponent* UACharacterAIStatics;                                       // 0x2398 (0x08)
    SGCharacterAIWeaponTraceComponent* SGCharacterAIWeaponTrace;                               // 0x23A0 (0x08)
    SGCharacterAILeanWallComponent* SGCharacterAILeanWall;                                     // 0x23A8 (0x08)
    SGCharacterAIWeaponManagerComponent* SGCharacterAIWeaponManager;                           // 0x23B0 (0x08)
    SGCharacterAISenseAbilityComponent* SGCharacterAISenseAbility;                             // 0x23B8 (0x08)
    SGCharacterFragGrenadeEffectComponent* SGCharacterFragGrenadeEffect;                       // 0x23C0 (0x08)
    UACharacterAIPickUpComponent* UACharacterAIPickUp;                                         // 0x23C8 (0x08)
    SGCharacterFlashGrenadeEffectComponent* SGCharacterFlashGrenadeEffect;                     // 0x23D0 (0x08)
    SGAICharacterAvatarMergeComponent* SGAICharacterAvatarMerge;                               // 0x23D8 (0x08)
    SGCharacterWeaponSwayComponent* SGCharacterWeaponSway;                                     // 0x23E0 (0x08)
    SGCharacterCurveBreathComponent* SGCharacterCurveBreath;                                   // 0x23E8 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x23F0 (0x08)
    SGCharacterAICastShadowComponent* SGCharacterCastShadow;                                   // 0x23F8 (0x08)
    BPC_CharacterArmorManager_C* BPC_CharacterArmorManager;                                    // 0x2400 (0x08)
    SGCharacterTeamMove_C* SGCharacterTeamMove;                                                // 0x2408 (0x08)
    UACharacterDeathComponent* UACharacterDeath;                                               // 0x2410 (0x08)
    SGCharacterSignificanceComponent* SGCharacterSignificance;                                 // 0x2418 (0x08)
    SGCharacterLagCompensationComponent* SGCharacterLagCompensation;                           // 0x2420 (0x08)
    SGCharacterSwimComponent* SGCharacterSwim;                                                 // 0x2428 (0x08)
    AkComponent* Ak;                                                                           // 0x2430 (0x08)
    SGCharacterAIDBNOComponent* SGCharacterAIDBNO;                                             // 0x2438 (0x08)
    SGCharacterProgressManagerComponent* SGCharacterProgressManager;                           // 0x2440 (0x08)
    SGCharacterBeUsedRescueComponent* SGCharacterBeUsedRescue;                                 // 0x2448 (0x08)
    SGCharacterAITeamRescueComponent* SGCharacterAITeamRescue;                                 // 0x2450 (0x08)
    BPC_UamCharacterAISoundComponent_V2_C* BPC_UamCharacterAISoundComponent_V2;                // 0x2458 (0x08)
    SGCharacterBoneBreakComponent* SGCharacterBoneBreak;                                       // 0x2460 (0x08)
    SGCharacterAIPoseComponent* SGCharacterAIPose;                                             // 0x2468 (0x08)
    SGCharacterAvatarManagerComponent* SGCharacterAvatarManager;                               // 0x2470 (0x08)
    SGCharacterAvatarComponent* SGCharacterAvatar;                                             // 0x2478 (0x08)
    SGCharacterUseComponent* SGCharacterUse;                                                   // 0x2480 (0x08)
    SGCharacterAIDoorOpenerComponent* SGCharacterAIDoorOpener;                                 // 0x2488 (0x08)
    SGCharacterAIRecoilComponent* SGCharacterAIRecoil;                                         // 0x2490 (0x08)
    SGCharacterMovementProneComponent* SGCharacterMovementProne;                               // 0x2498 (0x08)
    SGCharacterInventoryGiveComponent* SGCharacterInventoryGive;                               // 0x24A0 (0x08)
    SGCharacterFootEffectComponent* SGCharacterFootEffect;                                     // 0x24A8 (0x08)
    SGCharacterBeUsedCorpseComponent* SGCharacterBeUsedCorpse;                                 // 0x24B0 (0x08)
    SGCharacterContainerInventoryComponent* SGCharacterContainerInventory;                     // 0x24B8 (0x08)
    SGCharacterAITurnComponent* SGCharacterAITurn;                                             // 0x24C0 (0x08)
    SGCharacterAIPathNodeComponent* SGCharacterAIPathNode;                                     // 0x24C8 (0x08)
    SGCharacterAIFireComponent* SGCharacterAIFire;                                             // 0x24D0 (0x08)
    SGCharacterAIComponent* SGCharacterAI;                                                     // 0x24D8 (0x08)
    SGCharacterMeshComponent* SGCharacterMesh;                                                 // 0x24E0 (0x08)
    SGCharacterWeaponAttachComponent* SGCharacterWeaponAttach;                                 // 0x24E8 (0x08)
    SGCharacterTakeHitEffectComponent* SGCharacterTakeHitEffect;                               // 0x24F0 (0x08)
    SGCharacterAITakeDamageComponent* SGCharacterAITakeDamage;                                 // 0x24F8 (0x08)
    SGCharacterStunGrenadeEffectComponent* SGCharacterStunGrenadeEffect;                       // 0x2500 (0x08)
    SGCharacterSprintComponent* SGCharacterSprint;                                             // 0x2508 (0x08)
    SGCharacterRagdollNewComponent* SGCharacterRagdollNew;                                     // 0x2510 (0x08)
    SGCharacterIKComponent* SGCharacterIK;                                                     // 0x2518 (0x08)
    SGCharacterHealthComponent* SGCharacterHealth;                                             // 0x2520 (0x08)
    SGCharacterFallComponent* SGCharacterFall;                                                 // 0x2528 (0x08)
    SGCharacterAnimationComponent* SGCharacterAnimation;                                       // 0x2530 (0x08)
    SGCharacterEnduranceComponent* SGCharacterEndurance;                                       // 0x2538 (0x08)
};

// ============================================================
// Inheritance: BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/BP_UamAICharacterTemplate_HD
// ============================================================
class BP_UamAICharacterTemplate_HD_C : public BP_UamAICharacterTemplate_C {
public:
    SGCharacterFOVComponent* SGCharacterFOV;                                                   // 0x2540 (0x08)
    SGCharacterMovementAbilityComponent* SGCharacterMovementAbility;                           // 0x2548 (0x08)
    FluidInteractorComponent* FluidFieldInteractor;                                            // 0x2550 (0x08)

    // --- Functions ---
    void UserConstructionScript(bool CallFunc_IsEditor_ReturnValue, const Transform Temp_struct_Variable, FluidMeshInteractorComponent* CallFunc_AddComponent_ReturnValue, HitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue);  // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_AIController_Tutorial_C : BP_BaseAIController_C : SGAIController : AIController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_AIController_Tutorial
// ============================================================
class BP_AIController_Tutorial_C : public BP_BaseAIController_C {
public:
    BPC_Tutorial_MovingDirector_C* BPC_Tutorial_MovingDirector;                                // 0x0630 (0x08)
};

// ============================================================
// Inheritance: BP_Tutorial_AjaxFollower_CA_C : BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_AjaxFollower_CA
// ============================================================
class BP_Tutorial_AjaxFollower_CA_C : public BP_Tutorial_AICharacterTemplate_C {
public:
};

// ============================================================
// Inheritance: BP_Tutorial_Ajax_CA_C : BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Ajax_CA
// ============================================================
class BP_Tutorial_Ajax_CA_C : public BP_Tutorial_AICharacterTemplate_C {
public:
};

// ============================================================
// Inheritance: BP_Tutorial_Captain_CA_C : BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Captain_CA
// ============================================================
class BP_Tutorial_Captain_CA_C : public BP_Tutorial_AICharacterTemplate_C {
public:
};

// ============================================================
// Inheritance: BP_Tutorial_Duke_CA_C : BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Duke_CA
// ============================================================
class BP_Tutorial_Duke_CA_C : public BP_Tutorial_AICharacterTemplate_C {
public:
};

// ============================================================
// Inheritance: BP_Tutorial_Enemy_01_CA_C : BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Enemy_01_CA
// ============================================================
class BP_Tutorial_Enemy_01_CA_C : public BP_UamAICharacter_C {
public:
    float TestSize;                                                                            // 0x2560 (0x04)
};

// ============================================================
// Inheritance: BP_Tutorial_Enemy_01_OPE_CA_C : BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Enemy_01_OPE_CA
// ============================================================
class BP_Tutorial_Enemy_01_OPE_CA_C : public BP_UamAICharacter_C {
public:
    float TestSize;                                                                            // 0x2560 (0x04)
};

// ============================================================
// Inheritance: BP_Tutorial_Enemy_02_CA_C : BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Enemy_02_CA
// ============================================================
class BP_Tutorial_Enemy_02_CA_C : public BP_UamAICharacter_C {
public:
    float TestSize;                                                                            // 0x2560 (0x04)
};

// ============================================================
// Inheritance: BP_Tutorial_Enemy_Motel_CA_C : BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Enemy_Motel_CA
// ============================================================
class BP_Tutorial_Enemy_Motel_CA_C : public BP_UamAICharacter_C {
public:
    float TestSize;                                                                            // 0x2560 (0x04)
};

// ============================================================
// Inheritance: BP_Tutorial_Knight_CA_C : BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Knight_CA
// ============================================================
class BP_Tutorial_Knight_CA_C : public BP_Tutorial_AICharacterTemplate_C {
public:
};

// ============================================================
// Inheritance: BP_Tutorial_PlayerCG_CA_C : BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_PlayerCG_CA
// ============================================================
class BP_Tutorial_PlayerCG_CA_C : public BP_Tutorial_AICharacterTemplate_C {
public:
};

// ============================================================
// Inheritance: BP_BaseAIController_C : SGAIController : AIController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/Components/BP_BaseAIController
// ============================================================
class BP_BaseAIController_C : public SGAIController {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x05D0 (0x08)
    BPC_BehaviorTreeComponent_C* BPC_BehaviorTreeComponent;                                    // 0x05D8 (0x08)
    BPC_AIOrderListener_C* BPC_AIOrderListener;                                                // 0x05E0 (0x08)
    NPCBehaviorLODSystemComponent* NPCBehaviorLODSystem;                                       // 0x05E8 (0x08)
    BPC_PlayerDebugOrderManager_C* BPC_PlayerControllerAIComponent;                            // 0x05F0 (0x08)
    BPC_AIGroupRequestComponent_C* BPC_AIGroupRequestComponent;                                // 0x05F8 (0x08)
    BPC_QuestInstigatorComp_Individual_C* BPC_QuestInstigatorComp_Individual;                  // 0x0600 (0x08)
    BPC_UamAIMultiTargetSelector_C* BPC_UamAIMultiTargetSelector;                              // 0x0608 (0x08)
    BPC_AIMoverSystemComponent_C* BPC_AIMoverSystemComponent;                                  // 0x0610 (0x08)
    BPC_AITacticSystem_Base_C* BPC_AITacticSystem;                                             // 0x0618 (0x08)
    BPC_AIMemory_Temp_C* BPC_AIMemory_Temp;                                                    // 0x0620 (0x08)
    BPC_BaseAIPerceptionComponent_C* BaseAIPerceptionComponent;                                // 0x0628 (0x08)

    // --- Functions ---
    void FindPathByNavSkeleton(Vector TargetLoc, TSet<int32> UnreachablePointIDs, int32 CurrentPointID, out bool Success, out TArray<int32> PathPointIDs, out TArray<NavSkeletonGraphResultNode> PathNodes, TArray<int32> NewLocalVar_0, int32 CurrentPoint, NavSkeletonGraphAStarFilter Filter, TSet<int32> LockPointIDs, TArray<int32> PathPointIDArray, float MisDist, int32 NextPointID, TArray<NavSkeletonGraphResultNode> PathNods, NavSkeletonGraphFindResult FindResultStruct, int32 TargetPointID, int32 MyPointID, Vector TargetLocation, Actor* OwnerActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_1, ref TArray<int32> CallFunc_QueryNearestPointIDs_ReturnValue, ref TArray<int32> CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Get_Item, bool CallFunc_Set_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Set_Remove_ReturnValue_1, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_2, NavSkeletonGraphResultNode CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_3, int32 CallFunc_QueryNearestPointID_ReturnValue, Vector CallFunc_K2_GetActorLocation_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_4, int32 CallFunc_QueryNearestPointID_ReturnValue_1, NavSkeletonPoint CallFunc_GetPointData_ReturnValue, Pawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, NavSkeletonGraphAStarFilter K2Node_MakeStruct_NavSkeletonGraphAStarFilter, NavSkeletonGraphFindResult CallFunc_FindPath_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_5, NavSkeletonPoint CallFunc_GetPointData_ReturnValue_1, const int32 Temp_int_Variable, bool CallFunc_AI_ReachMoveTargetLoc_ReturnResult, bool CallFunc_Set_Remove_ReturnValue_2);  // [Public] RVA: 0x186CC1C
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_BaseAIController(int32 EntryPoint, float K2Node_Event_DeltaSeconds, Pawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, Vector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);  // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_AIPerceptionDynamicActor_C : NPCAIPerceptionDynamicActor : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/Components/OnGameState/BP_AIPerceptionDynamicActor
// ============================================================
class BP_AIPerceptionDynamicActor_C : public NPCAIPerceptionDynamicActor {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0360 (0x08)
};

// ============================================================
// Inheritance: BP_UamPlayerCameraManagerTemplate_C : SGPlayerCameraManager : PlayerCameraManager : Actor : Object
// Package: /Game/InBattle/Blueprints/Camera/BP_UamPlayerCameraManagerTemplate
// ============================================================
class BP_UamPlayerCameraManagerTemplate_C : public SGPlayerCameraManager {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x31A0 (0x08)
    PostProcessComponent* PostProcessMaterials;                                                // 0x31A8 (0x08)

    // --- Functions ---
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x186CC1C
    void UpdatePostProcessComponentWeight(float Weight);                                       // [Public] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_UamPlayerCameraManagerTemplate(int32 EntryPoint, const Transform Temp_struct_Variable, PostProcessComponent* CallFunc_AddComponent_ReturnValue, float K2Node_Event_Weight);  // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: AssembleEnvironmentManager_C : SGWeaponAssembleEnvironmentManager : Actor : Object
// Package: /Game/InBattle/Blueprints/Components/PlayerController/AssembleEnvironmentManager
// ============================================================
class AssembleEnvironmentManager_C : public SGWeaponAssembleEnvironmentManager {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0450 (0x08)
};

// ============================================================
// Inheritance: AssembleEnvironment_Uam_C : SGWeaponAssembleEnvironment : SGAssembleBase : Actor : Object
// Package: /Game/InBattle/Blueprints/Components/PlayerController/AssembleEnvironment_Uam
// ============================================================
class AssembleEnvironment_Uam_C : public SGWeaponAssembleEnvironment {
public:
    ChildActorComponent* Lighting_HelmetLights;                                                // 0x0B50 (0x08)
    ChildActorComponent* Lighting_DefaultLight;                                                // 0x0B58 (0x08)
    ChildActorComponent* Lighting_OtherLight;                                                  // 0x0B60 (0x08)
    ChildActorComponent* Lighting_ClothLight;                                                  // 0x0B68 (0x08)
    ChildActorComponent* Lighting_AccessoryLight;                                              // 0x0B70 (0x08)
    ChildActorComponent* Lighting_WeaponLight;                                                 // 0x0B78 (0x08)
    StaticMeshComponent* StaticMeshakm;                                                        // 0x0B80 (0x08)
    SceneComponent* Scene;                                                                     // 0x0B88 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent2D;                                          // 0x0B90 (0x08)
    SkeletalMeshComponent* BaseMesh;                                                           // 0x0B98 (0x08)
    SceneComponent* Pivot;                                                                     // 0x0BA0 (0x08)

    // --- Functions ---
    void UserConstructionScript();                                                             // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_PlayerControllerBase_C : SGPlayerController : PlayerController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/Components/PlayerController/BP_PlayerControllerBase
// ============================================================
class BP_PlayerControllerBase_C : public SGPlayerController {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0990 (0x08)
    SGPCMiniGameChannelComponent* SGPCMiniGameChannel;                                         // 0x0998 (0x08)
    CACommonRPCComponent* CACommonRPC;                                                         // 0x09A0 (0x08)
    CAPCMousePinComponent* CAPCMousePin;                                                       // 0x09A8 (0x08)
    UAAnnouncePlayComponent* UAAnnouncePlay;                                                   // 0x09B0 (0x08)
    SGPCMark1PRenderStateComponent* SGPCMark1PRenderState;                                     // 0x09B8 (0x08)
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x09C0 (0x08)
    CAPCAimingComponent* SGPCAiming;                                                           // 0x09C8 (0x08)
    SGPCBehaviorControlComponent* SGPCBehaviorControl;                                         // 0x09D0 (0x08)
    BPC_QuestInstigatorComp_Individual_C* BPC_QuestInstigatorComp_Individual;                  // 0x09D8 (0x08)
    BPC_PCAutoTestComponent_C* BPC_PCAutoTest;                                                 // 0x09E0 (0x08)
    CAPCInputHandleComponent* CAPCInputHandle;                                                 // 0x09E8 (0x08)
    SGPCThermalViewComponent* SGPCThermalView;                                                 // 0x09F0 (0x08)
    SGPCLocalFileKillCamComponent* SGPCLocalFileKillCam;                                       // 0x09F8 (0x08)
    UAPCQuestManagerComponent* UAPCQuestManager;                                               // 0x0A00 (0x08)
    SGPCProcessPenetrationComponent* SGPCProcessPenetration;                                   // 0x0A08 (0x08)
    SGPCMotionSensorComponent* SGPCMotionSensor;                                               // 0x0A10 (0x08)
    SGPCSpectatingComponent* SGPCSpectating;                                                   // 0x0A18 (0x08)
    SGPCFOVComponent* SGPCFOV;                                                                 // 0x0A20 (0x08)
    SGPCAssetLoadManager* SGPCAssetLoadManager;                                                // 0x0A28 (0x08)
    SGPCMessageComponent* SGPCMessage;                                                         // 0x0A30 (0x08)
    SGPCAutoAimingComponent* SGPCAutoAiming;                                                   // 0x0A38 (0x08)
    SGPCRPCFunTransformComponent* SGPCRPCFunTransform;                                         // 0x0A40 (0x08)
    SGPCWeaponAssembleComponent* SGPCWeaponAssemble;                                           // 0x0A48 (0x08)
    UAPCServerCommandComponent* UAPCServerCommand;                                             // 0x0A50 (0x08)
    SGPCFPPModeComponent* SGPCFPPMode;                                                         // 0x0A58 (0x08)
    SGPCDeathCameraComponent* SGPCDeathCamera;                                                 // 0x0A60 (0x08)
    SGPCRotateRateComponent* SGPCRotateRate;                                                   // 0x0A68 (0x08)
    UAPCUIModeComponent* UAPCUIMode;                                                           // 0x0A70 (0x08)
    FMulticastDelegate DebugInit;                                                              // 0x0A78 (0x10)
    FMulticastDelegate BPC_AIDebugInitFinished;                                                // 0x0A88 (0x10)

    // --- Functions ---
    void ProcessDebugCommand(FString Value);                                                   // [Public] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_PlayerControllerBase(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, FString K2Node_Event_Value, BP_LightingDebugMesh_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, Transform CallFunc_GetTransform_ReturnValue, Actor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, BP_LightingDebugMesh_C* CallFunc_GetActorOfClass_ReturnValue_1, BP_LightingDebugMesh_C* CallFunc_FinishSpawningActor_ReturnValue, ref TArray<StaticMeshComponent*> CallFunc_GetComponentsByTag_ReturnValue, ref TArray<StaticMeshComponent*> CallFunc_GetComponentsByTag_ReturnValue_1, StaticMeshComponent* CallFunc_Array_Get_Item, StaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, StaticMeshComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, StaticMeshComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, ref TArray<StaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue, StaticMeshComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1);  // [Final] RVA: 0x186CC1C
    void BPC_AIDebugInitFinished__DelegateSignature(ActorComponent* BPC_AIDebug);              // [Public] RVA: 0x186CC1C
    void DebugInit__DelegateSignature();                                                       // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_CharacterBase_C : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/BP_CharacterBase
// ============================================================
class BP_CharacterBase_C : public SGCharacter {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x1FA0 (0x08)
    SGCharacterElectricShockEffectComponent* SGCharacterElectricShockEffect;                   // 0x1FA8 (0x08)
    UAWetnessComponent* UAWetness;                                                             // 0x1FB0 (0x08)
    UACharacterAvatarManagerComponent* UACharacterAvatarManager;                               // 0x1FB8 (0x08)
    SGCharacterHearingComponent* SGCharacterHearing;                                           // 0x1FC0 (0x08)
    SGMotionWarpingComponent* SGMotionWarping;                                                 // 0x1FC8 (0x08)
    SGCharacterMovementLadderClimbComponent* SGCharacterMovementLadderClimb;                   // 0x1FD0 (0x08)
    SGCharacterLookAroundComponent* SGCharacterLookAround;                                     // 0x1FD8 (0x08)
    SGCharacterSpectatingComponent* SGCharacterSpectating;                                     // 0x1FE0 (0x08)
    BPC_UamCharacterConditonDetecterComponent_C* BPC_UamCharacterConditonDetecterComponent;    // 0x1FE8 (0x08)
    BPC_UamCharacterLoadProtectComponent_C* BPC_UamCharacterLoadProtectComponent;              // 0x1FF0 (0x08)
    UACharacterContainerPickupsGridMgrComponent* UACharacterContainerPickupsGridMgr;           // 0x1FF8 (0x08)
    SGUAMCharacterPoseCacheComponent* SGUAMCharacterPoseCache;                                 // 0x2000 (0x08)
    UACharacterInspectionComponent* UACharacterInspection;                                     // 0x2008 (0x08)
    SGCharacterFragGrenadeEffectComponent* SGCharacterFragGrenadeEffect;                       // 0x2010 (0x08)
    SGCharacterSkillComponent* SGCharacterSkill;                                               // 0x2018 (0x08)
    BPC_CharacterInventoryDetectComponent_C* BPC_CharacterInventoryDetectComponent;            // 0x2020 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x2028 (0x08)
    SGCharacterActivityComponent* SGCharacterActivity;                                         // 0x2030 (0x08)
    UACharacterInventoryManagerComponent* UACharacterInventoryManager;                         // 0x2038 (0x08)
    BPC_CharacterArmorManager_C* BPC_CharacterArmorManager;                                    // 0x2040 (0x08)
    SGCharacterTeamMove_C* SGCharacterTeamMove;                                                // 0x2048 (0x08)
    UACharacterDeathComponent* UACharacterDeath;                                               // 0x2050 (0x08)
    SGCharacterSignificanceComponent* SGCharacterSignificance;                                 // 0x2058 (0x08)
    SGCharacterLagCompensationComponent* SGCharacterLagCompensation;                           // 0x2060 (0x08)
    SGCharacterSwimComponent* SGCharacterSwim;                                                 // 0x2068 (0x08)
    BPC_CharacterContainerInventoryComponent_C* BPC_CharacterContainerInventoryComponent;      // 0x2070 (0x08)
    AkComponent* Ak;                                                                           // 0x2078 (0x08)
    SGCharacterMovementVaultComponent* SGCharacterMovementVault;                               // 0x2080 (0x08)
    SGCharacterDBNOComponent* SGCharacterDBNO;                                                 // 0x2088 (0x08)
    SGCharacterInvInteractFlagComponent* SGCharacterInvInteractFlag;                           // 0x2090 (0x08)
    SGCharacterMovementDBNOComponent* SGCharacterMovementDBNO;                                 // 0x2098 (0x08)
    SGCharacterFlashGrenadeEffectComponent* SGCharacterFlashGrenadeEffect;                     // 0x20A0 (0x08)
    SGCharacterTeamRescueComponent* SGCharacterTeamRescue;                                     // 0x20A8 (0x08)
    SGCharacterWeaponTraceComponent* SGCharacterWeaponTrace;                                   // 0x20B0 (0x08)
    SGCharacterDamageDebugComponent* SGCharacterDamageDebug;                                   // 0x20B8 (0x08)
    SGCharacterTurnComponent* SGCharacterTurn;                                                 // 0x20C0 (0x08)
    SGCharacterBoneBreakComponent* SGCharacterBoneBreak;                                       // 0x20C8 (0x08)
    SGCharacterFreshWoundComponent* SGCharacterFreshWound;                                     // 0x20D0 (0x08)
    SGCharacterWeaponSwayComponent* SGCharacterWeaponSway;                                     // 0x20D8 (0x08)
    SGCharacterRagdollNewComponent* SGCharacterRagdollNew;                                     // 0x20E0 (0x08)
    SGCharacterSoundComponent* SGCharacterSound;                                               // 0x20E8 (0x08)
    SGCharacterFoodComponent* SGCharacterFood;                                                 // 0x20F0 (0x08)
    SGCharacterCurveBreathComponent* SGCharacterCurveBreath;                                   // 0x20F8 (0x08)
    SGCharacterAvatarComponent* SGCharacterAvatar;                                             // 0x2100 (0x08)
    SGCharacterDebugMovementComponent* SGCharacterDebugMovement;                               // 0x2108 (0x08)
    SGCharacterEnduranceComponent* SGCharacterEndurance;                                       // 0x2110 (0x08)
    SGCharacterMoistureComponent* SGCharacterMoisture;                                         // 0x2118 (0x08)
    SGCharacterInventoryGiveComponent* SGCharacterInventoryGive;                               // 0x2120 (0x08)
    SGCharacterFootEffectComponent* SGCharacterFootEffect;                                     // 0x2128 (0x08)
    SGCharacterProgressManagerComponent* SGCharacterProgressManager;                           // 0x2130 (0x08)
    SGCharacterWeightComponent* SGCharacterWeight;                                             // 0x2138 (0x08)
    SGCharacterAvatarMergeComponent* SGCharacterAvatarMerge;                                   // 0x2140 (0x08)
    SGCharacterMeshComponent* SGCharacterMesh;                                                 // 0x2148 (0x08)
    SGCharacterWeaponManagerComponent* SGCharacterWeaponManager;                               // 0x2150 (0x08)
    SGCharacterWeaponAttachComponent* SGCharacterWeaponAttach;                                 // 0x2158 (0x08)
    SGCharacterUseComponent* SGCharacterUse;                                                   // 0x2160 (0x08)
    SGCharacterBeUsedRescueComponent* SGCharacterBeUsedRescue;                                 // 0x2168 (0x08)
    SGCharacterBeUsedCorpseComponent* SGCharacterBeUsedCorpse;                                 // 0x2170 (0x08)
    SGCharacterTakeHitEffectComponent* SGCharacterTakeHitEffect;                               // 0x2178 (0x08)
    SGCharacterTakeDamageComponent* SGCharacterTakeDamage;                                     // 0x2180 (0x08)
    SGCharacterStunGrenadeEffectComponent* SGCharacterStunGrenadeEffect;                       // 0x2188 (0x08)
    SGCharacterSprintComponent* SGCharacterSprint;                                             // 0x2190 (0x08)
    SGCharacterSenseAbilityComponent* SGCharacterSenseAbility;                                 // 0x2198 (0x08)
    SGCharacterInteractionComponent* SGCharacterInteraction;                                   // 0x21A0 (0x08)
    SGCharacterMovementProneComponent* SGCharacterMovementProne;                               // 0x21A8 (0x08)
    SGCharacterMovementAbilityComponent* SGCharacterMovementAbility;                           // 0x21B0 (0x08)
    SGCharacterLeanWallComponent* SGCharacterLeanWall;                                         // 0x21B8 (0x08)
    UACharacterInputProcessComponent* UACharacterInputProcess;                                 // 0x21C0 (0x08)
    SGCharacterIKComponent* SGCharacterIK;                                                     // 0x21C8 (0x08)
    SGCharacterHealthComponent* SGCharacterHealth;                                             // 0x21D0 (0x08)
    SGCharacterFallComponent* SGCharacterFall;                                                 // 0x21D8 (0x08)
    SGCharacterEnergyComponent* SGCharacterEnergy;                                             // 0x21E0 (0x08)
    SGCharacterAnimationComponent* SGCharacterAnimation;                                       // 0x21E8 (0x08)
    SGCharacterInventorySearchComponent* SGCharacterInventorySearch;                           // 0x21F0 (0x08)
    SGCharacterFOVComponent* SGCharacterFOV;                                                   // 0x21F8 (0x08)

    // --- Functions ---
    void ExecuteUbergraph_BP_CharacterBase(int32 EntryPoint);                                  // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: Lighting_Actor_overview2_In_Blueprint_C : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/BP_UamCharacterTemplate_Lighting/Lighting_Actor_overview2_In_Blueprint
// ============================================================
class Lighting_Actor_overview2_In_Blueprint_C : public Actor {
public:
    SpotLightComponent* SpotLight20_A2_LightComponent0;                                        // 0x0318 (0x08)
    SpotLightComponent* SpotLight19_A2_LightComponent0;                                        // 0x0320 (0x08)
    SpotLightComponent* SpotLight16_RectLight_A2_LightComponent0;                              // 0x0328 (0x08)
    SpotLightComponent* SpotLight15_A2_LightComponent0;                                        // 0x0330 (0x08)
    SpotLightComponent* SpotLight13_A2_LightComponent0;                                        // 0x0338 (0x08)
    SpotLightComponent* SpotLight12_A2_LightComponent0;                                        // 0x0340 (0x08)
    SceneComponent* Lighting_Actor_overview2_DefaultSceneRoot;                                 // 0x0348 (0x08)
};

// ============================================================
// Inheritance: BP_GameStateBase_C : SGGameState : GameState : GameStateBase : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/GameBase/BP_GameStateBase
// ============================================================
class BP_GameStateBase_C : public SGGameState {
public:
    BPC_GameState_ProjectileExplosionManager_C* BPC_GameState_ProjectileExplosionManager;      // 0x05B8 (0x08)
    SGGameStateCommonDataComponent* SGGameStateCommonData;                                     // 0x05C0 (0x08)
    UAGameStateBigGoldRaidComponent* UAGameStateBigGoldRaid;                                   // 0x05C8 (0x08)
    BPC_GameStateIntelligenceComponent_C* BPC_GameStateIntelligenceComponent;                  // 0x05D0 (0x08)
    SGGSPasswordDoorManagerComponent* SGGSPasswordDoorManager;                                 // 0x05D8 (0x08)
    UAScanDeviceInfoComponent* UAScanDeviceInfo;                                               // 0x05E0 (0x08)
    GameplayTasksComponent* GameplayTasks;                                                     // 0x05E8 (0x08)
    UAGameStateBroadcastComponent* UAGameStateBroadcast;                                       // 0x05F0 (0x08)
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x05F8 (0x08)
    SGGameStateSprayComponent* SGGameStateSpray;                                               // 0x0600 (0x08)
    SGGameStateDestroyActorManagerComponent* SGGameStateDestroyActorManager;                   // 0x0608 (0x08)
    UAGameStateTraceComponent* UAGameStateTrace;                                               // 0x0610 (0x08)
    UAGameStateDeathDropComponent* UAGameStateDeathDrop;                                       // 0x0618 (0x08)
    SGGameStateTeamManagerComponent* SGGameStateTeamManager;                                   // 0x0620 (0x08)
    SGGameStateSoundComponent* SGGameStateSound;                                               // 0x0628 (0x08)
    SGGSAILevelComponent* SGGSAILevel;                                                         // 0x0630 (0x08)
    SGGameStateTicketComponent* SGGameStateTicket;                                             // 0x0638 (0x08)
    SGGameStateTimeComponent* SGGameStateTime;                                                 // 0x0640 (0x08)
    SGGameStateScoreComponent* SGGameStateScore;                                               // 0x0648 (0x08)
    BPC_UamTutorialGSEventComponent_C* BPC_UamTutorialGSEventComponent;                        // 0x0650 (0x08)
    BPC_QuestManagerComp_C* BPC_QuestManagerComp;                                              // 0x0658 (0x08)
    BPC_UamGSEscapeManagerComponent_C* BPC_UamGSEscapeManagerComponent;                        // 0x0660 (0x08)
    BPC_UamGameStateTODTimeComponent_C* BPC_UamGameStateTODTimeComponent;                      // 0x0668 (0x08)
    SGGameStateClientInventoryComponent* SGGameStateClientInventory;                           // 0x0670 (0x08)
    BPC_UamGameStateStatisComponent_C* BPC_UamGameStateStatisComponent;                        // 0x0678 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0680 (0x08)
};

// ============================================================
// Inheritance: BP_PlayerStateBase_C : SGPlayerState : PlayerState : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/GameBase/BP_PlayerStateBase
// ============================================================
class BP_PlayerStateBase_C : public SGPlayerState {
public:
    BPC_PlayerStateIntelligenceComponent_C* BPC_PlayerStateIntelligenceComponent;              // 0x0B10 (0x08)
    SGPlayerActivityItemInfoComponent* SGPlayerActivityItemInfo;                               // 0x0B18 (0x08)
    BPC_PlayerStateTraceComponent_C* BPC_PlayerStateTraceComponent;                            // 0x0B20 (0x08)
    SGPSFlowStateComponent* SGPSFlowState;                                                     // 0x0B28 (0x08)
    BPC_PlayerStateZoneInfoComp_C* BPC_PlayerStateZoneInfoComp;                                // 0x0B30 (0x08)
    SGPlayerStateDebugComponent* SGPlayerStateDebug;                                           // 0x0B38 (0x08)
    SGPlayerStateRankComponent* SGPlayerStateRank;                                             // 0x0B40 (0x08)
    SGPlayerStateHealthComponent* SGPlayerStateHealth;                                         // 0x0B48 (0x08)
    BPC_PlayerStateDeathComp_C* BPC_PlayerStateDeathComp;                                      // 0x0B50 (0x08)
    SGPlayerStateKillComponent* SGPlayerStateKill;                                             // 0x0B58 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0B60 (0x08)
};

// ============================================================
// Inheritance: BP_SGGameMode_C : SGGameMode : GameMode : GameModeBase : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamGame/BP_SGGameMode
// ============================================================
class BP_SGGameMode_C : public SGGameMode {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0668 (0x08)
};

// ============================================================
// Inheritance: BP_UamFaction_C : UAFaction : SGFaction : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamGame/BP_UamFaction
// ============================================================
class BP_UamFaction_C : public UAFaction {
public:
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x0398 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x03A0 (0x08)
};

// ============================================================
// Inheritance: BP_UamTeamInfo_C : UATeamInfo : SGTeamInfo : SGTeam : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamGame/BP_UamTeamInfo
// ============================================================
class BP_UamTeamInfo_C : public UATeamInfo {
public:
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x05F8 (0x08)
    SGMissionDataNoOwnerComponent* SGMissionDataNoOwner;                                       // 0x0600 (0x08)
    SGActorFactionComponent* SGActorFaction;                                                   // 0x0608 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0610 (0x08)
    UATeamZoneInfoComponent* UATeamZoneInfo;                                                   // 0x0618 (0x08)
    UATeamEscapeComponent* UATeamEscape;                                                       // 0x0620 (0x08)
};

// ============================================================
// Inheritance: BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_Tutorial_AICharacterTemplate
// ============================================================
class BP_Tutorial_AICharacterTemplate_C : public BP_UamAICharacterTemplate_HD_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x2558 (0x08)
    BPC_CharacterInputProcessComponent_C* BPC_CharacterInputProcessComponent;                  // 0x2560 (0x08)
    BPC_UamTutorial_HideSelfComponent_C* BPC_UamTutorial_HideSelfComponent;                    // 0x2568 (0x08)
    BPC_CharacterAIRandomInventoryComponentV2_C* BPC_CharacterAIRandomInventoryComponentV2;    // 0x2570 (0x08)
    CACharacterAIAimingComponent* CACharacterAIAiming;                                         // 0x2578 (0x08)
    SGCharacterInventoryManagerComponent* SGCharacterInventoryManager;                         // 0x2580 (0x08)
    SGMotionWarpingComponent* SGMotionWarping;                                                 // 0x2588 (0x08)
    BPC_Tutorial_AnimationComponent_C* BPC_Tutorial_AnimationComponent;                        // 0x2590 (0x08)
    SGTutorialAIFireComponent* SGTutorialAIFire;                                               // 0x2598 (0x08)
    BPC_Tutorial_BlockPlayer_C* BPC_Tutorial_BlockPlayer;                                      // 0x25A0 (0x08)
    TextRenderComponent* TopText;                                                              // 0x25A8 (0x08)
    GameplayEffectSpecHandle GE_FollowSpeedSpec;                                               // 0x25B0 (0x10)
    FMulticastDelegate OnFollowPathFinished;                                                   // 0x25C0 (0x10)
    FMulticastDelegate OnMoveToTargetFinished;                                                 // 0x25D0 (0x10)
    FMulticastDelegate OnAttackEnemyFinished;                                                  // 0x25E0 (0x10)
    FMulticastDelegate OnWaitFinished;                                                         // 0x25F0 (0x10)
    FMulticastDelegate OnCrouchFinished;                                                       // 0x2600 (0x10)

    // --- Functions ---
    void UpdateFollowSpeed(float NewSpeed, float DestScale, bool CallFunc_IsValid_ReturnValue, GameplayEffectSpecHandle CallFunc_MakeOutgoingSpec_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, GameplayEffectSpecHandle CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, ActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameplayEffectMagnitude_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);  // [Public] RVA: 0x186CC1C
    void UserConstructionScript();                                                             // [Public] RVA: 0x186CC1C
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_Tutorial_AICharacterTemplate(int32 EntryPoint);                   // [Final] RVA: 0x186CC1C
    void OnCrouchFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x186CC1C
    void OnWaitFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x186CC1C
    void OnAttackEnemyFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x186CC1C
    void OnMoveToTargetFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x186CC1C
    void OnFollowPathFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_UamTutorialCharacter_C : BP_CharacterBase_C : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialCharacter
// ============================================================
class BP_UamTutorialCharacter_C : public BP_CharacterBase_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x2200 (0x08)
    SGCharacterCastShadowComponent* SGCharacterCastShadow;                                     // 0x2208 (0x08)
    BP_TutorialInvalidAreaSensor_C* BP_TutorialInvalidAreaSensor;                              // 0x2210 (0x08)
    SGCharacterCustomCameraComponent* SGCharacterCustomCamera;                                 // 0x2218 (0x08)
    BPC_UamTutorial_HideSelfComponent_C* BPC_UamTutorial_HideSelfComponent;                    // 0x2220 (0x08)
    BPC_UamTurorialCharacterViewTargetComponent_C* BPC_UamTurorialCharacterViewTargetComponent;  // 0x2228 (0x08)
    BPC_UamTutorialCharacterDeathComponent_C* BPC_UamTutorialCharacterDeathComponent;          // 0x2230 (0x08)
    BPC_UamTurorialCharacterCameraBlackBarComponent_C* BlackBarComponent;                      // 0x2238 (0x08)
    BPC_UamTutorialCharacterDefaultInventoryComponent_C* BPC_UamTutorialCharacterDefaultInventoryComponent;  // 0x2240 (0x08)
    SphereComponent* DeathCameraPoint;                                                         // 0x2248 (0x08)
    AkComponent* AkSoundComponent_0;                                                           // 0x2250 (0x08)
    SphereComponent* Sphere_0;                                                                 // 0x2258 (0x08)
    bool bSyncRotationToController;                                                            // 0x2260 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UserConstructionScript();                                                             // [Public] RVA: 0x186CC1C
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x186CC1C
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(PrimitiveComponent* OverlappedComponent, Actor* OtherActor, PrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const HitResult SweepResult);  // RVA: 0x186CC1C
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(PrimitiveComponent* OverlappedComponent, Actor* OtherActor, PrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // RVA: 0x186CC1C
    void EventSyncRotationToController(float DeltaSeconds, Vector OldLocation, Vector OldVelocity);  // RVA: 0x186CC1C
    void ExecuteUbergraph_BP_UamTutorialCharacter(int32 EntryPoint, FDelegate K2Node_CreateDelegate_OutputDelegate, PrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, Actor* K2Node_ComponentBoundEvent_OtherActor_1, PrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const HitResult K2Node_ComponentBoundEvent_SweepResult, PrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, Actor* K2Node_ComponentBoundEvent_OtherActor, PrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, float K2Node_CustomEvent_DeltaSeconds, Vector K2Node_CustomEvent_OldLocation, Vector K2Node_CustomEvent_OldVelocity, Controller* CallFunc_GetController_ReturnValue, Rotator CallFunc_K2_GetActorRotation_ReturnValue, Rotator CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, Rotator CallFunc_MakeRotator_ReturnValue);  // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_UamTutorialGameMode_C : BP_SGGameMode_C : SGGameMode : GameMode : GameModeBase : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialGameMode
// ============================================================
class BP_UamTutorialGameMode_C : public BP_SGGameMode_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0670 (0x08)
    UAAISpawnManagerComponent* UAAISpawnManager;                                               // 0x0678 (0x08)
    BP_UamTutorialChoosePlayerStartComp_C* BP_UamTutorialChoosePlayerStartComp;                // 0x0680 (0x08)
    BPC_AIGlobalManagerComponent_C* BPC_AIGloableManagerComponent;                             // 0x0688 (0x08)
    UAGMMsgHandlerManagerComponent* UAGMMsgHandlerManager;                                     // 0x0690 (0x08)
    SGGameModeGameFlowComponent* SGGameModeGameFlow;                                           // 0x0698 (0x08)
    BPC_UamTutorialGMStartMatchComponent_C* BPC_UamTutorialGMStartMatchComponent;              // 0x06A0 (0x08)
    SGGameModeInventoryManagerComponent* SGGameModeInventoryManager;                           // 0x06A8 (0x08)
    FMulticastDelegate LevelA-Start;                                                           // 0x06B0 (0x10)
    FMulticastDelegate LevelA-End;                                                             // 0x06C0 (0x10)
    FMulticastDelegate LevelB-Start;                                                           // 0x06D0 (0x10)
    FMulticastDelegate LevelB-End;                                                             // 0x06E0 (0x10)
    FMulticastDelegate SwitchToCurrentCheckPoint;                                              // 0x06F0 (0x10)
    FMulticastDelegate FinishSwitchCheckpoint;                                                 // 0x0700 (0x10)
    FMulticastDelegate TogglePlayerGod;                                                        // 0x0710 (0x10)
    FMulticastDelegate PlayLevelAEnding;                                                       // 0x0720 (0x10)
    Character* NPC_Captain;                                                                    // 0x0730 (0x08)
    FMulticastDelegate PlayLevelBEnding;                                                       // 0x0738 (0x10)

    // --- Functions ---
    bool NeedBlockLoadLevelWhenStartMatch();                                                   // [Protected] RVA: 0x186CC1C
    void K2_OnRestartPlayer(Controller* NewPlayer);                                            // [Public] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_UamTutorialGameMode(int32 EntryPoint, Controller* K2Node_Event_NewPlayer);  // [Final] RVA: 0x186CC1C
    void PlayLevelBEnding__DelegateSignature();                                                // [Public] RVA: 0x186CC1C
    void PlayLevelAEnding__DelegateSignature();                                                // [Public] RVA: 0x186CC1C
    void TogglePlayerGod__DelegateSignature(bool bNewGod);                                     // [Public] RVA: 0x186CC1C
    void FinishSwitchCheckpoint__DelegateSignature();                                          // [Public] RVA: 0x186CC1C
    void SwitchToCurrentCheckPoint__DelegateSignature();                                       // [Public] RVA: 0x186CC1C
    void LevelB-End__DelegateSignature();                                                      // [Public] RVA: 0x186CC1C
    void LevelB-Start__DelegateSignature();                                                    // [Public] RVA: 0x186CC1C
    void LevelA-End__DelegateSignature();                                                      // [Public] RVA: 0x186CC1C
    void LevelA-Start__DelegateSignature();                                                    // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_UamTutorialGameState_C : BP_GameStateBase_C : SGGameState : GameState : GameStateBase : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialGameState
// ============================================================
class BP_UamTutorialGameState_C : public BP_GameStateBase_C {
public:
    BPC_UamGameStateFactionManagerComponent_C* BPC_UamGameStateFactionManagerComponent;        // 0x0688 (0x08)
    SGGSDSParamComponent* SGGSDSParam;                                                         // 0x0690 (0x08)
    UAGameStateStatisComponent* UAGameStateStatis;                                             // 0x0698 (0x08)
    UAGameStateGameTypeComponent* UAGameStateGameType;                                         // 0x06A0 (0x08)
    SGGameStateWorldSettingsCacheComponent* SGGameStateWorldSettingsCache;                     // 0x06A8 (0x08)
    UAGameStateTutorialTransmitComp* UAGameStateTutorialTransmitComp;                          // 0x06B0 (0x08)
    UAGSOtherLevelConfigComponent* UAGSOtherLevelConfig;                                       // 0x06B8 (0x08)
    BP_UamTutorialTransmitComp_C* BP_UamTutorialTransmitComp;                                  // 0x06C0 (0x08)
    BPC_UamTutorialGameStateActorPoolComp_C* BPC_UamTutorialGameStateActorPoolComp;            // 0x06C8 (0x08)
    BP_UamTutorialCheckPointManagerComp_C* BP_UamTutorialCheckPointManagerComp;                // 0x06D0 (0x08)
    BP_UamTutorialGameStateFlowComponent_C* BP_UamTutorialGameStateFlowComponent;              // 0x06D8 (0x08)
    bool bShouldTutorialBegin;                                                                 // 0x06E0 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: BP_UamTutorialHUD_C : SGHUD : HUD : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialHUD
// ============================================================
class BP_UamTutorialHUD_C : public SGHUD {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0598 (0x08)
};

// ============================================================
// Inheritance: BP_UamTutorialPlayerController_C : BP_PlayerControllerBase_C : SGPlayerController : PlayerController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialPlayerController
// ============================================================
class BP_UamTutorialPlayerController_C : public BP_PlayerControllerBase_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0A98 (0x08)
    UAPCSettlementComponent* UAPCSettlement;                                                   // 0x0AA0 (0x08)
    BPC_UamPCStatisComponent_C* BPC_UamPCStatisComponent;                                      // 0x0AA8 (0x08)
    BPC_UamTutorialPCFlowControlComponent_C* BPC_UamTutorialPCFlowControlComponent;            // 0x0AB0 (0x08)
    BPC_UamTutorialPCEscapeFlowComponent_C* BPC_UamTutorialPCEscapeFlowComponent;              // 0x0AB8 (0x08)
    BPC_UamTutorialPlayerControllerDeathCheckComponent_C* BPC_UamTutorialPlayerControllerDeathCheckComponent;  // 0x0AC0 (0x08)
    BPC_UamPCSubtitleComponent_C* BPC_UamPCSubtitleComponent;                                  // 0x0AC8 (0x08)
    BPC_UamPCWatchGameComponent_C* BPC_UamPCWatchGameComponent;                                // 0x0AD0 (0x08)
    bool DebugMontage;                                                                         // 0x0AD8 (0x01) BitMask: 0xFF
    FMulticastDelegate TutorialPCEventDispatcher;                                              // 0x0AE0 (0x10)
    FMulticastDelegate TutorialHudMessageDispatcher;                                           // 0x0AF0 (0x10)
    FMulticastDelegate SwitchToB2;                                                             // 0x0B00 (0x10)
    FMulticastDelegate B1MediaFinished;                                                        // 0x0B10 (0x10)
    bool FinishToB2;                                                                           // 0x0B20 (0x01) BitMask: 0xFF

    // --- Functions ---
    void InpActEvt_Period_K2Node_InputKeyEvent_0(Key Key);                                     // RVA: 0x186CC1C
    void ServerDo();                                                                           // RVA: 0x186CC1C
    void ClientCallHudMessage(int32 Messageid);                                                // RVA: 0x186CC1C
    void ExecuteUbergraph_BP_UamTutorialPlayerController(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_MessageID, Key K2Node_InputKeyEvent_Key);  // [Final] RVA: 0x186CC1C
    void B1MediaFinished__DelegateSignature();                                                 // [Public] RVA: 0x186CC1C
    void SwitchToB2__DelegateSignature();                                                      // [Public] RVA: 0x186CC1C
    void TutorialHudMessageDispatcher__DelegateSignature(int32 Messageid);                     // [Public] RVA: 0x186CC1C
    void TutorialPCEventDispatcher__DelegateSignature();                                       // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_UamTutorialPlayerState_C : BP_PlayerStateBase_C : SGPlayerState : PlayerState : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialPlayerState
// ============================================================
class BP_UamTutorialPlayerState_C : public BP_PlayerStateBase_C {
public:
    BPC_UamPCEscapeComponent_C* BPC_UamPCEscapeComponent;                                      // 0x0B68 (0x08)
    BPC_UamPlayerStateStatisComponent_C* BPC_UamPlayerStateStatisComponent;                    // 0x0B70 (0x08)
    SGPSChatInboxComponent* SGPSChatInbox;                                                     // 0x0B78 (0x08)
    UAPlayerStateTeamComponent* UAPlayerStateTeam;                                             // 0x0B80 (0x08)
};

// ============================================================
// Inheritance: BP_HeadsetsBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Headsets/BP_HeadsetsBase
// ============================================================
class BP_HeadsetsBase_C : public SGInventory {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08F0 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0900 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0908 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0910 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0918 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0920 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0928 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0930 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x0938 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0940 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0948 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0950 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0958 (0x08)

    // --- Functions ---
    void SetSoundAttenuationScale(Character* InventoryOwner, enum AttachPosition);             // [Public] RVA: 0x186CC1C
    void ReceiveChangeAttachPositionEvent(Character* OwnerCharacter, enum NewPosition);        // [Public] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_HeadsetsBase(int32 EntryPoint, Character* K2Node_Event_OwnerCharacter, enum K2Node_Event_NewPosition);  // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/BP_HelmetBase
// ============================================================
class BP_HelmetBase_C : public SGInventory {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08F0 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x08F8 (0x08)
    SGInventoryHelmetSwitchComponent* SGInventoryHelmetSwitch;                                 // 0x0900 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0908 (0x08)
    SGInventoryArmorComponent* SGInventoryArmor;                                               // 0x0910 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0918 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0920 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0928 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0930 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0938 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0940 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x0948 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0950 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0958 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0960 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0968 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0970 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0978 (0x08)

    // --- Functions ---
    void SetSoundAttenuationScale(Character* InventoryOwner, enum AttachPosition);             // [Protected] RVA: 0x186CC1C
    void ReceiveChangeAttachPositionEvent(Character* OwnerCharacter, enum NewPosition);        // [Public] RVA: 0x186CC1C
    void ExecuteUbergraph_BP_HelmetBase(int32 EntryPoint, Character* K2Node_Event_OwnerCharacter, enum K2Node_Event_NewPosition);  // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_Helmet_Hat_SSH40_C : BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/Hat_SSH40/BP_Helmet_Hat_SSH40
// ============================================================
class BP_Helmet_Hat_SSH40_C : public BP_HelmetBase_C {
public:
};

// ============================================================
// Inheritance: BP_Helmet_6B47_Clean_C : BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/LV3_6B47_Clean/BP_Helmet_6B47_Clean
// ============================================================
class BP_Helmet_6B47_Clean_C : public BP_HelmetBase_C {
public:
};

// ============================================================
// Inheritance: BP_Helmet_LZSh_C : BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/LV3_LZSh/BP_Helmet_LZSh
// ============================================================
class BP_Helmet_LZSh_C : public BP_HelmetBase_C {
public:
};

// ============================================================
// Inheritance: BP_Helmet_SSh68_C : BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/LV3_SSh68/BP_Helmet_SSh68
// ============================================================
class BP_Helmet_SSh68_C : public BP_HelmetBase_C {
public:
};

// ============================================================
// Inheritance: BP_Helmet_UNTAR_C : BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/UNTAR/BP_Helmet_UNTAR
// ============================================================
class BP_Helmet_UNTAR_C : public BP_HelmetBase_C {
public:
};

// ============================================================
// Inheritance: BP_Vest_2M_C : BP_VestBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Vest/2M/BP_Vest_2M
// ============================================================
class BP_Vest_2M_C : public BP_VestBase_C {
public:
};

// ============================================================
// Inheritance: BP_VestBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Vest/BP_VestBase
// ============================================================
class BP_VestBase_C : public SGInventory {
public:
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    SGInventoryArmorComponent* SGInventoryArmor;                                               // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0910 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0918 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0920 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0928 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x0930 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0938 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0940 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0948 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0950 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0958 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0960 (0x08)
};

// ============================================================
// Inheritance: BP_Vest_3M_C : BP_VestBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Vest/LV2_3M/BP_Vest_3M
// ============================================================
class BP_Vest_3M_C : public BP_VestBase_C {
public:
};

// ============================================================
// Inheritance: BP_Vest_Kirasa_C : BP_VestBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Vest/LV3_Kirasa/BP_Vest_Kirasa
// ============================================================
class BP_Vest_Kirasa_C : public BP_VestBase_C {
public:
};

// ============================================================
// Inheritance: BP_Vest_M12_C : BP_VestBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Vest/M12/BP_Vest_M12
// ============================================================
class BP_Vest_M12_C : public BP_VestBase_C {
public:
};

// ============================================================
// Inheritance: BP_InstructorCoach_Vest_C : BP_ArmoredContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Avatar/Instructor/Instructor_Coach/BP_InstructorCoach_Vest
// ============================================================
class BP_InstructorCoach_Vest_C : public BP_ArmoredContainerBase_C {
public:
};

// ============================================================
// Inheritance: WAND_Jack_Headsets_C : BP_HeadsetsBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Avatar/WAND/WAND_Jack/WAND_Jack_Headsets
// ============================================================
class WAND_Jack_Headsets_C : public BP_HeadsetsBase_C {
public:
    SetRTPCComponent* SetRTPC1;                                                                // 0x0960 (0x08)
};

// ============================================================
// Inheritance: WAND_Jack_Vest_C : BP_ArmoredContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Avatar/WAND/WAND_Jack/WAND_Jack_Vest
// ============================================================
class WAND_Jack_Vest_C : public BP_ArmoredContainerBase_C {
public:
};

// ============================================================
// Inheritance: WAND_Wolf_Headsets_C : BP_HeadsetsBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Avatar/WAND/WAND_Wolf/WAND_Wolf_Headsets
// ============================================================
class WAND_Wolf_Headsets_C : public BP_HeadsetsBase_C {
public:
    SetRTPCComponent* SetRTPC1;                                                                // 0x0960 (0x08)
};

// ============================================================
// Inheritance: WAND_Wolf_Vest_C : BP_ArmoredContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Avatar/WAND/WAND_Wolf/WAND_Wolf_Vest
// ============================================================
class WAND_Wolf_Vest_C : public BP_ArmoredContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_ArmoredContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/BP_ArmoredContainerBase
// ============================================================
class BP_ArmoredContainerBase_C : public SGInventory {
public:
    SGInventoryContainerInteractPerformanceComponent* SGInventoryContainerInteractPerformance;  // 0x08F0 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x08F8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0900 (0x08)
    SGInventoryArmorComponent* SGInventoryArmor;                                               // 0x0908 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x0910 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0918 (0x08)
    SGInventoryBeUsedLootComponent* SGInventoryBeUsedLoot;                                     // 0x0920 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0928 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0930 (0x08)
    SGInventoryContainerSearchingComponent* SGInventoryContainerSearching;                     // 0x0938 (0x08)
    SGInventoryContainerMgrComponent* SGInventoryContainerMgr;                                 // 0x0940 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0948 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0950 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0958 (0x08)
    SGInventoryTypeComponent* SGInventoryType;                                                 // 0x0960 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0968 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0970 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0978 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/BP_ContainerBase
// ============================================================
class BP_ContainerBase_C : public SGInventory {
public:
    SGInventoryContainerInteractPerformanceComponent* Perfomance_Base;                         // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0900 (0x08)
    SGInventoryBeUsedLootComponent* SGInventoryBeUsedLoot;                                     // 0x0908 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0910 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0918 (0x08)
    SGInventoryContainerSearchingComponent* SGInventoryContainerSearching;                     // 0x0920 (0x08)
    SGInventoryContainerMgrComponent* SGInventoryContainerMgr;                                 // 0x0928 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0930 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0938 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0940 (0x08)
    SGInventoryTypeComponent* SGInventoryType;                                                 // 0x0948 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0950 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0958 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0960 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_Bag_VestContainer_6sh112_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/ChestRigs_Unarmored/6sh112/BP_Bag_VestContainer_6sh112
// ============================================================
class BP_Bag_VestContainer_6sh112_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_VestContainer_D3CRX_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/ChestRigs_Unarmored/D3CRX/BP_Bag_VestContainer_D3CRX
// ============================================================
class BP_Bag_VestContainer_D3CRX_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_VestContainer_HunterVest_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/ChestRigs_Unarmored/HunterVest/BP_Bag_VestContainer_HunterVest
// ============================================================
class BP_Bag_VestContainer_HunterVest_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_VestContainer_MPPV_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/ChestRigs_Unarmored/MPPV/BP_Bag_VestContainer_MPPV
// ============================================================
class BP_Bag_VestContainer_MPPV_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_VestContainer_MRig_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/ChestRigs_Unarmored/MRig/BP_Bag_VestContainer_MRig
// ============================================================
class BP_Bag_VestContainer_MRig_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_MyContainer_MBSS_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/MyContainer/MBSS/BP_Bag_MyContainer_MBSS
// ============================================================
class BP_Bag_MyContainer_MBSS_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_MyContainer_TBag_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/MyContainer/TBag/BP_Bag_MyContainer_TBag
// ============================================================
class BP_Bag_MyContainer_TBag_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bag_Pocket_Default_C : BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/Pocket/PocketDefault/BP_Bag_Pocket_Default
// ============================================================
class BP_Bag_Pocket_Default_C : public BP_ContainerBase_C {
public:
};

// ============================================================
// Inheritance: BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/BP_RecoveryBase
// ============================================================
class BP_RecoveryBase_C : public SGInventory {
public:
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08F8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0900 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0908 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0910 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0918 (0x08)
    SGInventoryTypeComponent_Recovery* SGInventoryTypeComponent_Recovery;                      // 0x0920 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0928 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0930 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0938 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0940 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0948 (0x08)
};

// ============================================================
// Inheritance: BP_Ibuprofen_C : BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/Medical/Drug/Ibuprofen/BP_Ibuprofen
// ============================================================
class BP_Ibuprofen_C : public BP_RecoveryBase_C {
public:
};

// ============================================================
// Inheritance: BP_ArmyBandage_C : BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/Medical/InjuryTreatment/ArmyBandage/BP_ArmyBandage
// ============================================================
class BP_ArmyBandage_C : public BP_RecoveryBase_C {
public:
};

// ============================================================
// Inheritance: BP_Bandage_C : BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/Medical/InjuryTreatment/Bandage/BP_Bandage
// ============================================================
class BP_Bandage_C : public BP_RecoveryBase_C {
public:
};

// ============================================================
// Inheritance: BP_CMS_C : BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/Medical/InjuryTreatment/CMS/BP_CMS
// ============================================================
class BP_CMS_C : public BP_RecoveryBase_C {
public:
};

// ============================================================
// Inheritance: BP_IFAK_C : BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/Medical/Medikit/IFAK/BP_IFAK
// ============================================================
class BP_IFAK_C : public BP_RecoveryBase_C {
public:
};

// ============================================================
// Inheritance: BP_QuestManagerActor_C : QuestManagerActor : MFQuestManagerActor : Actor : Object
// Package: /Game/InBattle/Blueprints/QuestSystem/BP_QuestManagerActor
// ============================================================
class BP_QuestManagerActor_C : public QuestManagerActor {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0398 (0x08)
};

// ============================================================
// Inheritance: BP_BarrelBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Barrel/BP_BarrelBase
// ============================================================
class BP_BarrelBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0920 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0928 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0930 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0938 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0940 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0948 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0950 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0958 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0960 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_Barrel_AR15_370mm_Uam_C : BP_BarrelBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Barrel/Barrel_AR15_370mm/BP_Barrel_AR15_370mm_Uam
// ============================================================
class BP_Barrel_AR15_370mm_Uam_C : public BP_BarrelBase_C {
public:
};

// ============================================================
// Inheritance: BP_Barrel_M3A1_8in_C : BP_BarrelBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Barrel/Barrel_M3A1_8in/BP_Barrel_M3A1_8in
// ============================================================
class BP_Barrel_M3A1_8in_C : public BP_BarrelBase_C {
public:
};

// ============================================================
// Inheritance: BP_Barrel_M870_508mm_Uam_C : BP_BarrelBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Barrel/Barrel_M870_508mm/BP_Barrel_M870_508mm_Uam
// ============================================================
class BP_Barrel_M870_508mm_Uam_C : public BP_BarrelBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0970 (0x08)
};

// ============================================================
// Inheritance: BP_Barrel_M9A3_Threaded_Uam_C : BP_BarrelBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Barrel/Barrel_M9A3_Threaded/BP_Barrel_M9A3_Threaded_Uam
// ============================================================
class BP_Barrel_M9A3_Threaded_Uam_C : public BP_BarrelBase_C {
public:
};

// ============================================================
// Inheritance: BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Bolt/BP_ChargingHandleBase
// ============================================================
class BP_ChargingHandleBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0920 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0928 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0930 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0938 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0940 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0948 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0950 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0958 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0960 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_ChargingHandle_AKM_Uam_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Bolt/ChargingHandle_AKM/BP_ChargingHandle_AKM_Uam
// ============================================================
class BP_ChargingHandle_AKM_Uam_C : public BP_ChargingHandleBase_C {
public:
};

// ============================================================
// Inheritance: BP_ChargingHandle_AR15_Standard_Uam_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Bolt/ChargingHandle_AR15_Standard/BP_ChargingHandle_AR15_Standard_Uam
// ============================================================
class BP_ChargingHandle_AR15_Standard_Uam_C : public BP_ChargingHandleBase_C {
public:
};

// ============================================================
// Inheritance: BP_ForegripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Foregrip/BP_ForegripBase
// ============================================================
class BP_ForegripBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0918 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0920 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0928 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0930 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0938 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0940 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0948 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0950 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0958 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0960 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_Foregrip_AFG_Uam_C : BP_ForegripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Foregrip/Foregrip_AFG/BP_Foregrip_AFG_Uam
// ============================================================
class BP_Foregrip_AFG_Uam_C : public BP_ForegripBase_C {
public:
};

// ============================================================
// Inheritance: BP_Foregrip_RVG_Uam_C : BP_ForegripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Foregrip/Foregrip_RVG/BP_Foregrip_RVG_Uam
// ============================================================
class BP_Foregrip_RVG_Uam_C : public BP_ForegripBase_C {
public:
};

// ============================================================
// Inheritance: BP_Foregrip_USAF_C : BP_ForegripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Foregrip/Foregrip_USAF/BP_Foregrip_USAF
// ============================================================
class BP_Foregrip_USAF_C : public BP_ForegripBase_C {
public:
};

// ============================================================
// Inheritance: BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/BP_GasBlockBase
// ============================================================
class BP_GasBlockBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0920 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0928 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0930 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0938 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0940 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0948 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0950 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0958 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0960 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_GasBlock_AR15_M4FS_Uam_C : BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/GasBlock_AR15_M4FS/BP_GasBlock_AR15_M4FS_Uam
// ============================================================
class BP_GasBlock_AR15_M4FS_Uam_C : public BP_GasBlockBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0970 (0x08)
};

// ============================================================
// Inheritance: BP_GasTube_AK74_Uam_C : BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/GasTube_AK74/BP_GasTube_AK74_Uam
// ============================================================
class BP_GasTube_AK74_Uam_C : public BP_GasBlockBase_C {
public:
};

// ============================================================
// Inheritance: BP_GasTube_AKM_Uam_C : BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/GasTube_AKM/BP_GasTube_AKM_Uam
// ============================================================
class BP_GasTube_AKM_Uam_C : public BP_GasBlockBase_C {
public:
};

// ============================================================
// Inheritance: BP_GasTube_AKS74U_C : BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/GasTube_AKS74U/BP_GasTube_AKS74U
// ============================================================
class BP_GasTube_AKS74U_C : public BP_GasBlockBase_C {
public:
};

// ============================================================
// Inheritance: BP_GasTube_AK_Combo_VS_Uam_C : BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/GasTube_AK_Combo_VS/BP_GasTube_AK_Combo_VS_Uam
// ============================================================
class BP_GasTube_AK_Combo_VS_Uam_C : public BP_GasBlockBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/BP_HandGuardBase
// ============================================================
class BP_HandGuardBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0910 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0918 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0920 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0928 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0930 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0938 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0940 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0948 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0950 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0958 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0960 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_HandGuard_AKM_WASR_Uam_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AKM_WASR/BP_HandGuard_AKM_WASR_Uam
// ============================================================
class BP_HandGuard_AKM_WASR_Uam_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_AKM_Wood_Uam_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AKM_Wood/BP_HandGuard_AKM_Wood_Uam
// ============================================================
class BP_HandGuard_AKM_Wood_Uam_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_AKS74U_B11_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AKS74U_B11/BP_HandGuard_AKS74U_B11
// ============================================================
class BP_HandGuard_AKS74U_B11_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_AKS74U_Wood_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AKS74U_Wood/BP_HandGuard_AKS74U_Wood
// ============================================================
class BP_HandGuard_AKS74U_Wood_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_AK_6P20Sb9_Uam_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AK_6P20Sb9/BP_HandGuard_AK_6P20Sb9_Uam
// ============================================================
class BP_HandGuard_AK_6P20Sb9_Uam_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_AK_MK21_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AK_MK21/BP_HandGuard_AK_MK21
// ============================================================
class BP_HandGuard_AK_MK21_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_AR15_Standard_Uam_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_AR15_Standard/BP_HandGuard_AR15_Standard_Uam
// ============================================================
class BP_HandGuard_AR15_Standard_Uam_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_M870_Speedfeed_Uam_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_M870_Speedfeed/BP_HandGuard_M870_Speedfeed_Uam
// ============================================================
class BP_HandGuard_M870_Speedfeed_Uam_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_HandGuard_SOK_Sb71_C : BP_HandGuardBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/HandGuard/HandGuard_SOK_Sb71/BP_HandGuard_SOK_Sb71
// ============================================================
class BP_HandGuard_SOK_Sb71_C : public BP_HandGuardBase_C {
public:
};

// ============================================================
// Inheritance: BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/BP_MagazineBase
// ============================================================
class BP_MagazineBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility1;                                          // 0x08F0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08F8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0900 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0908 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0910 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0918 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0920 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0928 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0930 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0938 (0x08)
    SGWeaponContainerComponent* SGWeaponContainer;                                             // 0x0940 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0948 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0950 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0958 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0960 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0968 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0970 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0978 (0x08)
};

// ============================================================
// Inheritance: BP_Mag_12x70_5R_Sb5_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_12x70_5R_Sb5/BP_Mag_12x70_5R_Sb5
// ============================================================
class BP_Mag_12x70_5R_Sb5_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_12x70_7R_M870_Uam_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_12x70_7R_M870/BP_Mag_12x70_7R_M870_Uam
// ============================================================
class BP_Mag_12x70_7R_M870_Uam_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_45_30R_M3A1_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_45_30R_M3A1/BP_Mag_45_30R_M3A1
// ============================================================
class BP_Mag_45_30R_M3A1_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_45mm_15R_M3A1_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_45mm_15R_M3A1/BP_Mag_45mm_15R_M3A1
// ============================================================
class BP_Mag_45mm_15R_M3A1_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_545x39mm_30R_6L20_Uam_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_545x39mm_30R_6L20/BP_Mag_545x39mm_30R_6L20_Uam
// ============================================================
class BP_Mag_545x39mm_30R_6L20_Uam_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_556x45mm_30R_AR15_STANAG_Uam_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_556x45mm_30R_AR15_STANAG/BP_Mag_556x45mm_30R_AR15_STANAG_Uam
// ============================================================
class BP_Mag_556x45mm_30R_AR15_STANAG_Uam_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_762x39mm_10R_AKM_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_762x39mm_10R_AKM/BP_Mag_762x39mm_10R_AKM
// ============================================================
class BP_Mag_762x39mm_10R_AKM_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_762x39mm_30R_AKM_Uam_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_762x39mm_30R_AKM/BP_Mag_762x39mm_30R_AKM_Uam
// ============================================================
class BP_Mag_762x39mm_30R_AKM_Uam_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mag_9x19mm_17R_M9A3_Uam_C : BP_MagazineBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Magazine/Mag_9x19mm_17R_M9A3/BP_Mag_9x19mm_17R_M9A3_Uam
// ============================================================
class BP_Mag_9x19mm_17R_M9A3_Uam_C : public BP_MagazineBase_C {
public:
};

// ============================================================
// Inheritance: BP_MountBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Mount/BP_MountBase
// ============================================================
class BP_MountBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0910 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0918 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0920 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0928 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0930 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0938 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0940 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0948 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0950 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0958 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0960 (0x08)
};

// ============================================================
// Inheritance: BP_Mount_AKS74U_B18_C : BP_MountBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Mount/Mount_AKS74U_B18/BP_Mount_AKS74U_B18
// ============================================================
class BP_Mount_AKS74U_B18_C : public BP_MountBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mount_Keymod_2in_Uam_C : BP_MountBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Mount/Mount_Keymod_2in/BP_Mount_Keymod_2in_Uam
// ============================================================
class BP_Mount_Keymod_2in_Uam_C : public BP_MountBase_C {
public:
};

// ============================================================
// Inheritance: BP_Mount_Keymod_6in_Uam_C : BP_MountBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Mount/Mount_Keymod_6in/BP_Mount_Keymod_6in_Uam
// ============================================================
class BP_Mount_Keymod_6in_Uam_C : public BP_MountBase_C {
public:
};

// ============================================================
// Inheritance: BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/BP_MuzzleBase
// ============================================================
class BP_MuzzleBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventorySoundDiffuseComponent* SGInventorySoundDiffuse;                                 // 0x08F8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0900 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0908 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0920 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0928 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0930 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0938 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0940 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0948 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0950 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0958 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0960 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0968 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0970 (0x08)
};

// ============================================================
// Inheritance: BP_MuzzleAdapter_DT_Uam_C : BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/MuzzleAdapter_DT/BP_MuzzleAdapter_DT_Uam
// ============================================================
class BP_MuzzleAdapter_DT_Uam_C : public BP_MuzzleBase_C {
public:
};

// ============================================================
// Inheritance: BP_Muzzle_556x45mm_USGIA2_Uam_C : BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/Muzzle_556x45mm_USGIA2/BP_Muzzle_556x45mm_USGIA2_Uam
// ============================================================
class BP_Muzzle_556x45mm_USGIA2_Uam_C : public BP_MuzzleBase_C {
public:
};

// ============================================================
// Inheritance: BP_Muzzle_762x39mm_6P1_0-14_AKM_Uam_C : BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/Muzzle_762x39mm_6P1_0-14_AKM/BP_Muzzle_762x39mm_6P1_0-14_AKM_Uam
// ============================================================
class BP_Muzzle_762x39mm_6P1_0-14_AKM_Uam_C : public BP_MuzzleBase_C {
public:
};

// ============================================================
// Inheritance: BP_Muzzle_762x39mm_Hexagon_AKM_C : BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/Muzzle_762x39mm_Hexagon_AKM/BP_Muzzle_762x39mm_Hexagon_AKM
// ============================================================
class BP_Muzzle_762x39mm_Hexagon_AKM_C : public BP_MuzzleBase_C {
public:
};

// ============================================================
// Inheritance: BP_Muzzle_Hybrid46_Uam_C : BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/Muzzle_Hybrid46_DT/BP_Muzzle_Hybrid46_Uam
// ============================================================
class BP_Muzzle_Hybrid46_Uam_C : public BP_MuzzleBase_C {
public:
};

// ============================================================
// Inheritance: BP_Muzzle_M3A1_Flashhider_C : BP_MuzzleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Muzzle/Muzzle_M3A1_Flashhider/BP_Muzzle_M3A1_Flashhider
// ============================================================
class BP_Muzzle_M3A1_Flashhider_C : public BP_MuzzleBase_C {
public:
};

// ============================================================
// Inheritance: BP_PistolgripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Pistolgrip/BP_PistolgripBase
// ============================================================
class BP_PistolgripBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08F8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0900 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0908 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0910 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0918 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0920 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0928 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0930 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0938 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0940 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0948 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0950 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0958 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0960 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_Pistolgrip_6P4_AKM_Uam_C : BP_PistolgripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Pistolgrip/Pistolgrip_6P4/BP_Pistolgrip_6P4_AKM_Uam
// ============================================================
class BP_Pistolgrip_6P4_AKM_Uam_C : public BP_PistolgripBase_C {
public:
};

// ============================================================
// Inheritance: BP_AK_6p1sb8_Uam_C : BP_PistolgripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Pistolgrip/Pistolgrip_AK_6p1sb8/BP_AK_6p1sb8_Uam
// ============================================================
class BP_AK_6p1sb8_Uam_C : public BP_PistolgripBase_C {
public:
};

// ============================================================
// Inheritance: BP_Pistolgrip_AK_RK3_Uam_C : BP_PistolgripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Pistolgrip/Pistolgrip_AK_RK3/BP_Pistolgrip_AK_RK3_Uam
// ============================================================
class BP_Pistolgrip_AK_RK3_Uam_C : public BP_PistolgripBase_C {
public:
};

// ============================================================
// Inheritance: BP_Pistolgrip_AR15_A2_AKM_Uam_C : BP_PistolgripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Pistolgrip/Pistolgrip_AR15_A2/BP_Pistolgrip_AR15_A2_AKM_Uam
// ============================================================
class BP_Pistolgrip_AR15_A2_AKM_Uam_C : public BP_PistolgripBase_C {
public:
};

// ============================================================
// Inheritance: BP_Pistolgrip_M9A3_Polymer_Uam_C : BP_PistolgripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Pistolgrip/Pistolgrip_M9A3_Polymer/BP_Pistolgrip_M9A3_Polymer_Uam
// ============================================================
class BP_Pistolgrip_M9A3_Polymer_Uam_C : public BP_PistolgripBase_C {
public:
};

// ============================================================
// Inheritance: BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/BP_ReceiverCoverBase
// ============================================================
class BP_ReceiverCoverBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0900 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0908 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0910 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0918 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0920 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0928 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0930 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0938 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0940 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0948 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0950 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0958 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0960 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0968 (0x08)
};

// ============================================================
// Inheritance: BP_ReceiverCover_AKM_PDC_Uam_C : BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/ReceiverCover_AKM_PDC/BP_ReceiverCover_AKM_PDC_Uam
// ============================================================
class BP_ReceiverCover_AKM_PDC_Uam_C : public BP_ReceiverCoverBase_C {
public:
};

// ============================================================
// Inheritance: BP_ReceiverCover_AKS74U_6P26_C : BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/ReceiverCover_AKS74U_6P26/BP_ReceiverCover_AKS74U_6P26
// ============================================================
class BP_ReceiverCover_AKS74U_6P26_C : public BP_ReceiverCoverBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0970 (0x08)
};

// ============================================================
// Inheritance: BP_ReceiverCover_AKM_Uam_C : BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/ReceiverCover_AK_Standard/BP_ReceiverCover_AKM_Uam
// ============================================================
class BP_ReceiverCover_AKM_Uam_C : public BP_ReceiverCoverBase_C {
public:
};

// ============================================================
// Inheritance: BP_ReceiverCover_M4A1_Uam_C : BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/ReceiverCover_M4A1/BP_ReceiverCover_M4A1_Uam
// ============================================================
class BP_ReceiverCover_M4A1_Uam_C : public BP_ReceiverCoverBase_C {
public:
};

// ============================================================
// Inheritance: BP_ReceiverCover_M9A3_Slide_Uam_C : BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/ReceiverCover_M9A3_Slide/BP_ReceiverCover_M9A3_Slide_Uam
// ============================================================
class BP_ReceiverCover_M9A3_Slide_Uam_C : public BP_ReceiverCoverBase_C {
public:
};

// ============================================================
// Inheritance: BP_ReceiverCover_SOK_Sb02_C : BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/ReceiverCover_SOK_Sb02/BP_ReceiverCover_SOK_Sb02
// ============================================================
class BP_ReceiverCover_SOK_Sb02_C : public BP_ReceiverCoverBase_C {
public:
};

// ============================================================
// Inheritance: BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/BP_SightBase
// ============================================================
class BP_SightBase_C : public SGInventory {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08F0 (0x08)
    PostProcessComponent* PostProcess;                                                         // 0x08F8 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0900 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0908 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0910 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0918 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0920 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0928 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0930 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0938 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0940 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0948 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0950 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0958 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0960 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0968 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0970 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0978 (0x08)

    // --- Functions ---
    void ExecuteUbergraph_BP_SightBase(int32 EntryPoint);                                      // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: BP_IronSight_Front_M9A3_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Front_M9A3/BP_IronSight_Front_M9A3_Uam
// ============================================================
class BP_IronSight_Front_M9A3_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_AK_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_AK/BP_IronSight_Rear_AK_Uam
// ============================================================
class BP_IronSight_Rear_AK_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_AKM_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_AKM/BP_IronSight_Rear_AKM_Uam
// ============================================================
class BP_IronSight_Rear_AKM_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_AR15_CarryHandle_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_AR15_CarryHandle/BP_IronSight_Rear_AR15_CarryHandle_Uam
// ============================================================
class BP_IronSight_Rear_AR15_CarryHandle_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_M870_XSShort_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_M870_XSShort/BP_IronSight_Rear_M870_XSShort_Uam
// ============================================================
class BP_IronSight_Rear_M870_XSShort_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_M9A3_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_M9A3/BP_IronSight_Rear_M9A3_Uam
// ============================================================
class BP_IronSight_Rear_M9A3_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: IronSight_Rear_SOK12_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_SOK12/IronSight_Rear_SOK12
// ============================================================
class IronSight_Rear_SOK12_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_TT01_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_TT01/BP_IronSight_Rear_TT01
// ============================================================
class BP_IronSight_Rear_TT01_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_Sight_Holographic_553_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/Sight_Holographic_553/BP_Sight_Holographic_553_Uam
// ============================================================
class BP_Sight_Holographic_553_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_Sight_Holographic_EXPS3_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/Sight_Holographic_EXPS3/BP_Sight_Holographic_EXPS3_Uam
// ============================================================
class BP_Sight_Holographic_EXPS3_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_Sight_ReflexSight_EKP818_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/Sight_ReflexSight_EKP818/BP_Sight_ReflexSight_EKP818_Uam
// ============================================================
class BP_Sight_ReflexSight_EKP818_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/BP_StockBase
// ============================================================
class BP_StockBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08F0 (0x08)
    SGInventoryAnimationComponent* SGInventoryAnimation;                                       // 0x08F8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0900 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0908 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0910 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0918 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0920 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0928 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0930 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0938 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0940 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0948 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0950 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0958 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0960 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0968 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0970 (0x08)
};

// ============================================================
// Inheritance: BP_StockAdapter_AKS74_PTLock_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/StockAdapter_AKS74_PTLock/BP_StockAdapter_AKS74_PTLock
// ============================================================
class BP_StockAdapter_AKS74_PTLock_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_StockAdapter_ME4_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/StockAdapter_ME4/BP_StockAdapter_ME4_Uam
// ============================================================
class BP_StockAdapter_ME4_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_StockBufferTube_Advanced_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/StockBufferTube_Advanced/BP_StockBufferTube_Advanced
// ============================================================
class BP_StockBufferTube_Advanced_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_StockBufferTube_Colt_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/StockBufferTube_Colt/BP_StockBufferTube_Colt_Uam
// ============================================================
class BP_StockBufferTube_Colt_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_StockPad_AR_RBP_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/StockPad_AR_RBP/BP_StockPad_AR_RBP_Uam
// ============================================================
class BP_StockPad_AR_RBP_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_AKM_Wood_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_AKM_Wood/BP_Stock_AKM_Wood_Uam
// ============================================================
class BP_Stock_AKM_Wood_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_AKS74_6P21_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_AKS74_6P21/BP_Stock_AKS74_6P21
// ============================================================
class BP_Stock_AKS74_6P21_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_AK_ZenitPT1_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_AK_ZenitPT1/BP_Stock_AK_ZenitPT1_Uam
// ============================================================
class BP_Stock_AK_ZenitPT1_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_AK_Zhukov_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_AK_Zhukov/BP_Stock_AK_Zhukov_Uam
// ============================================================
class BP_Stock_AK_Zhukov_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_AR15_M4SS_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_AR15_M4SS/BP_Stock_AR15_M4SS_Uam
// ============================================================
class BP_Stock_AR15_M4SS_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_AR15_MagpulCTR_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_AR15_MagpulCTR/BP_Stock_AR15_MagpulCTR_Uam
// ============================================================
class BP_Stock_AR15_MagpulCTR_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_M3A1_Stantard_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_M3A1_Stantard/BP_Stock_M3A1_Stantard
// ============================================================
class BP_Stock_M3A1_Stantard_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_M870_SPS_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_M870_SPS/BP_Stock_M870_SPS_Uam
// ============================================================
class BP_Stock_M870_SPS_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_Stock_MOE_Uam_C : BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/Stock_MOE/BP_Stock_MOE_Uam
// ============================================================
class BP_Stock_MOE_Uam_C : public BP_StockBase_C {
public:
};

// ============================================================
// Inheritance: BP_FlashBase_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/TacticalDevices/BP_FlashBase
// ============================================================
class BP_FlashBase_C : public BP_ChargingHandleBase_C {
public:
    SGInventoryFlashlightComponent_HD* SGInventoryFlashlightComponent_HD;                      // 0x0970 (0x08)
    ParticleSystemComponent* LaserPS;                                                          // 0x0978 (0x08)
};

// ============================================================
// Inheritance: BP_LaserBase_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/TacticalDevices/BP_LaserBase
// ============================================================
class BP_LaserBase_C : public BP_ChargingHandleBase_C {
public:
    SGInventoryLaserComponent* SGInventoryLaser;                                               // 0x0970 (0x08)
    ParticleSystemComponent* LaserPS;                                                          // 0x0978 (0x08)
};

// ============================================================
// Inheritance: BP_Flash_Test_C : BP_FlashBase_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/TacticalDevices/Flash_Test/BP_Flash_Test
// ============================================================
class BP_Flash_Test_C : public BP_FlashBase_C {
public:
};

// ============================================================
// Inheritance: BP_Laser_LA5_C : BP_LaserBase_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/TacticalDevices/Laser_LA5/BP_Laser_LA5
// ============================================================
class BP_Laser_LA5_C : public BP_LaserBase_C {
public:
    SGInventoryFlashlightComponent_HD* SGInventoryFlashlightComponent_HD;                      // 0x0980 (0x08)
};

// ============================================================
// Inheritance: BP_Laser_TBL_C : BP_LaserBase_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/TacticalDevices/Laser_TBL/BP_Laser_TBL
// ============================================================
class BP_Laser_TBL_C : public BP_LaserBase_C {
public:
};

// ============================================================
// Inheritance: BP_12x70_7mm_Buckshot_Uam_C : BP_AmmoBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Ammo/12x70_7mm_Buckshot_Uam/BP_12x70_7mm_Buckshot_Uam
// ============================================================
class BP_12x70_7mm_Buckshot_Uam_C : public BP_AmmoBase_C {
public:
    SGInventorySearchComponent* SGInventorySearch_0;                                           // 0x0950 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0958 (0x08)
};

// ============================================================
// Inheritance: BP_AmmoBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Ammo/BP_AmmoBase
// ============================================================
class BP_AmmoBase_C : public SGInventory {
public:
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08F0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08F8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0900 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0918 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0920 (0x08)
    SGInventoryTypeComponent_Ammo* SGInventoryTypeComponent_Ammo;                              // 0x0928 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0930 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0938 (0x08)
    SGInventoryBulletMeshComponent* SGInventoryBulletMesh;                                     // 0x0940 (0x08)
    SGInventoryBulletDamageComponent* SGInventoryBulletDamage;                                 // 0x0948 (0x08)
};

// ============================================================
// Inheritance: Bullet_HD_C : SGProjectile_GravityBullet_HD : PooledActor : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Bullet/Bullet_HD
// ============================================================
class Bullet_HD_C : public SGProjectile_GravityBullet_HD {
public:
};

// ============================================================
// Inheritance: BP_BulletShell_HD_C : SGBulletShellEffect_HD : PooledActor : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/BulletShell_HD/BP_BulletShell_HD
// ============================================================
class BP_BulletShell_HD_C : public SGBulletShellEffect_HD {
public:
};

// ============================================================
// Inheritance: BPC_Weapon_UamEmptyHand_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/EmptyHand/BPC_Weapon_UamEmptyHand
// ============================================================
class BPC_Weapon_UamEmptyHand_C : public SGWeapon {
public:
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0CD0 (0x08)
    SGWeaponCrosshairComponent* SGWeaponCrosshair;                                             // 0x0CD8 (0x08)
    BPC_Weapon_Validation_C* BPC_Weapon_Validation;                                            // 0x0CE0 (0x08)
    BPC_Weapon_Impact_C* BPC_Weapon_Impact;                                                    // 0x0CE8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0CF0 (0x08)
    SGUAMWeaponGiveComponent* SGUamWeaponGive;                                                 // 0x0CF8 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0D00 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0D08 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0D10 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0D18 (0x08)
    SGWeaponDebugComponent* SGWeaponDebug;                                                     // 0x0D20 (0x08)
    SGWeaponCameraComponent* SGWeaponCamera;                                                   // 0x0D28 (0x08)
    SGWeaponFireIntervalComponent* SGWeaponFireInterval;                                       // 0x0D30 (0x08)
    SGWeaponFiringComponent* SGWeaponFiring;                                                   // 0x0D38 (0x08)
    SGWeaponAppearanceComponent* SGWeaponAppearance;                                           // 0x0D40 (0x08)
    SGWeaponAmmoComponent* SGWeaponAmmo;                                                       // 0x0D48 (0x08)
    SGWeaponZoomComponent* SGWeaponZoom;                                                       // 0x0D50 (0x08)
    SGWeaponStateComponent* SGWeaponState;                                                     // 0x0D58 (0x08)
    SGWeaponMovementComponent* SGWeaponMovement;                                               // 0x0D60 (0x08)
    SGWeaponDamageComponent* SGWeaponDamage;                                                   // 0x0D68 (0x08)
    SGUAMWeaponAnimationComponent* SGUamWeaponAnimation;                                       // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_ImpactEffect_HD_C : SGImpactEffect_HD : PooledActor : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/Impact_HD/BP_ImpactEffect_HD
// ============================================================
class BP_ImpactEffect_HD_C : public SGImpactEffect_HD {
public:
};

// ============================================================
// Inheritance: BP_Weapon_AKM_Uam_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/AKM/BP_Weapon_AKM_Uam
// ============================================================
class BP_Weapon_AKM_Uam_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_AK74N_Uam_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/AKS74N/BP_Weapon_AK74N_Uam
// ============================================================
class BP_Weapon_AK74N_Uam_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_AKS74U_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/AKS74U/BP_Weapon_AKS74U
// ============================================================
class BP_Weapon_AKS74U_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0E10 (0x08)
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E18 (0x08)
};

// ============================================================
// Inheritance: BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/BP_AssultRifle_WeaponBase
// ============================================================
class BP_AssultRifle_WeaponBase_C : public BP_MainWeaponBase_C {
public:
};

// ============================================================
// Inheritance: BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/BP_MainWeaponBase
// ============================================================
class BP_MainWeaponBase_C : public BP_SGWeapon_C {
public:
    SGWeaponOrnamentComponent* SGWeaponOrnament;                                               // 0x0CE0 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x0CE8 (0x08)
    SGWeaponHeatComponent_HD* SGWeaponHeatComponent_HD;                                        // 0x0CF0 (0x08)
    SGWeaponDataComponent* SGWeaponData;                                                       // 0x0CF8 (0x08)
    SGWeaponMeshComponent* SGWeaponMesh;                                                       // 0x0D00 (0x08)
    SGWeaponMergeComponent* SGWeaponMerge;                                                     // 0x0D08 (0x08)
    SGWeaponTacticalInvStateComponent* SGWeaponTacticalInvState;                               // 0x0D10 (0x08)
    SGGunSoundComponent* SGGunSound;                                                           // 0x0D18 (0x08)
    BPC_RecoilComp_C* BPC_RecoilComp;                                                          // 0x0D20 (0x08)
    SGWeaponCrosshairComponent* SGWeaponCrosshair;                                             // 0x0D28 (0x08)
    BPC_Weapon_Validation_C* BPC_Weapon_Validation;                                            // 0x0D30 (0x08)
    BPC_Weapon_Impact_C* BP_WeapComp_Impact;                                                   // 0x0D38 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0D40 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0D48 (0x08)
    SGInventoryTypeComponent_Weapon* SGInventoryTypeComponent_Weapon;                          // 0x0D50 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0D58 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0D60 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0D68 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0D70 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0D78 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0D80 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0D88 (0x08)
    SGUAMWeaponGiveComponent* SGUamWeaponGive;                                                 // 0x0D90 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0D98 (0x08)
    SGWeaponZoomComponent* SGWeaponZoom;                                                       // 0x0DA0 (0x08)
    SGWeaponStateComponent* SGWeaponState;                                                     // 0x0DA8 (0x08)
    SGWeaponSpreadComponent* SGWeaponSpread;                                                   // 0x0DB0 (0x08)
    SGWeaponMovementComponent* SGWeaponMovement;                                               // 0x0DB8 (0x08)
    SGWeaponFiringComponent* SGWeaponFiring;                                                   // 0x0DC0 (0x08)
    SGWeaponFireIntervalComponent* SGWeaponFireInterval;                                       // 0x0DC8 (0x08)
    SGWeaponDamageComponent* SGWeaponDamage;                                                   // 0x0DD0 (0x08)
    SGWeaponCameraComponent* SGWeaponCamera;                                                   // 0x0DD8 (0x08)
    SGWeaponBoreComponent* SGWeaponBore;                                                       // 0x0DE0 (0x08)
    SGWeaponAssembleComponent* SGWeaponAssemble;                                               // 0x0DE8 (0x08)
    SGUAMWeaponAppearanceComponent* SGUamWeaponAppearance;                                     // 0x0DF0 (0x08)
    SGUAMWeaponAnimationComponent* SGUamWeaponAnimation;                                       // 0x0DF8 (0x08)
    SGWeaponAmmoComponent* SGWeaponAmmo;                                                       // 0x0E00 (0x08)
    SGWeaponDebugComponent* SGWeaponDebug;                                                     // 0x0E08 (0x08)
};

// ============================================================
// Inheritance: BP_Pistol_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/BP_Pistol_WeaponBase
// ============================================================
class BP_Pistol_WeaponBase_C : public BP_MainWeaponBase_C {
public:
};

// ============================================================
// Inheritance: BP_SMG_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/BP_SMG_WeaponBase
// ============================================================
class BP_SMG_WeaponBase_C : public BP_MainWeaponBase_C {
public:
};

// ============================================================
// Inheritance: BP_Shotgun_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/BP_Shotgun_WeaponBase
// ============================================================
class BP_Shotgun_WeaponBase_C : public BP_MainWeaponBase_C {
public:
};

// ============================================================
// Inheritance: BP_Weapon_M3A1_C : BP_SMG_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/M3A1/BP_Weapon_M3A1
// ============================================================
class BP_Weapon_M3A1_C : public BP_SMG_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M4A1_Uam_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/M4A1/BP_Weapon_M4A1_Uam
// ============================================================
class BP_Weapon_M4A1_Uam_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M870_Uam_C : BP_Shotgun_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/M870/BP_Weapon_M870_Uam
// ============================================================
class BP_Weapon_M870_Uam_C : public BP_Shotgun_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M9A3_Uam_C : BP_Pistol_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/M9A3/BP_Weapon_M9A3_Uam
// ============================================================
class BP_Weapon_M9A3_Uam_C : public BP_Pistol_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_S12K_C : BP_Shotgun_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/Saiga12/BP_Weapon_S12K
// ============================================================
class BP_Weapon_S12K_C : public BP_Shotgun_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0E10 (0x08)
};

// ============================================================
// Inheritance: BP_MeleeWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MeleeWeapon/BP_MeleeWeaponBase
// ============================================================
class BP_MeleeWeaponBase_C : public BP_SGWeapon_C {
public:
    SGWeaponMeshComponent* SGWeaponMesh;                                                       // 0x0CE0 (0x08)
    SGMeleeWeaponSoundComponent* SGMeleeWeaponSound;                                           // 0x0CE8 (0x08)
    SGWeaponCrosshairComponent* SGWeaponCrosshair;                                             // 0x0CF0 (0x08)
    BPC_Weapon_Validation_C* BPC_Weapon_Validation;                                            // 0x0CF8 (0x08)
    BPC_Weapon_Impact_C* BP_WeapComp_Impact;                                                   // 0x0D00 (0x08)
    SGUAMWeaponGiveComponent* SGUamWeaponGive;                                                 // 0x0D08 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0D10 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0D18 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0D20 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0D28 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0D30 (0x08)
    SGInventoryTypeComponent_Weapon* SGInventoryTypeComponent_Weapon;                          // 0x0D38 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0D40 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0D48 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0D50 (0x08)
    SGWeaponDebugComponent* SGWeaponDebug;                                                     // 0x0D58 (0x08)
    SGWeaponCameraComponent* SGWeaponCamera;                                                   // 0x0D60 (0x08)
    SGWeaponFireIntervalComponent* SGWeaponFireInterval;                                       // 0x0D68 (0x08)
    SGWeaponFiringComponent* SGWeaponFiring;                                                   // 0x0D70 (0x08)
    SGWeaponAppearanceComponent* SGWeaponAppearance;                                           // 0x0D78 (0x08)
    SGWeaponAmmoComponent* SGWeaponAmmo;                                                       // 0x0D80 (0x08)
    SGWeaponZoomComponent* SGWeaponZoom;                                                       // 0x0D88 (0x08)
    SGWeaponStateComponent* SGWeaponState;                                                     // 0x0D90 (0x08)
    SGWeaponMovementComponent* SGWeaponMovement;                                               // 0x0D98 (0x08)
    SGWeaponDamageComponent* SGWeaponDamage;                                                   // 0x0DA0 (0x08)
    SGUAMWeaponAnimationComponent* SGUamWeaponAnimation;                                       // 0x0DA8 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M9_Bayonet_Uam_C : BP_MeleeWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MeleeWeapon/M9_Bayonet/BP_Weapon_M9_Bayonet_Uam
// ============================================================
class BP_Weapon_M9_Bayonet_Uam_C : public BP_MeleeWeaponBase_C {
public:
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0DB0 (0x08)
};

// ============================================================
// Inheritance: BP_ProjectileTrajectory_C : SGProjectileTrajectory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/ThrowWeapon/BP_ProjectileTrajectory
// ============================================================
class BP_ProjectileTrajectory_C : public SGProjectileTrajectory {
public:
    SplineComponent* Spline;                                                                   // 0x0498 (0x08)
    ParticleSystemComponent* WarningParticleSystem;                                            // 0x04A0 (0x08)
};

// ============================================================
// Inheritance: BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Weapon_old/WeaponBase/BP_SGWeapon
// ============================================================
class BP_SGWeapon_C : public SGWeapon {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0CD0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0CD8 (0x08)
};

// ============================================================
// Inheritance: BP_CaptureActor_C : SGCharacterCaptureActor : Actor : Object
// Package: /Game/InBattle/UI/Avatar/BP_CaptureActor
// ============================================================
class BP_CaptureActor_C : public SGCharacterCaptureActor {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0630 (0x08)
    ChildActorComponent* Lighting_Actor_overview2_In_Blueprint;                                // 0x0638 (0x08)
    SpotLightComponent* SpotLight_key3;                                                        // 0x0640 (0x08)
    SpotLightComponent* SpotLight_key2;                                                        // 0x0648 (0x08)
    SpotLightComponent* SpotLight_key1;                                                        // 0x0650 (0x08)
    SpotLightComponent* SpotLight_R_back2;                                                     // 0x0658 (0x08)
    SpotLightComponent* SpotLight_R_back1;                                                     // 0x0660 (0x08)

    // --- Functions ---
    void ExecuteUbergraph_BP_CaptureActor(int32 EntryPoint);                                   // [Final] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: AIController : Controller : Actor : Object
// Package: /Script/AIModule
// ============================================================
class AIController : public Controller {
public:
    bool bStartAILogicOnPossess;                                                               // 0x03C8 (0x01) BitMask: 0x01
    bool bStopAILogicOnUnposses;                                                               // 0x03C8 (0x01) BitMask: 0x02
    bool bLOSflag;                                                                             // 0x03C8 (0x01) BitMask: 0x04
    bool bSkipExtraLOSChecks;                                                                  // 0x03C8 (0x01) BitMask: 0x08
    bool bAllowStrafe;                                                                         // 0x03C8 (0x01) BitMask: 0x10
    bool bWantsPlayerState;                                                                    // 0x03C8 (0x01) BitMask: 0x20
    bool bSetControlRotationFromPawnOrientation;                                               // 0x03C8 (0x01) BitMask: 0x40
    PathFollowingComponent* PathFollowingComponent;                                            // 0x03D0 (0x08)
    BrainComponent* BrainComponent;                                                            // 0x03D8 (0x08)
    AIPerceptionComponent* PerceptionComponent;                                                // 0x03E0 (0x08)
    PawnActionsComponent* ActionsComp;                                                         // 0x03E8 (0x08)
    BlackboardComponent* Blackboard;                                                           // 0x03F0 (0x08)
    GameplayTasksComponent* CachedGameplayTasksComponent;                                      // 0x03F8 (0x08)
    TSubclassOf<NavigationQueryFilter> DefaultNavigationFilterClass;                           // 0x0400 (0x08)
    FMulticastDelegate ReceiveMoveCompleted;                                                   // 0x0408 (0x10)

    // --- Functions ---
    bool UseBlackboard(BlackboardData* BlackboardAsset, out BlackboardComponent* BlackboardComponent);  // [Final|Public] RVA: 0x81561E8
    void UnclaimTaskResource(TSubclassOf<GameplayTaskResource> ResourceClass);                 // [Final|Public] RVA: 0x8155E1C
    void SetPathFollowingComponent(PathFollowingComponent* NewPFComponent);                    // [Final|Public] RVA: 0x81557E8
    void SetMoveBlockDetection(bool bEnable);                                                  // [Final|Public] RVA: 0x815574C
    bool RunBehaviorTree(BehaviorTree* BTAsset);                                               // [Public] RVA: 0x8155454
    void OnUsingBlackBoard(BlackboardComponent* BlackboardComp, BlackboardData* BlackboardAsset);  // [Protected] RVA: 0x186CC1C
    void OnGameplayTaskResourcesClaimed(GameplayResourceSet NewlyClaimed, GameplayResourceSet FreshlyReleased);  // [Public] RVA: 0x815503C
    uint8 MoveToLocation(const Vector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<NavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // [Final|Public] RVA: 0x8154D20
    uint8 MoveToActor(Actor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<NavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // [Final|Public] RVA: 0x8154A68
    void K2_SetFocus(Actor* NewFocus);                                                         // [Final|Public] RVA: 0x8154818
    void K2_SetFocalPoint(Vector FP);                                                          // [Final|Public] RVA: 0x8154768
    void K2_ClearFocus();                                                                      // [Final|Public] RVA: 0x815474C
    bool HasPartialPath();                                                                     // [Final|Public] RVA: 0x8154460
    PathFollowingComponent* GetPathFollowingComponent();                                       // [Final|Public] RVA: 0x8154280
    uint8 GetMoveStatus();                                                                     // [Final|Public] RVA: 0x81541C0
    Vector GetImmediateMoveDestination();                                                      // [Final|Public] RVA: 0x8154078
    Actor* GetFocusActor();                                                                    // [Final|Public] RVA: 0x8154054
    Vector GetFocalPointOnActor(const Actor* Actor);                                           // [Public] RVA: 0x8153F94
    Vector GetFocalPoint();                                                                    // [Final|Public] RVA: 0x8153F60
    AIPerceptionComponent* GetAIPerceptionComponent();                                         // [Final|Public] RVA: 0x81538BC
    void ClaimTaskResource(TSubclassOf<GameplayTaskResource> ResourceClass);                   // [Final|Public] RVA: 0x81533FC
};

// ============================================================
// Inheritance: CameraRig_Rail : Actor : Object
// Package: /Script/CinematicCamera
// ============================================================
class CameraRig_Rail : public Actor {
public:
    float CurrentPositionOnRail;                                                               // 0x0318 (0x04)
    bool bLockOrientationToRail;                                                               // 0x031C (0x01) BitMask: 0xFF
    SceneComponent* TransformComponent;                                                        // 0x0320 (0x08)
    SplineComponent* RailSplineComponent;                                                      // 0x0328 (0x08)
    SceneComponent* RailCameraMount;                                                           // 0x0330 (0x08)

    // --- Functions ---
    SplineComponent* GetRailSplineComponent();                                                 // [Final|Public] RVA: 0x48FC958
};

// ============================================================
// Inheritance: CineCameraActor : CameraActor : Actor : Object
// Package: /Script/CinematicCamera
// ============================================================
class CineCameraActor : public CameraActor {
public:
    CameraLookatTrackingSettings LookatTrackingSettings;                                       // 0x0A00 (0x50)

    // --- Functions ---
    CineCameraComponent* GetCineCameraComponent();                                             // [Final|Public] RVA: 0x79683C4
};

// ============================================================
// Inheritance: Object
// Package: /Script/CoreUObject
// ============================================================
class Object {
public:

    // --- Functions ---
    void ExecuteUbergraph(int32 EntryPoint);                                                   // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: Actor : Object
// Package: /Script/Engine
// ============================================================
class Actor : public Object {
public:
    ActorTickFunction PrimaryActorTick;                                                        // 0x0028 (0x40)
    bool bNetTemporary;                                                                        // 0x0068 (0x01) BitMask: 0x01
    bool bNetStartup;                                                                          // 0x0068 (0x01) BitMask: 0x02
    bool bOnlyRelevantToOwner;                                                                 // 0x0068 (0x01) BitMask: 0x04
    bool bAlwaysRelevant;                                                                      // 0x0068 (0x01) BitMask: 0x08
    bool bReplicateMovement;                                                                   // 0x0068 (0x01) BitMask: 0x10
    bool bHidden;                                                                              // 0x0068 (0x01) BitMask: 0x20
    bool bTearOff;                                                                             // 0x0068 (0x01) BitMask: 0x40
    bool bExchangedRoles;                                                                      // 0x0068 (0x01) BitMask: 0x80
    bool bNetLoadOnClient;                                                                     // 0x0069 (0x01) BitMask: 0x01
    bool bNetUseOwnerRelevancy;                                                                // 0x0069 (0x01) BitMask: 0x02
    bool bRelevantForNetworkReplays;                                                           // 0x0069 (0x01) BitMask: 0x04
    bool bRelevantForLevelBounds;                                                              // 0x0069 (0x01) BitMask: 0x08
    bool bReplayRewindable;                                                                    // 0x0069 (0x01) BitMask: 0x10
    bool bAllowTickBeforeBeginPlay;                                                            // 0x0069 (0x01) BitMask: 0x20
    bool bAutoDestroyWhenFinished;                                                             // 0x0069 (0x01) BitMask: 0x40
    bool bCanBeDamaged;                                                                        // 0x0069 (0x01) BitMask: 0x80
    bool bBlockInput;                                                                          // 0x006A (0x01) BitMask: 0x01
    bool bCollideWhenPlacing;                                                                  // 0x006A (0x01) BitMask: 0x02
    bool bFindCameraComponentWhenViewTarget;                                                   // 0x006A (0x01) BitMask: 0x04
    bool bGenerateOverlapEventsDuringLevelStreaming;                                           // 0x006A (0x01) BitMask: 0x08
    bool bIgnoresOriginShifting;                                                               // 0x006A (0x01) BitMask: 0x10
    bool bEnableAutoLODGeneration;                                                             // 0x006A (0x01) BitMask: 0x20
    bool bIsEditorOnlyActor;                                                                   // 0x006A (0x01) BitMask: 0x40
    bool bActorSeamlessTraveled;                                                               // 0x006A (0x01) BitMask: 0x80
    bool bForceInCookedBuildActor;                                                             // 0x006B (0x01) BitMask: 0x01
    bool bForceNotInCookedBuildActor;                                                          // 0x006B (0x01) BitMask: 0x02
    bool bNoHLODInOptProcess;                                                                  // 0x006B (0x01) BitMask: 0x04
    bool bReplicates;                                                                          // 0x006B (0x01) BitMask: 0x08
    bool bCanBeInCluster;                                                                      // 0x006B (0x01) BitMask: 0x10
    bool bAllowReceiveTickEventOnDedicatedServer;                                              // 0x006B (0x01) BitMask: 0x20
    bool bActorEnableCollision;                                                                // 0x006C (0x01) BitMask: 0x20
    bool bActorIsBeingDestroyed;                                                               // 0x006C (0x01) BitMask: 0x40
    enum UpdateOverlapsMethodDuringLevelStreaming;                                             // 0x006E (0x01)
    enum DefaultUpdateOverlapsMethodDuringLevelStreaming;                                      // 0x006F (0x01)
    uint8 RemoteRole;                                                                          // 0x0070 (0x01)
    bool bManualReplicates;                                                                    // 0x0088 (0x01) BitMask: 0x01
    bool bSubobjectsManualReplicates;                                                          // 0x0088 (0x01) BitMask: 0x02
    bool bIgnoreAttachmentTranform;                                                            // 0x0088 (0x01) BitMask: 0x04
    RepMovement ReplicatedMovement_ACE;                                                        // 0x008C (0x38)
    float InitialLifeSpan;                                                                     // 0x00C8 (0x04)
    float CustomTimeDilation;                                                                  // 0x00CC (0x04)
    RepAttachment AttachmentReplication;                                                       // 0x00D8 (0x40)
    Actor* Owner;                                                                              // 0x0118 (0x08)
    FName NetDriverName;                                                                       // 0x0120 (0x08)
    uint8 Role;                                                                                // 0x0128 (0x01)
    uint8 NetDormancy;                                                                         // 0x0129 (0x01)
    enum SpawnCollisionHandlingMethod;                                                         // 0x012A (0x01)
    uint8 AutoReceiveInput;                                                                    // 0x012B (0x01)
    int32 InputPriority;                                                                       // 0x012C (0x04)
    InputComponent* InputComponent;                                                            // 0x0130 (0x08)
    float NetCullDistanceSquared;                                                              // 0x0138 (0x04)
    int32 NetTag;                                                                              // 0x013C (0x04)
    float NetUpdateFrequency;                                                                  // 0x0140 (0x04)
    float MinNetUpdateFrequency;                                                               // 0x0144 (0x04)
    float NetPriority;                                                                         // 0x0148 (0x04)
    Pawn* Instigator;                                                                          // 0x0158 (0x08)
    TArray<Actor*> Children;                                                                   // 0x0160 (0x10)
    SceneComponent* RootComponent;                                                             // 0x0170 (0x08)
    TArray<MatineeActor*> ControllingMatineeActors;                                            // 0x0178 (0x10)
    TArray<FName> Layers;                                                                      // 0x0190 (0x10)
    ChildActorComponent* ParentComponent;                                                      // 0x01A0 (0x08)
    TArray<FName> Tags;                                                                        // 0x01B0 (0x10)
    FMulticastDelegate OnTakeAnyDamage;                                                        // 0x01C0 (0x01)
    FMulticastDelegate OnTakePointDamage;                                                      // 0x01C1 (0x01)
    FMulticastDelegate OnTakeRadialDamage;                                                     // 0x01C2 (0x01)
    FMulticastDelegate OnActorBeginOverlap;                                                    // 0x01C3 (0x01)
    FMulticastDelegate OnActorEndOverlap;                                                      // 0x01C4 (0x01)
    FMulticastDelegate OnBeginCursorOver;                                                      // 0x01C5 (0x01)
    FMulticastDelegate OnEndCursorOver;                                                        // 0x01C6 (0x01)
    FMulticastDelegate OnClicked;                                                              // 0x01C7 (0x01)
    FMulticastDelegate OnReleased;                                                             // 0x01C8 (0x01)
    FMulticastDelegate OnInputTouchBegin;                                                      // 0x01C9 (0x01)
    FMulticastDelegate OnInputTouchEnd;                                                        // 0x01CA (0x01)
    FMulticastDelegate OnInputTouchEnter;                                                      // 0x01CB (0x01)
    FMulticastDelegate OnInputTouchLeave;                                                      // 0x01CC (0x01)
    FMulticastDelegate OnActorHit;                                                             // 0x01CD (0x01)
    FMulticastDelegate OnDestroyed;                                                            // 0x01CE (0x01)
    FMulticastDelegate OnEndPlay;                                                              // 0x01CF (0x01)
    TArray<ActorComponent*> InstanceComponents;                                                // 0x02E8 (0x10)
    TArray<ActorComponent*> BlueprintCreatedComponents;                                        // 0x02F8 (0x10)

    // --- Functions ---
    bool WasRecentlyRendered(float Tolerance);                                                 // [Final|Public] RVA: 0x7ED5524
    void UserConstructionScript();                                                             // [Public] RVA: 0x186CC1C
    void TearOff();                                                                            // [Public] RVA: 0x551723C
    void SnapRootComponentTo(Actor* InParentActor, FName InSocketName);                        // [Final|Public] RVA: 0x7ED5400
    void SetTickGroup(uint8 NewTickGroup);                                                     // [Final|Public] RVA: 0x7ED52D0
    void SetTickableWhenPaused(bool bTickableWhenPaused);                                      // [Final|Public] RVA: 0x7ED5364
    void SetReplicates(bool bInReplicates);                                                    // [Final|Public] RVA: 0x7ED5234
    void SetReplicateMovement(bool bInReplicateMovement);                                      // [Public] RVA: 0x7ED5194
    void SetOwner(Actor* NewOwner);                                                            // [Public] RVA: 0x4F5D41C
    void SetNetDormancy(uint8 NewDormancy);                                                    // [Final|Public] RVA: 0x7ED50F8
    void SetLifeSpan(float InLifespan);                                                        // [Public] RVA: 0x7ED5058
    void SetAutoDestroyWhenFinished(bool bVal);                                                // [Final|Public] RVA: 0x7ED4FBC
    void SetActorTickInterval(float TickInterval);                                             // [Final|Public] RVA: 0x7ED4F24
    void SetActorTickEnabled(bool bEnabled);                                                   // [Final|Public] RVA: 0x181B208
    void SetActorScale3D(Vector NewScale3D);                                                   // [Final|Public] RVA: 0x7ED4E7C
    void SetActorRelativeScale3D(Vector NewRelativeScale);                                     // [Final|Public] RVA: 0x7ED4DD4
    void SetActorHiddenInGame(bool bNewHidden);                                                // [Public] RVA: 0x181AD14
    void SetActorEnableCollision(bool bNewActorEnableCollision);                               // [Final|Public] RVA: 0x181B16C
    void RemoveTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);               // [Public] RVA: 0x7ED4D34
    void RemoveTickPrerequisiteActor(Actor* PrerequisiteActor);                                // [Public] RVA: 0x7ED4C94
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x186CC1C
    void ReceiveRadialDamage(float DamageReceived, const DamageType* DamageType, Vector Origin, const HitResult HitInfo, Controller* InstigatedBy, Actor* DamageCauser);  // [Public] RVA: 0x186CC1C
    void ReceivePointDamage(float Damage, const DamageType* DamageType, Vector HitLocation, Vector HitNormal, PrimitiveComponent* HitComponent, FName BoneName, Vector ShotFromDirection, Controller* InstigatedBy, Actor* DamageCauser, const HitResult HitInfo);  // [Public] RVA: 0x186CC1C
    void ReceiveHit(PrimitiveComponent* MyComp, Actor* Other, PrimitiveComponent* OtherComp, bool bSelfMoved, Vector HitLocation, Vector HitNormal, Vector NormalImpulse, const HitResult Hit);  // [Public] RVA: 0x186CC1C
    void ReceiveEndPlay(uint8 EndPlayReason);                                                  // [Protected] RVA: 0x186CC1C
    void ReceiveDestroyed();                                                                   // [Public] RVA: 0x186CC1C
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x186CC1C
    void ReceiveAnyDamage(float Damage, const DamageType* DamageType, Controller* InstigatedBy, Actor* DamageCauser);  // [Public] RVA: 0x186CC1C
    void ReceiveActorOnReleased(Key ButtonReleased);                                           // [Public] RVA: 0x186CC1C
    void ReceiveActorOnInputTouchLeave(const uint8 FingerIndex);                               // [Public] RVA: 0x186CC1C
    void ReceiveActorOnInputTouchEnter(const uint8 FingerIndex);                               // [Public] RVA: 0x186CC1C
    void ReceiveActorOnInputTouchEnd(const uint8 FingerIndex);                                 // [Public] RVA: 0x186CC1C
    void ReceiveActorOnInputTouchBegin(const uint8 FingerIndex);                               // [Public] RVA: 0x186CC1C
    void ReceiveActorOnClicked(Key ButtonPressed);                                             // [Public] RVA: 0x186CC1C
    void ReceiveActorEndOverlap(Actor* OtherActor);                                            // [Public] RVA: 0x186CC1C
    void ReceiveActorEndCursorOver();                                                          // [Public] RVA: 0x186CC1C
    void ReceiveActorBeginOverlap(Actor* OtherActor);                                          // [Public] RVA: 0x186CC1C
    void ReceiveActorBeginCursorOver();                                                        // [Public] RVA: 0x186CC1C
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);  // [Public] RVA: 0x7ED4B50
    void OnRep_ReplicateMovement();                                                            // [Public] RVA: 0x1E791AC
    void OnRep_ReplicatedMovement();                                                           // [Public] RVA: 0xD98FBC
    void OnRep_Owner();                                                                        // [Protected] RVA: 0x13E51C4
    void OnRep_Instigator();                                                                   // [Public] RVA: 0x20F59BC
    void OnRep_AttachmentReplication();                                                        // [Public] RVA: 0x1F52078
    void MakeNoise(float Loudness, Pawn* NoiseInstigator, Vector NoiseLocation, float MaxRange, FName Tag);  // [Final|Public] RVA: 0x7ED4954
    MaterialInstanceDynamic* MakeMIDForMaterial(MaterialInterface* Parent);                    // [Final|Public] RVA: 0x5418824
    bool K2_TeleportTo(Vector DestLocation, Rotator DestRotation);                             // [Final|Public] RVA: 0x7ED4830
    bool K2_SetActorTransform(const Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED4600
    bool K2_SetActorRotation(Rotator NewRotation, bool bTeleportPhysics);                      // [Final|Public] RVA: 0x7ED44F8
    void K2_SetActorRelativeTransform(const Transform NewRelativeTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED42D4
    void K2_SetActorRelativeRotation(Rotator NewRelativeRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED40D4
    void K2_SetActorRelativeLocation(Vector NewRelativeLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED3ED4
    bool K2_SetActorLocationAndRotation(Vector NewLocation, Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED3C64
    bool K2_SetActorLocation(Vector NewLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED3A5C
    void K2_OnReset();                                                                         // [Public] RVA: 0x186CC1C
    void K2_OnEndViewTarget(PlayerController* PC);                                             // [Public] RVA: 0x186CC1C
    void K2_OnBecomeViewTarget(PlayerController* PC);                                          // [Public] RVA: 0x186CC1C
    SceneComponent* K2_GetRootComponent();                                                     // [Final|Public] RVA: 0x7ED3A38
    void K2_GetRefActorLocation(out Vector OutPosition);                                       // [Final|Public] RVA: 0x7ED3798
    TArray<ActorComponent*> K2_GetComponentsByClass(TSubclassOf<ActorComponent> ComponentClass);  // [Final|Public] RVA: 0x1ADBBC0
    Rotator K2_GetActorRotation();                                                             // [Final|Public] RVA: 0x7ED3530
    float K2_GetActorLocationZ();                                                              // [Final|Public] RVA: 0x7ED3338
    float K2_GetActorLocationY();                                                              // [Final|Public] RVA: 0x7ED3138
    float K2_GetActorLocationX();                                                              // [Final|Public] RVA: 0x7ED2F38
    Vector K2_GetActorLocation();                                                              // [Final|Public] RVA: 0x1CD4B38
    void K2_DetachFromActor(enum LocationRule, enum RotationRule, enum ScaleRule);             // [Final|Public] RVA: 0x7ED2DE4
    void K2_DestroyComponent(ActorComponent* Component);                                       // [Final|Public] RVA: 0x7ED2D44
    void K2_DestroyActor();                                                                    // [Public] RVA: 0x7ED2D2C
    void K2_AttachToComponent(SceneComponent* Parent, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7ED2ADC
    void K2_AttachToActor(Actor* ParentActor, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7ED289C
    void K2_AttachRootComponentToActor(Actor* InParentActor, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7ED26D4
    void K2_AttachRootComponentTo(SceneComponent* InParent, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7ED252C
    void K2_AddActorWorldTransformKeepScale(const Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED22CC
    void K2_AddActorWorldTransform(const Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED206C
    void K2_AddActorWorldRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED1E78
    void K2_AddActorWorldOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED1C78
    void K2_AddActorLocalTransform(const Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED1A18
    void K2_AddActorLocalRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED1818
    void K2_AddActorLocalOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7ED1618
    bool IsOverlappingActor(const Actor* Other);                                               // [Final|Public] RVA: 0x7ED1570
    bool IsChildActor();                                                                       // [Final|Public] RVA: 0x7ED14FC
    bool IsActorTickEnabled();                                                                 // [Final|Public] RVA: 0x7ED14E4
    bool IsActorBeingDestroyed();                                                              // [Final|Public] RVA: 0x7ED14C8
    bool HasAuthority();                                                                       // [Final|Public] RVA: 0x1FA5AC0
    float GetVerticalDistanceTo(const Actor* OtherActor);                                      // [Final|Public] RVA: 0x7ED1050
    Vector GetVelocity();                                                                      // [Public] RVA: 0x7ED1018
    Transform GetTransform();                                                                  // [Final|Public] RVA: 0x7ED0DBC
    bool GetTickableWhenPaused();                                                              // [Final|Public] RVA: 0x7ED0DA4
    float GetSquaredDistanceTo(const Actor* OtherActor);                                       // [Final|Public] RVA: 0x7ED0CF8
    uint8 GetRemoteRole();                                                                     // [Final|Public] RVA: 0x4F5935C
    ChildActorComponent* GetParentComponent();                                                 // [Final|Public] RVA: 0x7ED0C64
    Actor* GetParentActor();                                                                   // [Final|Public] RVA: 0x7ED0C40
    Actor* GetOwner();                                                                         // [Final|Public] RVA: 0x237466C
    void GetOverlappingComponents(out TArray<PrimitiveComponent*> OverlappingComponents);      // [Final|Public] RVA: 0x7ED0B04
    void GetOverlappingActors(out TArray<Actor*> OverlappingActors, TSubclassOf<Actor> ClassFilter);  // [Final|Public] RVA: 0x7ED09F4
    uint8 GetLocalRole();                                                                      // [Final|Public] RVA: 0x2408998
    float GetLifeSpan();                                                                       // [Public] RVA: 0x7ED09C8
    Controller* GetInstigatorController();                                                     // [Final|Public] RVA: 0x7ED09A8
    Pawn* GetInstigator();                                                                     // [Final|Public] RVA: 0x6086BF0
    Vector GetInputVectorAxisValue(const Key InputAxisKey);                                    // [Final|Public] RVA: 0x7ED084C
    float GetInputAxisValue(const FName InputAxisName);                                        // [Final|Public] RVA: 0x7ED0688
    float GetInputAxisKeyValue(const Key InputAxisKey);                                        // [Final|Public] RVA: 0x7ED053C
    float GetHorizontalDotProductTo(const Actor* OtherActor);                                  // [Final|Public] RVA: 0x7ECFF60
    float GetHorizontalDistanceTo(const Actor* OtherActor);                                    // [Final|Public] RVA: 0x7ECFAC4
    float GetGameTimeSinceCreation();                                                          // [Final|Public] RVA: 0x7ECFA9C
    float GetDotProductTo(const Actor* OtherActor);                                            // [Final|Public] RVA: 0x7ECF4A8
    float GetDistanceTo(const Actor* OtherActor);                                              // [Final|Public] RVA: 0x7ECF3FC
    TArray<ActorComponent*> GetComponentsByTag(TSubclassOf<ActorComponent> ComponentClass, FName Tag);  // [Final|Public] RVA: 0x7ECF2E8
    TArray<ActorComponent*> GetComponentsByInterface(TSubclassOf<Interface> Interface);        // [Final|Public] RVA: 0x7ECF228
    ActorComponent* GetComponentByInterface(TSubclassOf<Interface> Interface);                 // [Final|Public] RVA: 0x7ECF180
    ActorComponent* GetComponentByClass(TSubclassOf<ActorComponent> ComponentClass);           // [Final|Public] RVA: 0x1C411E0
    FName GetAttachParentSocketName();                                                         // [Final|Public] RVA: 0x7ECF154
    Actor* GetAttachParentActor();                                                             // [Final|Public] RVA: 0x7ECF134
    void GetAttachedActors(out TArray<Actor*> OutActors, bool bResetArray);                    // [Final|Public] RVA: 0x181AEAC
    void GetAllChildActors(out TArray<Actor*> ChildActors, bool bIncludeDescendants);          // [Final|Public] RVA: 0x7ECF024
    Vector GetActorUpVector();                                                                 // [Final|Public] RVA: 0x7ECEFC0
    float GetActorTimeDilation();                                                              // [Final|Public] RVA: 0x7ECEF98
    float GetActorTickInterval();                                                              // [Final|Public] RVA: 0x2A350C4
    Vector GetActorScale3D();                                                                  // [Final|Public] RVA: 0x7ECEF64
    Vector GetActorRightVector();                                                              // [Final|Public] RVA: 0x7ECEF00
    Vector GetActorRelativeScale3D();                                                          // [Final|Public] RVA: 0x7ECEED0
    Vector GetActorForwardVector();                                                            // [Final|Public] RVA: 0x7ECEE6C
    void GetActorEyesViewPoint(out Vector OutLocation, out Rotator OutRotation);               // [Public] RVA: 0x7ECED34
    bool GetActorEnableCollision();                                                            // [Final|Public] RVA: 0x7ECED18
    void GetActorBounds(bool bOnlyCollidingComponents, out Vector Origin, out Vector BoxExtent, bool bIncludeFromChildActors);  // [Final|Public] RVA: 0x7ECEB04
    void ForceNetUpdate();                                                                     // [Public] RVA: 0x7ECEAEC
    void FlushNetDormancy();                                                                   // [Final|Public] RVA: 0x7ECEAD8
    void FinishAddComponent(ActorComponent* Component, bool bManualAttachment, const Transform RelativeTransform);  // [Final|Public] RVA: 0x7ECE808
    void EnableInput(PlayerController* PlayerController);                                      // [Public] RVA: 0x6C17AE0
    void DisableInput(PlayerController* PlayerController);                                     // [Public] RVA: 0x6C17D04
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);                           // [Final|Public] RVA: 0x7ECE76C
    void AddTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);                  // [Public] RVA: 0x7ECE6CC
    void AddTickPrerequisiteActor(Actor* PrerequisiteActor);                                   // [Public] RVA: 0x7ECE62C
    ActorComponent* AddComponentByClass(TSubclassOf<ActorComponent> Class, bool bManualAttachment, const Transform RelativeTransform, bool bDeferredFinish);  // [Final|Public] RVA: 0x7ECE39C
    ActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const Transform RelativeTransform, const Object* ComponentTemplateContext, bool bDeferredFinish);  // [Final|Public] RVA: 0x19654F8
    bool ActorHasTag(FName Tag);                                                               // [Final|Public] RVA: 0x7ECE2F4
    void ActiveManualReplicate();                                                              // [Final|Public] RVA: 0x2A3E6A0
};

// ============================================================
// Inheritance: AutoColorGrading : Actor : Object
// Package: /Script/Engine
// ============================================================
class AutoColorGrading : public Actor {
public:
    bool bEnabled;                                                                             // 0x0318 (0x01) BitMask: 0xFF
    float UseStyle;                                                                            // 0x031C (0x04)
    float SmoothRatio;                                                                         // 0x0320 (0x04)
    float WholeBlendRatio;                                                                     // 0x0324 (0x04)
    TArray<AutoColorGradingLayer> AllLayers;                                                   // 0x0328 (0x10)
    DirectionalLightComponent* TheDirectionalLightComponent;                                   // 0x03B8 (0x08)
    SkyLightComponent* TheSkylightComponent;                                                   // 0x03C0 (0x08)
    SkyAtmosphereComponent* TheSkyAtomosphereComponent;                                        // 0x03C8 (0x08)

    // --- Functions ---
    FString GetLayerSpecDescription(const TArray<float> LayerSpec);                            // [Final|Public] RVA: 0x7EE3E04
    void GetDefaultParameters(out TArray<AutoColorGradingData> outParameters);                 // [Final|Public] RVA: 0x7EE3D68
    void GetCurrentPositionAndDiff(out float OutPosition, out float outDiff);                  // [Final|Public] RVA: 0x7EE3C64
    void FeedLayerSpecParams(const TArray<float> LayerSpec);                                   // [Final|Public] RVA: 0x7EE3B24
    void EnableAutoColorGrading(bool bEnable);                                                 // [Final|Public] RVA: 0x7EE3A88
};

// ============================================================
// Inheritance: Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class Brush : public Actor {
public:
    uint8 BrushType;                                                                           // 0x0318 (0x01)
    Color BrushColor;                                                                          // 0x031C (0x04)
    int32 PolyFlags;                                                                           // 0x0320 (0x04)
    bool bColored;                                                                             // 0x0324 (0x01) BitMask: 0x01
    bool bSolidWhenSelected;                                                                   // 0x0324 (0x01) BitMask: 0x02
    bool bPlaceableFromClassBrowser;                                                           // 0x0324 (0x01) BitMask: 0x04
    bool bNotForClientOrServer;                                                                // 0x0324 (0x01) BitMask: 0x08
    Model* Brush;                                                                              // 0x0328 (0x08)
    BrushComponent* BrushComponent;                                                            // 0x0330 (0x08)
    bool bInManipulation;                                                                      // 0x0338 (0x01) BitMask: 0x01
    TArray<GeomSelection> SavedSelections;                                                     // 0x0340 (0x10)
};

// ============================================================
// Inheritance: CameraActor : Actor : Object
// Package: /Script/Engine
// ============================================================
class CameraActor : public Actor {
public:
    uint8 AutoActivateForPlayer;                                                               // 0x0318 (0x01)
    CameraComponent* CameraComponent;                                                          // 0x0320 (0x08)
    SceneComponent* SceneComponent;                                                            // 0x0328 (0x08)
    bool bConstrainAspectRatio;                                                                // 0x0338 (0x01) BitMask: 0x01
    float AspectRatio;                                                                         // 0x033C (0x04)
    float FOVAngle;                                                                            // 0x0340 (0x04)
    float PostProcessBlendWeight;                                                              // 0x0344 (0x04)
    PostProcessSettings PostProcessSettings;                                                   // 0x0350 (0x6B0)

    // --- Functions ---
    int32 GetAutoActivatePlayerIndex();                                                        // [Final|Public] RVA: 0x7EEF634
};

// ============================================================
// Inheritance: Character : Pawn : Actor : Object
// Package: /Script/Engine
// ============================================================
class Character : public Pawn {
public:
    SkeletalMeshComponent* Mesh;                                                               // 0x0388 (0x08)
    CharacterMovementComponent* CharacterMovement;                                             // 0x0390 (0x08)
    CapsuleComponent* CapsuleComponent;                                                        // 0x0398 (0x08)
    BasedMovementInfo BasedMovement;                                                           // 0x03A0 (0x38)
    BasedMovementInfo ReplicatedBasedMovement;                                                 // 0x03D8 (0x38)
    float AnimRootMotionTranslationScale;                                                      // 0x0410 (0x04)
    Vector BaseTranslationOffset;                                                              // 0x0414 (0x0C)
    Quat BaseRotationOffset;                                                                   // 0x0420 (0x10)
    float ReplicatedServerLastTransformUpdateTimeStamp;                                        // 0x0430 (0x04)
    float ReplayLastTransformUpdateTimeStamp;                                                  // 0x0434 (0x04)
    uint8 ReplicatedMovementMode;                                                              // 0x0438 (0x01)
    bool bInBaseReplication;                                                                   // 0x0439 (0x01) BitMask: 0xFF
    float CrouchedEyeHeight;                                                                   // 0x043C (0x04)
    bool bIsCrouched;                                                                          // 0x0440 (0x01) BitMask: 0x01
    bool bProxyIsJumpForceApplied;                                                             // 0x0440 (0x01) BitMask: 0x02
    bool bPressedJump;                                                                         // 0x0440 (0x01) BitMask: 0x04
    bool bClientUpdating;                                                                      // 0x0440 (0x01) BitMask: 0x08
    bool bClientWasFalling;                                                                    // 0x0440 (0x01) BitMask: 0x10
    bool bClientResimulateRootMotion;                                                          // 0x0440 (0x01) BitMask: 0x20
    bool bClientResimulateRootMotionSources;                                                   // 0x0440 (0x01) BitMask: 0x40
    bool bSimGravityDisabled;                                                                  // 0x0440 (0x01) BitMask: 0x80
    bool bClientCheckEncroachmentOnNetUpdate;                                                  // 0x0441 (0x01) BitMask: 0x01
    bool bServerMoveIgnoreRootMotion;                                                          // 0x0441 (0x01) BitMask: 0x02
    bool bWasJumping;                                                                          // 0x0441 (0x01) BitMask: 0x04
    float JumpKeyHoldTime;                                                                     // 0x0444 (0x04)
    float JumpForceTimeRemaining;                                                              // 0x0448 (0x04)
    float ProxyJumpForceStartedTime;                                                           // 0x044C (0x04)
    float JumpMaxHoldTime;                                                                     // 0x0450 (0x04)
    int32 JumpMaxCount;                                                                        // 0x0454 (0x04)
    int32 JumpCurrentCount;                                                                    // 0x0458 (0x04)
    int32 JumpCurrentCountPreJump;                                                             // 0x045C (0x04)
    FMulticastDelegate OnReachedJumpApex;                                                      // 0x0468 (0x10)
    FMulticastDelegate MovementModeChangedDelegate;                                            // 0x0488 (0x10)
    FMulticastDelegate OnCharacterMovementUpdated;                                             // 0x0498 (0x10)
    RootMotionSourceGroup SavedRootMotion;                                                     // 0x04A8 (0x38)
    RootMotionMovementParams ClientRootMotionParams;                                           // 0x04E0 (0x40)
    TArray<SimulatedRootMotionReplicatedMove> RootMotionRepMoves;                              // 0x0520 (0x10)
    RepRootMotionMontage RepRootMotion;                                                        // 0x0530 (0x98)

    // --- Functions ---
    void UnCrouch(bool bClientSimulation);                                                     // [Public] RVA: 0x7EF8E94
    void StopJumping();                                                                        // [Public] RVA: 0x7EF8E7C
    void StopAnimMontage(AnimMontage* AnimMontage);                                            // [Public] RVA: 0x7EF8DDC
    void ServerMovePacked(const CharacterServerMovePackedBits PackedBits);                     // [Public] RVA: 0x7EF8690
    void ServerMoveOld(float OldTimeStamp, Vector_NetQuantize10 OldAccel, MovementCompressedFlags OldMoveFlags);  // [Public] RVA: 0x7EF84F8
    void ServerMoveNoBase(float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // [Public] RVA: 0x7EF81DC
    void ServerMoveDualNoBase(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // [Public] RVA: 0x7EF7D24
    void ServerMoveDualHybridRootMotion(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7EF77B0
    void ServerMoveDual(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7EF723C
    void ServerMove(float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags CompressedMoveFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7EF6E60
    void RootMotionDebugClientPrintOnScreen(FString inString);                                 // [Public] RVA: 0x7EF6D8C
    bool PreGetCachedMoveOverlapsShapes(const Transform NewTransform, const Transform OldTransform, bool bRealMove, bool SweepOrLineTrace);  // [Final|Public] RVA: 0x7EF6B54
    float PlayAnimMontage(AnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);  // [Public] RVA: 0x7EF6A0C
    void OnWalkingOffLedge(const Vector PreviousFloorImpactNormal, const Vector PreviousFloorContactNormal, const Vector PreviousLocation, float TimeDelta);  // [Public] RVA: 0x21FA99C
    void OnRep_RootMotion();                                                                   // [Final|Public] RVA: 0x1A91CE0
    void OnRep_ReplicatedBasedMovement();                                                      // [Public] RVA: 0x14B9538
    void OnRep_ReplayLastTransformUpdateTimeStamp();                                           // [Final|Public] RVA: 0xD91CEC
    void OnRep_IsCrouched();                                                                   // [Public] RVA: 0x2826814
    void OnLaunched(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);                 // [Public] RVA: 0x186CC1C
    void OnLanded(const HitResult Hit);                                                        // [Public] RVA: 0x186CC1C
    void OnJumped();                                                                           // [Public] RVA: 0x48EA768
    void LaunchCharacter(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);            // [Public] RVA: 0x7EF68B4
    void K2_UpdateCustomMovement(float DeltaTime);                                             // [Public] RVA: 0x186CC1C
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);               // [Public] RVA: 0x186CC1C
    void K2_OnMovementModeChanged(uint8 PrevMovementMode, uint8 NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // [Public] RVA: 0x186CC1C
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x186CC1C
    void Jump();                                                                               // [Public] RVA: 0x5FE08A4
    bool IsPlayingRootMotion();                                                                // [Final|Public] RVA: 0x7EF47B4
    bool IsPlayingNetworkedRootMotionMontage();                                                // [Final|Public] RVA: 0x7EF4790
    bool IsJumpProvidingForce();                                                               // [Public] RVA: 0x7EF4768
    bool HasAnyRootMotion();                                                                   // [Final|Public] RVA: 0x7EF4730
    AnimMontage* GetCurrentMontage();                                                          // [Final|Public] RVA: 0x7EF30C4
    Vector GetBaseTranslationOffset();                                                         // [Final|Public] RVA: 0x7EF309C
    Rotator GetBaseRotationOffsetRotator();                                                    // [Final|Public] RVA: 0x7EF3068
    float GetAnimRootMotionTranslationScale();                                                 // [Final|Public] RVA: 0x7EF2F74
    void Crouch(bool bClientSimulation);                                                       // [Public] RVA: 0x5F38880
    void ClientVeryShortAdjustPosition(float Timestamp, Vector NewLoc, PrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7EF2A98
    void ClientMoveResponsePacked(const CharacterMoveResponsePackedBits PackedBits);           // [Public] RVA: 0x7EF293C
    void ClientCheatWalk();                                                                    // [Public] RVA: 0x7EF2924
    void ClientCheatGhost();                                                                   // [Public] RVA: 0x7EF290C
    void ClientCheatFly();                                                                     // [Public] RVA: 0x7EF28F4
    void ClientAdjustRootMotionSourcePosition(float Timestamp, RootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, Vector ServerLoc, Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, PrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7EF240C
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, Vector ServerLoc, Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, PrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7EF2044
    void ClientAdjustPosition(float Timestamp, Vector NewLoc, Vector NewVel, PrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, uint8 ServerSprintFailReason);  // [Public] RVA: 0x7EF1CD4
    void ClientAckGoodMove(float Timestamp);                                                   // [Public] RVA: 0x7EF1C30
    bool CanJumpInternal();                                                                    // [Protected] RVA: 0x7EF1C08
    bool CanJump();                                                                            // [Final|Public] RVA: 0x7EF1BA4
    bool CanCrouch();                                                                          // [Public] RVA: 0x282BAFC
    void CacheInitialMeshOffset(Vector MeshRelativeLocation, Rotator MeshRelativeRotation);    // [Public] RVA: 0x7EF1A8C
};

// ============================================================
// Inheritance: Controller : Actor : Object
// Package: /Script/Engine
// ============================================================
class Controller : public Actor {
public:
    PlayerState* PlayerState;                                                                  // 0x0320 (0x08)
    FMulticastDelegate OnInstigatedAnyDamage;                                                  // 0x0330 (0x10)
    FName StateName;                                                                           // 0x0340 (0x08)
    Pawn* Pawn;                                                                                // 0x0348 (0x08)
    Character* Character;                                                                      // 0x0358 (0x08)
    SceneComponent* TransformComponent;                                                        // 0x0360 (0x08)
    Rotator ControlRotation;                                                                   // 0x0380 (0x0C)
    bool bAttachToPawn;                                                                        // 0x038C (0x01) BitMask: 0x01

    // --- Functions ---
    void UnPossess();                                                                          // [Final|Public] RVA: 0x7EFC7C0
    void StopMovement();                                                                       // [Public] RVA: 0x48EC660
    void SetInitialLocationAndRotation(const Vector NewLocation, const Rotator NewRotation);   // [Public] RVA: 0x60D5E3C
    void SetIgnoreMoveInput(bool bNewMoveInput);                                               // [Public] RVA: 0x7EFC720
    void SetIgnoreLookInput(bool bNewLookInput);                                               // [Public] RVA: 0x7EFC680
    void SetControlRotation(const Rotator NewRotation);                                        // [Public] RVA: 0x7EFC5E0
    void ResetIgnoreMoveInput();                                                               // [Public] RVA: 0x5FE06FC
    void ResetIgnoreLookInput();                                                               // [Public] RVA: 0x60DCE18
    void ResetIgnoreInputFlags();                                                              // [Public] RVA: 0x2277CD8
    void ReceiveUnPossess(Pawn* UnpossessedPawn);                                              // [Protected] RVA: 0x186CC1C
    void ReceivePossess(Pawn* PossessedPawn);                                                  // [Protected] RVA: 0x186CC1C
    void ReceiveInstigatedAnyDamage(float Damage, const DamageType* DamageType, Actor* DamagedActor, Actor* DamageCauser);  // [Protected] RVA: 0x186CC1C
    void Possess(Pawn* InPawn);                                                                // [Final|Public] RVA: 0x7EFC544
    void OnRep_PlayerState();                                                                  // [Public] RVA: 0x272D1F8
    void OnRep_Pawn();                                                                         // [Public] RVA: 0x15B37F0
    bool LineOfSightTo(const Actor* Other, Vector ViewPoint, bool bAlternateChecks);           // [Public] RVA: 0x7EFC3EC
    Pawn* K2_GetPawn();                                                                        // [Final|Public] RVA: 0x2894B4C
    bool IsPlayerController();                                                                 // [Final|Public] RVA: 0x7EFC3D0
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7EFC3A8
    bool IsLookInputIgnored();                                                                 // [Public] RVA: 0x7EFC380
    bool IsLocalPlayerController();                                                            // [Final|Public] RVA: 0x7EFC33C
    bool IsLocalController();                                                                  // [Public] RVA: 0x5ED0684
    Actor* GetViewTarget();                                                                    // [Public] RVA: 0x2712A30
    Rotator GetDesiredRotation();                                                              // [Public] RVA: 0x7EFC0FC
    Rotator GetControlRotation();                                                              // [Public] RVA: 0x7EFC0C4
    void ClientSetRotation(Rotator NewRotation, bool bResetCamera);                            // [Public] RVA: 0x7EFBF84
    void ClientSetLocation(Vector NewLocation, Rotator NewRotation);                           // [Public] RVA: 0x7EFBE2C
    PlayerController* CastToPlayerController();                                                // [Final|Public] RVA: 0x7EFBDE4
};

// ============================================================
// Inheritance: DefaultPhysicsVolume : PhysicsVolume : Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class DefaultPhysicsVolume : public PhysicsVolume {
public:
};

// ============================================================
// Inheritance: GameMode : GameModeBase : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class GameMode : public GameModeBase {
public:
    FName MatchState;                                                                          // 0x03B8 (0x08)
    bool bDelayedStart;                                                                        // 0x03C0 (0x01) BitMask: 0x01
    int32 NumSpectators;                                                                       // 0x03C4 (0x04)
    int32 NumPlayers;                                                                          // 0x03C8 (0x04)
    int32 NumBots;                                                                             // 0x03CC (0x04)
    float MinRespawnDelay;                                                                     // 0x03D0 (0x04)
    int32 NumTravellingPlayers;                                                                // 0x03D4 (0x04)
    TSubclassOf<LocalMessage> EngineMessageClass;                                              // 0x03D8 (0x08)
    TArray<PlayerState*> InactivePlayerArray;                                                  // 0x03E0 (0x10)
    float InactivePlayerStateLifeSpan;                                                         // 0x03F0 (0x04)
    int32 MaxInactivePlayers;                                                                  // 0x03F4 (0x04)
    bool bHandleDedicatedServerReplays;                                                        // 0x03F8 (0x01) BitMask: 0xFF

    // --- Functions ---
    void StartMatch();                                                                         // [Public] RVA: 0x6163CD8
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);                                       // [Public] RVA: 0x61063B8
    void Say(FString Msg);                                                                     // [Public] RVA: 0x7F101DC
    void RestartGame();                                                                        // [Public] RVA: 0x6163D08
    bool ReadyToStartMatch();                                                                  // [Protected] RVA: 0x2304974
    bool ReadyToEndMatch();                                                                    // [Protected] RVA: 0x1D087A8
    bool NeedBlockLoadLevelWhenStartMatch();                                                   // [Protected] RVA: 0x282BAFC
    void K2_OnSetMatchState(FName NewState);                                                   // [Protected] RVA: 0x186CC1C
    bool IsMatchInProgress();                                                                  // [Public] RVA: 0x7F0CC84
    FName GetMatchState();                                                                     // [Final|Public] RVA: 0x61109F8
    void EndMatch();                                                                           // [Public] RVA: 0x6163CF0
    void AbortMatch();                                                                         // [Public] RVA: 0x6163B70
};

// ============================================================
// Inheritance: GameModeBase : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class GameModeBase : public Info {
public:
    FString OptionsString;                                                                     // 0x0318 (0x10)
    TSubclassOf<GameSession> GameSessionClass;                                                 // 0x0328 (0x08)
    TSubclassOf<GameStateBase> GameStateClass;                                                 // 0x0330 (0x08)
    TSubclassOf<PlayerController> PlayerControllerClass;                                       // 0x0338 (0x08)
    TSubclassOf<PlayerState> PlayerStateClass;                                                 // 0x0340 (0x08)
    TSubclassOf<HUD> HUDClass;                                                                 // 0x0348 (0x08)
    TSubclassOf<Pawn> DefaultPawnClass;                                                        // 0x0350 (0x08)
    TSubclassOf<SpectatorPawn> SpectatorClass;                                                 // 0x0358 (0x08)
    TSubclassOf<PlayerController> ReplaySpectatorPlayerControllerClass;                        // 0x0360 (0x08)
    TSubclassOf<ServerStatReplicator> ServerStatReplicatorClass;                               // 0x0368 (0x08)
    GameSession* GameSession;                                                                  // 0x0370 (0x08)
    GameStateBase* GameState;                                                                  // 0x0378 (0x08)
    ServerStatReplicator* ServerStatReplicator;                                                // 0x0380 (0x08)
    FText DefaultPlayerName;                                                                   // 0x0388 (0x18)
    bool bUseSeamlessTravel;                                                                   // 0x03A0 (0x01) BitMask: 0x01
    bool bStartPlayersAsSpectators;                                                            // 0x03A0 (0x01) BitMask: 0x02
    bool bPauseable;                                                                           // 0x03A0 (0x01) BitMask: 0x04

    // --- Functions ---
    void StartPlay();                                                                          // [Public] RVA: 0x1B45824
    Pawn* SpawnDefaultPawnFor(Controller* NewPlayer, Actor* StartSpot);                        // [Public] RVA: 0x7F121C0
    Pawn* SpawnDefaultPawnAtTransform(Controller* NewPlayer, const Transform SpawnTransform);  // [Public] RVA: 0x7F12084
    bool ShouldReset(Actor* ActorToReset);                                                     // [Public] RVA: 0x7F11850
    void ReturnToMainMenuHost();                                                               // [Public] RVA: 0x5ED15CC
    void RestartPlayerAtTransform(Controller* NewPlayer, const Transform SpawnTransform);      // [Public] RVA: 0x7F0FF54
    void RestartPlayerAtPlayerStart(Controller* NewPlayer, Actor* StartSpot);                  // [Public] RVA: 0x7F0FE68
    void RestartPlayer(Controller* NewPlayer);                                                 // [Public] RVA: 0x7F0FDC8
    void ResetLevel();                                                                         // [Public] RVA: 0x2A40634
    bool PlayerCanRestart(PlayerController* Player);                                           // [Public] RVA: 0x166BB14
    bool MustSpectate(PlayerController* NewPlayerController);                                  // [Public] RVA: 0x210DF9C
    void K2_PostLogin(PlayerController* NewPlayer);                                            // [Public] RVA: 0x186CC1C
    void K2_OnSwapPlayerControllers(PlayerController* OldPC, PlayerController* NewPC);         // [Protected] RVA: 0x186CC1C
    void K2_OnRestartPlayer(Controller* NewPlayer);                                            // [Public] RVA: 0x186CC1C
    void K2_OnLogout(Controller* ExitingController);                                           // [Public] RVA: 0x186CC1C
    void K2_OnChangeName(Controller* Other, FString NewName, bool bNameChange);                // [Public] RVA: 0x186CC1C
    Actor* K2_FindPlayerStart(Controller* Player, FString IncomingName);                       // [Final|Public] RVA: 0x7F0CD74
    void InitStartSpot(Actor* StartSpot, Controller* NewPlayer);                               // [Public] RVA: 0x7F0CAD8
    void InitializeHUDForPlayer(PlayerController* NewPlayer);                                  // [Protected] RVA: 0x1BD5B34
    bool HasMatchStarted();                                                                    // [Public] RVA: 0x5ED0684
    bool HasMatchEnded();                                                                      // [Public] RVA: 0x61654C0
    void HandleStartingNewPlayer(PlayerController* NewPlayer);                                 // [Public] RVA: 0x166D3B0
    int32 GetNumSpectators();                                                                  // [Public] RVA: 0x7F0BA90
    int32 GetNumPlayers();                                                                     // [Public] RVA: 0x7F0BA68
    TSubclassOf<Object> GetDefaultPawnClassForController(Controller* InController);            // [Public] RVA: 0x22C9B6C
    Actor* FindPlayerStart(Controller* Player, FString IncomingName);                          // [Public] RVA: 0x20EB5C0
    Actor* ChoosePlayerStart(Controller* Player);                                              // [Public] RVA: 0x166C0C0
    void ChangeName(Controller* Controller, FString NewName, bool bNameChange);                // [Public] RVA: 0x7F08A28
    bool CanSpectate(PlayerController* Viewer, PlayerState* ViewTarget);                       // [Public] RVA: 0x7F08914
};

// ============================================================
// Inheritance: GameNetworkManager : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class GameNetworkManager : public Info {
public:
    float BadPacketLossThreshold;                                                              // 0x0318 (0x04)
    float SeverePacketLossThreshold;                                                           // 0x031C (0x04)
    int32 BadPingThreshold;                                                                    // 0x0320 (0x04)
    int32 SeverePingThreshold;                                                                 // 0x0324 (0x04)
    int32 AdjustedNetSpeed;                                                                    // 0x0328 (0x04)
    double LastNetSpeedUpdateTime;                                                             // 0x0330 (0x08)
    int32 TotalNetBandwidth;                                                                   // 0x0338 (0x04)
    int32 MinDynamicBandwidth;                                                                 // 0x033C (0x04)
    int32 MaxDynamicBandwidth;                                                                 // 0x0340 (0x04)
    bool bIsStandbyCheckingEnabled;                                                            // 0x0344 (0x01) BitMask: 0x01
    bool bHasStandbyCheatTriggered;                                                            // 0x0344 (0x01) BitMask: 0x02
    float StandbyRxCheatTime;                                                                  // 0x0348 (0x04)
    float StandbyTxCheatTime;                                                                  // 0x034C (0x04)
    float PercentMissingForRxStandby;                                                          // 0x0350 (0x04)
    float PercentMissingForTxStandby;                                                          // 0x0354 (0x04)
    float PercentForBadPing;                                                                   // 0x0358 (0x04)
    float JoinInProgressStandbyWaitTime;                                                       // 0x035C (0x04)
    float MoveRepSize;                                                                         // 0x0360 (0x04)
    float MAXPOSITIONERRORSQUARED;                                                             // 0x0364 (0x04)
    float MAXNEARZEROVELOCITYSQUARED;                                                          // 0x0368 (0x04)
    float CLIENTADJUSTUPDATECOST;                                                              // 0x036C (0x04)
    float MAXCLIENTUPDATEINTERVAL;                                                             // 0x0370 (0x04)
    float MaxClientForcedUpdateDuration;                                                       // 0x0374 (0x04)
    float ServerForcedUpdateHitchThreshold;                                                    // 0x0378 (0x04)
    float ServerForcedUpdateHitchCooldown;                                                     // 0x037C (0x04)
    float ServerForcedUpdatePrintLogThreshold;                                                 // 0x0380 (0x04)
    float MaxMoveDeltaTime;                                                                    // 0x0384 (0x04)
    float MaxClientSmoothingDeltaTime;                                                         // 0x0388 (0x04)
    float ClientNetSendMoveDeltaTime;                                                          // 0x038C (0x04)
    float ClientNetSendMoveDeltaTimeThrottled;                                                 // 0x0390 (0x04)
    float ClientNetSendMoveDeltaTimeStationary;                                                // 0x0394 (0x04)
    int32 ClientNetSendMoveThrottleAtNetSpeed;                                                 // 0x0398 (0x04)
    int32 ClientNetSendMoveThrottleOverPlayerCount;                                            // 0x039C (0x04)
    bool ClientAuthorativePosition;                                                            // 0x03A0 (0x01) BitMask: 0xFF
    float ClientErrorUpdateRateLimit;                                                          // 0x03A4 (0x04)
    float ClientNetCamUpdateDeltaTime;                                                         // 0x03A8 (0x04)
    float ClientNetCamUpdatePositionLimit;                                                     // 0x03AC (0x04)
    bool bMovementTimeDiscrepancyDetection;                                                    // 0x03B0 (0x01) BitMask: 0xFF
    bool bMovementTimeDiscrepancyResolution;                                                   // 0x03B1 (0x01) BitMask: 0xFF
    float MovementTimeDiscrepancyMaxTimeMargin;                                                // 0x03B4 (0x04)
    float MovementTimeDiscrepancyMinTimeMargin;                                                // 0x03B8 (0x04)
    float MovementTimeDiscrepancyResolutionRate;                                               // 0x03BC (0x04)
    float MovementTimeDiscrepancyDriftAllowance;                                               // 0x03C0 (0x04)
    bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution;                             // 0x03C4 (0x01) BitMask: 0xFF
    bool bUseDistanceBasedRelevancy;                                                           // 0x03C5 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: GameSession : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class GameSession : public Info {
public:
    int32 MaxSpectators;                                                                       // 0x0318 (0x04)
    int32 MaxPlayers;                                                                          // 0x031C (0x04)
    int32 MaxPartySize;                                                                        // 0x0320 (0x04)
    uint8 MaxSplitscreensPerConnection;                                                        // 0x0324 (0x01)
    bool bRequiresPushToTalk;                                                                  // 0x0325 (0x01) BitMask: 0xFF
    FName SessionName;                                                                         // 0x0328 (0x08)
};

// ============================================================
// Inheritance: GameState : GameStateBase : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class GameState : public GameStateBase {
public:
    FName MatchState;                                                                          // 0x0368 (0x08)
    FName PreviousMatchState;                                                                  // 0x0370 (0x08)
    int32 ElapsedTime;                                                                         // 0x0378 (0x04)

    // --- Functions ---
    void OnRep_MatchState();                                                                   // [Public] RVA: 0x26B3E5C
    void OnRep_ElapsedTime();                                                                  // [Public] RVA: 0x2A40634
};

// ============================================================
// Inheritance: GameStateBase : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class GameStateBase : public Info {
public:
    TSubclassOf<GameModeBase> GameModeClass;                                                   // 0x0318 (0x08)
    GameModeBase* AuthorityGameMode;                                                           // 0x0320 (0x08)
    TSubclassOf<SpectatorPawn> SpectatorClass;                                                 // 0x0328 (0x08)
    TArray<PlayerState*> PlayerArray;                                                          // 0x0330 (0x10)
    bool bReplicatedHasBegunPlay;                                                              // 0x0340 (0x01) BitMask: 0xFF
    float ReplicatedWorldTimeSeconds;                                                          // 0x0344 (0x04)
    float ServerWorldTimeSecondsDelta;                                                         // 0x0348 (0x04)
    float ServerWorldTimeSecondsUpdateFrequency;                                               // 0x034C (0x04)

    // --- Functions ---
    void OnRep_SpectatorClass();                                                               // [Protected] RVA: 0x272D1F8
    void OnRep_ReplicatedWorldTimeSeconds();                                                   // [Protected] RVA: 0x1B45824
    void OnRep_ReplicatedHasBegunPlay();                                                       // [Protected] RVA: 0x2429070
    void OnRep_GameModeClass();                                                                // [Protected] RVA: 0x15B37F0
    bool HasMatchStarted();                                                                    // [Public] RVA: 0x4B19A0C
    bool HasMatchEnded();                                                                      // [Public] RVA: 0x604CF28
    bool HasBegunPlay();                                                                       // [Public] RVA: 0x7F1645C
    float GetServerWorldTimeSeconds();                                                         // [Public] RVA: 0x7F163F8
    float GetPlayerStartTime(Controller* Controller);                                          // [Public] RVA: 0x7F15F00
    float GetPlayerRespawnDelay(Controller* Controller);                                       // [Public] RVA: 0x7F15E50
};

// ============================================================
// Inheritance: HUD : Actor : Object
// Package: /Script/Engine
// ============================================================
class HUD : public Actor {
public:
    PlayerController* PlayerOwner;                                                             // 0x0318 (0x08)
    bool bLostFocusPaused;                                                                     // 0x0320 (0x01) BitMask: 0x01
    bool bShowHUD;                                                                             // 0x0320 (0x01) BitMask: 0x02
    bool bShowDebugInfo;                                                                       // 0x0320 (0x01) BitMask: 0x04
    int32 CurrentTargetIndex;                                                                  // 0x0324 (0x04)
    bool bShowHitBoxDebugInfo;                                                                 // 0x0328 (0x01) BitMask: 0x01
    bool bShowOverlays;                                                                        // 0x0328 (0x01) BitMask: 0x02
    bool bEnableDebugTextShadow;                                                               // 0x0328 (0x01) BitMask: 0x04
    TArray<Actor*> PostRenderedActors;                                                         // 0x0330 (0x10)
    TArray<FName> DebugDisplay;                                                                // 0x0350 (0x10)
    TArray<FName> ToggledDebugCategories;                                                      // 0x0360 (0x10)
    Canvas* Canvas;                                                                            // 0x0370 (0x08)
    Canvas* DebugCanvas;                                                                       // 0x0378 (0x08)
    TArray<DebugTextInfo> DebugTextList;                                                       // 0x0380 (0x10)
    TSubclassOf<Actor> ShowDebugTargetDesiredClass;                                            // 0x0390 (0x08)
    Actor* ShowDebugTargetActor;                                                               // 0x0398 (0x08)

    // --- Functions ---
    void ShowHUD();                                                                            // [Public] RVA: 0x12B6BB4
    void ShowDebugToggleSubCategory(FName Category);                                           // [Final|Public] RVA: 0x7F1A89C
    void ShowDebugForReticleTargetToggle(TSubclassOf<Actor> DesiredClass);                     // [Final|Public] RVA: 0x7F1A7FC
    void ShowDebug(FName DebugType);                                                           // [Public] RVA: 0x7F1A760
    void RemoveDebugText(Actor* SrcActor, bool bLeaveDurationText);                            // [Final|Public] RVA: 0x7F1A490
    void RemoveAllDebugStrings();                                                              // [Final|Public] RVA: 0x7F1A474
    void ReceiveHitBoxRelease(const FName BoxName);                                            // [Public] RVA: 0x186CC1C
    void ReceiveHitBoxEndCursorOver(const FName BoxName);                                      // [Public] RVA: 0x186CC1C
    void ReceiveHitBoxClick(const FName BoxName);                                              // [Public] RVA: 0x186CC1C
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);                                    // [Public] RVA: 0x186CC1C
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);                                             // [Public] RVA: 0x186CC1C
    Vector Project(Vector Location);                                                           // [Final|Public] RVA: 0x7F1A3AC
    void PreviousDebugTarget();                                                                // [Public] RVA: 0x48EA73C
    void NextDebugTarget();                                                                    // [Public] RVA: 0x2429070
    void GetTextSize(FString Text, out float OutWidth, out float OutHeight, Font* Font, float Scale);  // [Final|Public] RVA: 0x7F1A064
    PlayerController* GetOwningPlayerController();                                             // [Final|Public] RVA: 0x5130210
    Pawn* GetOwningPawn();                                                                     // [Final|Public] RVA: 0x7F1A044
    void GetActorsInSelectionRectangle(TSubclassOf<Actor> ClassFilter, const Vector2D FirstPoint, const Vector2D SecondPoint, out TArray<Actor*> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);  // [Final|Public] RVA: 0x7F19D6C
    void DrawTextureSimple(Texture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7F19ADC
    void DrawTexture(Texture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, LinearColor TintColor, uint8 BlendMode, float Scale, bool bScalePosition, float Rotation, Vector2D RotPivot);  // [Final|Public] RVA: 0x7F19408
    void DrawText(FString Text, LinearColor TextColor, float ScreenX, float ScreenY, Font* Font, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7F19154
    void DrawRect(LinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);  // [Final|Public] RVA: 0x7F18F5C
    void DrawMaterialTriangle(MaterialInterface* Material, Vector2D V0_Pos, Vector2D V1_Pos, Vector2D V2_Pos, Vector2D V0_UV, Vector2D V1_UV, Vector2D V2_UV, LinearColor V0_Color, LinearColor V1_Color, LinearColor V2_Color);  // [Final|Public] RVA: 0x7F18AC4
    void DrawMaterialSimple(MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7F1875C
    void DrawMaterial(MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, Vector2D RotPivot);  // [Final|Public] RVA: 0x7F18124
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, LinearColor LineColor, float LineThickness);  // [Final|Public] RVA: 0x7F17ED8
    void Deproject(float ScreenX, float ScreenY, out Vector WorldPosition, out Vector WorldDirection);  // [Final|Public] RVA: 0x7F17CD8
    void AddHitBox(Vector2D position, Vector2D Size, FName InName, bool bConsumesInput, int32 Priority);  // [Final|Public] RVA: 0x7F17AF4
    void AddDebugText(FString DebugText, Actor* SrcActor, float Duration, Vector Offset, Vector DesiredOffset, Color TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, Font* InFont, float FontScale, bool bDrawShadow);  // [Final|Public] RVA: 0x7F1766C
};

// ============================================================
// Inheritance: Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class Info : public Actor {
public:
};

// ============================================================
// Inheritance: LevelBounds : Actor : Object
// Package: /Script/Engine
// ============================================================
class LevelBounds : public Actor {
public:
    BoxComponent* BoxComponent;                                                                // 0x0318 (0x08)
    bool bAutoUpdateBounds;                                                                    // 0x0320 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: LevelScriptActor : Actor : Object
// Package: /Script/Engine
// ============================================================
class LevelScriptActor : public Actor {
public:
    bool bInputEnabled;                                                                        // 0x0318 (0x01) BitMask: 0x01

    // --- Functions ---
    void WorldOriginLocationChanged(IntVector OldOriginLocation, IntVector NewOriginLocation);  // [Public] RVA: 0x186CC1C
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // [Public] RVA: 0x7F79688
    bool RemoteEvent(FName EventName);                                                         // [Public] RVA: 0x7F78DDC
    void LevelReset();                                                                         // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: ParticleEventManager : Actor : Object
// Package: /Script/Engine
// ============================================================
class ParticleEventManager : public Actor {
public:
};

// ============================================================
// Inheritance: Pawn : Actor : Object
// Package: /Script/Engine
// ============================================================
class Pawn : public Actor {
public:
    bool bUseControllerRotationPitch;                                                          // 0x0320 (0x01) BitMask: 0x01
    bool bUseControllerRotationYaw;                                                            // 0x0320 (0x01) BitMask: 0x02
    bool bUseControllerRotationRoll;                                                           // 0x0320 (0x01) BitMask: 0x04
    bool bCanAffectNavigationGeneration;                                                       // 0x0320 (0x01) BitMask: 0x08
    float BaseEyeHeight;                                                                       // 0x0324 (0x04)
    uint8 AutoPossessPlayer;                                                                   // 0x0328 (0x01)
    enum AutoPossessAI;                                                                        // 0x0329 (0x01)
    uint8 RemoteViewPitch;                                                                     // 0x032A (0x01)
    TSubclassOf<Controller> AIControllerClass;                                                 // 0x0330 (0x08)
    FMulticastDelegate OnReceivePhysicsEvent;                                                  // 0x0338 (0x10)
    PlayerState* PlayerState;                                                                  // 0x0348 (0x08)
    Controller* LastHitBy;                                                                     // 0x0358 (0x08)
    Controller* Controller;                                                                    // 0x0360 (0x08)
    Vector ControlInputVector;                                                                 // 0x036C (0x0C)
    Vector LastControlInputVector;                                                             // 0x0378 (0x0C)

    // --- Functions ---
    void SpawnDefaultController();                                                             // [Public] RVA: 0x5ED14FC
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);                  // [Final|Public] RVA: 0x7F87FA8
    void ReceiveUnpossessed(Controller* OldController);                                        // [Public] RVA: 0x186CC1C
    void ReceivePossessed(Controller* NewController);                                          // [Public] RVA: 0x186CC1C
    void PawnMakeNoise(float Loudness, Vector NoiseLocation, bool bUseNoiseMakerLocation, Actor* NoiseMaker);  // [Final|Public] RVA: 0x7F87304
    void OnRep_PlayerState();                                                                  // [Public] RVA: 0x1516400
    void OnRep_Controller();                                                                   // [Public] RVA: 0x5ECFBF4
    void LaunchPawn(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);                 // [Final|Public] RVA: 0x7F87018
    Vector K2_GetMovementInputVector();                                                        // [Final|Public] RVA: 0x7F86E7C
    bool IsPlayerControlled();                                                                 // [Public] RVA: 0x5ED0684
    bool IsPawnControlled();                                                                   // [Final|Public] RVA: 0x7F86FC8
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7F86FA0
    bool IsLocallyControlled();                                                                // [Public] RVA: 0x7F86F78
    bool IsControlled();                                                                       // [Final|Public] RVA: 0x7F86F20
    bool IsBotControlled();                                                                    // [Public] RVA: 0x61654C0
    Vector GetPendingMovementInputVector();                                                    // [Final|Public] RVA: 0x7F86E7C
    Vector GetNavAgentLocation();                                                              // [Public] RVA: 0x7F86DF8
    PawnMovementComponent* GetMovementComponent();                                             // [Public] RVA: 0x7EFE170
    Actor* GetMovementBaseActor(const Pawn* Pawn);                                             // [Static|Final|Public] RVA: 0x7F86D60
    Vector GetLastMovementInputVector();                                                       // [Final|Public] RVA: 0x7F86D38
    Rotator GetControlRotation();                                                              // [Final|Public] RVA: 0x7F86C38
    Controller* GetController();                                                               // [Final|Public] RVA: 0x60B94A4
    Rotator GetBaseAimRotation();                                                              // [Public] RVA: 0x7F86948
    void DetachFromControllerPendingDestroy();                                                 // [Public] RVA: 0x5ED1064
    Vector ConsumeMovementInputVector();                                                       // [Public] RVA: 0x7F86910
    void AddMovementInput(Vector WorldDirection, float ScaleValue, bool bForce);               // [Public] RVA: 0x7F8636C
    void AddControllerYawInput(float Val);                                                     // [Public] RVA: 0x5ED1514
    void AddControllerRollInput(float Val);                                                    // [Public] RVA: 0x5ED0764
    void AddControllerPitchInput(float Val);                                                   // [Public] RVA: 0x5ED09A4
};

// ============================================================
// Inheritance: PhysicsVolume : Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class PhysicsVolume : public Volume {
public:
    float TerminalVelocity;                                                                    // 0x0350 (0x04)
    int32 Priority;                                                                            // 0x0354 (0x04)
    float FluidFriction;                                                                       // 0x0358 (0x04)
    bool bWaterVolume;                                                                         // 0x035C (0x01) BitMask: 0x01
    bool bPhysicsOnContact;                                                                    // 0x035C (0x01) BitMask: 0x02
};

// ============================================================
// Inheritance: PlayerCameraManager : Actor : Object
// Package: /Script/Engine
// ============================================================
class PlayerCameraManager : public Actor {
public:
    PlayerController* PCOwner;                                                                 // 0x0318 (0x08)
    SceneComponent* TransformComponent;                                                        // 0x0320 (0x08)
    float DefaultFOV;                                                                          // 0x0330 (0x04)
    float DefaultOrthoWidth;                                                                   // 0x0338 (0x04)
    float DefaultAspectRatio;                                                                  // 0x0340 (0x04)
    CameraCacheEntry CameraCache;                                                              // 0x0390 (0x750)
    CameraCacheEntry LastFrameCameraCache;                                                     // 0x0AE0 (0x750)
    TViewTarget ViewTarget;                                                                    // 0x1230 (0x760)
    TViewTarget PendingViewTarget;                                                             // 0x1990 (0x760)
    CameraCacheEntry CameraCachePrivate;                                                       // 0x2120 (0x750)
    CameraCacheEntry LastFrameCameraCachePrivate;                                              // 0x2870 (0x750)
    TArray<CameraModifier*> ModifierList;                                                      // 0x2FC0 (0x10)
    TArray<TSubclassOf<CameraModifier>> DefaultModifiers;                                      // 0x2FD0 (0x10)
    float FreeCamDistance;                                                                     // 0x2FE0 (0x04)
    Vector FreeCamOffset;                                                                      // 0x2FE4 (0x0C)
    Vector ViewTargetOffset;                                                                   // 0x2FF0 (0x0C)
    FMulticastDelegate OnAudioFadeChangeEvent;                                                 // 0x3000 (0x10)
    TArray<EmitterCameraLensEffectBase*> CameraLensEffects;                                    // 0x3020 (0x10)
    CameraModifier_CameraShake* CachedCameraShakeMod;                                          // 0x3030 (0x08)
    CameraAnimInst* AnimInstPool;                                                              // 0x3038 (0x08)
    TArray<PostProcessSettings> PostProcessBlendCache;                                         // 0x3078 (0x10)
    TArray<CameraAnimInst*> ActiveAnims;                                                       // 0x3098 (0x10)
    TArray<CameraAnimInst*> FreeAnims;                                                         // 0x30A8 (0x10)
    CameraActor* AnimCameraActor;                                                              // 0x30B8 (0x08)
    bool bIsOrthographic;                                                                      // 0x30C0 (0x01) BitMask: 0x01
    bool bDefaultConstrainAspectRatio;                                                         // 0x30C0 (0x01) BitMask: 0x02
    bool bClientSimulatingViewTarget;                                                          // 0x30C0 (0x01) BitMask: 0x40
    bool bUseClientSideCameraUpdates;                                                          // 0x30C0 (0x01) BitMask: 0x80
    bool bGameCameraCutThisFrame;                                                              // 0x30C1 (0x01) BitMask: 0x04
    float ViewPitchMin;                                                                        // 0x30C4 (0x04)
    float ViewPitchMax;                                                                        // 0x30C8 (0x04)
    float ViewYawMin;                                                                          // 0x30CC (0x04)
    float ViewYawMax;                                                                          // 0x30D0 (0x04)
    float ViewRollMin;                                                                         // 0x30D4 (0x04)
    float ViewRollMax;                                                                         // 0x30D8 (0x04)
    float ServerUpdateCameraTimeout;                                                           // 0x30E0 (0x04)

    // --- Functions ---
    void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();                              // [Final|Protected] RVA: 0x7F94F40
    void StopCameraShake(CameraShakeBase* ShakeInstance, bool bImmediately);                   // [Public] RVA: 0x7F94DB0
    void StopCameraFade();                                                                     // [Public] RVA: 0x7F94D98
    void StopCameraAnimInst(CameraAnimInst* AnimInst, bool bImmediate);                        // [Public] RVA: 0x7F94CA8
    void StopAllInstancesOfCameraShakeFromSource(TSubclassOf<CameraShakeBase> Shake, CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Public] RVA: 0x7F94B70
    void StopAllInstancesOfCameraShake(TSubclassOf<CameraShakeBase> Shake, bool bImmediately);  // [Public] RVA: 0x7F94A80
    void StopAllInstancesOfCameraAnim(CameraAnim* Anim, bool bImmediate);                      // [Public] RVA: 0x7F94990
    void StopAllCameraShakesFromSource(CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Public] RVA: 0x7F948A0
    void StopAllCameraShakes(bool bImmediately);                                               // [Public] RVA: 0x7F94800
    void StopAllCameraAnims(bool bImmediate);                                                  // [Public] RVA: 0x7F94760
    MatineeCameraShake* StartMatineeCameraShakeFromSource(TSubclassOf<MatineeCameraShake> ShakeClass, CameraShakeSourceComponent* SourceComponent, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7F94564
    MatineeCameraShake* StartMatineeCameraShake(TSubclassOf<MatineeCameraShake> ShakeClass, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7F943BC
    CameraShakeBase* StartCameraShakeFromSource(TSubclassOf<CameraShakeBase> ShakeClass, CameraShakeSourceComponent* SourceComponent, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7F9412C
    CameraShakeBase* StartCameraShake(TSubclassOf<CameraShakeBase> ShakeClass, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7F93F80
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, LinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);  // [Public] RVA: 0x7F93D34
    void SetManualCameraFade(float InFadeAmount, LinearColor Color, bool bInFadeAudio);        // [Public] RVA: 0x7F93598
    void SetGameCameraCutThisFrame();                                                          // [Final|Public] RVA: 0x7F93440
    bool RemoveCameraModifier(CameraModifier* ModifierToRemove);                               // [Public] RVA: 0x60BF998
    void RemoveCameraLensEffect(EmitterCameraLensEffectBase* Emitter);                         // [Public] RVA: 0x5F3981C
    CameraAnimInst* PlayCameraAnim(CameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7F90F14
    void PhotographyCameraModify(const Vector NewCameraLocation, const Vector PreviousCameraLocation, const Vector OriginalCameraLocation, out Vector ResultCameraLocation);  // [Public] RVA: 0x7F90D0C
    void OnPhotographySessionStart();                                                          // [Public] RVA: 0x2408980
    void OnPhotographySessionEnd();                                                            // [Public] RVA: 0x47F0B08
    void OnPhotographyMultiPartCaptureStart();                                                 // [Public] RVA: 0x1BF89C4
    void OnPhotographyMultiPartCaptureEnd();                                                   // [Public] RVA: 0x12B6BB4
    PlayerController* GetOwningPlayerController();                                             // [Public] RVA: 0x7F906B4
    float GetFOVAngle();                                                                       // [Public] RVA: 0x7EF968C
    Rotator GetCameraRotation();                                                               // [Public] RVA: 0x7F8F090
    Vector GetCameraLocation();                                                                // [Public] RVA: 0x7F8F058
    CameraModifier* FindCameraModifierByClass(TSubclassOf<CameraModifier> ModifierClass);      // [Public] RVA: 0x7F8EFA8
    void ClearCameraLensEffects();                                                             // [Public] RVA: 0x2826814
    bool BlueprintUpdateCamera(Actor* CameraTarget, out Vector NewCameraLocation, out Rotator NewCameraRotation, out float NewCameraFOV);  // [Public] RVA: 0x186CC1C
    CameraModifier* AddNewCameraModifier(TSubclassOf<CameraModifier> ModifierClass);           // [Public] RVA: 0x7F8BAB4
    EmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<EmitterCameraLensEffectBase> LensEffectEmitterClass);  // [Public] RVA: 0x7F8BA04
};

// ============================================================
// Inheritance: PlayerController : Controller : Actor : Object
// Package: /Script/Engine
// ============================================================
class PlayerController : public Controller {
public:
    Player* Player;                                                                            // 0x0390 (0x08)
    Pawn* AcknowledgedPawn;                                                                    // 0x0398 (0x08)
    InterpTrackInstDirector* ControllingDirTrackInst;                                          // 0x03A0 (0x08)
    HUD* MyHUD;                                                                                // 0x03A8 (0x08)
    PlayerCameraManager* PlayerCameraManager;                                                  // 0x03B0 (0x08)
    TSubclassOf<PlayerCameraManager> PlayerCameraManagerClass;                                 // 0x03B8 (0x08)
    bool bAutoManageActiveCameraTarget;                                                        // 0x03C0 (0x01) BitMask: 0xFF
    Rotator TargetViewRotation;                                                                // 0x03C4 (0x0C)
    float SmoothTargetViewRotationSpeed;                                                       // 0x03DC (0x04)
    TArray<Actor*> HiddenActors;                                                               // 0x03E8 (0x10)
    TArray<PrimitiveComponent*> HiddenPrimitiveComponents;                                     // 0x03F8 (0x10)
    float LastSpectatorStateSynchTime;                                                         // 0x040C (0x04)
    Vector LastSpectatorSyncLocation;                                                          // 0x0410 (0x0C)
    Rotator LastSpectatorSyncRotation;                                                         // 0x041C (0x0C)
    int32 ClientCap;                                                                           // 0x0428 (0x04)
    CheatManager* CheatManager;                                                                // 0x0430 (0x08)
    TSubclassOf<CheatManager> CheatClass;                                                      // 0x0438 (0x08)
    PlayerInput* PlayerInput;                                                                  // 0x0440 (0x08)
    TArray<ActiveForceFeedbackEffect> ActiveForceFeedbackEffects;                              // 0x0448 (0x10)
    bool bSlateForceFeedbackEnable;                                                            // 0x0458 (0x01) BitMask: 0xFF
    bool bProcessDynamicFeedbackEnable;                                                        // 0x0459 (0x01) BitMask: 0xFF
    bool bPlayerIsWaiting;                                                                     // 0x04D0 (0x01) BitMask: 0x10
    uint8 NetPlayerIndex;                                                                      // 0x04D4 (0x01)
    NetConnection* PendingSwapConnection;                                                      // 0x0510 (0x08)
    NetConnection* NetConnection;                                                              // 0x0518 (0x08)
    float InputYawScale;                                                                       // 0x052C (0x04)
    float InputPitchScale;                                                                     // 0x0530 (0x04)
    float InputRollScale;                                                                      // 0x0534 (0x04)
    bool bShowMouseCursor;                                                                     // 0x0538 (0x01) BitMask: 0x01
    bool bEnableClickEvents;                                                                   // 0x0538 (0x01) BitMask: 0x02
    bool bEnableTouchEvents;                                                                   // 0x0538 (0x01) BitMask: 0x04
    bool bEnableMouseOverEvents;                                                               // 0x0538 (0x01) BitMask: 0x08
    bool bEnableTouchOverEvents;                                                               // 0x0538 (0x01) BitMask: 0x10
    bool bForceFeedbackEnabled;                                                                // 0x0538 (0x01) BitMask: 0x20
    float ForceFeedbackScale;                                                                  // 0x053C (0x04)
    TArray<Key> ClickEventKeys;                                                                // 0x0540 (0x10)
    uint8 DefaultMouseCursor;                                                                  // 0x0550 (0x01)
    uint8 CurrentMouseCursor;                                                                  // 0x0551 (0x01)
    uint8 DefaultClickTraceChannel;                                                            // 0x0552 (0x01)
    uint8 CurrentClickTraceChannel;                                                            // 0x0553 (0x01)
    float HitResultTraceDistance;                                                              // 0x0554 (0x04)
    uint16 SeamlessTravelCount;                                                                // 0x0558 (0x02)
    uint16 LastCompletedSeamlessTravelCount;                                                   // 0x055A (0x02)
    InputComponent* InactiveStateInputComponent;                                               // 0x05D0 (0x08)
    bool bShouldPerformFullTickWhenPaused;                                                     // 0x05D8 (0x01) BitMask: 0x04
    TouchInterface* CurrentTouchInterface;                                                     // 0x05F0 (0x08)
    SpectatorPawn* SpectatorPawn;                                                              // 0x0648 (0x08)
    bool bIsLocalPlayerController;                                                             // 0x0654 (0x01) BitMask: 0xFF
    Vector SpawnLocation;                                                                      // 0x0658 (0x0C)

    // --- Functions ---
    bool WasInputKeyJustReleased(Key Key);                                                     // [Final|Public] RVA: 0x7F95238
    bool WasInputKeyJustPressed(Key Key);                                                      // [Final|Public] RVA: 0x7F950F4
    void ToggleSpeaking(bool bInSpeaking);                                                     // [Public] RVA: 0x7F95054
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);       // [Final|Private] RVA: 0x6BF64AC
    void SwitchLevel(FString URL);                                                             // [Public] RVA: 0x7F94F54
    void StopHapticEffect(enum Hand);                                                          // [Final|Public] RVA: 0x7F94EA0
    void StartFire(uint8 FireModeNum);                                                         // [Public] RVA: 0x7F94320
    void SetVirtualJoystickVisibility(bool bVisible);                                          // [Public] RVA: 0x7F93C94
    void SetViewTargetWithBlend(Actor* NewViewTarget, float BlendTime, uint8 BlendFunc, float BlendExp, bool bLockOutgoing);  // [Public] RVA: 0x7F93AB0
    void SetName(FString S);                                                                   // [Public] RVA: 0x7F939B0
    void SetMouseLocation(const int32 X, const int32 Y);                                       // [Final|Public] RVA: 0x7F938C8
    void SetMouseCursorWidget(uint8 Cursor, UserWidget* CursorWidget);                         // [Final|Public] RVA: 0x7F936E4
    void SetHapticsByValue(const float Frequency, const float Amplitude, enum Hand);           // [Final|Public] RVA: 0x7F93458
    void SetDisableHaptics(bool bNewDisabled);                                                 // [Public] RVA: 0x7F933A0
    void SetControllerLightColor(Color Color);                                                 // [Final|Public] RVA: 0x7F932DC
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // [Public] RVA: 0x7F930D0
    void SetAudioListenerOverride(SceneComponent* AttachToComponent, Vector Location, Rotator Rotation);  // [Final|Public] RVA: 0x7F92ED0
    void SetAudioListenerAttenuationOverride(SceneComponent* AttachToComponent, Vector AttenuationLocationOVerride);  // [Final|Public] RVA: 0x7F92D48
    void ServerViewSelf(ViewTargetTransitionParams TransitionParams);                          // [Public] RVA: 0x7F92C6C
    void ServerViewPrevPlayer();                                                               // [Public] RVA: 0x7F92C20
    void ServerViewNextPlayer();                                                               // [Public] RVA: 0x7F92BD4
    void ServerVerifyViewTarget();                                                             // [Public] RVA: 0x7F92B88
    void ServerUpdateMultipleLevelsVisibility(const TArray<UpdateLevelVisibilityLevelInfo> LevelVisibilities);  // [Final|Public] RVA: 0x7F92A8C
    void ServerUpdateLevelVisibility(const UpdateLevelVisibilityLevelInfo LevelVisibility);    // [Final|Public] RVA: 0x1CB0D10
    void ServerUpdateCamera(Vector_NetQuantize CamLoc, int32 CamPitchAndYaw);                  // [Public] RVA: 0x7F92954
    void ServerUnmutePlayer(UniqueNetIdRepl PlayerId);                                         // [Public] RVA: 0x7F92854
    void ServerToggleAILogging();                                                              // [Public] RVA: 0x7F92808
    void ServerShortTimeout();                                                                 // [Public] RVA: 0x25AB1A0
    void ServerSetSpectatorWaiting(bool bWaiting);                                             // [Public] RVA: 0x7F92740
    void ServerSetSpectatorLocation(Vector NewLoc, Rotator NewRot);                            // [Public] RVA: 0x7F925E8
    void ServerRestartPlayer();                                                                // [Public] RVA: 0x7F9259C
    void ServerPause();                                                                        // [Public] RVA: 0x7F92550
    void ServerNotifyLoadedWorld(FName WorldPackageName);                                      // [Final|Public] RVA: 0x7F9247C
    void ServerMutePlayer(UniqueNetIdRepl PlayerId);                                           // [Public] RVA: 0x7F9237C
    void ServerExecRPC(FString Msg);                                                           // [Public] RVA: 0x7F92258
    void ServerExec(FString Msg);                                                              // [Final|Public] RVA: 0x52A8088
    void ServerCheckClientPossessionReliable();                                                // [Public] RVA: 0x7F9220C
    void ServerCheckClientPossession();                                                        // [Public] RVA: 0x7F921C0
    void ServerChangeName(FString S);                                                          // [Public] RVA: 0x7F9209C
    void ServerCamera(FName NewMode);                                                          // [Public] RVA: 0x7F91FE0
    void ServerAcknowledgePossession(Pawn* P);                                                 // [Public] RVA: 0x7F91F28
    void SendToConsole(FString Command);                                                       // [Public] RVA: 0x7F91E28
    void RestartLevel();                                                                       // [Public] RVA: 0x7F91E10
    void ResetControllerLightColor();                                                          // [Final|Public] RVA: 0x7F91DB4
    bool ProjectWorldLocationToScreen(Vector WorldLocation, out Vector2D ScreenLocation, bool bPlayerViewportRelative);  // [Final|Public] RVA: 0x7F91C1C
    void PlayHapticEffect(HapticFeedbackEffect_Base* HapticEffect, enum Hand, float Scale, bool bLoop);  // [Final|Public] RVA: 0x7F91604
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, uint8 Action, LatentActionInfo LatentInfo);  // [Final|Private] RVA: 0x7F912D8
    void Pause();                                                                              // [Public] RVA: 0x7F90CF4
    void OnServerStartedVisualLogger(bool bIsLogging);                                         // [Public] RVA: 0x7F90C54
    void LocalTravel(FString URL);                                                             // [Public] RVA: 0x7F90B54
    void K2_ClientPlayForceFeedback(ForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);  // [Final|Public] RVA: 0x7F90938
    bool IsInputKeyDown(Key Key);                                                              // [Final|Public] RVA: 0x7F907F4
    void GetViewportSize(out int32 SizeX, out int32 SizeY);                                    // [Final|Public] RVA: 0x7F906F4
    SpectatorPawn* GetSpectatorPawn();                                                         // [Final|Public] RVA: 0x7F906DC
    bool GetMousePosition(out float LocationX, out float LocationY);                           // [Final|Public] RVA: 0x7F905B0
    Vector GetInputVectorKeyState(Key Key);                                                    // [Final|Public] RVA: 0x7F904A4
    void GetInputTouchState(uint8 FingerIndex, out float LocationX, out float LocationY, out bool bIsCurrentlyPressed);  // [Final|Public] RVA: 0x7F902E8
    void GetInputMouseDelta(out float DeltaX, out float DeltaY);                               // [Final|Public] RVA: 0x7F901E4
    void GetInputMotionState(out Vector Tilt, out Vector RotationRate, out Vector Gravity, out Vector Acceleration);  // [Final|Public] RVA: 0x7F8FF70
    float GetInputKeyTimeDown(Key Key);                                                        // [Final|Public] RVA: 0x7F8FE24
    void GetInputAnalogStickState(uint8 WhichStick, out float StickX, out float StickY);       // [Final|Public] RVA: 0x7F8FCD8
    float GetInputAnalogKeyState(Key Key);                                                     // [Final|Public] RVA: 0x7F8FB8C
    HUD* GetHUD();                                                                             // [Final|Public] RVA: 0x7F8F118
    bool GetHitResultUnderFingerForObjects(uint8 FingerIndex, const TArray<uint8> ObjectTypes, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8F988
    bool GetHitResultUnderFingerByChannel(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8F7B0
    bool GetHitResultUnderFinger(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8F5D8
    bool GetHitResultUnderCursorForObjects(const TArray<uint8> ObjectTypes, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8F430
    bool GetHitResultUnderCursorByChannel(uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8F2B0
    bool GetHitResultUnderCursor(uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8F130
    Vector GetFocalLocation();                                                                 // [Public] RVA: 0x7F8F0E0
    float GetDeprecatedInputYawScale();                                                        // [Final|Public] RVA: 0x513029C
    float GetDeprecatedInputRollScale();                                                       // [Final|Public] RVA: 0x7F8F0C8
    float GetDeprecatedInputPitchScale();                                                      // [Final|Public] RVA: 0x5439008
    void FOV(float NewFOV);                                                                    // [Public] RVA: 0x7F8EF08
    void EnableCheats();                                                                       // [Public] RVA: 0x7F8EEF0
    bool DoLineTraceAtScreenPosition(const Vector2D ScreenPosition, const uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7F8ED1C
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, out Vector WorldLocation, out Vector WorldDirection);  // [Final|Public] RVA: 0x7F8EB08
    bool DeprojectMousePositionToWorld(out Vector WorldLocation, out Vector WorldDirection);   // [Final|Public] RVA: 0x7F8E994
    void ConsoleKey(Key Key);                                                                  // [Public] RVA: 0x7F8E8A4
    void ClientWasKicked(const FText KickReason);                                              // [Public] RVA: 0x7F8E7E4
    void ClientVoiceHandshakeComplete();                                                       // [Public] RVA: 0x2840E38
    void ClientUpdateMultipleLevelsStreamingStatus(const TArray<UpdateLevelStreamingLevelStatus> LevelStatuses);  // [Public] RVA: 0x7F8E6E4
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);  // [Public] RVA: 0x7F8E4DC
    void ClientUnmutePlayer(UniqueNetIdRepl PlayerId);                                         // [Public] RVA: 0x7F8E40C
    void ClientTravelInternal(FString URL, uint8 TravelType, bool bSeamless, Guid MapPackageGuid);  // [Public] RVA: 0x7F8E21C
    void ClientTravel(FString URL, uint8 TravelType, bool bSeamless, Guid MapPackageGuid);     // [Final|Public] RVA: 0x7F8E068
    void ClientTeamMessage(PlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);  // [Public] RVA: 0x7F8DED0
    void ClientStopForceFeedback(ForceFeedbackEffect* ForceFeedbackEffect, FName Tag);         // [Public] RVA: 0x7F8DDE4
    void ClientStopCameraShakesFromSource(CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Final|Public] RVA: 0x7F8DCE4
    void ClientStopCameraShake(TSubclassOf<CameraShakeBase> Shake, bool bImmediately);         // [Public] RVA: 0x7F8DBF4
    void ClientStopCameraAnim(CameraAnim* AnimToStop);                                         // [Public] RVA: 0x7F8DB54
    void ClientStartOnlineSession();                                                           // [Public] RVA: 0x7F8DB3C
    void ClientStartCameraShakeFromSource(TSubclassOf<CameraShakeBase> Shake, CameraShakeSourceComponent* SourceComponent);  // [Final|Public] RVA: 0x7F8DA10
    void ClientStartCameraShake(TSubclassOf<CameraShakeBase> Shake, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7F8D878
    void ClientSpawnCameraLensEffect(TSubclassOf<EmitterCameraLensEffectBase> LensEffectEmitterClass);  // [Public] RVA: 0x4B1655C
    void ClientSetViewTarget(Actor* A, ViewTargetTransitionParams TransitionParams);           // [Public] RVA: 0x7F8D764
    void ClientSetSpectatorWaiting(bool bWaiting);                                             // [Public] RVA: 0x7F8D6C4
    void ClientSetHUD(TSubclassOf<HUD> NewHUDClass);                                           // [Public] RVA: 0x1749300
    void ClientSetForceMipLevelsToBeResident(MaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);  // [Public] RVA: 0x7F8D590
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);  // [Public] RVA: 0x7F8D3DC
    void ClientSetCameraMode(FName NewCamMode);                                                // [Public] RVA: 0x7F8D340
    void ClientSetCameraFade(bool bEnableFading, Color FadeColor, Vector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);  // [Public] RVA: 0x7F8D100
    void ClientSetBlockOnAsyncLoading();                                                       // [Public] RVA: 0x7F8D0E8
    void ClientReturnToMainMenuWithTextReason(const FText ReturnReason);                       // [Public] RVA: 0x7F8D028
    void ClientReturnToMainMenu(FString ReturnReason);                                         // [Public] RVA: 0x7F8CF28
    void ClientRetryClientRestart(Pawn* NewPawn);                                              // [Public] RVA: 0x7F8CE88
    void ClientRestart(Pawn* NewPawn);                                                         // [Public] RVA: 0x7F8CDE8
    void ClientReset();                                                                        // [Public] RVA: 0x7F8461C
    void ClientRepObjRef(Object* Object);                                                      // [Public] RVA: 0x7F8CD48
    void ClientReceiveLocalizedMessage(TSubclassOf<LocalMessage> Message, int32 Switch, PlayerState* RelatedPlayerState_1, PlayerState* RelatedPlayerState_2, Object* OptionalObject);  // [Public] RVA: 0x16035DC
    void ClientPrestreamTextures(Actor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);  // [Public] RVA: 0x7F8CBAC
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);                     // [Public] RVA: 0x7F8CA64
    void ClientPlaySoundAtLocation(SoundBase* Sound, Vector Location, float VolumeMultiplier, float PitchMultiplier);  // [Public] RVA: 0x7F8C8CC
    void ClientPlaySound(SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);     // [Public] RVA: 0x7F8C798
    void ClientPlayForceFeedback_Internal(ForceFeedbackEffect* ForceFeedbackEffect, ForceFeedbackParameters Params);  // [Final|Private] RVA: 0x7F8C690
    void ClientPlayCameraAnim(CameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, enum Space, Rotator CustomPlaySpace);  // [Public] RVA: 0x7F8C338
    void ClientMutePlayer(UniqueNetIdRepl PlayerId);                                           // [Public] RVA: 0x7F8C268
    void ClientMessage(FString S, FName Type, float MsgLifeTime);                              // [Public] RVA: 0x7F8C118
    void ClientIgnoreMoveInput(bool bIgnore);                                                  // [Public] RVA: 0x5F39564
    void ClientIgnoreLookInput(bool bIgnore);                                                  // [Public] RVA: 0x5F0E884
    void ClientGotoState(FName NewState);                                                      // [Public] RVA: 0x1A0628C
    void ClientGameEnded(Actor* EndGameFocus, bool bIsWinner);                                 // [Public] RVA: 0x7F8C028
    void ClientForceGarbageCollection();                                                       // [Public] RVA: 0x5F397EC
    void ClientFlushLevelStreaming();                                                          // [Final|Public] RVA: 0x7F8BFB0
    void ClientEndOnlineSession();                                                             // [Public] RVA: 0x7F8BF98
    void ClientEnableNetworkVoice(bool bEnable);                                               // [Public] RVA: 0x237789C
    void ClientCommitMapChange();                                                              // [Public] RVA: 0x5F39804
    void ClientClearCameraLensEffects();                                                       // [Public] RVA: 0x616A4C0
    void ClientCapBandwidth(int32 Cap);                                                        // [Public] RVA: 0x2366F74
    void ClientCancelPendingMapChange();                                                       // [Public] RVA: 0x5F0F79C
    void ClientAddTextureStreamingLoc(Vector InLoc, float Duration, bool bOverrideLocation);   // [Final|Public] RVA: 0x7F8BE60
    void ClearAudioListenerOverride();                                                         // [Final|Public] RVA: 0x7F8BE34
    void ClearAudioListenerAttenuationOverride();                                              // [Final|Public] RVA: 0x7F8BE08
    bool CanRestartPlayer();                                                                   // [Public] RVA: 0x7F8BDE0
    void Camera(FName NewMode);                                                                // [Public] RVA: 0x7F8BD44
    void AddYawInput(float Val);                                                               // [Public] RVA: 0x7F8BCA4
    void AddRollInput(float Val);                                                              // [Public] RVA: 0x7F8BC04
    void AddPitchInput(float Val);                                                             // [Public] RVA: 0x7F8BB64
    void ActivateTouchInterface(TouchInterface* NewTouchInterface);                            // [Public] RVA: 0x7F8B964
};

// ============================================================
// Inheritance: PlayerState : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class PlayerState : public Info {
public:
    float Score;                                                                               // 0x0318 (0x04)
    int32 PlayerId;                                                                            // 0x031C (0x04)
    uint8 Ping;                                                                                // 0x0320 (0x01)
    bool bShouldUpdateReplicatedPing;                                                          // 0x0322 (0x01) BitMask: 0x01
    bool bIsSpectator;                                                                         // 0x0322 (0x01) BitMask: 0x02
    bool bOnlySpectator;                                                                       // 0x0322 (0x01) BitMask: 0x04
    bool bIsABot;                                                                              // 0x0322 (0x01) BitMask: 0x08
    bool bIsInactive;                                                                          // 0x0322 (0x01) BitMask: 0x20
    bool bFromPreviousLevel;                                                                   // 0x0322 (0x01) BitMask: 0x40
    int32 StartTime;                                                                           // 0x0324 (0x04)
    TSubclassOf<LocalMessage> EngineMessageClass;                                              // 0x0328 (0x08)
    float ExactPing;                                                                           // 0x0330 (0x04)
    float ExactPingV2;                                                                         // 0x0334 (0x04)
    FString SavedNetworkAddress;                                                               // 0x0338 (0x10)
    UniqueNetIdRepl UniqueID;                                                                  // 0x0348 (0x28)
    Pawn* PawnPrivate;                                                                         // 0x0378 (0x08)
    FString PlayerNamePrivate;                                                                 // 0x03F8 (0x10)
    uint8 PingForHalfSecond;                                                                   // 0x0480 (0x01)
    uint8 PingForTwoSeconds;                                                                   // 0x0481 (0x01)
    uint8 PingStandardDeviation;                                                               // 0x0482 (0x01)
    float ExactPingForHalfSecond;                                                              // 0x0484 (0x04)

    // --- Functions ---
    void ReceiveOverrideWith(PlayerState* OldPlayerState);                                     // [Protected] RVA: 0x186CC1C
    void ReceiveCopyProperties(PlayerState* NewPlayerState);                                   // [Protected] RVA: 0x186CC1C
    void OnRep_UniqueId();                                                                     // [Public] RVA: 0x47FA8B8
    void OnRep_Score();                                                                        // [Public] RVA: 0x12B6BB4
    void OnRep_PlayerName();                                                                   // [Public] RVA: 0x1BF89C4
    void OnRep_PlayerId();                                                                     // [Public] RVA: 0x2408980
    void OnRep_bIsInactive();                                                                  // [Public] RVA: 0x47F0B08
    FString GetPlayerName();                                                                   // [Final|Public] RVA: 0x210EC08
    uint8 GetCompressedPingStdDev();                                                           // [Final|Public] RVA: 0x7F9725C
    uint8 GetCompressedPingForTwoSeconds();                                                    // [Final|Public] RVA: 0x7F97244
    uint8 GetCompressedPingForHalfSecond();                                                    // [Final|Public] RVA: 0x7F9722C
    uint8 GetCompressedPing();                                                                 // [Final|Public] RVA: 0x1DFC448
};

// ============================================================
// Inheritance: PrecomputedVisibilityVolume : Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class PrecomputedVisibilityVolume : public Volume {
public:
};

// ============================================================
// Inheritance: RuntimeVirtualTextureVolume : Actor : Object
// Package: /Script/Engine
// ============================================================
class RuntimeVirtualTextureVolume : public Actor {
public:
    RuntimeVirtualTextureComponent* VirtualTextureComponent;                                   // 0x0318 (0x08)
};

// ============================================================
// Inheritance: Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class Volume : public Brush {
public:
};

// ============================================================
// Inheritance: World : Object
// Package: /Script/Engine
// ============================================================
class World : public Object {
public:
    Level* PersistentLevel;                                                                    // 0x0030 (0x08)
    NetDriver* NetDriver;                                                                      // 0x0038 (0x08)
    LineBatchComponent* LineBatcher;                                                           // 0x0040 (0x08)
    LineBatchComponent* PersistentLineBatcher;                                                 // 0x0048 (0x08)
    LineBatchComponent* ForegroundLineBatcher;                                                 // 0x0050 (0x08)
    GameNetworkManager* NetworkManager;                                                        // 0x0058 (0x08)
    PhysicsCollisionHandler* PhysicsCollisionHandler;                                          // 0x0060 (0x08)
    TArray<Object*> ExtraReferencedObjects;                                                    // 0x0068 (0x10)
    TArray<Object*> PerModuleDataObjects;                                                      // 0x0078 (0x10)
    TArray<LevelStreaming*> StreamingLevels;                                                   // 0x0088 (0x10)
    StreamingLevelsToConsider StreamingLevelsToConsider;                                       // 0x0098 (0x28)
    FString StreamingLevelsPrefix;                                                             // 0x00C0 (0x10)
    Level* CurrentLevelPendingVisibility;                                                      // 0x00D0 (0x08)
    Level* CurrentLevelPendingInvisibility;                                                    // 0x00D8 (0x08)
    DemoNetDriver* DemoNetDriver;                                                              // 0x00E0 (0x08)
    ParticleEventManager* MyParticleEventManager;                                              // 0x00E8 (0x08)
    PhysicsVolume* DefaultPhysicsVolume;                                                       // 0x00F0 (0x08)
    bool bAreConstraintsDirty;                                                                 // 0x010E (0x01) BitMask: 0x04
    NavigationSystemBase* NavigationSystem;                                                    // 0x0110 (0x08)
    GameModeBase* AuthorityGameMode;                                                           // 0x0118 (0x08)
    GameStateBase* GameState;                                                                  // 0x0120 (0x08)
    AISystemBase* AISystem;                                                                    // 0x0128 (0x08)
    AvoidanceManager* AvoidanceManager;                                                        // 0x0130 (0x08)
    TArray<Level*> Levels;                                                                     // 0x0138 (0x10)
    TArray<LevelCollection> LevelCollections;                                                  // 0x0148 (0x10)
    GameInstance* OwningGameInstance;                                                          // 0x0180 (0x08)
    TArray<MaterialParameterCollectionInstance*> ParameterCollectionInstances;                 // 0x0188 (0x10)
    Canvas* CanvasForRenderingToTarget;                                                        // 0x0198 (0x08)
    Canvas* CanvasForDrawMaterialToRenderTarget;                                               // 0x01A0 (0x08)
    TArray<PrimitiveComponent*> VolumeCacheComponents;                                         // 0x01F8 (0x10)
    TSet<ActorComponent*> ComponentsThatNeedPreEndOfFrameSync;                                 // 0x0208 (0x50)
    TArray<ActorComponent*> ComponentsThatNeedEndOfFrameUpdate;                                // 0x0258 (0x10)
    TArray<ActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;                   // 0x0268 (0x10)
    WorldComposition* WorldComposition;                                                        // 0x0688 (0x08)
    WorldPSCPool PSCPool;                                                                      // 0x0730 (0x58)

    // --- Functions ---
    WorldSettings* K2_GetWorldSettings();                                                      // [Final|Public] RVA: 0x7FC4E78
    bool HasValidSceneEV100();                                                                 // [Final|Public] RVA: 0x7FC4E54
    void HandleTimelineScrubbed();                                                             // [Final|Public] RVA: 0x7FC4E40
    float GetLastSmoothedSceneEV100();                                                         // [Final|Public] RVA: 0x7FC4E28
    float GetLastSceneEV100();                                                                 // [Final|Public] RVA: 0x7FC4E10
};

// ============================================================
// Inheritance: WorldSettings : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class WorldSettings : public Info {
public:
    int32 VisibilityCellSize;                                                                  // 0x0320 (0x04)
    bool bPHOCUseWorldSettings;                                                                // 0x0324 (0x01) BitMask: 0xFF
    float PHOCBucketSize;                                                                      // 0x0328 (0x04)
    int32 PHOCCellNumPerBucket;                                                                // 0x032C (0x04)
    float PHOCSubLevelSize;                                                                    // 0x0330 (0x04)
    Vector PHOCCellOffset;                                                                     // 0x0334 (0x0C)
    float PVSLevelExtendDistance;                                                              // 0x0340 (0x04)
    float CellVisibilityBakeExtendDistance;                                                    // 0x0344 (0x04)
    uint8 VisibilityAggressiveness;                                                            // 0x0348 (0x01)
    bool bPrecomputeVisibility;                                                                // 0x0349 (0x01) BitMask: 0x01
    bool bPlaceCellsOnlyAlongCameraTracks;                                                     // 0x0349 (0x01) BitMask: 0x02
    bool bEnableWorldBoundsChecks;                                                             // 0x0349 (0x01) BitMask: 0x04
    bool bEnableNavigationSystem;                                                              // 0x0349 (0x01) BitMask: 0x08
    bool bEnableAISystem;                                                                      // 0x0349 (0x01) BitMask: 0x10
    bool bEnableWorldComposition;                                                              // 0x0349 (0x01) BitMask: 0x20
    bool bEnableDistanceLevelStreaming;                                                        // 0x0349 (0x01) BitMask: 0x40
    bool bUseClientSideLevelStreamingVolumes;                                                  // 0x0349 (0x01) BitMask: 0x80
    bool bUseStandaloneLevelStreamingVolumes;                                                  // 0x034A (0x01) BitMask: 0x01
    bool bEnableWorldOriginRebasing;                                                           // 0x034A (0x01) BitMask: 0x02
    bool bWorldGravitySet;                                                                     // 0x034A (0x01) BitMask: 0x04
    bool bGlobalGravitySet;                                                                    // 0x034A (0x01) BitMask: 0x08
    bool bMinimizeBSPSections;                                                                 // 0x034A (0x01) BitMask: 0x10
    bool bForceNoPrecomputedLighting;                                                          // 0x034A (0x01) BitMask: 0x20
    bool bHighPriorityLoading;                                                                 // 0x034A (0x01) BitMask: 0x40
    bool bHighPriorityLoadingLocal;                                                            // 0x034A (0x01) BitMask: 0x80
    bool bOverrideDefaultBroadphaseSettings;                                                   // 0x034B (0x01) BitMask: 0x01
    NavigationSystemConfig* NavigationSystemConfig;                                            // 0x0350 (0x08)
    NavigationSystemConfig* NavigationSystemConfigOverride;                                    // 0x0358 (0x08)
    float WorldToMeters;                                                                       // 0x0360 (0x04)
    float KillZ;                                                                               // 0x0364 (0x04)
    TSubclassOf<DamageType> KillZDamageType;                                                   // 0x0368 (0x08)
    bool bForceLODsShareStaticLighting;                                                        // 0x0370 (0x01) BitMask: 0x01
    float WorldGravityZ;                                                                       // 0x0374 (0x04)
    float RebaseDistance;                                                                      // 0x0378 (0x04)
    Actor* InitWorldOriginActor;                                                               // 0x0380 (0x08)
    bool bEnablePRT;                                                                           // 0x0388 (0x01) BitMask: 0x01
    bool bVolumeZeroPositionStart;                                                             // 0x0388 (0x01) BitMask: 0x02
    Vector BakedAORemap;                                                                       // 0x038C (0x0C)
    float GlobalGravityZ;                                                                      // 0x0398 (0x04)
    TSubclassOf<DefaultPhysicsVolume> DefaultPhysicsVolumeClass;                               // 0x03A0 (0x08)
    TSubclassOf<PhysicsCollisionHandler> PhysicsCollisionHandlerClass;                         // 0x03A8 (0x08)
    TSubclassOf<GameModeBase> DefaultGameMode;                                                 // 0x03B0 (0x08)
    TSubclassOf<GameNetworkManager> GameNetworkManagerClass;                                   // 0x03B8 (0x08)
    int32 PackedLightAndShadowMapTextureSize;                                                  // 0x03C0 (0x04)
    Vector DefaultColorScale;                                                                  // 0x03C4 (0x0C)
    float DefaultMaxDistanceFieldOcclusionDistance;                                            // 0x03D0 (0x04)
    float GlobalDistanceFieldViewDistance;                                                     // 0x03D4 (0x04)
    float FarGlobalDistanceFieldDistance;                                                      // 0x03D8 (0x04)
    bool bDisableDistanceFields;                                                               // 0x03DC (0x01) BitMask: 0xFF
    float DynamicIndirectShadowsSelfShadowingIntensity;                                        // 0x03E0 (0x04)
    IBLPrecomputedDataAsset* HQAdditiveReflectionCubemap;                                      // 0x03E8 (0x08)
    float AdditiveWeight;                                                                      // 0x03F0 (0x04)
    float TotalWeight;                                                                         // 0x03F4 (0x04)
    bool bLuxFullyStatic;                                                                      // 0x03F8 (0x01) BitMask: 0x01
    ReverbSettings DefaultReverbSettings;                                                      // 0x0400 (0x20)
    InteriorSettings DefaultAmbientZoneSettings;                                               // 0x0420 (0x24)
    float MonoCullingDistance;                                                                 // 0x0444 (0x04)
    SoundMix* DefaultBaseSoundMix;                                                             // 0x0448 (0x08)
    float TimeDilation;                                                                        // 0x0450 (0x04)
    float MatineeTimeDilation;                                                                 // 0x0454 (0x04)
    float DemoPlayTimeDilation;                                                                // 0x0458 (0x04)
    float MinGlobalTimeDilation;                                                               // 0x045C (0x04)
    float MaxGlobalTimeDilation;                                                               // 0x0460 (0x04)
    float MinUndilatedFrameTime;                                                               // 0x0464 (0x04)
    float MaxUndilatedFrameTime;                                                               // 0x0468 (0x04)
    BroadphaseSettings BroadphaseSettings;                                                     // 0x046C (0x40)
    PlayerState* Pauser;                                                                       // 0x04B0 (0x08)
    TArray<NetViewer> ReplicationViewers;                                                      // 0x04B8 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x04C8 (0x10)
    PlayerState* PauserPlayerState;                                                            // 0x04D8 (0x08)
    int32 MaxNumberOfBookmarks;                                                                // 0x04E0 (0x04)
    TSubclassOf<BookmarkBase> DefaultBookmarkClass;                                            // 0x04E8 (0x08)
    TArray<BookmarkBase*> BookmarkArray;                                                       // 0x04F0 (0x10)
    TSubclassOf<BookmarkBase> LastBookmarkClass;                                               // 0x0500 (0x08)

    // --- Functions ---
    void OnRep_WorldGravityZ();                                                                // [Public] RVA: 0x12B6BB4
};

// ============================================================
// Inheritance: GrassHDSettingsActor : Actor : Object
// Package: /Script/LandscapeGrassHDRuntime
// ============================================================
class GrassHDSettingsActor : public Actor {
public:
    uint8 CompressionVersion;                                                                  // 0x0318 (0x01)
    bool bEnabled;                                                                             // 0x0319 (0x01) BitMask: 0xFF
    bool bNormalFixEnabled;                                                                    // 0x031A (0x01) BitMask: 0xFF
    bool bFixNormalPlane;                                                                      // 0x031B (0x01) BitMask: 0xFF
    float ToleranceRate;                                                                       // 0x031C (0x04)
    float DepthRate;                                                                           // 0x0320 (0x04)
    float OBBGrassMinScale;                                                                    // 0x0324 (0x04)
    TArray<GrassHDCullActorEntry> CullActors;                                                  // 0x0328 (0x10)
    TArray<Actor*> RegisteredCullActors;                                                       // 0x0338 (0x10)

    // --- Functions ---
    void RefreshCullActors();                                                                  // [Final|Public] RVA: 0x653B2B8
};

// ============================================================
// Inheritance: LevelSequenceActor : Actor : Object
// Package: /Script/LevelSequence
// ============================================================
class LevelSequenceActor : public Actor {
public:
    MovieSceneSequencePlaybackSettings PlaybackSettings;                                       // 0x0328 (0x14)
    LevelSequencePlayer* SequencePlayer;                                                       // 0x0340 (0x08)
    SoftObjectPath LevelSequence;                                                              // 0x0348 (0x18)
    LevelSequenceCameraSettings CameraSettings;                                                // 0x0360 (0x02)
    LevelSequenceBurnInOptions* BurnInOptions;                                                 // 0x0368 (0x08)
    MovieSceneBindingOverrides* BindingOverrides;                                              // 0x0370 (0x08)
    bool bAutoPlay;                                                                            // 0x0378 (0x01) BitMask: 0x01
    bool bOverrideInstanceData;                                                                // 0x0378 (0x01) BitMask: 0x02
    bool bReplicatePlayback;                                                                   // 0x0378 (0x01) BitMask: 0x04
    Object* DefaultInstanceData;                                                               // 0x0380 (0x08)
    LevelSequenceBurnIn* BurnInInstance;                                                       // 0x0388 (0x08)
    bool bShowBurnin;                                                                          // 0x0390 (0x01) BitMask: 0xFF

    // --- Functions ---
    void ShowBurnin();                                                                         // [Final|Public] RVA: 0x7A50744
    void SetSequence(LevelSequence* InSequence);                                               // [Final|Public] RVA: 0x7A506A8
    void SetReplicatePlayback(bool ReplicatePlayback);                                         // [Final|Public] RVA: 0x7A505F4
    void SetBindingByTag(FName BindingTag, const TArray<Actor*> Actors, bool bAllowBindingsFromAsset);  // [Final|Public] RVA: 0x7A5034C
    void SetBinding(MovieSceneObjectBindingID Binding, const TArray<Actor*> Actors, bool bAllowBindingsFromAsset);  // [Final|Public] RVA: 0x7A501BC
    void ResetBindings();                                                                      // [Final|Public] RVA: 0x7A501A8
    void ResetBinding(MovieSceneObjectBindingID Binding);                                      // [Final|Public] RVA: 0x7A500E4
    void RemoveBindingByTag(FName Tag, Actor* Actor);                                          // [Final|Public] RVA: 0x7A4FFFC
    void RemoveBinding(MovieSceneObjectBindingID Binding, Actor* Actor);                       // [Final|Public] RVA: 0x7A4FEE8
    void OnLevelSequenceLoaded__DelegateSignature();                                           // [Public] RVA: 0x186CC1C
    LevelSequence* LoadSequence();                                                             // [Final|Public] RVA: 0x7A4FE84
    void HideBurnin();                                                                         // [Final|Public] RVA: 0x7A4FE38
    LevelSequencePlayer* GetSequencePlayer();                                                  // [Final|Public] RVA: 0x7A4FDE8
    LevelSequence* GetSequence();                                                              // [Final|Public] RVA: 0x7A4FD94
    TArray<MovieSceneObjectBindingID> FindNamedBindings(FName Tag);                            // [Final|Public] RVA: 0x7A4FBDC
    MovieSceneObjectBindingID FindNamedBinding(FName Tag);                                     // [Final|Public] RVA: 0x7A4FAF0
    void AddBindingByTag(FName BindingTag, Actor* Actor, bool bAllowBindingsFromAsset);        // [Final|Public] RVA: 0x7A4F804
    void AddBinding(MovieSceneObjectBindingID Binding, Actor* Actor, bool bAllowBindingsFromAsset);  // [Final|Public] RVA: 0x7A4F69C
};

// ============================================================
// Inheritance: MSingletonCollectionActor : Actor : Object
// Package: /Script/MFDestructionCommon
// ============================================================
class MSingletonCollectionActor : public Actor {
public:
    TSubclassOf<MFDestructibleManagerCollectionSingleton> DestructibleManagerCollectionSingleton;  // 0x0318 (0x08)
    MFDestructibleManagerCollectionSingleton* SingletonCache;                                  // 0x0320 (0x08)
};

// ============================================================
// Inheritance: MFWorldCompositionActor : Actor : Object
// Package: /Script/MFGridLevelsRuntime
// ============================================================
class MFWorldCompositionActor : public Actor {
public:
    TArray<FString> ClientLevelPathFilters;                                                    // 0x0318 (0x10)
    TArray<FString> ClientLevelPathIgnores;                                                    // 0x0328 (0x10)
    TArray<FString> ClientLevelPathIgnoresForStandardPackage;                                  // 0x0338 (0x10)
    TArray<FString> ClientLevelPathIgnoresForLowDevice;                                        // 0x0348 (0x10)
    TArray<FString> ClientLevelPathIgnoresForMediumDevice;                                     // 0x0358 (0x10)
    TArray<FString> ClientLevelPathConsider;                                                   // 0x0368 (0x10)
    TArray<FString> ServerLevelPathFilters;                                                    // 0x0378 (0x10)
    TArray<FString> ServerLevelPathIgnores;                                                    // 0x0388 (0x10)
    TArray<FString> ServerLevelPathConsider;                                                   // 0x0398 (0x10)
    bool bUseLandscapeMeshProxy;                                                               // 0x03A8 (0x01) BitMask: 0xFF
    MaterialParameterCollection* MPC_LandscapeRegion;                                          // 0x03E8 (0x08)
    bool bOverrideStreamingDistance;                                                           // 0x03F0 (0x01) BitMask: 0xFF
    float StreamingDistance;                                                                   // 0x03F4 (0x04)
    TMap<FString, float> StreamingDistanceScaleLowMemory;                                      // 0x03F8 (0x50)
    TMap<int64, MFPlayModeLevelStreamingPolicy*> PlayModeLevelStreamingPolicies;               // 0x0448 (0x50)
};

// ============================================================
// Inheritance: MFLandscapeProxyMeshConfigActor : Actor : Object
// Package: /Script/MFLandscapeProxyMesh
// ============================================================
class MFLandscapeProxyMeshConfigActor : public Actor {
public:
    uint32 LevelCountXToMerge;                                                                 // 0x0318 (0x04)
    uint32 LevelCountYToMerge;                                                                 // 0x031C (0x04)
    uint32 ExportLOD;                                                                          // 0x0320 (0x04)
    uint32 ExportTextureSize;                                                                  // 0x0324 (0x04)
    uint32 LevelCountX;                                                                        // 0x0328 (0x04)
    uint32 LevelCountY;                                                                        // 0x032C (0x04)
    uint32 MinLevelX;                                                                          // 0x0330 (0x04)
    uint32 MinLevelY;                                                                          // 0x0334 (0x04)
    Box LandscapeBounds;                                                                       // 0x0338 (0x1C)
    float Roughness;                                                                           // 0x0354 (0x04)
    float Specular;                                                                            // 0x0358 (0x04)
    uint32 MergedCountX;                                                                       // 0x035C (0x04)
    uint32 MergedCountY;                                                                       // 0x0360 (0x04)
    IntPoint MinID;                                                                            // 0x0364 (0x08)
    IntPoint MaxID;                                                                            // 0x036C (0x08)
    float SkirtZPlus;                                                                          // 0x0374 (0x04)
    float SkirtLength;                                                                         // 0x0378 (0x04)
    float WorldZOffset;                                                                        // 0x037C (0x04)
    int32 TotalVertices;                                                                       // 0x0380 (0x04)
    int32 TotalTriangles;                                                                      // 0x0384 (0x04)
    FString LandscapeProxyMeshLayerName;                                                       // 0x0388 (0x10)
    FString LandscapeLayerName;                                                                // 0x0398 (0x10)
    float StreamingDistance;                                                                   // 0x03A8 (0x04)
    uint8 TextureGroup;                                                                        // 0x03AC (0x01)
    Material* ParentMaterial;                                                                  // 0x03B0 (0x08)
    int32 LightmapResolutionPerTile;                                                           // 0x03B8 (0x04)
};

// ============================================================
// Inheritance: NPCAIPerceptionDynamicActor : Actor : Object
// Package: /Script/MFNPCAI
// ============================================================
class NPCAIPerceptionDynamicActor : public Actor {
public:
    TArray<AIBlockArea> DynamicAreaList;                                                       // 0x0318 (0x10)
    TArray<AISenseFlashBlock> SenseFlashBlockList;                                             // 0x0328 (0x10)
    TArray<AIPheromoneMarkArea> PheromoneMarkAreaList;                                         // 0x0338 (0x10)
    bool bDebugBlock;                                                                          // 0x0348 (0x01) BitMask: 0xFF
    int32 IndexOfUpdateFlashBlock;                                                             // 0x034C (0x04)
    int32 IndexOfCheckEnemyFlashBlock;                                                         // 0x0350 (0x04)
    float SevereLightBurnDistanceCoef;                                                         // 0x0354 (0x04)
    float ModerateLightBurnDistanceCoef;                                                       // 0x0358 (0x04)
    float MildLightBurnDistanceCoef;                                                           // 0x035C (0x04)
};

// ============================================================
// Inheritance: MFQuestManagerActor : Actor : Object
// Package: /Script/MFQuestSystem
// ============================================================
class MFQuestManagerActor : public Actor {
public:
    TArray<MFQuestNodeGraph*> QuestGraphList;                                                  // 0x0318 (0x10)

    // --- Functions ---
    void GetQuestNodeGraphFromPC(PlayerController* InOwnerPC, out TArray<MFQuestNodeGraph*> InGraphList);  // [Public] RVA: 0x636C4EC
    MFQuestNodeGraph* CreateNewQuestGraph(Controller* InOwnerController);                      // [Public] RVA: 0x636BC54
};

// ============================================================
// Inheritance: MFSceneryRuntimeSettingsActor : Actor : Object
// Package: /Script/MFSceneryRuntime
// ============================================================
class MFSceneryRuntimeSettingsActor : public Actor {
public:
    float LayerNum;                                                                            // 0x0318 (0x04)
    int32 FadeoutDistance;                                                                     // 0x031C (0x04)
    bool bOverrideConsoleVarInEditor;                                                          // 0x0320 (0x01) BitMask: 0xFF
    int32 MaxTessellationFactor;                                                               // 0x0324 (0x04)
    bool bUseGlobalTessFactor;                                                                 // 0x0328 (0x01) BitMask: 0xFF
    bool bUsePerLayerTessFactor;                                                               // 0x0329 (0x01) BitMask: 0xFF
    enum TessellationLayerQuality;                                                             // 0x032A (0x01)
    float GlobalTessellationFactorInner;                                                       // 0x032C (0x04)
    float GlobalTessellationFactorOuter;                                                       // 0x0330 (0x04)
    TArray<MFSceneryLayerParams> LayerParams;                                                  // 0x0338 (0x10)
    MaterialParameterCollection* IndexMapMPC;                                                  // 0x0348 (0x08)
    TextureRenderTarget2D* IndirectTexture;                                                    // 0x0350 (0x08)
    TArray<MFSceneryStreamingAsset> StreamingAssets;                                           // 0x0358 (0x10)
};

// ============================================================
// Inheritance: AbstractNavData : NavigationData : Actor : Object
// Package: /Script/NavigationSystem
// ============================================================
class AbstractNavData : public NavigationData {
public:
};

// ============================================================
// Inheritance: NavigationData : Actor : Object
// Package: /Script/NavigationSystem
// ============================================================
class NavigationData : public Actor {
public:
    PrimitiveComponent* RenderingComp;                                                         // 0x0320 (0x08)
    NavDataConfig NavDataConfig;                                                               // 0x0328 (0x78)
    bool bEnableDrawing;                                                                       // 0x03A0 (0x01) BitMask: 0x01
    bool bForceRebuildOnLoad;                                                                  // 0x03A0 (0x01) BitMask: 0x02
    bool bAutoDestroyWhenNoNavigation;                                                         // 0x03A0 (0x01) BitMask: 0x04
    bool bCanBeMainNavData;                                                                    // 0x03A0 (0x01) BitMask: 0x08
    bool bCanSpawnOnRebuild;                                                                   // 0x03A0 (0x01) BitMask: 0x10
    bool bRebuildAtRuntime;                                                                    // 0x03A0 (0x01) BitMask: 0x20
    enum RuntimeGeneration;                                                                    // 0x03A4 (0x01)
    float ObservedPathsTickInterval;                                                           // 0x03A8 (0x04)
    uint32 DataVersion;                                                                        // 0x03AC (0x04)
    TArray<SupportedAreaData> SupportedAreas;                                                  // 0x04B8 (0x10)
};

// ============================================================
// Inheritance: PooledActor : Actor : Object
// Package: /Script/OBJPool
// ============================================================
class PooledActor : public Actor {
public:
    bool Spawned;                                                                              // 0x0318 (0x01) BitMask: 0xFF
    ObjectPool* OwningPool;                                                                    // 0x0320 (0x08)
    SharedObjectPool* SharedPool;                                                              // 0x0328 (0x08)
    TimerHandle LifeSpanHandle;                                                                // 0x0330 (0x08)
    float SpawnTimeSeconds;                                                                    // 0x0338 (0x04)
    float LifeSpanPool;                                                                        // 0x033C (0x04)
    FMulticastDelegate OnPoolBeginPlay;                                                        // 0x0340 (0x10)
    FMulticastDelegate OnPoolEndPlay;                                                          // 0x0350 (0x10)

    // --- Functions ---
    void SpawnFromPool(const bool Reconstruct, const PoolSpawnOptions SpawnOptions, const Transform SpawnTransform);  // [Final|Public] RVA: 0x4B971E0
    void SetLifeSpanPool(float InLifespan);                                                    // [Public] RVA: 0x4B96F68
    void ReturnToPool();                                                                       // [Final|Public] RVA: 0x4B96F2C
    SharedObjectPool* GetSharedPool();                                                         // [Final|Public] RVA: 0x48FC958
    ObjectPool* GetOwningPool();                                                               // [Final|Public] RVA: 0x4B963FC
    float GetLifeSpanPool();                                                                   // [Public] RVA: 0x4B95984
    void EVENT_OnPoolEndPlay();                                                                // [Public] RVA: 0x12B6BB4
    void EVENT_OnPoolBeginPlay();                                                              // [Public] RVA: 0x1BF89C4
};

// ============================================================
// Inheritance: ParticleVolumeActor : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class ParticleVolumeActor : public PooledActor {
public:
    MaterialInstanceDynamic* DynamicMaterial;                                                  // 0x0360 (0x08)
    MaterialInstanceDynamic* DynamicMaterialFog;                                               // 0x0368 (0x08)
    float GridSize;                                                                            // 0x0370 (0x04)
    float MaxEffectPlayerDistance;                                                             // 0x0374 (0x04)
    float FallBackSphereSize;                                                                  // 0x0378 (0x04)
    MaterialInterface* OverrideSmokeMaterial;                                                  // 0x0380 (0x08)
    MaterialInterface* OverrideSmokeFogMaterial;                                               // 0x0388 (0x08)
    Vector StartPositionOffset;                                                                // 0x0390 (0x0C)
    enum VolumeType;                                                                           // 0x039C (0x04)
    Vector HalfExtent;                                                                         // 0x03A0 (0x0C)
    float Radius;                                                                              // 0x03AC (0x04)
    float InnerRadius;                                                                         // 0x03B0 (0x04)
    float SmokeFadeStep;                                                                       // 0x03B4 (0x04)
    float SpawnTimeOffset;                                                                     // 0x03B8 (0x04)
    float EffectTime;                                                                          // 0x03BC (0x04)
    bool bGenerateOnServer;                                                                    // 0x03C0 (0x01) BitMask: 0xFF
    float GenerateTime;                                                                        // 0x03C4 (0x04)
    Actor* OwnerProjectile;                                                                    // 0x0518 (0x08)
    VolumeTexture* ParticleMaskTexture;                                                        // 0x0638 (0x08)

    // --- Functions ---
    void Recalculate();                                                                        // [Final|Public] RVA: 0x5EB61E0
    void PlaySmokeEffectWithDelay();                                                           // [Final|Public] RVA: 0x5EB61CC
    void OnDoorStateChange(SGDoorBase* Door, enum NewState);                                   // [Final|Public] RVA: 0x5EB5B50
    void OnActorLeave(Actor* OverlappedActor, Actor* OtherActor);                              // [Final|Private] RVA: 0x1F3445C
    void OnActorEnter(Actor* OverlappedActor, Actor* OtherActor);                              // [Final|Private] RVA: 0x1936FD4
    bool IsLineTraceHit(const Vector Start, const Vector End);                                 // [Final|Public] RVA: 0x5EB59DC
    void InitializeVolume();                                                                   // [Final|Public] RVA: 0x5EB58CC
    bool HasOverlapBox(const Vector Pos, const Quat Rot, const Vector BoxHalfExtent);          // [Final|Public] RVA: 0x5EB564C
    void DynamicTextureTest(StaticMeshActor* StaticMeshActor);                                 // [Final|Public] RVA: 0x5EB4AEC
};

// ============================================================
// Inheritance: SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGAICharacter : public SGCharacter {
public:
    AIRankData RankData;                                                                       // 0x1FA8 (0x0C)
    float PatrolRadius;                                                                        // 0x1FB4 (0x04)
    float CautionRadius;                                                                       // 0x1FB8 (0x04)
    float CrossFireRadius;                                                                     // 0x1FBC (0x04)
    int32 Kill_PMCAI_Count;                                                                    // 0x1FC0 (0x04)
    int32 Kill_ScavAI_Count;                                                                   // 0x1FC4 (0x04)
    int32 Kill_PMCPlayer_Count;                                                                // 0x1FC8 (0x04)
    int32 Kill_ScavPlayer_Count;                                                               // 0x1FCC (0x04)
    int32 loot_count;                                                                          // 0x1FD0 (0x04)
    FName SpawnedGroupID;                                                                      // 0x1FD4 (0x08)
    int32 EquipmentPoolID;                                                                     // 0x1FDC (0x04)
    int64 AIID;                                                                                // 0x1FE0 (0x08)
    int32 AITeamIndex;                                                                         // 0x1FE8 (0x04)
    uint64 MasterPlayerGID;                                                                    // 0x1FF0 (0x08)
    int64 AIUID;                                                                               // 0x1FF8 (0x08)
    int64 PathGroupID;                                                                         // 0x2000 (0x08)
    int32 AILevel;                                                                             // 0x2008 (0x04)
    TArray<int32> BattleVolumesIn;                                                             // 0x2010 (0x10)
    float GrenadeThrowAngle;                                                                   // 0x2020 (0x04)
    float GrenadeInitSpeed;                                                                    // 0x2024 (0x04)
    float GrenadeFlyingTime;                                                                   // 0x2028 (0x04)
    float GrenadeHoldedTime;                                                                   // 0x202C (0x04)
    float OverrideExtraGrenadePlayEffectTime;                                                  // 0x2030 (0x04)
    NPCAINavModifierVolume* GrenadeNavModifier;                                                // 0x2038 (0x08)
    float LastBattleEnterTime;                                                                 // 0x2040 (0x04)
    FMulticastDelegate OnAICharacterReady;                                                     // 0x2048 (0x10)
    FMulticastDelegate OnAICharacterGoalEnemyDied;                                             // 0x2058 (0x10)
    FMulticastDelegate OnPathSegmentBecomeDanger;                                              // 0x2068 (0x10)
    FMulticastDelegate OnAIAimingStartOneRound;                                                // 0x2078 (0x10)
    FMulticastDelegate OnAIFireStartOneRound;                                                  // 0x2088 (0x10)
    FMulticastDelegate OnAIFireStopOneRound;                                                   // 0x2098 (0x10)
    FMulticastDelegate OnAIExitRLModeEvt;                                                      // 0x20A8 (0x10)
    FMulticastDelegate OnAIUIDChangedEvt;                                                      // 0x20B8 (0x10)
    DataTable* SoundData;                                                                      // 0x20C8 (0x08)
    bool bActive;                                                                              // 0x20D0 (0x01) BitMask: 0xFF
    bool bInDSLODControlled;                                                                   // 0x20D1 (0x01) BitMask: 0xFF
    bool IsSafeKeeper;                                                                         // 0x20D2 (0x01) BitMask: 0xFF
    float DeathNetCullDistanceSquared;                                                         // 0x20DC (0x04)
    TMap<int32, NPCAICoverEnvQueryData*> EQSDataInstances;                                     // 0x20E0 (0x50)
    bool bAIReady;                                                                             // 0x2130 (0x01) BitMask: 0xFF
    bool bCanStartAI;                                                                          // 0x2131 (0x01) BitMask: 0xFF
    FString AIName;                                                                            // 0x2138 (0x10)
    FString DirectorName;                                                                      // 0x2148 (0x10)
    FString AIAvatarUrl;                                                                       // 0x2158 (0x10)
    FString AISpawnTag;                                                                        // 0x2168 (0x10)
    int32 Handle;                                                                              // 0x217C (0x04)
    SpawnRecord MySpawnRecord;                                                                 // 0x2180 (0xE0)
    SGCharacterAIStaticsComponent* AIStaticsComponent;                                         // 0x2260 (0x08)
    TSet<ActorComponent*> TempCloseTickComps;                                                  // 0x2268 (0x50)
    bool bNeedShowTeammateInfo;                                                                // 0x22B8 (0x01) BitMask: 0xFF
    SGCharacterAIAimingComponent* AimingComponent;                                             // 0x22C0 (0x08)
    PMCAIProfileInfo AIProfileInfo;                                                            // 0x22C8 (0x78)

    // --- Functions ---
    int32 TotalKillCount();                                                                    // [Final|Public] RVA: 0x5EDADFC
    void SetIsSafeKeeper(bool InValue);                                                        // [Final|Public] RVA: 0x5EDAB14
    void SetCanStartAI();                                                                      // [Final|Public] RVA: 0x5EDAAFC
    void SetAIUID(int64 InValue);                                                              // [Final|Public] RVA: 0x5EDA9BC
    void SetAIReady(bool bReady, bool bSpawnAtUnderGround);                                    // [Final|Public] RVA: 0x5EDA8B8
    void SetAIName(FString NewName);                                                           // [Final|Public] RVA: 0x5EDA754
    void SetAIID(int64 InValue);                                                               // [Final|Public] RVA: 0x5EDA6B0
    void SetAIAvatarUrl(FString NewAvatarUrl);                                                 // [Final|Public] RVA: 0x5EDA608
    void SetAIActive(bool Active);                                                             // [Final|Public] RVA: 0x5EDA564
    bool RemoveEQSDataInstance(int32 QueryID);                                                 // [Final|Public] RVA: 0x5EDA1B8
    void OnRep_AIUIDChanged();                                                                 // [Final|Protected] RVA: 0x21840EC
    void OnRep_AIReady();                                                                      // [Final|Protected] RVA: 0x5ED9FB8
    void OnRep_AIActiveChanged();                                                              // [Final|Protected] RVA: 0xD9CF60
    void OnPostDied(Character* DeadCharacter, Controller* Killer, DamageEventObject* DamageEventObject);  // [Final|Public] RVA: 0x5ED9E78
    void OnKillOther(const KillInfo KillInfo, const KillOtherStatis KillOtherStatics);         // [Final|Public] RVA: 0x5ED9D3C
    void OnHandleAfterCharacterUpdateAvatarLayers();                                           // [Final|Protected] RVA: 0x1E12C44
    bool MarkBattleLeave(enum reason);                                                         // [Final|Public] RVA: 0x5ED9C94
    bool MarkBattleEnter();                                                                    // [Final|Public] RVA: 0x5ED9C70
    bool IsAIReady();                                                                          // [Final|Public] RVA: 0x5ED9C3C
    float GetTimeBecomeSafeKeeper();                                                           // [Final|Public] RVA: 0x5ED9B84
    Actor* GetStartSpot();                                                                     // [Final|Public] RVA: 0x5ED9B60
    Vector GetSpawnPosition();                                                                 // [Final|Public] RVA: 0x5ED9B38
    int64 GetPathGroupID();                                                                    // [Final|Public] RVA: 0x5ED9B20
    int64 GetID();                                                                             // [Final|Public] RVA: 0x5ED9AD0
    int64 GetHandle();                                                                         // [Final|Public] RVA: 0x5ED9AAC
    NPCAICoverEnvQueryData* GetEQSDataInstance(int32 QueryID);                                 // [Final|Public] RVA: 0x5ED98DC
    float GetBattleDuration();                                                                 // [Final|Public] RVA: 0x5ED98B4
    PMCAIProfileInfo GetAIProfileInfo();                                                       // [Final|Public] RVA: 0x5ED9898
    int32 GetAILevel();                                                                        // [Final|Public] RVA: 0x5ED9880
    float GetAIActivedTime();                                                                  // [Public] RVA: 0x5ED9850
    bool GetAIActive();                                                                        // [Public] RVA: 0x5ED9820
    NPCAICoverEnvQueryData* CreateEQSDataInstance(int32 QueryID);                              // [Final|Public] RVA: 0x5ED9778
    bool BackToSpawnPoint();                                                                   // [Final|Public] RVA: 0x5ED9408
};

// ============================================================
// Inheritance: SGAIController : AIController : Controller : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGAIController : public AIController {
public:
    BehaviorTree* BehaviorTreeTemplate;                                                        // 0x0430 (0x08)
    BehaviorTreeComponent* BehaviorTreeComp;                                                   // 0x0438 (0x08)
    FMulticastDelegate OnProcessPawn;                                                          // 0x0440 (0x10)
    TArray<NPCAIPropertyComponent*> AIPropComponents;                                          // 0x0450 (0x10)
    TMap<TSubclassOf<Object>, enum> AIPropClassMap;                                            // 0x0460 (0x50)
    NPCAIMemorySystemComponent* MemoryComponent;                                               // 0x04B0 (0x08)
    NPCAIMultiTargetSelectorComponent* MultiTargetComponent;                                   // 0x04B8 (0x08)
    SGCharacterAIRecoilComponent* AIRecoilComponent;                                           // 0x04C0 (0x08)
    NPCAIMoverSystemComponent* AIMoverComponent;                                               // 0x04C8 (0x08)
    SGAIGlobalManagerComponent* AIGlobalComponent;                                             // 0x04D0 (0x08)
    SGCharacterAIAimingComponent* AIAimingComponent;                                           // 0x04D8 (0x08)
    Rotator LastControlRotation;                                                               // 0x04E0 (0x0C)
    bool bControlInterpCompleted;                                                              // 0x04F8 (0x01) BitMask: 0xFF
    bool bInitAIPropClassMapCompleted;                                                         // 0x04F9 (0x01) BitMask: 0xFF
    float RotationInterval;                                                                    // 0x04FC (0x04)
    TSubclassOf<NavigationQueryFilter> DontVaultNavigationFilterClass;                         // 0x0500 (0x08)
    float RotationIntervalCache;                                                               // 0x0508 (0x04)
    bool UpdatingRotation;                                                                     // 0x050C (0x01) BitMask: 0xFF
    uint8 ZombieRotationPauseFlags;                                                            // 0x050D (0x01)
    float FocalPointPredictionTime;                                                            // 0x05C8 (0x04)
    int32 MaxLinetracePerNavQuery;                                                             // 0x05CC (0x04)

    // --- Functions ---
    void SetRotationInterval(float InRotationInterval);                                        // [Final|Public] RVA: 0x5EDF884
    void SetPauseZombieRotation(enum reason, bool bPause);                                     // [Final|Public] RVA: 0x5EDF798
    void RequestResumeBehaviorTree(enum reason, FString Message);                              // [Final|Public] RVA: 0x5EDF418
    void RequestPauseBehaviorTree(enum reason, FString Message);                               // [Final|Public] RVA: 0x5EDF310
    void OnPostDied(Character* DeadCharacter, Controller* Killer, DamageEventObject* DamageEventObject);  // [Final|Protected] RVA: 0x5EDE718
    void OnGoalEnmeyChanged(Character* FromCharacter, Actor* LastEnemy, Actor* CurrentEnemy);  // [Final|Protected] RVA: 0x5EDE5B8
    void ModifyRotation_Recoil(float DeltaTime, bool bUpdateControlRotation, const Vector FocalPoint, out Rotator ViewRotation, const Rotator BaseRotation);  // [Final|Protected] RVA: 0x5EDDF5C
    bool IsZombieRotationPaused();                                                             // [Final|Public] RVA: 0x5EDDF40
    bool IsTargetLastBeenSeen(Actor* InTarget);                                                // [Public] RVA: 0x5EDDD54
    bool IsBehaviorTreePausedByReason(enum reason);                                            // [Final|Public] RVA: 0x5EDD9F0
    bool IsBehaviorTreePaused();                                                               // [Final|Public] RVA: 0x5EDD9D4
    Actor* GetStartSpot();                                                                     // [Final|Public] RVA: 0x5EDD944
    void ForceResumeAllBehaviorTree(FString Message);                                          // [Final|Public] RVA: 0x5EDD08C
    bool FindAimPoint(const Vector DoubtPoint, const float CostLimit, bool bStanding, float IgnPointRadius, out Vector OutAimPoint, out bool OutIsPartial);  // [Final|Public] RVA: 0x5EDCDE0
};

// ============================================================
// Inheritance: SGAssembleBase : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGAssembleBase : public Actor {
public:
    TArray<WeaponAssembleEnvironmentInfo> AssembleInfoArray;                                   // 0x0320 (0x10)
    SkeletalMeshComponent* BaseSkeletalMeshComp;                                               // 0x0330 (0x08)
    StaticMeshComponent* BaseStaticMeshComp;                                                   // 0x0338 (0x08)
    SGConfigUtil* Config;                                                                      // 0x0340 (0x08)
    Box Bounds;                                                                                // 0x0348 (0x1C)
    Box BaseBounds;                                                                            // 0x0364 (0x1C)
    TMap<SGInventory*, InvBulletInfo> InvBulletInfos;                                          // 0x0380 (0x50)
    SGInventory* CachedInv;                                                                    // 0x03D0 (0x08)
    TSubclassOf<SGConfigUtil> ConfigClass;                                                     // 0x03D8 (0x08)
    uint8 ILCQ_Type;                                                                           // 0x03E0 (0x01)
    int32 LightChannel;                                                                        // 0x03E4 (0x04)
    float Margin;                                                                              // 0x03E8 (0x04)
    TMap<int32, Object*> LoadedMesh;                                                           // 0x03F0 (0x50)
    TMap<int32, TSubclassOf<Object>> LoadedAnimBPClass;                                        // 0x0440 (0x50)
    TMap<int32, int32> AdditionalCameraPosXForAdapter;                                         // 0x0490 (0x50)
    TMap<int32, int32> AdditionalCameraPosXsInCollapseForAdapter;                              // 0x04E0 (0x50)
    TMap<int32, int32> AdditionalRenderCalcZInCollapseForAdapter;                              // 0x0530 (0x50)
    bool AsStatic;                                                                             // 0x0580 (0x01) BitMask: 0xFF
    TMap<int32, AnimSequenceBase*> CollapseInvIDAnimMap;                                       // 0x05C0 (0x50)
    SGInventory* CurrentAssembleInv;                                                           // 0x0610 (0x08)
    MeshSkinMaterialInfo CachedInvSkinMatInfo;                                                 // 0x0618 (0x18)
    TMap<int32, Object*> LoadedExtraMeshs;                                                     // 0x0638 (0x50)
    Object* LoadedShelfMesh;                                                                   // 0x0690 (0x08)
    TArray<PrimitiveComponent*> CueSpawnedComponents;                                          // 0x06A0 (0x10)

    // --- Functions ---
    void SetOrnamentAnimationDriven(bool bEnable);                                             // [Final|Protected] RVA: 0x5F01AA0
    void SetForceGameMesh(bool bInForceGameMesh);                                              // [Final|Protected] RVA: 0x5F01A08
    void ResetMesh(SceneCaptureComponent2D* InSceneCaptureComponent);                          // [Final|Protected] RVA: 0x5F0196C
    int32 GetForcedLOD();                                                                      // [Final|Protected] RVA: 0x5F01888
};

// ============================================================
// Inheritance: SGBulletShellEffect_HD : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGBulletShellEffect_HD : public PooledActor {
public:
    StaticMeshComponent* MeshComponent;                                                        // 0x0360 (0x08)
    SGCustomFOVRenderMatrixComponent* CustomFovComponent;                                      // 0x0368 (0x08)
    MaterialBillboardComponent* MotionBlurComponent;                                           // 0x0370 (0x08)
    CurveFloat* MotionBlurStrengthCurve;                                                       // 0x0378 (0x08)

    // --- Functions ---
    void PoolEndPlay();                                                                        // [Final|Protected] RVA: 0x1E1B3B4
};

// ============================================================
// Inheritance: SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGCharacter : public SGCharacterBase {
public:
    WidgetComponent* LinkIndicatorComp;                                                        // 0x0750 (0x08)
    FMulticastDelegate MoveBlockedByEvent;                                                     // 0x0758 (0x10)
    FMulticastDelegate ContinuallyMoveBlockedByEvent;                                          // 0x0768 (0x10)
    FMulticastDelegate DeafEvent;                                                              // 0x0778 (0x10)
    FMulticastDelegate LackInMoistureEvent;                                                    // 0x0788 (0x10)
    FMulticastDelegate LackInFoodEvent;                                                        // 0x0798 (0x10)
    FMulticastDelegate EnduranceChangedEvent;                                                  // 0x07A8 (0x10)
    FMulticastDelegate GameplayEffectExecuted;                                                 // 0x07B8 (0x10)
    FMulticastDelegate HealthConditionChangedEvent;                                            // 0x07C8 (0x10)
    FMulticastDelegate HealthChangedEvent;                                                     // 0x07D8 (0x10)
    FMulticastDelegate EnergyChangeEvent;                                                      // 0x07E8 (0x10)
    FMulticastDelegate EnergyRecoverScaleEvent;                                                // 0x07F8 (0x10)
    FMulticastDelegate EnergyLowExhaustedChangedEvent;                                         // 0x0808 (0x10)
    FMulticastDelegate MoistureChangeEvent;                                                    // 0x0818 (0x10)
    FMulticastDelegate FoodChangeEvent;                                                        // 0x0828 (0x10)
    FMulticastDelegate HearingChangedEvent;                                                    // 0x0838 (0x10)
    FMulticastDelegate ReloadEvent;                                                            // 0x0848 (0x10)
    FMulticastDelegate OutOfEnduranceEvent;                                                    // 0x0858 (0x10)
    FMulticastDelegate DamageSpreadingRoundFinishEvent;                                        // 0x0868 (0x10)
    FMulticastDelegate RecoverFromEnduranceEvent;                                              // 0x0878 (0x10)
    FMulticastDelegate PreTakeDamageEvent;                                                     // 0x0888 (0x10)
    FMulticastDelegate TakeRealDamageEvent;                                                    // 0x0898 (0x10)
    FMulticastDelegate TakeDamageByDebuffEvent;                                                // 0x08A8 (0x10)
    FMulticastDelegate FFPTakeHitEvent;                                                        // 0x08B8 (0x10)
    FMulticastDelegate CauseDamageEvent;                                                       // 0x08F8 (0x10)
    FMulticastDelegate CauseRealDamageEvent;                                                   // 0x0908 (0x10)
    FMulticastDelegate ArmorTakeDamageEvent;                                                   // 0x0918 (0x10)
    FMulticastDelegate CauseDebuffEvent;                                                       // 0x0928 (0x10)
    FMulticastDelegate CauseArmorDurabilityReduce;                                             // 0x0938 (0x10)
    FMulticastDelegate WantToDieModifyEvent;                                                   // 0x0948 (0x10)
    FMulticastDelegate PerkAbilityRealUseEvent;                                                // 0x0958 (0x10)
    FMulticastDelegate InteractFultonEvent;                                                    // 0x0968 (0x10)
    FMulticastDelegate OnDeathAnimationEndedEvent;                                             // 0x0978 (0x10)
    FMulticastDelegate OnDoJumpFailed;                                                         // 0x0988 (0x10)
    FMulticastDelegate KillEvent;                                                              // 0x0998 (0x10)
    FMulticastDelegate LocalKillEvent;                                                         // 0x09A8 (0x10)
    FMulticastDelegate AssistKillEvent;                                                        // 0x09B8 (0x10)
    FMulticastDelegate BeKilledEvent;                                                          // 0x09C8 (0x10)
    FMulticastDelegate BeKilledEquipmentEvent;                                                 // 0x09D8 (0x10)
    FMulticastDelegate OnCustomAnimEventState;                                                 // 0x09E8 (0x10)
    FMulticastDelegate LeanRatioChangedEvent;                                                  // 0x09F8 (0x10)
    FMulticastDelegate OnWeaponFireEvent;                                                      // 0x0A08 (0x10)
    FMulticastDelegate OnWeaponHitEvent;                                                       // 0x0A18 (0x10)
    FMulticastDelegate OnCharacterHoldingWeaponExtraMeshLoadCompleted;                         // 0x0A28 (0x10)
    DamageBlackborad DamageBlackborad;                                                         // 0x0A38 (0xA8)
    FMulticastDelegate TornOffEvent;                                                           // 0x0AE0 (0x10)
    FMulticastDelegate OnCharacterEnterTearGas;                                                // 0x0AF0 (0x10)
    FMulticastDelegate OnCharacterEnterBloodRefillGas;                                         // 0x0B00 (0x10)
    FMulticastDelegate IsTouchGrassEvent;                                                      // 0x0B10 (0x10)
    FMulticastDelegate OnPickUpPullBolt;                                                       // 0x0B20 (0x10)
    FMulticastDelegate OnDoPullBoltNotify;                                                     // 0x0B30 (0x10)
    FMulticastDelegate OnOperationResultOpen;                                                  // 0x0B40 (0x10)
    FMulticastDelegate StartInteractBoxInventoryEvent;                                         // 0x0B50 (0x10)
    FMulticastDelegate FinishGameEvent;                                                        // 0x0B60 (0x10)
    FMulticastDelegate RotaterEvent;                                                           // 0x0B70 (0x10)
    FMulticastDelegate OpenContextMenuEvent;                                                   // 0x0B80 (0x10)
    FMulticastDelegate OpenContextMenuDTEvent;                                                 // 0x0B90 (0x10)
    FMulticastDelegate BoxInventoryOpenedEvent;                                                // 0x0BA0 (0x10)
    FMulticastDelegate DoorEvent;                                                              // 0x0BB0 (0x10)
    FMulticastDelegate LootContainerEvent;                                                     // 0x0BC0 (0x10)
    FMulticastDelegate LootItemEvent;                                                          // 0x0BD0 (0x10)
    FMulticastDelegate LootCorpseOrDeathBoxEvent;                                              // 0x0BE0 (0x10)
    FMulticastDelegate LootItemEventOnClient;                                                  // 0x0BF0 (0x10)
    FMulticastDelegate WalkEvent;                                                              // 0x0C00 (0x10)
    FMulticastDelegate LocationReport;                                                         // 0x0C10 (0x10)
    FMulticastDelegate StuckLocationReport;                                                    // 0x0C20 (0x10)
    Vector LastLocation;                                                                       // 0x0C30 (0x0C)
    FMulticastDelegate StartUsingRecoveryItemEvent;                                            // 0x0C78 (0x10)
    FMulticastDelegate RecoveryItemActivatedEvent;                                             // 0x0C88 (0x10)
    FMulticastDelegate ReceiveRecoveryEffectEvent;                                             // 0x0C98 (0x10)
    FMulticastDelegate UseInventoryFlashEvent;                                                 // 0x0CA8 (0x10)
    FMulticastDelegate InventoryFlashDebuffEvent;                                              // 0x0CB8 (0x10)
    FMulticastDelegate OnCurrentWeaponChange;                                                  // 0x0CC8 (0x10)
    FMulticastDelegate OnUpdateWeaponAnimationSetsEvent;                                       // 0x0CD8 (0x10)
    FMulticastDelegate UnProne;                                                                // 0x0CE8 (0x10)
    FMulticastDelegate ProneToCrouch;                                                          // 0x0CF8 (0x10)
    FMulticastDelegate CrouchToProne;                                                          // 0x0D08 (0x10)
    FMulticastDelegate StandToProne;                                                           // 0x0D18 (0x10)
    FMulticastDelegate EnterDBNOStatusEvent;                                                   // 0x0D28 (0x10)
    FMulticastDelegate ExitDBNOStatusEvent;                                                    // 0x0D38 (0x10)
    FMulticastDelegate EnterWFRStatusEvent;                                                    // 0x0D48 (0x10)
    FMulticastDelegate ExitWFRStatusEvent;                                                     // 0x0D58 (0x10)
    FMulticastDelegate RagdollStageChanged;                                                    // 0x0D68 (0x10)
    FMulticastDelegate AbortRescueTeammateEvent;                                               // 0x0D78 (0x10)
    FMulticastDelegate OnClickAtk;                                                             // 0x0D88 (0x10)
    FMulticastDelegate OnClickStopAtk;                                                         // 0x0D98 (0x10)
    FMulticastDelegate PreAddInventoryEvent;                                                   // 0x0DA8 (0x10)
    FMulticastDelegate OnPeriodicGameplayEffectExecuteEvent;                                   // 0x0DB8 (0x10)
    FMulticastDelegate OnGameplayEffectAppliedEvent;                                           // 0x0DC8 (0x10)
    FMulticastDelegate OnAnyGameplayEffectRemovedEvent;                                        // 0x0DD8 (0x10)
    FMulticastDelegate OnGameplayDebuffStatusChangedEvent;                                     // 0x0DE8 (0x10)
    FMulticastDelegate OnStartSearchingContainerEvent;                                         // 0x0DF8 (0x10)
    FMulticastDelegate OnContainerRoughSearchEndEvent;                                         // 0x0E08 (0x10)
    FMulticastDelegate OnContainerSearchEnd;                                                   // 0x0E18 (0x10)
    FMulticastDelegate OnRecvMsg;                                                              // 0x0E28 (0x10)
    FMulticastDelegate OnAvatarAddedEvent;                                                     // 0x0E38 (0x10)
    FMulticastDelegate OnNativeAvatarAddedEvent;                                               // 0x0E48 (0x10)
    FMulticastDelegate OnAvatarRemovedEvent;                                                   // 0x0E58 (0x10)
    FMulticastDelegate OnNativeAvatarRemovedEvent;                                             // 0x0E68 (0x10)
    FMulticastDelegate OnBadgeUpdateEvent;                                                     // 0x0E78 (0x10)
    FMulticastDelegate OnEnterCheckVolumeEvent;                                                // 0x0E88 (0x10)
    FMulticastDelegate OnBecomeViewTarget;                                                     // 0x0E98 (0x10)
    FMulticastDelegate OnEndViewTarget;                                                        // 0x0EA8 (0x10)
    FMulticastDelegate OnStartSpectatedByController;                                           // 0x0EB8 (0x10)
    FMulticastDelegate OnStopSpectatedByController;                                            // 0x0EC8 (0x10)
    FMulticastDelegate OnUpdateOnBackWeaponVisibility;                                         // 0x0ED8 (0x10)
    FMulticastDelegate OnGetViewedByController;                                                // 0x0EE8 (0x10)
    FMulticastDelegate OnLockInventoriesInContainer;                                           // 0x0EF8 (0x10)
    FMulticastDelegate OnUsingInventoryChanged;                                                // 0x0F08 (0x10)
    FMulticastDelegate EnterDSSendWeaponAttri;                                                 // 0x0F18 (0x10)
    FMulticastDelegate OnKillQuestProgressAdd;                                                 // 0x0F28 (0x10)
    FMulticastDelegate OnCollectQuestProgressChanged;                                          // 0x0F38 (0x10)
    FMulticastDelegate OnKillMissionProgressAdd;                                               // 0x0F48 (0x10)
    FMulticastDelegate OnCollectMissionProgressChanged;                                        // 0x0F58 (0x10)
    FMulticastDelegate ClientLocationCorrectionEvent;                                          // 0x0F68 (0x10)
    FMulticastDelegate FrameRateJitterEvent;                                                   // 0x0F78 (0x10)
    FMulticastDelegate ThermalViewHackEvent;                                                   // 0x0F88 (0x10)
    FMulticastDelegate CharacterPreAddInventoryEvent;                                          // 0x0F98 (0x10)
    FMulticastDelegate CharacterAddInventoryEvent;                                             // 0x0FA8 (0x10)
    FMulticastDelegate CharacterRemoveInventoryEvent;                                          // 0x0FC8 (0x10)
    FMulticastDelegate ActivityInventoryAddedEvent;                                            // 0x0FD8 (0x10)
    FMulticastDelegate ActivityInventoryRemovedEvent;                                          // 0x0FE8 (0x10)
    FMulticastDelegate CharacterInventoryMovedEvent;                                           // 0x0FF8 (0x10)
    FMulticastDelegate Client_InventoryGridInfoChangedEvent;                                   // 0x1008 (0x10)
    FMulticastDelegate OnCharacterSexChanged;                                                  // 0x1018 (0x10)
    FMulticastDelegate OnCharacterAvatarDataChanged;                                           // 0x1028 (0x10)
    FMulticastDelegate OnCharacterRagdollPoseFinished;                                         // 0x1038 (0x10)
    FMulticastDelegate OnCharacterMeshChanged;                                                 // 0x1048 (0x10)
    FMulticastDelegate OnCharacterAvatarMeshLoaded;                                            // 0x1058 (0x10)
    FMulticastDelegate OnCharacterAvatarMeshDressed;                                           // 0x1068 (0x10)
    FMulticastDelegate OnCharacterAvatarMeshUnDressed;                                         // 0x1078 (0x10)
    FMulticastDelegate OnCharacterAllAvatarMeshLoaded;                                         // 0x1088 (0x10)
    FMulticastDelegate OnPrimaryWeaponAllMeshLoaded;                                           // 0x1098 (0x10)
    FMulticastDelegate OnCharacterAvatarListChanged;                                           // 0x10A8 (0x10)
    FMulticastDelegate OnShowMergedAvatar;                                                     // 0x10B8 (0x10)
    FMulticastDelegate OnSetNewOwner;                                                          // 0x10C8 (0x10)
    FMulticastDelegate OnRepControllerEvent;                                                   // 0x10D8 (0x10)
    FMulticastDelegate OnSetNewPlayerState;                                                    // 0x10E8 (0x10)
    FMulticastDelegate OnChangeCustomFOV;                                                      // 0x10F8 (0x10)
    FMulticastDelegate OnEnableCustomFOV;                                                      // 0x1108 (0x10)
    FMulticastDelegate OnSprintRequest;                                                        // 0x1118 (0x10)
    FMulticastDelegate OnSprintingChanged;                                                     // 0x1128 (0x10)
    FMulticastDelegate OnCharacterScopeSceneCaptureStatusChanged;                              // 0x1138 (0x10)
    FMulticastDelegate OnCharacterZoomChanged;                                                 // 0x1148 (0x10)
    FMulticastDelegate OnCharacterSwitchScope;                                                 // 0x1158 (0x10)
    FMulticastDelegate OnCharacterSwitchZoom;                                                  // 0x1168 (0x10)
    FMulticastDelegate OnCharacterEnterSmoke;                                                  // 0x1178 (0x10)
    FMulticastDelegate OnCharacterFlashed;                                                     // 0x1188 (0x10)
    FMulticastDelegate OnCharacterStuned;                                                      // 0x1198 (0x10)
    FMulticastDelegate MedicineRoulette;                                                       // 0x11A8 (0x10)
    FMulticastDelegate OnIsBleed;                                                              // 0x11B8 (0x10)
    FMulticastDelegate OnAbilityActivated;                                                     // 0x11C8 (0x10)
    FMulticastDelegate DBNOEndReport;                                                          // 0x11D8 (0x10)
    FMulticastDelegate InventoryGiveComplete;                                                  // 0x11E8 (0x10)
    FMulticastDelegate InventoryLoadComplete;                                                  // 0x1208 (0x10)
    FMulticastDelegate DressInventoryLoadComplete;                                             // 0x1218 (0x10)
    FMulticastDelegate OnInventorySkeletalMeshLoadComplete;                                    // 0x1228 (0x10)
    FMulticastDelegate OnCharacterSkeletalMeshLoadComplete;                                    // 0x1238 (0x10)
    FMulticastDelegate OnInventoryStaticMeshLoadComplete;                                      // 0x1248 (0x10)
    FMulticastDelegate OnCharacterStaticMeshLoadComplete;                                      // 0x1258 (0x10)
    FMulticastDelegate OnBeforeCharacterUpdateAvatarLayers;                                    // 0x1268 (0x10)
    FMulticastDelegate OnAfterCharacterUpdateAvatarLayers;                                     // 0x1278 (0x10)
    FMulticastDelegate OnEnableHighPowerScope;                                                 // 0x1288 (0x10)
    FMulticastDelegate OnCharacterBecomeCorpse;                                                // 0x1298 (0x10)
    FMulticastDelegate OnCharacterLoadProtectStateChanged;                                     // 0x12A8 (0x10)
    FMulticastDelegate OnAutoAimAntiHackStatisReceived;                                        // 0x12B8 (0x10)
    FMulticastDelegate OnCarriedFaceShieldActivated;                                           // 0x12C8 (0x10)
    FMulticastDelegate OnCharacterCastShadow;                                                  // 0x12D8 (0x10)
    FMulticastDelegate OnWeaponHarmVerifyFail;                                                 // 0x12E8 (0x10)
    FMulticastDelegate OnPickUpInventory;                                                      // 0x12F8 (0x10)
    FMulticastDelegate OnActivateInteract;                                                     // 0x1308 (0x10)
    FMulticastDelegate OnSoundLevelInfluenceFactorChanged;                                     // 0x1318 (0x10)
    FMulticastDelegate OnSoundMaxDistanceInfluenceFactorChanged;                               // 0x1328 (0x10)
    FMulticastDelegate OnHearingDisadvantageReductionChanged;                                  // 0x1338 (0x10)
    FDelegate TinnitusDelegate;                                                                // 0x1348 (0x10)
    FDelegate FullBodyGestureDelegate;                                                         // 0x1358 (0x10)
    FMulticastDelegate OnDestroyActor;                                                         // 0x1368 (0x10)
    FMulticastDelegate OnCharacterPreDestroyed;                                                // 0x1378 (0x10)
    FMulticastDelegate OnCharacterDestroyed;                                                   // 0x1388 (0x10)
    FMulticastDelegate OnFSMEscapeStateChange;                                                 // 0x1398 (0x10)
    FMulticastDelegate OnWeaponListChange;                                                     // 0x13A8 (0x10)
    FMulticastDelegate OnCharacterResetToLastSavedState;                                       // 0x13B8 (0x10)
    FMulticastDelegate OnActiveLongDistanceTacticalInv;                                        // 0x13C8 (0x10)
    FMulticastDelegate OnEquipSkeletalMeshLoadCompleted;                                       // 0x13D8 (0x10)
    FMulticastDelegate OnEquipSkeletalMeshAvatarLoadCompleted;                                 // 0x13E8 (0x10)
    FMulticastDelegate OnPrePlayAdapterMontage;                                                // 0x13F8 (0x10)
    FMulticastDelegate OnInventoryEquipped;                                                    // 0x1408 (0x10)
    FMulticastDelegate OnInventoryUnequipped;                                                  // 0x1418 (0x10)
    FMulticastDelegate OnEquipStaticMeshLoadCompleted;                                         // 0x1428 (0x10)
    FMulticastDelegate OnPreUpdateAvatars;                                                     // 0x1438 (0x10)
    FMulticastDelegate OnUpdateAvatarsAddInventory;                                            // 0x1448 (0x10)
    FMulticastDelegate OnUpdateAvatarsAfterAddInventory;                                       // 0x1458 (0x10)
    FMulticastDelegate OnEquipMeshDecideLoadSkeletalMeshInLobby;                               // 0x1468 (0x10)
    FMulticastDelegate OnInvMeshDecideLoadSkeletalMeshInLobby;                                 // 0x1478 (0x10)
    FMulticastDelegate OnInvAnimInstanceLoad;                                                  // 0x1488 (0x10)
    FMulticastDelegate OnUpdateAvatarsFinish;                                                  // 0x1498 (0x10)
    FMulticastDelegate ASCRepPlayMontage;                                                      // 0x14C0 (0x10)
    FMulticastDelegate OnUpdateAvatarsAddConfData;                                             // 0x14D0 (0x10)
    FMulticastDelegate OnUpdateAvatarsAfterAddConfData;                                        // 0x14E0 (0x10)
    FMulticastDelegate AnnihilateBeginSuitSelect;                                              // 0x14F0 (0x10)
    FMulticastDelegate AnnihilateBattleResult;                                                 // 0x1500 (0x10)
    FMulticastDelegate TDMTypeGameResult;                                                      // 0x1510 (0x10)
    FMulticastDelegate OnRebornSaftyStateChanged;                                              // 0x1520 (0x10)
    FMulticastDelegate OnBulletOperation;                                                      // 0x1530 (0x10)
    FMulticastDelegate OnActorHiddenInGame;                                                    // 0x1540 (0x10)
    FMulticastDelegate OnPerkBeyondCoolDownReduce;                                             // 0x1578 (0x10)
    FMulticastDelegate OnPerkEquipped;                                                         // 0x1588 (0x10)
    FMulticastDelegate OnWalkCameraSpringIntensitySettingChanged;                              // 0x15D8 (0x10)
    FMulticastDelegate CharacterViewInventoryEndEvent;                                         // 0x1608 (0x10)
    FMulticastDelegate OnGiveCharacterDropItemsEvent;                                          // 0x1628 (0x10)
    SGCharacterTestDamageComponent* TestDamageComponent;                                       // 0x1650 (0x08)
    FName LinkHoverScoket;                                                                     // 0x1658 (0x08)
    bool bShouldDeferConstructionAIC;                                                          // 0x1660 (0x01) BitMask: 0xFF
    SGCharacterLocalDataComponent* LocalDataComponent;                                         // 0x1668 (0x08)
    CameraComponent* CharacterCameraComponent;                                                 // 0x1670 (0x08)
    ShapeComponent* SoundVolumeOverlapComponent;                                               // 0x1678 (0x08)
    CameraComponent* FPPCameraComponent;                                                       // 0x1680 (0x08)
    float SmoothTargetViewRotationSpeed;                                                       // 0x16A0 (0x04)
    SGPlayerController* CurrentViewerPC;                                                       // 0x16A8 (0x08)
    bool bIsTurning;                                                                           // 0x16B0 (0x01) BitMask: 0xFF
    bool bEnableBeAutoAimed;                                                                   // 0x16B1 (0x01) BitMask: 0xFF
    bool bEnableViewSignificance;                                                              // 0x16C9 (0x01) BitMask: 0xFF
    uint32 PlayerViewInfo;                                                                     // 0x16CC (0x04)
    float PlayerViewPitch;                                                                     // 0x16D0 (0x04)
    float PlayerViewYaw;                                                                       // 0x16D4 (0x04)
    enum PlayerTurnInfo;                                                                       // 0x16D8 (0x01)
    enum CachedCharacterType;                                                                  // 0x16D9 (0x01)
    uint64 gid;                                                                                // 0x16E0 (0x08)
    enum FactionType;                                                                          // 0x16E8 (0x01)
    enum CharacterSex;                                                                         // 0x16E9 (0x01)
    Controller* LastPossessedController;                                                       // 0x16F0 (0x08)
    bool bMeshTickThisFrame;                                                                   // 0x16F8 (0x01) BitMask: 0xFF
    ReplicationVaultInfo RepVaultInfo;                                                         // 0x1700 (0x40)
    bool bInPerkShield;                                                                        // 0x1740 (0x01) BitMask: 0xFF
    SGInventory* CurrentViewingInventory;                                                      // 0x1748 (0x08)
    bool bEnterSmoke;                                                                          // 0x1764 (0x01) BitMask: 0xFF
    int32 UROLoadBalanceBudget;                                                                // 0x1788 (0x04)
    SGCharacterMovementComponent* SGCharacterMovement;                                         // 0x1790 (0x08)
    int64 ProxyCharacterCounter;                                                               // 0x17C0 (0x08)
    FMulticastDelegate OnReadyToPlay;                                                          // 0x17D8 (0x10)
    FMulticastDelegate OnCheatStatisEvent;                                                     // 0x17E8 (0x10)
    AbilitySystemComponent* AbilitySystemComponent;                                            // 0x17F8 (0x08)
    SGContextMenu* Menu;                                                                       // 0x1800 (0x08)
    TimerHandle LocationReportHandle;                                                          // 0x1808 (0x08)
    Vector CharacterMeshLocationOffset;                                                        // 0x1818 (0x0C)
    bool bReadyToPlay;                                                                         // 0x1824 (0x01) BitMask: 0xFF
    bool bIsPresentingGift;                                                                    // 0x1825 (0x01) BitMask: 0xFF
    AnimMontage* CurrentGiftPresentMontage;                                                    // 0x1828 (0x08)
    StaticMeshComponent* GiftPresentMeshComponent;                                             // 0x1830 (0x08)
    Rotator GiftPresentMeshRelativeRotation;                                                   // 0x1838 (0x0C)
    SGInventory* PendingGiftInventory;                                                         // 0x1848 (0x08)
    SGInventory* PreviousWeaponBeforeGift;                                                     // 0x1850 (0x08)
    TSet<ActorComponent*> WaitingForInitComponents;                                            // 0x1858 (0x50)
    TSet<SGInventory*> ActiveLongDistanceTacticalInvs;                                         // 0x18A8 (0x50)
    bool bTickingOnDeath;                                                                      // 0x18F8 (0x01) BitMask: 0xFF
    Actor* LastHitByDamageCauser;                                                              // 0x1900 (0x08)
    SGLastHitByInfo LastHitByOtherInfo;                                                        // 0x1908 (0x30)
    Vector_NetQuantize Acceleration;                                                           // 0x193C (0x0C)
    Vector_NetQuantize PredictStopLocation_ACE;                                                // 0x1948 (0x0C)
    bool bIsReplayViewTarget;                                                                  // 0x1960 (0x01) BitMask: 0xFF
    bool bSimulateNavWalkSnapFloor;                                                            // 0x1961 (0x01) BitMask: 0xFF
    uint8 LaserTraceCollisionChannel;                                                          // 0x1962 (0x01)
    float CharacterSpawnTime;                                                                  // 0x1964 (0x04)
    bool bRestarting;                                                                          // 0x1968 (0x01) BitMask: 0xFF
    SGCharacterWeaponManagerComponent* WeaponManagerComponent;                                 // 0x1970 (0x08)
    SGCharacterDeathComponent* DeathComponent;                                                 // 0x1978 (0x08)
    SGCharacterBeUsedCorpseComponent* CorpseBeUsedComponent;                                   // 0x1980 (0x08)
    SGCharacterMovementAbilityComponent* MovementAbilityComponent;                             // 0x1988 (0x08)
    SGCharacterBaseTurnComponent* TurnComponent;                                               // 0x1990 (0x08)
    SGCharacterInputProcessComponent* InputProcessComponent;                                   // 0x1998 (0x08)
    SGCharacterMovementProneComponent* MovementProneComponent;                                 // 0x19A0 (0x08)
    SGCharacterMovementDBNOComponent* MovementDBNOComponent;                                   // 0x19A8 (0x08)
    SGCharacterMovementVaultComponent* MovementVaultComponent;                                 // 0x19B0 (0x08)
    SGCharacterDBNOComponent* DBNOComponent;                                                   // 0x19B8 (0x08)
    SGCharacterFallComponent* CharacterFallComponent;                                          // 0x19C0 (0x08)
    SGCharacterLeanWallComponent* LeanComponent;                                               // 0x19C8 (0x08)
    SGCharacterRagdollNewComponent* RagdollComponent;                                          // 0x19D0 (0x08)
    SGCharacterAIComponent* AIComponent;                                                       // 0x19D8 (0x08)
    SGCharacterAIPoseComponent* AIPoseComponent;                                               // 0x19E0 (0x08)
    SGCharacterWeaponSwayComponent* WeaponSwayComponent;                                       // 0x19E8 (0x08)
    SGUAMCharacterPoseCacheComponent* PoseCacheComponent;                                      // 0x19F0 (0x08)
    MFClimateMovableRainWetnessComponent* WetnessComponent;                                    // 0x19F8 (0x08)
    SGCharacterEnergyComponent* EnergyComponent;                                               // 0x1A00 (0x08)
    SGCharacterSprintComponent* SprintComponent;                                               // 0x1A08 (0x08)
    SGActorUseComponent* UseComponent;                                                         // 0x1A10 (0x08)
    SGCharacterAnimationComponent* AnimationComponent;                                         // 0x1A18 (0x08)
    SGCharacterPreviewComponent* PreviewComponent;                                             // 0x1A20 (0x08)
    SGCharacterWeaponTraceComponent* WeaponTraceComponent;                                     // 0x1A28 (0x08)
    SGCharacterCurveBreathComponent* CurveBreathComponent;                                     // 0x1A30 (0x08)
    SGCharacterTakeHitEffectComponent* TakeHitEffectComponent;                                 // 0x1A38 (0x08)
    SGCharacterTakeCoverComponent* TakeCoverComponent;                                         // 0x1A40 (0x08)
    SGCharacterMovementLadderClimbComponent* MovementLadderClimbComponent;                     // 0x1A48 (0x08)
    SGCharacterInteractionComponent* InteractionComponent;                                     // 0x1A50 (0x08)
    SGCharacterTeamRescueComponent* TeamRescueComponent;                                       // 0x1A58 (0x08)
    SGCharacterIKComponent* IKComponent;                                                       // 0x1A60 (0x08)
    SGCharacterStunGrenadeEffectComponent* StunGrenadeEffectComponent;                         // 0x1A68 (0x08)
    SGCharacterWeightComponent* WeightComponent;                                               // 0x1A70 (0x08)
    SGCharacterSenseAbilityComponent* SenseAbilityComponent;                                   // 0x1A78 (0x08)
    SGCharacterCastShadowComponent* CastShadowComp;                                            // 0x1A80 (0x08)
    SGCharacterAvatarComponent* AvatarComp;                                                    // 0x1A88 (0x08)
    SGCharacterAvatarManagerComponent* AvatarManagerComp;                                      // 0x1A90 (0x08)
    SGCharacterMeshComponent* CharacterMeshComp;                                               // 0x1A98 (0x08)
    SGCharacterAvatarMergeComponent* AvatarMergeComp;                                          // 0x1AA0 (0x08)
    SGCharacterBoneBreakComponent* CharacterBoneBreakComponent;                                // 0x1AA8 (0x08)
    SGCharacterFootEffectComponent* FootEffectComponent;                                       // 0x1AB0 (0x08)
    SGCharacterFragGrenadeEffectComponent* FragEffectComponent;                                // 0x1AB8 (0x08)
    SGCharacterDebugMovementComponent* CharacterDebugMovementComponent;                        // 0x1AC0 (0x08)
    SGCharacterWeaponManagerComponent* CharacterWeaponManagerComponent;                        // 0x1AC8 (0x08)
    SGCharacterLoadProtectComponent* CharacterLoadProtectComponent;                            // 0x1AD0 (0x08)
    SGCharacterTLogComponent* CharacterTLogComponent;                                          // 0x1AD8 (0x08)
    SGCharacterInventoryManagerComponent* CharacterInventoryManagerComponent;                  // 0x1AE0 (0x08)
    SGMotionWarpingComponent* MotionWarpingComponent;                                          // 0x1AE8 (0x08)
    SGCharacterInventoryComponent* CharacterInventoryComponent;                                // 0x1AF0 (0x08)
    SGCharacterMoveBlockedAvoidanceComponent* MoveBlockedAvoidanceComponent;                   // 0x1AF8 (0x08)
    SGCharacterSoundComponent* CharacterSoundComponent;                                        // 0x1B00 (0x08)
    SGCharacterArmorManagerComponent* CharacterArmorManagerComponent;                          // 0x1B08 (0x08)
    SGCharacterWeaponAttachComponent* CharacterWeaponAttachComponent;                          // 0x1B10 (0x08)
    SGCharacterInventoryGiveComponent* CharacterInventoryGiveComponent;                        // 0x1B18 (0x08)
    SGCharacterDeliverCargoComponent* CharacterDeliverCargoComponent;                          // 0x1B20 (0x08)
    SGCharacterTacticalPistolComponent* CharacterTacticalPistolComponent;                      // 0x1B28 (0x08)
    SGCharacterVehicleComponent* VehicleComponent;                                             // 0x1B30 (0x08)
    SGCharacterLagCompensationComponent* LagCompensationComp;                                  // 0x1B38 (0x08)
    SGCharacterEnduranceComponent* EnduranceComponent;                                         // 0x1B40 (0x08)
    SGCharacterSwimComponent* CharacterSwimComponent;                                          // 0x1B48 (0x08)
    SGCharacterHealthComponent* CharacterHealthComponent;                                      // 0x1B50 (0x08)
    SGCharacterFOVComponent* CharacterFOVComponent;                                            // 0x1B58 (0x08)
    SGCharacterTakeDamageComponent* CharacterTakeDamageComponent;                              // 0x1B60 (0x08)
    SGCharacterLookAroundComponent* CharacterLookAroundComponent;                              // 0x1B68 (0x08)
    SGCharacterPerkManagerComponent* CharacterPerkManagerComponent;                            // 0x1B70 (0x08)
    float MovingDirAngleCrossTolerance;                                                        // 0x1C30 (0x04)
    Vector ViewPointOffset;                                                                    // 0x1C34 (0x0C)
    float DesiredFOV;                                                                          // 0x1C40 (0x04)
    Vector HeadLocation;                                                                       // 0x1C44 (0x0C)
    Vector CameraLocation;                                                                     // 0x1C50 (0x0C)
    float Health;                                                                              // 0x1C5C (0x04)
    float GameDuration;                                                                        // 0x1C60 (0x04)
    int32 CurrentTotalValue;                                                                   // 0x1C64 (0x04)
    BodyBounds BodyBounds;                                                                     // 0x1C68 (0x1C)
    bool UsingHDMesh;                                                                          // 0x1CE0 (0x01) BitMask: 0xFF
    bool LocalCapture;                                                                         // 0x1CE1 (0x01) BitMask: 0xFF
    SGCharacterFastRepProxy* CharacterFastRepProxy;                                            // 0x1CF0 (0x08)
    SGCharacterProxy* CharacterProxy;                                                          // 0x1CF8 (0x08)
    FMulticastDelegate OnCharacterRepPausedStateChanged;                                       // 0x1D08 (0x10)
    SGAreaClusterSubsystem* ClusterSubsystem;                                                  // 0x1D18 (0x08)
    TArray<Actor*> CurConnRemoteCtlActors;                                                     // 0x1D70 (0x10)
    TSet<enum> DirectlyHiddenInventorySet;                                                     // 0x1D80 (0x50)
    TSet<enum> DirectlyHiddenAvatarSet;                                                        // 0x1DD0 (0x50)
    TMap<int64, FString> DirectlyHiddenMaterialSet;                                            // 0x1E20 (0x50)
    TSet<enum> DirectlyHiddenWeaponSet;                                                        // 0x1E70 (0x50)
    StaticMesh* CorpseProxyMesh;                                                               // 0x1EC0 (0x28)
    StaticMeshComponent* CorpseProxyComponent;                                                 // 0x1EF8 (0x08)
    StaticMesh* LoadedCorpseProxyMesh;                                                         // 0x1F00 (0x08)
    PhysicalAnimationComponent* PhysicalAnimationComponent;                                    // 0x1F50 (0x08)
    PhysicsControlComponent* PhysicsControlComponent;                                          // 0x1F58 (0x08)
    bool bBlendCameraBoneWhenEnableDualFov;                                                    // 0x1F60 (0x01) BitMask: 0xFF
    uint32 RandomSeed;                                                                         // 0x1F64 (0x04)
    bool bIsContinuousWeaponChange;                                                            // 0x1F70 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UpdateViewPointOffsetForReplay(Vector InOffset);                                      // [Final|Public] RVA: 0x5F12DF0
    void UpdateLinkIndicatorTarget(SGCharacter* NewTarget);                                    // [Final|Public] RVA: 0x5F12D54
    void UpdateHealthForReplay(float InHealth);                                                // [Final|Public] RVA: 0x5F12CAC
    void UpdateHeadLocationForReplay(Vector InHeadLocation);                                   // [Final|Public] RVA: 0x5F12C00
    void UpdateDesiredFOVForReplay(bool bZooming);                                             // [Final|Public] RVA: 0x5F12AC4
    void UpdateCurrentTotalValueForReplay(int32 InCurrentTotalValue);                          // [Final|Public] RVA: 0x5F12A20
    void UpdateCharactersBodyBounds(const BoxSphereBounds InBodyBounds);                       // [Final|Public] RVA: 0x5F12944
    void UpdateCameraLocationForReplay(Vector InCameraLocation);                               // [Final|Public] RVA: 0x5F12898
    void SetMeshTickThisFrame(bool InMeshTickThisFrame);                                       // [Final|Public] RVA: 0x5F12800
    void SetLastUpdateMeshRotation(Rotator InLastUpdateMeshRotation);                          // [Public] RVA: 0x5F12754
    void SetFactionType(enum NewFactionType);                                                  // [Final|Public] RVA: 0x5F12050
    void SetDressInventoryFinished(bool bFinished);                                            // [Final|Public] RVA: 0x5F11FA8
    void SetDressAvatarInvisible(bool bInvisible);                                             // [Final|Public] RVA: 0x5F11F00
    void SetCharacterSex(enum InCharacterSex);                                                 // [Final|Public] RVA: 0x5F11E68
    void SetCharacterLocationReliable(Vector position);                                        // [Public] RVA: 0x5F11DBC
    void ServerSwitchSecurityCamera(int32 IndexDelta);                                         // [Public] RVA: 0x5F11D04
    void ServerSetTurnInfo(uint8 InputPlayerTurnInfo);                                         // [Public] RVA: 0x5F11C4C
    void ServerSetPresentingGift(bool bPresenting, SGInventory* PendingGift);                  // [Public] RVA: 0x5F11B4C
    void ServerSetEnterSmokeStatus(bool bEnter);                                               // [Public] RVA: 0x5F11AAC
    void ServerPredictStopLocation(const Vector InPredictStopLocation);                        // [Public] RVA: 0x5F115E8
    void ServerNotifyInteractParamEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase, const TArray<SGInventory*> SelectInventories);  // [Public] RVA: 0x5F11410
    void ServerNotifyInteractEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase);  // [Public] RVA: 0x5F112A8
    void ServerCancelViewMonitor();                                                            // [Public] RVA: 0x5F1125C
    void ServerCancelGiftWithWeaponSwitch(int32 WeaponGroupIndex);                             // [Public] RVA: 0x5F111C0
    void ServerAcceptGift(SGCharacter* TargetGiver);                                           // [Public] RVA: 0x5F11120
    void ResetDressAvatarCounter();                                                            // [Final|Public] RVA: 0x5F11104
    void RemoveGameplayTagChangedEventByTagName(FDelegate InDelegate, FString TagName, uint8 EventType);  // [Final|Public] RVA: 0x5F10F3C
    void RemoveGameplayTagChangedEvent(FDelegate InDelegate, const GameplayTag Tag, uint8 EventType);  // [Final|Public] RVA: 0x5F10DE4
    void RegisterGameplayTagChangedEventByTagName(FDelegate InDelegate, FString TagName, uint8 EventType);  // [Final|Public] RVA: 0x1A1A44C
    void RegisterGameplayTagChangedEvent(FDelegate InDelegate, const GameplayTag Tag, uint8 EventType);  // [Final|Public] RVA: 0x5F10C8C
    void OnZoomChanged(bool bIsZooming);                                                       // [Final|Public] RVA: 0x5F10BF0
    void OnTinnitus(GameplayTag Tag, int32 Count);                                             // [Final|Protected] RVA: 0x1F2B028
    void OnSwitchWeaponCompleted(SGWeapon* Weapon, FString WeaponName, SGWeapon* OldWeapon);   // [Final|Protected] RVA: 0x5F10A98
    void OnSwitchWeapon(SGWeapon* Weapon, FString WeaponName);                                 // [Final|Protected] RVA: 0x5F10990
    void OnStopSpectatedInvoke(PlayerController* PC);                                          // [Final|Public] RVA: 0x5F10900
    void OnStartSpectatedInvoke(PlayerController* PC);                                         // [Final|Public] RVA: 0x2834DA8
    void OnSetNewOwnerInvoke(Actor* NewOwner);                                                 // [Final|Public] RVA: 0x5F10864
    void OnReplicationPausedChangedClient(SGPlayerState* SGPS, bool bIsReplicationPaused);     // [Final|Public] RVA: 0x5F10778
    void OnRep_TickingOnDeath();                                                               // [Final|Protected] RVA: 0x20280C8
    void OnRep_ReplicateionVaultInfo();                                                        // [Final|Protected] RVA: 0x1AC4E10
    void OnRep_ReadyToPlay();                                                                  // [Final|Protected] RVA: 0x1FABE9C
    void OnRep_ProxyCounter();                                                                 // [Final|Private] RVA: 0x5F10764
    void OnRep_PlayerViewInfo();                                                               // [Public] RVA: 0x1219224
    void OnRep_IsPresentingGift();                                                             // [Final|Public] RVA: 0x5F10750
    void OnRep_GID();                                                                          // [Final|Protected] RVA: 0x1FE8F50
    void OnRep_FastRepProxy();                                                                 // [Final|Protected] RVA: 0x5F1073C
    void OnRep_EnterSmoke();                                                                   // [Final|Protected] RVA: 0x2033F10
    void OnRep_CharacterSex();                                                                 // [Public] RVA: 0x1E25D78
    void OnRep_CharacterProxy();                                                               // [Final|Public] RVA: 0x2060480
    void OnRep_CharacterFactionType();                                                         // [Protected] RVA: 0x21A7780
    void OnRefreshVisibilityBasedAnimTickOption(bool bActiveLongDistanceTacticalInv);          // [Final|Public] RVA: 0x5F106A8
    void OnPeriodicGameplayEffectExecute(AbilitySystemComponent* AbilitySystemComp, const GameplayEffectSpec GameplayEffectSpec, ActiveGameplayEffectHandle ActiveGameplayEffectHandle);  // [Final|Public] RVA: 0x5F10514
    void OnOcclusionRateChanged(float Value);                                                  // [Final|Protected] RVA: 0x5F10494
    void OnGameplayEffectApplied(AbilitySystemComponent* AbilitySystemComp, const GameplayEffectSpec GameplayEffectSpec, ActiveGameplayEffectHandle ActiveGameplayEffectHandle);  // [Final|Public] RVA: 0x5F10300
    void OnGameModePlayerFinishGame(PlayerController* PlayerController, enum FinishType, Actor* EscapeVolume);  // [Final|Public] RVA: 0x5F101C0
    void OnFullBodyGestureTagChanged(GameplayTag Tag, int32 Count);                            // [Final|Protected] RVA: 0x5F100D8
    void OnCharacterEnableHighPowerScope(bool bAssembled);                                     // [Final|Public] RVA: 0x1D56244
    void OnBeginGame(PlayerController* PC);                                                    // [Final|Public] RVA: 0x5F1003C
    void OnAnyGameplayEffectRemoved(const ActiveGameplayEffect ActiveGameplayEffect);          // [Final|Public] RVA: 0x5F0FF54
    void NotifyInteractParamEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase, const TArray<SGInventory*> SelectInventories);  // [Public] RVA: 0x5F0FDB4
    void NotifyInteractEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase);  // [Public] RVA: 0x5F0FC80
    void NetMulticastUpdateReplicationInfo(const ReplicationInfo Info);                        // [Public] RVA: 0x5F0FAA4
    void MulticastStopGiftPresentMontage();                                                    // [Public] RVA: 0x5F0FA8C
    void MulticastSetCharacterLocation(Vector position);                                       // [Public] RVA: 0x5F0F9E0
    void MulticastPlayWeaponTakeUpMontage(SGInventory* Weapon);                                // [Public] RVA: 0x5F0F940
    void MulticastPlayGiftReceiveMontage(AnimMontage* Montage);                                // [Public] RVA: 0x5F0F8A0
    void MulticastPlayGiftPresentMontage(AnimMontage* Montage, StaticMesh* GiftMesh);          // [Public] RVA: 0x5F0F7B4
    void MulticastHelpMe();                                                                    // [Public] RVA: 0x5F0F79C
    void K2_OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                // [Public] RVA: 0x186CC1C
    void K2_OnStartDive(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x186CC1C
    void K2_OnStartDBNO(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x186CC1C
    void K2_OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                  // [Public] RVA: 0x186CC1C
    void K2_OnEndDive(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                   // [Public] RVA: 0x186CC1C
    void K2_OnEndDBNO(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                   // [Public] RVA: 0x186CC1C
    bool IsUsingHDMesh();                                                                      // [Final|Public] RVA: 0x5F0F784
    bool IsReadyToPlay();                                                                      // [Final|Public] RVA: 0x5F0F76C
    bool IsPresentingGift();                                                                   // [Final|Public] RVA: 0x5F0F754
    bool IsLocalCapture();                                                                     // [Final|Public] RVA: 0x5F0F73C
    bool IsDressInventoryFinished();                                                           // [Final|Public] RVA: 0x5F0F718
    bool IsDressAvatarInvisible();                                                             // [Final|Public] RVA: 0x5F0F6F4
    bool IsDressAvatarFinished();                                                              // [Final|Public] RVA: 0x5F0F6D4
    bool IsDead();                                                                             // [Final|Public] RVA: 0x5F0F6B0
    bool IsContinuousWeaponChange();                                                           // [Final|Public] RVA: 0x5F0F698
    bool IsBlendCameraBoneWhenEnableDualFov();                                                 // [Final|Public] RVA: 0x5F0F680
    SGCharacterWeightComponent* GetWeightComponent();                                          // [Final|Public] RVA: 0x5F0F65C
    SGCharacterWeaponTraceComponent* GetWeaponTraceComponent();                                // [Final|Public] RVA: 0x5F0F638
    SGCharacterWeaponSwayComponent* GetWeaponSwayComponent();                                  // [Final|Public] RVA: 0x5F0F614
    SGCharacterWeaponManagerComponent* GetWeaponManagerComponent();                            // [Final|Public] RVA: 0x5F0F5F0
    float GetWantToMoveDirAngle();                                                             // [Final|Public] RVA: 0x5F0F5C8
    SGActorUseComponent* GetUseComponent();                                                    // [Final|Public] RVA: 0x5F0F5A4
    SGCharacterTeamRescueComponent* GetTeamRescueComponent();                                  // [Final|Public] RVA: 0x5F0F580
    SGCharacterTakeHitEffectComponent* GetTakeHitEffectComponent();                            // [Final|Public] RVA: 0x5F0F55C
    SGCharacterTakeCoverComponent* GetTakeCoverComponent();                                    // [Final|Public] RVA: 0x5F0F538
    SGCharacterStunGrenadeEffectComponent* GetStunGrenadeEffectComponent();                    // [Final|Public] RVA: 0x5F0F514
    SGInventory* GetSteadyCurrentWeapon();                                                     // [Public] RVA: 0x5F0F4EC
    SGCharacterSprintComponent* GetSprintComponent();                                          // [Final|Public] RVA: 0x5F0F4C8
    SGAbilitySystemComponent* GetSGAbilitySystemComponent();                                   // [Final|Public] RVA: 0x5F0F42C
    SGCharacterSenseAbilityComponent* GetSenseAbilityComponent();                              // [Final|Public] RVA: 0x5F0F480
    SGCharacterRagdollNewComponent* GetRagdollComponent();                                     // [Final|Public] RVA: 0x5F0F408
    Rotator GetPronePlaneRot();                                                                // [Public] RVA: 0x5F0F3D0
    SGCharacterPreviewComponent* GetPreviewComponent();                                        // [Final|Public] RVA: 0x5F0F3AC
    SGUAMCharacterPoseCacheComponent* GetPoseCacheComponent();                                 // [Final|Public] RVA: 0x5F0F388
    Rotator GetPlayerViewRotation();                                                           // [Public] RVA: 0x5F0F350
    PlayerCameraManager* GetPlayerCameraManager();                                             // [Public] RVA: 0x5F0F328
    SGCharacterMovementVaultComponent* GetMovementVaultComponent();                            // [Final|Public] RVA: 0x5F0F304
    SGCharacterMovementProneComponent* GetMovementProneComponent();                            // [Final|Public] RVA: 0x5F0F2E0
    SGCharacterMovementLadderClimbComponent* GetMovementLadderClimbComponent();                // [Final|Public] RVA: 0x5F0F2BC
    SGCharacterMovementDBNOComponent* GetMovementDBNOComponent();                              // [Final|Public] RVA: 0x5F0F298
    SGCharacterMovementAbilityComponent* GetMovementAbilityComponent();                        // [Final|Public] RVA: 0x5F0F274
    SGMotionWarpingComponent* GetMotionWarpingComponent();                                     // [Final|Public] RVA: 0x5F0F250
    bool GetMeshTickThisFrame();                                                               // [Final|Public] RVA: 0x5F0F238
    float GetLeaveSmokeTime();                                                                 // [Final|Public] RVA: 0x5F0F220
    SGCharacterLeanWallComponent* GetLeanComponent();                                          // [Final|Public] RVA: 0x5F0F1FC
    Rotator GetLastUpdateMeshRotation();                                                       // [Public] RVA: 0x5F0F1C4
    Controller* GetLastPossessedController();                                                  // [Final|Public] RVA: 0x5F0F1AC
    bool GetIsEnterTearGas();                                                                  // [Final|Public] RVA: 0x5F0F194
    bool GetIsEnterBloodRefillGas();                                                           // [Final|Public] RVA: 0x5F0F17C
    SGCharacterInteractionComponent* GetInteractionComponent();                                // [Final|Public] RVA: 0x5F0F158
    SGCharacterInputProcessComponent* GetInputProcessComponent();                              // [Final|Public] RVA: 0x5F0F134
    SGCharacterIKComponent* GetIKComponent();                                                  // [Final|Public] RVA: 0x5F0F110
    enum GetFactionType();                                                                     // [Final|Public] RVA: 0x5F0F0D0
    float GetEnterSmokeTime();                                                                 // [Final|Public] RVA: 0x5F0F0B8
    SGCharacterEnergyComponent* GetEnergyComponent();                                          // [Final|Public] RVA: 0x5F0F094
    int32 GetDressAvatarFinished();                                                            // [Final|Public] RVA: 0x5F0F074
    SGCharacterDeathComponent* GetDeathComponent();                                            // [Final|Public] RVA: 0x5F0F050
    SGCharacterDBNOComponent* GetDBNOComponent();                                              // [Final|Public] RVA: 0x5F0F02C
    SGCharacterCurveBreathComponent* GetCurveBreathComponent();                                // [Final|Public] RVA: 0x5F0F008
    SGCharacterWeaponAttachComponent* GetCharacterWeaponAttachComponent();                     // [Final|Public] RVA: 0x5F0EFE4
    SGCharacterVehicleComponent* GetCharacterVehicleComponent();                               // [Final|Public] RVA: 0x5F0EFC0
    SGCharacterTLogComponent* GetCharacterTLogComponent();                                     // [Final|Public] RVA: 0x5F0EF54
    SGCharacterTakeDamageComponent* GetCharacterTakeDamageComponent();                         // [Final|Public] RVA: 0x5F0EF9C
    SGCharacterTacticalPistolComponent* GetCharacterTacticalPistolComponent();                 // [Final|Public] RVA: 0x5F0EF78
    SGCharacterSwimComponent* GetCharacterSwimComponent();                                     // [Final|Public] RVA: 0x5F0EF30
    SGCharacterSoundComponent* GetCharacterSoundComponent();                                   // [Final|Public] RVA: 0x5F0EF0C
    enum GetCharacterSex();                                                                    // [Final|Public] RVA: 0x5F0EEF4
    SGCharacterPerkManagerComponent* GetCharacterPerkManagerComponent();                       // [Final|Public] RVA: 0x5F0EED0
    SGCharacterMoveBlockedAvoidanceComponent* GetCharacterMoveBlockedAvoidanceComponent();     // [Final|Public] RVA: 0x5F0EEAC
    SGCharacterMeshComponent* GetCharacterMeshComponent();                                     // [Final|Public] RVA: 0x5F0EE88
    SGCharacterLookAroundComponent* GetCharacterLookAroundComponent();                         // [Final|Public] RVA: 0x5F0EE64
    SGCharacterLoadProtectComponent* GetCharacterLoadProtectComponent();                       // [Final|Public] RVA: 0x5F0EE40
    SGCharacterLagCompensationComponent* GetCharacterLagCompensationComp();                    // [Final|Public] RVA: 0x5F0EE1C
    SGCharacterInventoryManagerComponent* GetCharacterInventoryManagerComponent();             // [Final|Public] RVA: 0x5F0EDF8
    SGCharacterInventoryGiveComponent* GetCharacterInventoryGiveComponent();                   // [Final|Public] RVA: 0x5F0EDD4
    SGCharacterInventoryComponent* GetCharacterInventoryComponent();                           // [Final|Public] RVA: 0x5F0EDB0
    SGCharacterHealthComponent* GetCharacterHealthComponent();                                 // [Final|Public] RVA: 0x5F0ED8C
    SGCharacterFragGrenadeEffectComponent* GetCharacterFragGrenadeEffectComponent();           // [Final|Public] RVA: 0x5F0ED68
    SGCharacterFOVComponent* GetCharacterFOVComponent();                                       // [Final|Public] RVA: 0x5F0ED20
    SGCharacterFootEffectComponent* GetCharacterFootEffectComponent();                         // [Final|Public] RVA: 0x5F0ED44
    SGCharacterEnduranceComponent* GetCharacterEnduranceComponent();                           // [Final|Public] RVA: 0x5F0ECFC
    SGCharacterDeliverCargoComponent* GetCharacterDeliverCargoComponent();                     // [Final|Public] RVA: 0x5F0ECD8
    SGCharacterDebugMovementComponent* GetCharacterDebugMovementComponent();                   // [Final|Public] RVA: 0x5F0ECB4
    SGCharacterBoneBreakComponent* GetCharacterBoneBreakComponent();                           // [Final|Public] RVA: 0x5F0EC90
    SGCharacterArmorManagerComponent* GetCharacterArmorManagerComponent();                     // [Final|Public] RVA: 0x5F0EC6C
    SGCharacterCastShadowComponent* GetCastShadowComponent();                                  // [Final|Public] RVA: 0x5F0EC48
    MFClimateMovableRainWetnessComponent* GetCacheWetnessComponent();                          // [Final|Public] RVA: 0x5F0EC0C
    enum GetCachedCharacterType();                                                             // [Final|Public] RVA: 0x5F0EC30
    SGCharacterAvatarMergeComponent* GetAvatarMergeComponent();                                // [Final|Public] RVA: 0x5F0EBE8
    SGCharacterAvatarManagerComponent* GetAvatarManagerComponent();                            // [Final|Public] RVA: 0x5F0EBC4
    SGCharacterAvatarComponent* GetAvatarComponent();                                          // [Final|Public] RVA: 0x5F0EBA0
    SGCharacterAIPoseComponent* GetAIPoseComponent();                                          // [Final|Public] RVA: 0x5F0EB7C
    SGCharacterAIComponent* GetAIComponent();                                                  // [Final|Public] RVA: 0x5F0EB58
    void DisableTickOnDeath();                                                                 // [Final|Protected] RVA: 0x5F0EB30
    void DelayUpdateReplicationInfo();                                                         // [Final|Public] RVA: 0x5F0EB1C
    void ClientToastGiftAcceptFailure(FString reason);                                         // [Public] RVA: 0x5F0EA70
    void ClientReceiveForMultiNet();                                                           // [Public] RVA: 0x5F0EA58
    void ClientReceiveDoorUnlockEvent(enum DoorAction, Character* UserActor, SGDoorBase* Door);  // [Public] RVA: 0x5F0E924
    void ClientHideCharacter(bool InbHide);                                                    // [Public] RVA: 0x5F0E884
    void ClientBroadcastAchievement(int32 AchievementID, bool bSubAchievement);                // [Public] RVA: 0x5F0E798
    bool CheckIsInSmoke();                                                                     // [Final|Public] RVA: 0x5F0E6E4
    void ChangeCameraSpringIntensity(int32 Value);                                             // [Final|Public] RVA: 0x5F0E640
    void CacheComponents();                                                                    // [Public] RVA: 0x5F0E628
    void CacheCharacterType();                                                                 // [Final|Public] RVA: 0x5F0E614
    void BroadcastOnEntersTearGasGrenade(bool bEnter);                                         // [Final|Public] RVA: 0x5F0E578
    void BroadcastOnEntersSmokeGrenade(bool bEnter);                                           // [Final|Public] RVA: 0x5F0E4DC
    void BroadcastOnEntersBloodRefillGas(bool bEnter);                                         // [Final|Public] RVA: 0x5F0E440
    void AddDressAvatarCounter(bool bAdd, FString Path);                                       // [Final|Public] RVA: 0x5F0E0A4
};

// ============================================================
// Inheritance: SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGCharacterBase : public Character {
public:
    FMulticastDelegate TakeDamageEvent;                                                        // 0x05E0 (0x10)
    FMulticastDelegate PostTakeDamageEvent;                                                    // 0x05F0 (0x10)
    FMulticastDelegate PreDiedEvent;                                                           // 0x0600 (0x10)
    FMulticastDelegate PoseChangedEvent;                                                       // 0x0610 (0x10)
    FMulticastDelegate LeanTypeChangedEvent;                                                   // 0x0620 (0x10)
    FMulticastDelegate OnPossessedByController;                                                // 0x0630 (0x10)
    FMulticastDelegate OnUnPossessedByController;                                              // 0x0640 (0x10)
    FMulticastDelegate OnOwnerOrRoleChanged;                                                   // 0x0650 (0x10)
    FMulticastDelegate SwitchWeaponEvent;                                                      // 0x0660 (0x10)
    FMulticastDelegate SwitchWeaponCompletedEvent;                                             // 0x0670 (0x10)
    FMulticastDelegate OnSetCurrentWeaponEvent;                                                // 0x0680 (0x10)
    FMulticastDelegate OnSetCurrentWeaponAfterMontageEvent;                                    // 0x0690 (0x10)
    FMulticastDelegate CharacterRemoveWeaponEvent;                                             // 0x06A0 (0x10)
    FMulticastDelegate OnCharacterInvEquipPositionChangedEvent;                                // 0x06B0 (0x10)
    FMulticastDelegate OnGrenadeKillMulti;                                                     // 0x06C0 (0x10)
    FMulticastDelegate OnHarmTeammate;                                                         // 0x06D0 (0x10)
    FMulticastDelegate PostDiedEvent;                                                          // 0x06E0 (0x10)
    FMulticastDelegate OnEndVaultingEvent;                                                     // 0x06F0 (0x10)
    FMulticastDelegate LandedEvent;                                                            // 0x0718 (0x10)

    // --- Functions ---
    Rotator GetViewRotOffset();                                                                // [Public] RVA: 0x5F224D4
    SGCharacterBaseTurnComponent* GetTurnComponent();                                          // [Public] RVA: 0x5F223E8
    SGCharacterMovementComponentBase* GetSGCharacterMovement();                                // [Public] RVA: 0x5F223C0
    float GetMovingDirAngle();                                                                 // [Public] RVA: 0x5F22394
    Rotator GetMeshRotation();                                                                 // [Final|Public] RVA: 0x5F22360
    SGCharacterWeaponManagerComponent* GetCharacterWeaponManagerComponent();                   // [Public] RVA: 0x5F22290
    SGCharacterMovementVaultComponent* GetCharacterVaultComponent();                           // [Public] RVA: 0x5F22268
    SGCharacterFallComponent* GetCharacterFallComponent();                                     // [Public] RVA: 0x5F22240
    SGAnimationComponentBase* GetAnimationComponent();                                         // [Public] RVA: 0x5F22218
    float GetAccDirAngle();                                                                    // [Final|Public] RVA: 0x5F221F0
    AbilitySystemComponent* GetAbilitySystemComponent();                                       // [Public] RVA: 0x5F221C4
    void FreezeEnableWorldOriginRebaseLogic(bool bInFreezeRebaseLogic);                        // [Final|Public] RVA: 0x5F22128
    void EnableWorldOriginRebaseLogic(bool bEnable);                                           // [Final|Public] RVA: 0x5F2208C
};

// ============================================================
// Inheritance: SGCharacterCaptureActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGCharacterCaptureActor : public Actor {
public:
    TArray<SGInventoryEquipMeshComponent*> DressedEquipMeshComponents;                         // 0x0320 (0x10)
    SGInventoryEquipMeshComponent* BodyEquipMeshComponent;                                     // 0x0330 (0x08)
    TMap<SGInventoryEquipMeshComponent*, BadgeAttachInfo> BadgeAttachComponents;               // 0x0338 (0x50)
    bool bEnableCastShadow;                                                                    // 0x0388 (0x01) BitMask: 0xFF
    bool bEnableAvatarMerge;                                                                   // 0x0389 (0x01) BitMask: 0xFF
    bool bTurnOnMemoryOptimize;                                                                // 0x038A (0x01) BitMask: 0xFF
    SceneCaptureComponent2D* SceneCaptureNode;                                                 // 0x0390 (0x08)
    SkeletalMeshComponent* CharacterMeshComponent;                                             // 0x0398 (0x08)
    SceneComponent* WeaponRootComponent;                                                       // 0x03A0 (0x08)
    Vector ActorRelativeLocation;                                                              // 0x03A8 (0x0C)
    Character* OwnerCharacter;                                                                 // 0x03B8 (0x08)
    AnimMontage* HandAnimation;                                                                // 0x03C0 (0x08)
    SGInventory* CachedCurrentWeapon;                                                          // 0x03F0 (0x08)
    SGInventory* ToRemoveLastWeapon;                                                           // 0x03F8 (0x08)
    TMap<SGInventory*, MeshComponent*> WeaponMeshComponetLookupMap;                            // 0x0410 (0x50)
    TArray<CaptureActorSpecialMeshInfo> SpecialWeaponMeshInfoArray;                            // 0x0460 (0x10)
    SkeletalMeshComponent* LeftHandWeaponMeshComp;                                             // 0x0470 (0x08)
    TArray<SGInventory*> WeaponMeshLoadingList;                                                // 0x0478 (0x10)
    TMap<SGInventory*, WeaponMeshWaitToAttach> WeaponMeshWaitToAttachMap;                      // 0x0488 (0x50)
    SGInventory* CachedAdapterToDetach;                                                        // 0x04D8 (0x08)
    SGInventory* CachedAdapterToAttach;                                                        // 0x04E0 (0x08)
    TMap<SGInventory*, SceneCompArr> WeaponExtraMeshComponentLookupMap;                        // 0x04E8 (0x50)
    Rotator OriginalRotation;                                                                  // 0x0538 (0x0C)
    TArray<MeshComponent*> WeaponAttachInvMeshComponents;                                      // 0x0560 (0x10)
    TArray<enum> WeaponAttachSexTypes;                                                         // 0x0570 (0x10)
    SkeletalMeshComponent* MergedSkeletalMeshComponent;                                        // 0x0580 (0x08)
    SkeletalMeshMergeParams MeshMergeParams;                                                   // 0x0588 (0xA0)

    // --- Functions ---
    void SwitchEnableCapture(bool bEnable);                                                    // [Final|Public] RVA: 0x5F25C58
    void SetOwnerCharacter(Pawn* Character);                                                   // [Final|Public] RVA: 0x5F25CF0
    void SetCaptureCharacterSwitch(bool bSwitch);                                              // [Final|Public] RVA: 0x5F25C58
    void ResetRotation();                                                                      // [Final|Public] RVA: 0x5F25C44
    void OnWeaponEquipPositionChanged(SGInventory* Inventory, enum EquipPosition);             // [Final|Private] RVA: 0x5F25B5C
    void OnShowMergedAvatar(SkeletalMeshComponent* MergedMeshComp, bool bShow);                // [Final|Private] RVA: 0x5F25594
    void OnRemoveInventoryEvent(Character* Character, SGInventory* TargetInventory);           // [Final|Private] RVA: 0x5F25484
    void OnPlayInventoryAnimation(SGInventory* Inventory, AnimSequenceBase* Anim);             // [Final|Private] RVA: 0x5F2539C
    void OnOwnerEquipSkeletalMeshLoadCompleted(SGInventory* Inventory, SkeletalMeshComponent* SkeletalMeshComp);  // [Final|Private] RVA: 0x5F252BC
    void OnInventoryAttachPositionChanged(SGInventory* Inventory, const TArray<InventoryContainerBase> OldParentGridBaseTraceList, InventoryContainerBase NewParentContainerBase, enum OldAttachPos, enum NewAttachPos);  // [Final|Private] RVA: 0x5F24FB0
    void OnInventoryAnimPoseChanged(SGInventory* Inv, const InventoryAnimPoseInfo AnimPoseInfo);  // [Final|Private] RVA: 0x5F24EA8
    void OnFoldStock(SGInventory* StockInventory, bool bFold);                                 // [Final|Private] RVA: 0x5F24D20
    void OnCharacterSexChanged(enum CharacterSex);                                             // [Final|Private] RVA: 0x5F24C88
    void OnCharacterMeshChanged(SkeletalMesh* CharacterMesh);                                  // [Final|Private] RVA: 0x5F24B38
    void OnBagOpen();                                                                          // [Final|Private] RVA: 0x5F24B24
    void OnBagClose();                                                                         // [Final|Private] RVA: 0x5F24B10
    void OnBadgeAttachPositionChanged(SGInventory* Inv, SGInventory* AttachInv);               // [Final|Private] RVA: 0x5F24618
    void OnAvatarRemoved(SGInventory* TargetInventory);                                        // [Final|Private] RVA: 0x5F244C0
    void OnAvatarAdded(SGInventory* TargetInventory);                                          // [Final|Private] RVA: 0x5F241C4
    void OnAttachWeaponExtraMesh(SGWeapon* Weapon);                                            // [Final|Private] RVA: 0x5F24128
    void OnAfterCharacterUpdateAvatarLayers();                                                 // [Final|Private] RVA: 0x5F24114
    void MergeMesh();                                                                          // [Final|Protected] RVA: 0x5F24100
    SGInventoryEquipMeshComponent* GetWearableComponentByID(int64 ItemId);                     // [Final|Public] RVA: 0x5F23A30
    SGInventoryEquipMeshComponent* GetWearableComponent(SGInventory* Inv);                     // [Final|Public] RVA: 0x5F23654
    void DeferredCaptureCharacterUpdateLayers();                                               // [Final|Private] RVA: 0x5F23640
    void CaptureCharacterUpdateMeshLayers();                                                   // [Final|Private] RVA: 0x5F23618
    void CaptureCharacter(bool bEnableCapture);                                                // [Final|Public] RVA: 0x5F2357C
    void AdjustToBack(SGInventory* Inventory, out MeshComponent* AttachedMeshComponent, out FString AttachedSocke);  // [Final|Protected] RVA: 0x5F233FC
    void AddRotation(Rotator Rotation);                                                        // [Final|Public] RVA: 0x5F2330C
};

// ============================================================
// Inheritance: SGFaction : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGFaction : public Actor {
public:
    int32 FactionIndex;                                                                        // 0x0330 (0x04)
    enum FactionType;                                                                          // 0x0334 (0x01)
    TArray<SGTeamInfo*> TeamArray;                                                             // 0x0338 (0x10)
    TArray<FactionmemberBaseInfo> FactionmemberBaseInfoArray;                                  // 0x0348 (0x10)
    TArray<SGFactionDomainVolume*> OwnedDomainArr;                                             // 0x0358 (0x10)
    TArray<int32> PlayerStartArr;                                                              // 0x0368 (0x10)
    TArray<SGAISpawnPoint*> AISpawnPointArr;                                                   // 0x0378 (0x10)
    bool bOpenContainerLootProtectByFaction;                                                   // 0x0388 (0x01) BitMask: 0xFF

    // --- Functions ---
    void SetOpenContainerLootProtectByFaction(bool InOpenContainerLootProtectByFaction);       // [Final|Public] RVA: 0x5FE7E28
    void SetFactionType(enum CurFactionType);                                                  // [Public] RVA: 0x5FE7D8C
    bool RemoveFromFaction(SGTeamInfo* Team);                                                  // [Public] RVA: 0x5FE7CDC
    void RemoveFactionDomain(SGFactionDomainVolume* Volume);                                   // [Final|Public] RVA: 0x5FE7C38
    void RefreshDomainData();                                                                  // [Final|Public] RVA: 0x5FE7C24
    void OnRep_FactionmemberBaseInfoArray();                                                   // [Final|Public] RVA: 0x5FE7A9C
    TArray<int32> GetPlayerStartArr();                                                         // [Final|Public] RVA: 0x5FE7008
    bool GetOpenContainerLootProtectByFaction();                                               // [Final|Public] RVA: 0x5FE6FF0
    enum GetFactionType();                                                                     // [Final|Public] RVA: 0x5FE69AC
    int32 GetFactionMemberCount(out int32 ALiveNum, out int32 TotalNum);                       // [Public] RVA: 0x5FE65A8
    TArray<SGAISpawnPoint*> GetAISpawnPointArr();                                              // [Final|Public] RVA: 0x5FE5960
    bool AddToFaction(SGTeamInfo* Team);                                                       // [Public] RVA: 0x5FE576C
    void AddFactionDomain(SGFactionDomainVolume* Volume);                                      // [Final|Public] RVA: 0x5FE5678
};

// ============================================================
// Inheritance: SGGameMode : GameMode : GameModeBase : Info : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGGameMode : public GameMode {
public:
    float ExitGameDelayTime;                                                                   // 0x0400 (0x04)
    TSubclassOf<SGGameStateSoundComponent> SoundPlayerClass;                                   // 0x0408 (0x08)
    bool WaitDelayRestartPlayer;                                                               // 0x0410 (0x01) BitMask: 0xFF
    int32 MainModeIDPIE;                                                                       // 0x0414 (0x04)
    int32 SubModeIDPIE;                                                                        // 0x0418 (0x04)
    int32 DifficultyPIE;                                                                       // 0x041C (0x04)
    int32 SpecialIDPIE;                                                                        // 0x0420 (0x04)
    enum CharacterSpawnType;                                                                   // 0x0424 (0x01)
    TArray<FString> PlayersToken;                                                              // 0x0428 (0x10)
    int32 NewClientConnTime;                                                                   // 0x0438 (0x04)
    TArray<SGCharacter*> PlayerLocData;                                                        // 0x0450 (0x10)
    TArray<Controller*> DelayRestartPlayerQueue;                                               // 0x04E0 (0x10)
    TArray<uint64> PreLoginPlayers;                                                            // 0x04F0 (0x10)
    float DSMultiNetTickOccurRate;                                                             // 0x0538 (0x04)
    float DSMultiNetTickIntervalAvg;                                                           // 0x053C (0x04)
    float DSTickIntervalAvg;                                                                   // 0x0540 (0x04)
    int32 DynamicTickChangeCount;                                                              // 0x0544 (0x04)
    int32 DSMultiNetTickDisableCountByConcentration;                                           // 0x0548 (0x04)
    UAUFStruct UFPlayers;                                                                      // 0x0550 (0xB0)

    // --- Functions ---
    void OnRoundGameStart();                                                                   // [Final|Public] RVA: 0x5FF2CC0
    void OnMissionInformGameEnd(enum GameModeType, bool bRealGameEnd);                         // [Final|Public] RVA: 0x5FF29F4
    void OnGameBegin();                                                                        // [Final|Public] RVA: 0x5FF2944
    bool IsZoneSvrValid();                                                                     // [Final|Public] RVA: 0x5FF2840
    int32 GetValidPlayerNum();                                                                 // [Public] RVA: 0x5FF2804
    int32 GetTotalPlayerNumber();                                                              // [Final|Public] RVA: 0x5FF27EC
    int32 GetTotalAINumber();                                                                  // [Final|Public] RVA: 0x5FF27D4
    int32 GetSeedDSMemoryVirtual();                                                            // [Final|Public] RVA: 0x5FF279C
    int32 GetSeedDSMemoryPhysical();                                                           // [Final|Public] RVA: 0x5FF2764
    int32 GetMaxPlayerNumberSimultaneous();                                                    // [Final|Public] RVA: 0x5FF274C
    int32 GetMaxFPSExistFrames(int32 InMaxFPSIndex);                                           // [Final|Public] RVA: 0x5FF26A4
    int32 GetLuaMemoryAfterFork();                                                             // [Final|Public] RVA: 0x5FF2684
    int32 GetDSMemoryVirtualAfterFork();                                                       // [Final|Public] RVA: 0x5FF2668
    int32 GetDSMemoryPhysicalAfterFork();                                                      // [Final|Public] RVA: 0x5FF264C
    void FinishStatOnEndGame();                                                                // [Final|Public] RVA: 0x5FF25A4
    PlayerController* FindPlayerControllerByGid(const int64 InGid);                            // [Public] RVA: 0x5FF24F4
    void CleanPlayerInfoForReconnection(uint64 InGid);                                         // [Public] RVA: 0x5FF22C0
    void BroadcastReqPlayerFinishEvent(GameMode* GameMode, PlayerController* Exiting);         // [Final|Public] RVA: 0x5FF1EF4
    void BroadcastReqOBPlayerFinishEvent(GameMode* GameMode, PlayerController* Exiting);       // [Final|Public] RVA: 0x5FF1E0C
    void BroadcastPlayerStartEvent(PlayerController* Exiting);                                 // [Final|Public] RVA: 0x5FF1D28
    void BroadcastPlayerFinishEvent(PlayerController* Exiting, enum ResultType, Actor* EscapeVolume);  // [Final|Public] RVA: 0x5FF1BE8
};

// ============================================================
// Inheritance: SGGameState : GameState : GameStateBase : Info : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGGameState : public GameState {
public:
    bool bDamageHurtsHealth;                                                                   // 0x03A0 (0x01) BitMask: 0xFF
    bool bIsOpenDeathThirdPersonCamera;                                                        // 0x03A1 (0x01) BitMask: 0xFF
    float CameraTraceTime;                                                                     // 0x03A4 (0x04)
    bool bUseLootAreaTips;                                                                     // 0x03A8 (0x01) BitMask: 0xFF
    uint64 roomid;                                                                             // 0x0430 (0x08)
    float CurServerTickRate;                                                                   // 0x0438 (0x04)
    int32 FixedServerTickRate;                                                                 // 0x043C (0x04)
    uint32 Server_Season_ID;                                                                   // 0x0440 (0x04)
    TArray<MissionFlowData> DynamicMissionFlowList;                                            // 0x0448 (0x10)
    TArray<uint32> DistributedMissionFlowIDs;                                                  // 0x0458 (0x10)
    TArray<TSubclassOf<ActorComponent>> ComponentClasses;                                      // 0x0468 (0x10)
    TArray<TSubclassOf<ActorComponent>> ComponentClassesAdditional;                            // 0x0478 (0x10)
    TSubclassOf<SGGameState> TemplateClass;                                                    // 0x0488 (0x08)
    Timespan ServerRealTimeDelta;                                                              // 0x0490 (0x08)
    Timespan ServerRealTimeDeltaAdjust;                                                        // 0x0498 (0x08)
    DateTime ReplicateServerTime;                                                              // 0x04A8 (0x08)
    float ReplicateTimeCountDown;                                                              // 0x04B0 (0x04)
    TMap<uint64, enum> PlayerFinishTypeMap;                                                    // 0x04B8 (0x50)
    TMap<uint64, enum> GIDAliveStateMap;                                                       // 0x0508 (0x50)
    TArray<TSubclassOf<ActorComponent>> DebugCompInfoClasses;                                  // 0x0568 (0x10)
    enum GameSceneType;                                                                        // 0x0579 (0x01)
    SGGameStateFactionManagerComponent* FactionManagerComponent;                               // 0x0580 (0x08)
    SGGameStateStatisComponent* GameStateStatisComponent;                                      // 0x0588 (0x08)
    SGGameStateGameFlowStateComponent* GameFlowStateComponent;                                 // 0x0590 (0x08)
    bool bEnableOptimizeSyncVehiclePhysicState;                                                // 0x0598 (0x01) BitMask: 0xFF
    bool bEnableClientAdjustByDSPhysicState;                                                   // 0x0599 (0x01) BitMask: 0xFF
    bool bEnableVehicle1PAuthority;                                                            // 0x059A (0x01) BitMask: 0xFF
    bool bEnableVehiclePredictLocation;                                                        // 0x059B (0x01) BitMask: 0xFF
    bool bEnableVehiclePredictRotation;                                                        // 0x059C (0x01) BitMask: 0xFF
    float fCheckDSVehicleStabledTime;                                                          // 0x05A0 (0x04)
    int32 VehicleOptimizeLevelCfg;                                                             // 0x05A4 (0x04)
    int32 VehicleOptimizeLevel;                                                                // 0x05A8 (0x04)
    float NormalKeyDurationCost;                                                               // 0x05AC (0x04)
    int32 DSNetTickRate;                                                                       // 0x05B0 (0x04)
    bool bSupportSameCampMode;                                                                 // 0x05B4 (0x01) BitMask: 0xFF

    // --- Functions ---
    void SetSupportSameCampMode(bool bSupport);                                                // [Final|Public] RVA: 0x600A0A4
    void SetDynamicMissionFlowList(TArray<MissionFlowData> InDynamicMissionFlowList);          // [Final|Public] RVA: 0x6009FDC
    void RecordAliveStateByGID(uint64 gid, enum PlayerAliveState);                             // [Final|Public] RVA: 0x6009E88
    void OnRep_ReplicateServerTime();                                                          // [Public] RVA: 0x1C5B2B8
    void OnRep_DSNetTickRate();                                                                // [Final|Public] RVA: 0x6009E60
    void OnPreBeginGameInit();                                                                 // [Final|Public] RVA: 0x6009CD8
    void OnPlayerFinishGame(PlayerController* PlayerController, enum FinishType, Actor* EscapeVolume);  // [Final|Public] RVA: 0x6009B24
    void OnLoadCompleted_DebugCompClass(SoftObjectPath Path);                                  // [Final|Protected] RVA: 0x6009A6C
    void OnEscapeReport(int32 EscapePointID, bool IsGlobal, int32 InReportType, float InExtraData, const TArray<PlayerState*> TriggerPlayerStates, const TArray<PlayerState*> InVolumePlayerStates);  // [Public] RVA: 0x1515F3C
    void OnApplicationWillDeactive();                                                          // [Public] RVA: 0x48EC648
    void OnApplicationHasReactive();                                                           // [Public] RVA: 0x5FE06FC
    int32 GetSubModeID();                                                                      // [Final|Public] RVA: 0x28AC404
    int32 GetSpecialID();                                                                      // [Final|Public] RVA: 0x6009568
    DateTime GetServerNowTime();                                                               // [Final|Public] RVA: 0x600953C
    enum GetPlayerFinishType(uint64 gid);                                                      // [Final|Public] RVA: 0x6009494
    int32 GetPlayerCountByTeamType(enum InTeamType);                                           // [Final|Public] RVA: 0x60093EC
    int32 GetMapID();                                                                          // [Final|Public] RVA: 0x25A61E0
    int32 GetMainModeID();                                                                     // [Final|Public] RVA: 0x28AC428
    enum GetGameSceneType();                                                                   // [Final|Public] RVA: 0x60093C8
    TArray<MissionFlowData> GetDynamicMissionFlowList();                                       // [Final|Public] RVA: 0x6009360
    TArray<uint32> GetDistributedMissionFlowIDs();                                             // [Final|Public] RVA: 0x6009210
    int32 GetDifficulty();                                                                     // [Final|Public] RVA: 0x25A6250
    enum GetAliveStateByGID(uint64 gid);                                                       // [Final|Public] RVA: 0x6009150
    void ClientEscapeReport(int32 EscapePointID, bool IsGlobal, int32 InReportType, float InExtraData, const TArray<PlayerController*> TriggerPlayerControllers, const TArray<PlayerController*> InVolumePlayerControllers);  // [Final|Public] RVA: 0x6008ED8
    void AddDistributedMissionFlowID(uint32 InMissionFlowID);                                  // [Final|Public] RVA: 0x6008DA8
};

// ============================================================
// Inheritance: SGHUD : HUD : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGHUD : public HUD {
public:
    TArray<TSubclassOf<SGUserWidget>> ComponentClasses;                                        // 0x0438 (0x10)
    TArray<TSubclassOf<SGUserWidget>> LoadedComponentClasses;                                  // 0x0448 (0x10)
    TArray<TSubclassOf<SGUserWidget>> ComponentClassesDynamic;                                 // 0x0458 (0x10)
    TArray<SGSpecialWidgetConfig> ComponentClassesSpecialConfig;                               // 0x0468 (0x10)
    TArray<SGUserWidget*> Components;                                                          // 0x0478 (0x10)
    TSubclassOf<SGHUD> TemplateClass;                                                          // 0x0488 (0x08)
    TArray<SGUserWidget*> ParticularUpdateWidgets;                                             // 0x0490 (0x10)
    TMap<int32, TSubclassOf<SGUserWidget>> CreateComponentTask;                                // 0x04A0 (0x50)
    TArray<TSubclassOf<SGUserWidget>> DebugAppInfoClasses;                                     // 0x04F0 (0x10)
    TArray<TSubclassOf<SGUserWidget>> ManualLoadClasses;                                       // 0x0500 (0x10)
    TArray<PendingLoadHUDClassInfo> PendingLoadHUDClassInfoList;                               // 0x0510 (0x10)
    SGUserWidget* DebugAppInfoWidget;                                                          // 0x0520 (0x08)
    SafeZoneCache SafeZoneCache;                                                               // 0x052C (0x10)
    bool bForceEnableSafeZone;                                                                 // 0x053C (0x01) BitMask: 0xFF
    int32 CurrentCmdIndex;                                                                     // 0x0558 (0x04)
    SGHUDShakeEvents* HUDShakeEvents;                                                          // 0x0560 (0x08)

    // --- Functions ---
    void ToggleGM();                                                                           // [Protected] RVA: 0x5ED15CC
    void ShowClickableUIElements(bool bEnable);                                                // [Final|Public] RVA: 0x47F8A9C
    void SetAllWidgetVisibility(bool bVisible);                                                // [Final|Public] RVA: 0x6041010
    void PreviousDebugCmd();                                                                   // [Protected] RVA: 0x5ED14FC
    void OnShowTextDetail(const FText Text);                                                   // [Final|Private] RVA: 0x6040D1C
    void OnNewWidgetCreated(SGUserWidget* NewWidget);                                          // [Final|Public] RVA: 0x1D73BA4
    void OnMoveShowTextDetail(const FText Text, const Vector2D TextDetail);                    // [Final|Private] RVA: 0x6040614
    void OnMoveHideTextDetail(const FText Text);                                               // [Final|Private] RVA: 0x6040550
    void OnLoadCompleted_HUDClass(SoftObjectPath Path, int32 CurrentPendingID);                // [Final|Protected] RVA: 0x6040444
    void OnHideTextDetail(const FText Text);                                                   // [Final|Private] RVA: 0x6040380
    void NextDebugCmd();                                                                       // [Protected] RVA: 0x5ED1064
    void ManualLoadHUDClass();                                                                 // [Final|Public] RVA: 0x604036C
    void LoadWidgetsBySpecialID(int32 ModeId);                                                 // [Final|Public] RVA: 0x60402D4
    void InitDebugCmds();                                                                      // [Protected] RVA: 0x2A40634
    bool HasSafeZone(Canvas* InCanvas);                                                        // [Final|Protected] RVA: 0x6040120
    SGUserWidget* GetUserWidget(TSubclassOf<Object> StaticClass);                              // [Final|Public] RVA: 0x6040078
    void EnableSafeZone(Canvas* InCanvas, bool bEnable);                                       // [Final|Protected] RVA: 0x603FF64
    void EnableHandleEscape(SGUserWidget* Widget, bool bEnable);                               // [Final|Public] RVA: 0x603FE78
    void DumpHUDDetails();                                                                     // [Final|Protected] RVA: 0x20280C8
    void DrawEllipse(const Vector2D Center, const Vector2D Radius, int32 NumSides, LinearColor LineColor, float LineThickness);  // [Final|Public] RVA: 0x603FC2C
    void DestroyHUD(out FString ClassName);                                                    // [Final|Protected] RVA: 0x5FEB648
    void DestroyAllManualLoadedHUD();                                                          // [Final|Public] RVA: 0x603FC18
    void DestroyAllComponentClasses();                                                         // [Final|Protected] RVA: 0x20280C8
    void DebugWeapon(int32 DebugFlag);                                                         // [Final|Protected] RVA: 0x4F679C4
    void DebugSelfMovement(bool bDebugSelfMovement);                                           // [Final|Protected] RVA: 0x47F8A9C
    void DebugPlayerState(bool bDebugPlayerState);                                             // [Final|Protected] RVA: 0x47F8A9C
    void DebugLocation();                                                                      // [Final|Protected] RVA: 0x20280C8
    void DebugInput();                                                                         // [Final|Protected] RVA: 0x603FBDC
    void DebugDamage(bool bDebugDamage);                                                       // [Final|Protected] RVA: 0x47F8A9C
    void DebugCamera(bool bDebugCamera);                                                       // [Final|Protected] RVA: 0x47F8A9C
    void DebugBreath(bool bDebugBreath);                                                       // [Final|Protected] RVA: 0x47F8A9C
    void DebugAttributeSets_Movement(bool bDebugAttributeSets_Movement);                       // [Final|Protected] RVA: 0x47F8A9C
    void DebugAppInfo();                                                                       // [Final|Protected] RVA: 0x20280C8
    void DebugAnimationCurve(bool bDebugAnimationCurve);                                       // [Final|Protected] RVA: 0x47F8A9C
    void DebugAllMovement(bool bDebugAllMovement);                                             // [Final|Protected] RVA: 0x47F8A9C
    void CreateHUD(out FString ClassName);                                                     // [Final|Protected] RVA: 0x5FEB648
    void ClearDebugCanvas();                                                                   // [Final|Protected] RVA: 0x603FBC8
    void CallCreateComponents();                                                               // [Final|Protected] RVA: 0x20280C8
};

// ============================================================
// Inheritance: SGImpactEffect_HD : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGImpactEffect_HD : public PooledActor {
public:
    DecalComponent* DecalComponent;                                                            // 0x0360 (0x08)
    DecalComponent* AoDecalComponent;                                                          // 0x0368 (0x08)
    StaticMeshComponent* MeshComponent;                                                        // 0x0370 (0x08)

    // --- Functions ---
    void PoolEndPlay();                                                                        // [Final|Protected] RVA: 0x1D1E9E4
};

// ============================================================
// Inheritance: SGInventory : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGInventory : public Actor {
public:
    FMulticastDelegate PreGiveToEvent;                                                         // 0x0328 (0x10)
    FMulticastDelegate AddedEvent;                                                             // 0x0338 (0x10)
    FMulticastDelegate RemovedEvent;                                                           // 0x0348 (0x10)
    FMulticastDelegate DragedEvent;                                                            // 0x0358 (0x10)
    FMulticastDelegate OnRollUpStateChanged;                                                   // 0x0368 (0x10)
    FMulticastDelegate AssembledEvent;                                                         // 0x0378 (0x10)
    FMulticastDelegate OnAssembledEvent;                                                       // 0x0388 (0x10)
    FMulticastDelegate AdpaterFreshEvent;                                                      // 0x0398 (0x10)
    FMulticastDelegate DisassembledEvent;                                                      // 0x03A8 (0x10)
    FMulticastDelegate BeDisassembledEvent;                                                    // 0x03B8 (0x10)
    FMulticastDelegate AllAssembleFinishedEvent;                                               // 0x03C8 (0x10)
    FMulticastDelegate RemovedFromGridWidgetEvent;                                             // 0x03D8 (0x10)
    FMulticastDelegate ChangeAttachPosEvent;                                                   // 0x03E8 (0x10)
    FMulticastDelegate OnOwnerChangedEvent;                                                    // 0x03F8 (0x10)
    FMulticastDelegate OnSelfOwnerChangedEvent;                                                // 0x0408 (0x10)
    FMulticastDelegate ChangeParentActorEvent;                                                 // 0x0418 (0x10)
    FMulticastDelegate ClientChangeParentActorEvent;                                           // 0x0428 (0x10)
    FMulticastDelegate LockedByCharacterChangedEvent;                                          // 0x0438 (0x10)
    FMulticastDelegate OnWeaponActivedEvent;                                                   // 0x0448 (0x10)
    FMulticastDelegate OnInventoryDropped;                                                     // 0x0458 (0x10)
    FMulticastDelegate OnSwitchToSimpleMeshEvent;                                              // 0x0468 (0x10)
    FMulticastDelegate OnInventorySkeletalMeshLoadCompleted;                                   // 0x0478 (0x10)
    FMulticastDelegate OnInventoryStaticMeshLoadCompleted;                                     // 0x0488 (0x10)
    FMulticastDelegate OnInventorySimpleSkeletalMeshLoadCompleted;                             // 0x0498 (0x10)
    FMulticastDelegate OnEquipSkeletalMeshLoadCompleted;                                       // 0x04A8 (0x10)
    FMulticastDelegate OnEquipStaticMeshLoadCompleted;                                         // 0x04B8 (0x10)
    FMulticastDelegate OnCustomDepthMaterialUsageChanged;                                      // 0x04C8 (0x10)
    FMulticastDelegate OnInventoryHiddenStateChanged;                                          // 0x04D8 (0x10)
    FMulticastDelegate OnVisibilityDirectlySet;                                                // 0x04E8 (0x10)
    FMulticastDelegate OnInventoryVisibilityChanged;                                           // 0x04F8 (0x10)
    FMulticastDelegate OnInventoryAttachToBack;                                                // 0x0508 (0x10)
    FMulticastDelegate OnInventoryDressed;                                                     // 0x0518 (0x10)
    FMulticastDelegate OnInventoryUnDressed;                                                   // 0x0528 (0x10)
    FMulticastDelegate OnStartInteractBoxInventory;                                            // 0x0538 (0x10)
    FMulticastDelegate OnInventoryGridInfoChange;                                              // 0x0548 (0x10)
    FMulticastDelegate OnDetectorUpdateCoolDown;                                               // 0x0648 (0x10)
    FMulticastDelegate OnPostSetSkeletalMesh;                                                  // 0x0658 (0x10)
    FMulticastDelegate OnInventoryRebornSaftyStateChanged;                                     // 0x0668 (0x10)
    FMulticastDelegate OnSearchFinished;                                                       // 0x0678 (0x10)
    FMulticastDelegate OnInstIdReplicated;                                                     // 0x06B0 (0x10)
    SGInventoryZoneInfoComponent* ZoneInfoComponent;                                           // 0x06D8 (0x08)
    uint64 ItemId;                                                                             // 0x06E0 (0x08)
    uint32 ArmorLevel;                                                                         // 0x06E8 (0x04)
    uint32 ArmorMaterialID;                                                                    // 0x06EC (0x04)
    FString MagazineTypeName;                                                                  // 0x06F0 (0x10)
    Transform MagazineLeftHandOffset_ReloadMag;                                                // 0x0700 (0x30)
    Transform MagazineLeftHandOffset_CheckMag;                                                 // 0x0730 (0x30)
    Rotator RenderRotator;                                                                     // 0x0760 (0x0C)
    bool isRollup;                                                                             // 0x076C (0x01) BitMask: 0xFF
    FString UniqueID;                                                                          // 0x0770 (0x10)
    SGInventoryCommonDataComponent* CommonDataComponent;                                       // 0x0780 (0x08)
    enum InventoryType;                                                                        // 0x0788 (0x01)
    enum LootContainerType;                                                                    // 0x0789 (0x01)
    enum RelevantCheckType;                                                                    // 0x07B0 (0x01)
    enum PreRelevantCheckType;                                                                 // 0x07B1 (0x01)
    TArray<Actor*> RelevantForActors;                                                          // 0x07B8 (0x10)
    bool bIsInRebornSafty;                                                                     // 0x07C9 (0x01) BitMask: 0xFF
    bool bIsReceivedAsGift;                                                                    // 0x07CA (0x01) BitMask: 0xFF
    uint64 LastRefreshFrame;                                                                   // 0x07F0 (0x08)
    int32 LastInfoChangeMask;                                                                  // 0x07F8 (0x04)
    int32 RuntimeId;                                                                           // 0x0800 (0x04)
    enum EquipPosition;                                                                        // 0x0804 (0x01)
    float MinComponentTickOptDist;                                                             // 0x0808 (0x04)
    float MinComponentTickOptInterval;                                                         // 0x080C (0x04)
    float MinActorTickOptDist;                                                                 // 0x0810 (0x04)
    float MinActorTickOptInterval;                                                             // 0x0814 (0x04)
    bool bForceUseOwnerTickInterval;                                                           // 0x0818 (0x01) BitMask: 0xFF
    bool bFreezed;                                                                             // 0x081C (0x01) BitMask: 0xFF
    ManualNetRelevantFollowOnwerInfo ManualFollowOnwer;                                        // 0x0820 (0x10)
    bool bBeDormantWhenFollowOwner;                                                            // 0x0830 (0x01) BitMask: 0xFF
    SGInventoryAssembleComponent* AssembleComp;                                                // 0x0838 (0x08)
    SGInventoryEquipMeshComponent* EquipMeshComp;                                              // 0x0840 (0x08)
    SGInventoryMeshComponent* MeshComponent;                                                   // 0x0848 (0x08)
    SGInventoryCameraComponent* InventoryCameraComp;                                           // 0x0850 (0x08)
    SGInventoryModifyAttributeComponent* InventoryModifyAttributeComp;                         // 0x0858 (0x08)
    SGWeaponMovementComponent* WeaponMovementComponent;                                        // 0x0860 (0x08)
    SGInventoryTypeComponent_Avatar* InventoryTypeComponent_Avatar;                            // 0x0868 (0x08)
    SGInventoryTypeComponent_Armor* InventoryTypeComponent_Armor;                              // 0x0870 (0x08)
    SGInventoryTypeComponent_Badge* InventoryTypeComponent_Badge;                              // 0x0878 (0x08)
    SGInventoryAbilityComponent* InventoryAbilityComponent;                                    // 0x0880 (0x08)
    SGInventoryZoomComponent* InventoryZoomComponent;                                          // 0x0888 (0x08)
    SGInventorySoundDiffuseComponent* SoundDiffuseComponent;                                   // 0x0890 (0x08)
    SGInventoryGridComponent* CacheInventoryGridComponent;                                     // 0x0898 (0x08)
    SGInventoryArmorComponent* InventoryArmorComponent;                                        // 0x08A0 (0x08)
    SGWidgetToRenderTargetComponent* WidgetToRenderTargetComponent;                            // 0x08A8 (0x08)
    bool bIsPaint;                                                                             // 0x08B0 (0x01) BitMask: 0xFF
    int32 PaintTextureId;                                                                      // 0x08B4 (0x04)
    Texture* PaintTexturePtr;                                                                  // 0x08B8 (0x28)
    enum BindShortcutPos;                                                                      // 0x08E0 (0x01)
    int32 ModifiedContainerIndex;                                                              // 0x08E4 (0x04)

    // --- Functions ---
    bool SkipTickOptimize();                                                                   // [Protected] RVA: 0x604CF28
    bool ShouldDisplayHitEffect(int32 AttemptedDamage, int32 DamageAmount, int32 FinalHealth, int32 FinalArmor);  // [Public] RVA: 0x604CD98
    void SetWeaponStainSkinID(int64 InWeaponStainSkinID);                                      // [Final|Public] RVA: 0x604CCFC
    void SetShowInvID(bool bShow);                                                             // [Final|Public] RVA: 0x604CB7C
    void SetRefreshFrameToClient(enum InfoChangeType);                                         // [Public] RVA: 0x604C9A0
    void SetRefreshFrame(enum InfoChangeType);                                                 // [Final|Public] RVA: 0x604C908
    void SetRebornSaftyState(bool IsInRebornSafty);                                            // [Final|Public] RVA: 0x604C86C
    void SetIsReceivedAsGift(bool bNewValue);                                                  // [Final|Public] RVA: 0x604C73C
    void SetIsForbbidenDiscardByCharacter(bool NewSetValue);                                   // [Final|Public] RVA: 0x604C6A4
    void SetInventoryPaint(bool bUsePaint, int32 TextureId);                                   // [Final|Public] RVA: 0x604C5AC
    void SetFreezed(bool bInFreezed);                                                          // [Final|Public] RVA: 0x604C480
    void SetBindShortcutPos(enum Pos);                                                         // [Final|Public] RVA: 0x604C268
    bool RemovePlayerFromBlacklist(int64 PlayerGid);                                           // [Public] RVA: 0x604C068
    void ReceiveChangeAttachPositionEvent(Character* OwnerCharacter, enum NewPosition);        // [Public] RVA: 0x186CC1C
    void ProcessInventoryPaint();                                                              // [Final|Public] RVA: 0x604BF1C
    void OnRep_RuntimeID();                                                                    // [Final|Public] RVA: 0x1DD2440
    void OnRep_Repaint();                                                                      // [Final|Public] RVA: 0x604BF08
    void OnRep_IsReceivedAsGift();                                                             // [Final|Public] RVA: 0x20280C8
    void OnRep_IsInRebornSafty();                                                              // [Final|Public] RVA: 0x604BEF4
    void OnPreGiveTo(Pawn* Target, enum SourceType, enum Pos, ItemGridInfo DropPosition, Actor* InParentActor, SGInventory* Inventory);  // [Final|Protected] RVA: 0x604BCF0
    void OnInventoryRemoved(Character* OwnerCharacter);                                        // [Final|Protected] RVA: 0x1D73FC8
    void OnInventoryAttachPositionChanged(SGInventory* Inventory, Character* OwnerCharacter, enum NewAttachPosition);  // [Protected] RVA: 0x1C70140
    void OnInventoryAdded(Character* OwnerCharacter);                                          // [Final|Protected] RVA: 0x1D73FC8
    int64 K2_GetItemID();                                                                      // [Final|Public] RVA: 0x604BAA4
    bool IsReceivedAsGift();                                                                   // [Final|Public] RVA: 0x604BA8C
    bool IsPlayerInBlacklist(int64 PlayerGid);                                                 // [Public] RVA: 0x604B9DC
    bool IsFreezed();                                                                          // [Final|Public] RVA: 0x604B9C4
    bool IsActorInBlacklist(Actor* Actor);                                                     // [Public] RVA: 0x604B5B4
    SGWidgetToRenderTargetComponent* GetWidgetToRenderTargetComponent();                       // [Final|Public] RVA: 0x604B590
    int64 GetWeaponStainSkinID();                                                              // [Final|Public] RVA: 0x604B578
    uint64 GetRefreshFrameInfoChangeMask(uint64 LastCheckRefreshFrame);                        // [Final|Public] RVA: 0x604B448
    float GetMoistureCostRatio();                                                              // [Final|Public] RVA: 0x604B420
    bool GetIsForbbidenDiscardByCharacter();                                                   // [Final|Public] RVA: 0x604B394
    FString GetInvName();                                                                      // [Final|Public] RVA: 0x604AE44
    SGInventoryZoomComponent* GetInventoryZoomComponent();                                     // [Final|Public] RVA: 0x604B370
    SGInventoryTypeComponent_Badge* GetInventoryTypeComponent_Badge();                         // [Final|Public] RVA: 0x604B34C
    SGInventoryTypeComponent_Avatar* GetInventoryTypeComponent_Avatar(bool bForceGet);         // [Final|Public] RVA: 0x604B2A0
    SGInventoryTypeComponent_Armor* GetInventoryTypeComponent_Armor(bool bForceGet);           // [Final|Public] RVA: 0x604B1F4
    SGInventorySoundDiffuseComponent* GetInventorySoundDiffuseComponent();                     // [Final|Public] RVA: 0x604B1D0
    FString GetInventoryShortName();                                                           // [Final|Public] RVA: 0x1F40904
    FString GetInventoryName();                                                                // [Final|Public] RVA: 0x604B0E4
    SGInventoryModifyAttributeComponent* GetInventoryModifyAttributeComp();                    // [Final|Public] RVA: 0x604B0C0
    SGInventoryMeshComponent* GetInventoryMeshComponent();                                     // [Final|Public] RVA: 0x604B09C
    SGInventoryGridComponent* GetInventoryGridComp();                                          // [Final|Public] RVA: 0x604B078
    SGInventoryEquipMeshComponent* GetInventoryEquipMeshComponent();                           // [Final|Public] RVA: 0x604B054
    SGInventoryCommonDataComponent* GetInventoryCommonDataComponent();                         // [Final|Public] RVA: 0x604B030
    SGInventoryCameraComponent* GetInventoryCameraComp();                                      // [Final|Public] RVA: 0x604B00C
    SGInventoryAssembleComponent* GetInventoryAssembleComp();                                  // [Final|Public] RVA: 0x604AFE8
    SGInventoryAbilityComponent* GetInventoryAbilityComponent();                               // [Final|Public] RVA: 0x604AFC4
    float GetFoodCostRatio();                                                                  // [Final|Public] RVA: 0x604ADCC
    Character* GetCharacterOwner();                                                            // [Final|Public] RVA: 0x604ACEC
    enum GetBindShortcutPos();                                                                 // [Final|Public] RVA: 0x604ACD4
    void DestroySelf();                                                                        // [Final|Public] RVA: 0x604ABD4
    void DelayDestroySelf();                                                                   // [Final|Public] RVA: 0x604ABC0
    void ClearPlayerBlacklist();                                                               // [Public] RVA: 0x5ECFBF4
    void CacheComponents();                                                                    // [Public] RVA: 0x4856FC4
    void BP_SetBagOpenState(Controller* Controller, bool State);                               // [Public] RVA: 0x186CC1C
    bool AddPlayerToBlacklist(int64 PlayerGid);                                                // [Public] RVA: 0x604AA28
    bool AddCharacterToBlacklist(Character* Character);                                        // [Public] RVA: 0x5F27EC0
};

// ============================================================
// Inheritance: SGPlayerCameraManager : PlayerCameraManager : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGPlayerCameraManager : public PlayerCameraManager {
public:
    TArray<TSubclassOf<ActorComponent>> ComponentClasses;                                      // 0x3110 (0x10)
    TArray<TSubclassOf<ActorComponent>> ComponentClassesAdditional;                            // 0x3120 (0x10)
    TSubclassOf<SGPlayerCameraManager> TemplateClass;                                          // 0x3130 (0x08)
    SGPCMCameraMaterialComponent* CachedMaterialComponent;                                     // 0x3138 (0x08)
    SGPCMDepthOfFieldComponent* CachedCameraDOFComponent;                                      // 0x3140 (0x08)
    bool bEnableModifyRotationByMotionSensor;                                                  // 0x3148 (0x01) BitMask: 0xFF
    bool bEnableModifyRotationByWeaponRecoil;                                                  // 0x3149 (0x01) BitMask: 0xFF
    bool bEnableModifyRotationByAutoAiming;                                                    // 0x314A (0x01) BitMask: 0xFF
    bool bEnableModifyRotationByForceLookingAt;                                                // 0x314B (0x01) BitMask: 0xFF
    Rotator ThisFrameBeforeCameraShakeRotator;                                                 // 0x314C (0x0C)
    SGPCMCameraFOVComponent* PCMFOVComponent;                                                  // 0x3180 (0x08)
    SGPCMCameraShakeComponent* CameraShakeComponent;                                           // 0x3188 (0x08)

    // --- Functions ---
    void UpdatePostProcessComponentWeight(float Weight);                                       // [Public] RVA: 0x186CC1C
    void OnDetectInRoomEvent(bool bNotifyInRoom);                                              // [Final|Public] RVA: 0x60D6500
};

// ============================================================
// Inheritance: SGPlayerController : PlayerController : Controller : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGPlayerController : public PlayerController {
public:
    bool bDebugShowDamageInformation;                                                          // 0x0688 (0x01) BitMask: 0xFF
    FString PadVisibilityRowName;                                                              // 0x0690 (0x10)
    TSubclassOf<SGCharacterCaptureActor> CharacterCaptureActorClass;                           // 0x06A0 (0x08)
    bool bEnableCharacterCapture;                                                              // 0x06A8 (0x01) BitMask: 0xFF
    TSubclassOf<Actor> SettingPostProcessPreviewActorClass;                                    // 0x06B0 (0x08)
    SoundIndicator* SoundIndicator;                                                            // 0x06B8 (0x08)
    TSubclassOf<SoundIndicator> SoundIndicatorClass;                                           // 0x06C0 (0x08)
    TSubclassOf<SGPlayerInput> PlayerInputClass;                                               // 0x06C8 (0x28)
    SGPlayerInput* SGPlayerInput;                                                              // 0x0700 (0x08)
    Vector2D LastTouchLocation;                                                                // 0x0708 (0x08)
    FMulticastDelegate PawnPendingDestroyEvent;                                                // 0x0710 (0x10)
    FMulticastDelegate OnProcessPawn;                                                          // 0x0720 (0x10)
    FMulticastDelegate OnUnPossessPawn;                                                        // 0x0730 (0x10)
    FMulticastDelegate OnEscaped;                                                              // 0x0740 (0x10)
    FMulticastDelegate OnViewTargetChanged;                                                    // 0x0750 (0x10)
    FMulticastDelegate OnPlayerZoomChanged;                                                    // 0x0760 (0x10)
    FMulticastDelegate OnCheckFireDown;                                                        // 0x0770 (0x10)
    FMulticastDelegate OnOperated;                                                             // 0x0780 (0x10)
    FMulticastDelegate OnSetSpectatorPawnEvent;                                                // 0x0790 (0x10)
    PlayerStart* PlayerStart;                                                                  // 0x07B0 (0x08)
    TArray<TSubclassOf<ActorComponent>> DebugCompInfoClasses;                                  // 0x07B8 (0x10)
    FMulticastDelegate OnAutoMoveFin;                                                          // 0x07C8 (0x10)
    FMulticastDelegate OnAutoMoveDir;                                                          // 0x07D8 (0x10)
    FMulticastDelegate OnArrivedAtLocationDelegate;                                            // 0x07E8 (0x10)
    bool bAllowStrafe;                                                                         // 0x07F8 (0x01) BitMask: 0x01
    TSubclassOf<NavigationQueryFilter> DefaultNavigationFilterClass;                           // 0x0800 (0x08)
    PathFollowingComponent* PathFollowingComponent;                                            // 0x0828 (0x08)
    bool bAllowInMemoryReplay;                                                                 // 0x0830 (0x01) BitMask: 0xFF
    SGCharacterCaptureActor* CharacterCaptureActor;                                            // 0x0838 (0x08)
    Actor* SettingPostProcessPreviewActor;                                                     // 0x0840 (0x08)
    SGPCUIModeComponent* UIModeComponent;                                                      // 0x0848 (0x08)
    SGPCSpectatingComponent* SpectatingComponent;                                              // 0x0850 (0x08)
    SGPCFPPModeComponent* FPPModeComponent;                                                    // 0x0858 (0x08)
    SGPCFlowControlComponent* PCFlowControllerComponent;                                       // 0x0860 (0x08)
    SGPCStatisComponent* PCStatisComponent;                                                    // 0x0868 (0x08)
    SGPlayerState3PRelevancyComponent* SG3PRelevancyComponent;                                 // 0x0870 (0x08)
    bool bMoveTimeDiffEnable;                                                                  // 0x0882 (0x01) BitMask: 0xFF
    int32 TimeOutValue;                                                                        // 0x0884 (0x04)
    DSSwitchConfig DSSwitchConfig;                                                             // 0x0888 (0x0C)
    int32 NewTraceInfoIndex;                                                                   // 0x0894 (0x04)
    bool IsReconnectPlayer;                                                                    // 0x089C (0x01) BitMask: 0xFF
    int32 EndGameType;                                                                         // 0x08A8 (0x04)
    bool HasBeginGame;                                                                         // 0x08AC (0x01) BitMask: 0xFF
    enum FinishType;                                                                           // 0x08AD (0x01)
    int32 nGetAttachLoopMaxNum;                                                                // 0x08B0 (0x04)
    int32 InputFlowDataSplitSize;                                                              // 0x08BC (0x04)
    SGCharacter* ControlledCharacter;                                                          // 0x0910 (0x08)
    NetConnection* CachedReachableConnection;                                                  // 0x0918 (0x08)
    float ForgiveJudgeTime;                                                                    // 0x0920 (0x04)
    TArray<SGCharacter*> HitSelfTeammates;                                                     // 0x0928 (0x10)
    bool bShowStrongTrajectory;                                                                // 0x0938 (0x01) BitMask: 0xFF
    float OBTrajectoryDistance;                                                                // 0x093C (0x04)
    TSubclassOf<ActorComponent> AIDebugComponentClass;                                         // 0x0940 (0x08)
    TArray<int32> EscapePointIDs;                                                              // 0x0948 (0x10)
    Vector PlayerStartLocation;                                                                // 0x0958 (0x0C)
    int32 InTeamIndex;                                                                         // 0x0964 (0x04)
    TSubclassOf<InputComponent> GlobalInputComponentClass;                                     // 0x0968 (0x08)
    InputComponent* GlobalInputComponent;                                                      // 0x0970 (0x08)
    bool bShouldUseTeleportCheckFrames;                                                        // 0x0978 (0x01) BitMask: 0xFF
    bool bAutoCheckAndStopHurryLoad;                                                           // 0x0979 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UpdateTipsLastTouchLocation(const Vector2D TipsLastTouchLocation);                    // [Final|Public] RVA: 0x60D856C
    void TimerForServerDebugRPC();                                                             // [Final|Public] RVA: 0x60D8558
    void TimerForHeartbeat();                                                                  // [Final|Public] RVA: 0x60D8544
    void SetUIInputMode(enum UIMode);                                                          // [Final|Public] RVA: 0x60D84AC
    void SetSGCharacter(SGCharacter* InCharacter);                                             // [Final|Public] RVA: 0x60D840C
    void SetPlayerStartLocation(const Vector InPlayerStartLoc);                                // [Final|Public] RVA: 0x60D8340
    void SetNewTraceInfoIndex(int32 InNewTraceInfoIndex);                                      // [Final|Public] RVA: 0x60D82A8
    void SetNetSpeedWhenLoadProtect(bool bRecoverDefaultValue);                                // [Final|Public] RVA: 0x47F8A9C
    void SetEscapePointIDs(const TArray<int32> InEscapePointIDs);                              // [Final|Public] RVA: 0x60D816C
    void ServerUseVehicle(Actor* Vehicle, bool bWantDriver);                                   // [Public] RVA: 0x60D7C70
    void ServerTLogSoundIndicatorScore(FString TLogInfo);                                      // [Public] RVA: 0x60D7BC4
    void ServerTLogSoundIndicatorCount(int32 Count);                                           // [Public] RVA: 0x60D7B28
    void ServerSwitchSeat(SGCharacter* NZChar, int32 NewSeatIndex);                            // [Public] RVA: 0x60D7A0C
    void ServerSpectatingSettingsReport(const bool bAllowTeammatesCheckTheBackpack);           // [Public] RVA: 0x60D796C
    void ServerSetVehicleSpringArmRelativeRotation(Rotator InRelativeRot);                     // [Public] RVA: 0x60D7890
    void ServerSetVehicleCameraRelativeInfo(Rotator InRelativeRot, Vector InRelativeLoc);      // [Public] RVA: 0x60D7738
    void ServerSendTssAntiData(const TssAntiData AntiData);                                    // [Public] RVA: 0x60D75F8
    void ServerSendShootInputFlowData(const ShootInputFlowData InputData);                     // [Protected] RVA: 0x60D74C0
    void ServerReplayButtonClickedReport(int32 SourceType);                                    // [Public] RVA: 0x60D7424
    void ServerNotifyPCSpawned();                                                              // [Public] RVA: 0x60D73D8
    void ServerLeaveVehicle(Rotator CurrentRot);                                               // [Public] RVA: 0x60D72FC
    void ServerHeartbeat(int32 PingNum);                                                       // [Public] RVA: 0x60D7260
    void ServerForgiveTeammate(Character* TargetCharacter, bool bForgive, SGPlayerController* PC);  // [Public] RVA: 0x60D711C
    void ServerDebugRPCTwo(FString Key, FString Value);                                        // [Public] RVA: 0x60D7004
    void ServerDebugRPC(FString Str);                                                          // [Public] RVA: 0x60D6F58
    void SendDebugRPC(int32 Len, int32 Last, int32 Num);                                       // [Final|Public] RVA: 0x60D6E1C
    void ProcessDebugCommand(FString Value);                                                   // [Public] RVA: 0x186CC1C
    void OnRepDSSwitchConfig();                                                                // [Final|Protected] RVA: 0x2716510
    void OnRep_PlayerStartLocation();                                                          // [Final|Private] RVA: 0x60D6BA4
    void OnRep_NewTraceInfoIndex();                                                            // [Final|Protected] RVA: 0x60D6B04
    void OnRep_InTeamIndex();                                                                  // [Final|Private] RVA: 0x60D6AB4
    void OnRep_FinishType();                                                                   // [Final|Public] RVA: 0x60D6A60
    void OnRep_EscapePointIDs();                                                               // [Final|Private] RVA: 0x60D6A4C
    void OnPlayerTryReconnect(NetConnection* InNetConnection);                                 // [Final|Protected] RVA: 0x60D68D4
    void OnPlayerOnReconnect(PlayerController* InPC);                                          // [Final|Protected] RVA: 0x60D6838
    void OnPlayerInputClassLoadCompleted(SoftObjectPath Path);                                 // [Final|Private] RVA: 0x60D6780
    void OnPlayerFinishReconnect(NetConnection* InNetConnection);                              // [Final|Protected] RVA: 0x60D6638
    void OnGameBegin(PlayerController* PlayerController);                                      // [Final|Public] RVA: 0x60D659C
    void OnCompetitionFlagChange(enum FlagType, bool bValue);                                  // [Final|Public] RVA: 0x60D6414
    void OnBUseSoundIndicatorChange(bool bUseSoundIndicator);                                  // [Final|Public] RVA: 0x60D6290
    uint8 MoveToLocation(const Vector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<NavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // [Final|Public] RVA: 0x60D5F74
    void K2_SetInitialLocationAndRotation(const Vector NewLocation, const Rotator NewRotation);  // [Final|Public] RVA: 0x60D5E3C
    void InitNewPlayer(const UniqueNetIdRepl UniqueID, const FString Options, const FString Portal);  // [Public] RVA: 0x60D5C84
    void GiveUpWFRToDie(Character* TargetCharacter);                                           // [Public] RVA: 0x60D5BCC
    SGPCUIModeComponent* GetUIModeComponent();                                                 // [Final|Public] RVA: 0x60D5BA8
    SGPCSpectatingComponent* GetSpecatingComponent();                                          // [Final|Public] RVA: 0x60D5AE4
    SGCharacter* GetSGCharacter();                                                             // [Final|Public] RVA: 0x60D5AC0
    int32 GetNewTraceInfoIndex();                                                              // [Final|Public] RVA: 0x60D5AA8
    float GetMoveTimeDiff();                                                                   // [Final|Public] RVA: 0x60D5A80
    int32 GetLostPingSeconds();                                                                // [Final|Public] RVA: 0x60D59F0
    SGPCFPPModeComponent* GetFPPModeComponent();                                               // [Final|Public] RVA: 0x60D59B4
    SGCharacter* GetControlledSGCharacter();                                                   // [Final|Public] RVA: 0x60D599C
    void ForgiveTeammate(Character* TargetCharacter, bool bForgive);                           // [Final|Public] RVA: 0x60D574C
    void DSInitConfig();                                                                       // [Final|Protected] RVA: 0x60D5738
    void CloseConnection();                                                                    // [Public] RVA: 0x60D5720
    void ClientUseVehicleFailed();                                                             // [Public] RVA: 0x60D5708
    void ClientUseTeleportCheckFrames(bool bEnable, bool bAutoStopHurryLoad);                  // [Public] RVA: 0x60D5608
    void ClientReplayButtonClickedReport(int32 SourceType);                                    // [Public] RVA: 0x60D556C
    void ClientHudAddToast(FString Tips);                                                      // [Public] RVA: 0x60D54C0
    void ClientHeartbeat(int32 PingNum);                                                       // [Public] RVA: 0x60D5424
    void ClientGetOutOfStuck(enum Result);                                                     // [Public] RVA: 0x60D5388
    void ClientBroadcastHitTeammates(SGCharacter* DamageCauser);                               // [Public] RVA: 0x60D52E8
    void CallServerGetOutOfStuckImpl(bool bClientStuck, const Vector StuckLocation);           // [Public] RVA: 0x60D4F9C
    void CallServerGetOutOfStuck();                                                            // [Final|Public] RVA: 0x60D4F88
    void BeforeCloseConnection();                                                              // [Public] RVA: 0x186CC1C
    void AfterPostInitializeComponents();                                                      // [Public] RVA: 0x186CC1C
};

// ============================================================
// Inheritance: SGPlayerState : PlayerState : Info : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGPlayerState : public PlayerState {
public:
    TArray<SGCharacter*> HitTeammates;                                                         // 0x04A0 (0x10)
    TSet<SGPlayerController*> HitTeammatesController;                                          // 0x04B0 (0x50)
    SGPlayerStateBroadcastComponent* BroadcastComponent;                                       // 0x0508 (0x08)
    SGPlayerStateTeamComponent* SGPlayerStateTeamComponent;                                    // 0x0510 (0x08)
    SGPlayerStateStatisComponent* SGPlayerStateStatisComponent;                                // 0x0518 (0x08)
    SGPlayerStateZoneInfoComponent* SGPlayerStateZoneInfoComp;                                 // 0x0520 (0x08)
    uint8 PlayerPlatformId;                                                                    // 0x0528 (0x01)
    bool bApplyZoneSvrInfo;                                                                    // 0x0529 (0x01) BitMask: 0xFF
    bool bHasInitNewPlayer;                                                                    // 0x052A (0x01) BitMask: 0xFF
    LootLimitUserTagTableRow CacheLootLimitUserTagTableRow;                                    // 0x0530 (0x40)
    uint64 gid;                                                                                // 0x0570 (0x08)
    uint32 GOpenID;                                                                            // 0x0578 (0x04)
    SGCharacter* SGCharacter;                                                                  // 0x0580 (0x08)
    bool OnReconnect;                                                                          // 0x0588 (0x01) BitMask: 0xFF
    uint64 roomid;                                                                             // 0x0590 (0x08)
    int32 TeamIndex;                                                                           // 0x0598 (0x04)
    FString TeamName;                                                                          // 0x05A0 (0x10)
    int32 TeamGroupIndex;                                                                      // 0x05B0 (0x04)
    int32 SquadIndex;                                                                          // 0x05B4 (0x04)
    int32 GetOutOfStuckChance;                                                                 // 0x05B8 (0x04)
    int32 seasonId;                                                                            // 0x05BC (0x04)
    bool bInitFromZone;                                                                        // 0x05C0 (0x01) BitMask: 0xFF
    int32 TeamType;                                                                            // 0x05C4 (0x04)
    int32 game_mode;                                                                           // 0x05C8 (0x04)
    int32 channelType;                                                                         // 0x05CC (0x04)
    uint32 ranked_Level;                                                                       // 0x05D0 (0x04)
    uint32 ranked_Score;                                                                       // 0x05D4 (0x04)
    uint32 ranking;                                                                            // 0x05D8 (0x04)
    uint32 pranking;                                                                           // 0x05DC (0x04)
    uint32 ranked_rd;                                                                          // 0x05E0 (0x04)
    uint32 Rank;                                                                               // 0x05E4 (0x04)
    uint32 pvp_ranking;                                                                        // 0x05E8 (0x04)
    uint32 CurSeason_ID;                                                                       // 0x05EC (0x04)
    uint32 Server_Season_ID;                                                                   // 0x05F0 (0x04)
    uint32 PlatPrivilegeType;                                                                  // 0x05F4 (0x04)
    uint32 ranked_status;                                                                      // 0x05F8 (0x04)
    uint32 Area_ID;                                                                            // 0x05FC (0x04)
    uint32 PMC_KillCountByPMC;                                                                 // 0x0600 (0x04)
    uint32 SCAV_KillCountByPMC;                                                                // 0x0604 (0x04)
    uint32 DeathCountByPMC;                                                                    // 0x0608 (0x04)
    int32 PlatId;                                                                              // 0x060C (0x04)
    uint32 bIsSingle;                                                                          // 0x0610 (0x04)
    uint32 AutoMatch;                                                                          // 0x0614 (0x04)
    uint32 PlayerLevel;                                                                        // 0x0618 (0x04)
    FString ZonePlayerName;                                                                    // 0x0620 (0x10)
    enum CharacterSex;                                                                         // 0x0630 (0x01)
    SGPlayerIconInfo PlayerIconInfo;                                                           // 0x0638 (0x58)
    SGPlayerBannerInfo PlayerBannerInfo;                                                       // 0x0690 (0x28)
    SGPlayerKDAInfo PlayerKDAInfo;                                                             // 0x06B8 (0x0C)
    uint32 Mentor_Identity;                                                                    // 0x06C4 (0x04)
    uint32 Mentor_Gid;                                                                         // 0x06C8 (0x04)
    TArray<int32> Student_gid_List;                                                            // 0x06D0 (0x10)
    FString Mentor_Name;                                                                       // 0x06E0 (0x10)
    TArray<FString> Student_Name_List;                                                         // 0x06F0 (0x10)
    int32 LootLimitPoolID;                                                                     // 0x0700 (0x04)
    float EnterGameLeftTime;                                                                   // 0x0704 (0x04)
    float EnterGameTime;                                                                       // 0x0708 (0x04)
    int32 NationalFlagIso;                                                                     // 0x070C (0x04)
    bool bLettering;                                                                           // 0x0710 (0x01) BitMask: 0xFF
    int32 EnterDsZone;                                                                         // 0x0714 (0x04)
    int32 IdealDsZone;                                                                         // 0x0718 (0x04)
    uint32 mapunlockId;                                                                        // 0x071C (0x04)
    TArray<int32> TakeOutInspectionLootPointIDArray;                                           // 0x0720 (0x10)
    TArray<int32> TakeInInspectionLootPointIDArray;                                            // 0x0730 (0x10)
    TMap<int32, GuranteedItemLimitInfo> GuranteedPool;                                         // 0x0740 (0x50)
    TArray<FString> ClientXIDArray;                                                            // 0x0790 (0x10)
    TMap<uint32, int64> CharacterLootExtDataMap;                                               // 0x07A0 (0x50)
    TArray<uint32> RecentCollectionItemCounts;                                                 // 0x07F0 (0x10)
    float LootGuaranteeFactor;                                                                 // 0x0800 (0x04)
    TArray<int32> PlayerTagIds;                                                                // 0x0808 (0x10)
    uint64 BanGrenadesTimestamp;                                                               // 0x0818 (0x08)
    uint64 BanGrenadesTimestampIDIP;                                                           // 0x0820 (0x08)
    bool bShouldBanGrennade;                                                                   // 0x0828 (0x01) BitMask: 0xFF
    bool TempBanGrenade;                                                                       // 0x0829 (0x01) BitMask: 0xFF
    bool bCanBeSpectated;                                                                      // 0x082A (0x01) BitMask: 0xFF
    uint32 NetbarLevel;                                                                        // 0x082C (0x04)
    uint32 NetbarExpGainRate;                                                                  // 0x0830 (0x04)
    int32 GentlemanType;                                                                       // 0x0834 (0x04)
    TArray<ActivityItemUpgradeInfo> ItemUpgradeInfos;                                          // 0x0838 (0x10)
    TArray<ActivityItemExpChangedInfo> ItemExpChangedInfos;                                    // 0x0848 (0x10)
    TArray<CopierCopiedItemInfo> CopiedItems;                                                  // 0x0858 (0x10)
    TArray<CopierReturnItemInfo> ReturnItems;                                                  // 0x0868 (0x10)
    TMap<int32, FString> InteractedRecorderPenSoundMap;                                        // 0x0878 (0x50)
    int64 player_elo;                                                                          // 0x08C8 (0x08)
    int64 player_wealth;                                                                       // 0x08D0 (0x08)
    GuaranteeKillPMCAddConfTableRow GuaranteeKillPMCAddConfig;                                 // 0x08D8 (0x48)
    int32 GuaranteeKillPMCNum;                                                                 // 0x0920 (0x04)
    enum IdentityType;                                                                         // 0x0928 (0x01)
    TArray<SGVirtualItemInfo> VirtualItemList;                                                 // 0x0930 (0x10)
    bool bAllowTeammatesCheckTheBackpack;                                                      // 0x0940 (0x01) BitMask: 0xFF
    TArray<TSubclassOf<ActorComponent>> ComponentClasses;                                      // 0x0948 (0x10)
    TArray<TSubclassOf<ActorComponent>> ComponentClassesAdditional;                            // 0x0958 (0x10)
    TSubclassOf<SGPlayerState> TemplateClass;                                                  // 0x0968 (0x08)
    bool bIsReconnectSpawn;                                                                    // 0x0970 (0x01) BitMask: 0xFF
    bool bCancelReconnection;                                                                  // 0x0971 (0x01) BitMask: 0xFF
    FString KillByEnemy;                                                                       // 0x0980 (0x10)
    int32 TotalDamageToEnemy;                                                                  // 0x0990 (0x04)
    int32 DamageToEnemyHead;                                                                   // 0x0994 (0x04)
    int32 DamageToEnemyChest;                                                                  // 0x0998 (0x04)
    int32 DamageToEnemyStomach;                                                                // 0x099C (0x04)
    int32 DamageToEnemyLeftArm;                                                                // 0x09A0 (0x04)
    int32 DamageToEnemyRightArm;                                                               // 0x09A4 (0x04)
    int32 DamageToEnemyLeg;                                                                    // 0x09A8 (0x04)
    int32 TotalHitTimes;                                                                       // 0x09AC (0x04)
    int32 HitTimesToEnemyHead;                                                                 // 0x09B0 (0x04)
    int32 HitTimesToEnemyChest;                                                                // 0x09B4 (0x04)
    int32 HitTimesToEnemyStomach;                                                              // 0x09B8 (0x04)
    int32 HitTimesToEnemyLeftArm;                                                              // 0x09BC (0x04)
    int32 HitTimesToEnemyRightArm;                                                             // 0x09C0 (0x04)
    int32 HitTimesToEnemyLeg;                                                                  // 0x09C4 (0x04)
    int32 TotalAmmoCost;                                                                       // 0x09C8 (0x04)
    int32 EnemyArmorDamageReduceAmount;                                                        // 0x09CC (0x04)
    enum DeathType;                                                                            // 0x09D0 (0x01)
    int32 KillEnemyCount;                                                                      // 0x09D4 (0x04)
    int32 TotalGetDamage;                                                                      // 0x09D8 (0x04)
    int32 TotalGetDamageTimes;                                                                 // 0x09DC (0x04)
    int32 HeadGetDamage;                                                                       // 0x09E0 (0x04)
    int32 ChestGetDamage;                                                                      // 0x09E4 (0x04)
    int32 StomachGetDamage;                                                                    // 0x09E8 (0x04)
    int32 LeftArmGetDamage;                                                                    // 0x09EC (0x04)
    int32 RightArmGetDamage;                                                                   // 0x09F0 (0x04)
    int32 LegGetDamage;                                                                        // 0x09F4 (0x04)
    int32 MyselfArmorDamageReduceAmount;                                                       // 0x09F8 (0x04)
    SGCharacter* LastAimEnemy;                                                                 // 0x0A00 (0x08)
    float LastAimEnemyTime;                                                                    // 0x0A08 (0x04)
    TArray<int32> ChatVoiceIDs;                                                                // 0x0A10 (0x10)
    TArray<int32> PlayerCommunicationIDs;                                                      // 0x0A20 (0x10)
    FString EscapePointName;                                                                   // 0x0A30 (0x10)
    int32 KillPlayerPMC;                                                                       // 0x0A40 (0x04)
    int32 KillPlayerScav;                                                                      // 0x0A44 (0x04)
    int32 KillTeammate;                                                                        // 0x0A48 (0x04)
    int32 KillAIScav;                                                                          // 0x0A4C (0x04)
    int32 KillAIScavBoss;                                                                      // 0x0A50 (0x04)
    int32 KillAIPMC;                                                                           // 0x0A54 (0x04)
    int32 KillTotalCount;                                                                      // 0x0A58 (0x04)
    int32 KillAIThemeBOSS;                                                                     // 0x0A5C (0x04)
    bool IsOpenMic;                                                                            // 0x0A60 (0x01) BitMask: 0xFF
    bool bIsShowAvatarEquipment;                                                               // 0x0A61 (0x01) BitMask: 0xFF
    CourtRanksInfo CourtRanksInfo;                                                             // 0x0A64 (0x08)
    int32 SignType;                                                                            // 0x0A6C (0x04)
    uint32 NetOutLoss;                                                                         // 0x0A70 (0x04)
    uint32 NetOutPackets;                                                                      // 0x0A74 (0x04)
    uint32 NetInLoss;                                                                          // 0x0A78 (0x04)
    uint32 NetInRate;                                                                          // 0x0A7C (0x04)
    uint32 NetOutRate;                                                                         // 0x0A80 (0x04)
    uint32 NetSaturated;                                                                       // 0x0A84 (0x04)
    uint32 NetOutTotalPackets;                                                                 // 0x0A88 (0x04)
    uint32 NetTotalOutLoss;                                                                    // 0x0A8C (0x04)
    uint32 NetTotalInLoss;                                                                     // 0x0A90 (0x04)
    int32 TakeInValue;                                                                         // 0x0A94 (0x04)
    int32 TakeOutTotalValue;                                                                   // 0x0A98 (0x04)
    int32 TakeOutValue_Self;                                                                   // 0x0A9C (0x04)
    int32 TakeOutValue_Loot;                                                                   // 0x0AA0 (0x04)
    int32 TakeOutValue_PMC;                                                                    // 0x0AA4 (0x04)
    int32 TakeOutValue_SCAV;                                                                   // 0x0AA8 (0x04)
    int32 TakeOutValue_AISCAV;                                                                 // 0x0AAC (0x04)
    int32 TakeOutValue_AIBOSS;                                                                 // 0x0AB0 (0x04)
    int32 TakeOutValue_AIPMC;                                                                  // 0x0AB4 (0x04)
    int32 TakeOutValue_Other;                                                                  // 0x0AB8 (0x04)
    int32 TakeOutValue_AIFollower;                                                             // 0x0ABC (0x04)
    int32 TakeOutValue_AIElit;                                                                 // 0x0AC0 (0x04)
    int32 TakeOutValue_BOSS;                                                                   // 0x0AC4 (0x04)
    int32 TakeOutValue_QuestEffectGive;                                                        // 0x0AC8 (0x04)
    int32 TakeOutValue_GMCheat;                                                                // 0x0ACC (0x04)
    TArray<int32> EquippedPerkIDs;                                                             // 0x0AD0 (0x10)
    TArray<InGameCounterInfo> InGameCounters;                                                  // 0x0AE8 (0x10)
    int32 EndlessWeekMaxBattleMerit;                                                           // 0x0AF8 (0x04)
    int32 EndlessHistoryMaxBattleMerit;                                                        // 0x0AFC (0x04)
    FString FirstSpawnPointMissionFlowName;                                                    // 0x0B00 (0x10)

    // --- Functions ---
    void UpdateServerOpenMicState(bool bOpen);                                                 // [Public] RVA: 0x60E0408
    void UpdatePing(float InPing);                                                             // [Public] RVA: 0x60E0368
    void UpdateOpenMicState(bool bOpen);                                                       // [Final|Public] RVA: 0x60E02AC
    bool TryConsumeInGameCounter(int32 InnerActId);                                            // [Final|Public] RVA: 0x60E016C
    void SetZonePlayerName(FString NewName);                                                   // [Final|Public] RVA: 0x60E0020
    void SetTicketValue(int32 InTicketValue);                                                  // [Final|Public] RVA: 0x60DFF58
    void SetTeamTypeForTest(int32 InTeamType);                                                 // [Final|Public] RVA: 0x60DFEB4
    void SetSquadID(int32 ID);                                                                 // [Final|Public] RVA: 0x60DFDFC
    void SetSpecatedBanTime(float BanTime);                                                    // [Final|Public] RVA: 0x60DFD60
    void SetSignType(int32 Stype);                                                             // [Final|Public] RVA: 0x60DFCA4
    void SetSGCharacter(SGCharacter* CurrentCharacter);                                        // [Final|Public] RVA: 0x60DFBCC
    void SetInGameCounterRemaining(int32 InnerActId, int32 Remaining);                         // [Final|Public] RVA: 0x60DFAE4
    void SetCourtRanksInfo(int32 Level, int32 Elo);                                            // [Final|Public] RVA: 0x60DF820
    void ServerSetSignType(int32 Stype);                                                       // [Public] RVA: 0x60DF768
    void ServerReportRagdollOverridePose(SGCharacter* Character, uint8 reason, const Vector ClientPelvisLoc, float CostTime);  // [Public] RVA: 0x60DF5E0
    void ServerMarkLastCameraAimTime();                                                        // [Public] RVA: 0x60DF594
    void ServerClearLastCameraAimTime();                                                       // [Public] RVA: 0x60DF548
    void SendFinalFeedBack(SGCharacter* Character, bool bDecision);                            // [Public] RVA: 0x60DF134
    void OnReq_RoomID();                                                                       // [Public] RVA: 0x2277CD8
    void OnRep_TeamIndex();                                                                    // [Public] RVA: 0x21EBCE8
    void OnRep_PlayerKDAInfo();                                                                // [Final|Public] RVA: 0x60DED94
    void OnRep_PlayerIdentityType();                                                           // [Final|Public] RVA: 0x20DBEEC
    void OnRep_GID();                                                                          // [Final|Public] RVA: 0x201B738
    void OnRep_ChatVoiceIDs();                                                                 // [Final|Public] RVA: 0x60DED80
    void OnRep_AllowTeammatesCheckTheBackpack();                                               // [Final|Public] RVA: 0x60DED6C
    void OnPostDied(Character* DeadCharacter, Controller* Killer, DamageEventObject* DamageEventObject);  // [Final|Public] RVA: 0x60DEBA8
    void OnKillOther(const KillInfo KillInfo, const KillOtherStatis KillOtherStatics);         // [Final|Public] RVA: 0x60DE8B0
    void OnKilled(Pawn* KilledPawn, const KillInfo KillInfo);                                  // [Final|Public] RVA: 0x60DE9EC
    void OnCharacterReadyToPlay(SGCharacter* Character);                                       // [Final|Protected] RVA: 0x60DE6E4
    void LoadGuaranteeAdditionConf();                                                          // [Final|Public] RVA: 0x60DE360
    bool IsReconnectSpawn();                                                                   // [Final|Public] RVA: 0x60DE274
    bool IsOBPlayer();                                                                         // [Final|Public] RVA: 0x60DE254
    bool IsCancelReconnection();                                                               // [Final|Public] RVA: 0x60DDF94
    bool IsAdministratorPlayer();                                                              // [Final|Public] RVA: 0x60DDF78
    void IncreaseKillPlayerPMC();                                                              // [Final|Public] RVA: 0x60DDAA8
    void IncreaseKillAIPMC();                                                                  // [Final|Public] RVA: 0x60DDA1C
    int32 GetSignType();                                                                       // [Final|Public] RVA: 0x60DD8AC
    SGCharacter* GetSGCharacter();                                                             // [Final|Public] RVA: 0x60DD888
    int32 GetRecentCollectionItemCounts(int32 InRecentTimes);                                  // [Final|Public] RVA: 0x60DD544
    enum GetPlayerTeamType();                                                                  // [Final|Public] RVA: 0x2840DBC
    int32 GetPlayerNationalFlagIso();                                                          // [Final|Public] RVA: 0x2A350D8
    SGPlayerKDAInfo GetPlayerKDAInfo();                                                        // [Final|Public] RVA: 0x60DD44C
    SGPlayerIconInfo GetPlayerIconInfo();                                                      // [Final|Public] RVA: 0x1FF056C
    SGPlayerBannerInfo GetPlayerBannerInfo();                                                  // [Final|Public] RVA: 0x1C39ABC
    uint8 GetPlatformId();                                                                     // [Final|Public] RVA: 0x60DD298
    TArray<int32> GetMainModeEquippedPerkIDs();                                                // [Final|Public] RVA: 0x60DD1D0
    int32 GetKillNum();                                                                        // [Final|Public] RVA: 0x60DD108
    int32 GetInGameCounterRemaining(int32 InnerActId);                                         // [Final|Public] RVA: 0x60DD060
    int32 GetDeathNum();                                                                       // [Final|Public] RVA: 0x60DD028
    int32 GetCourtRankLevel();                                                                 // [Final|Public] RVA: 0x60DD010
    int64 GetCharacterLootExtData(uint32 InType);                                              // [Final|Public] RVA: 0x60DCEF4
    int32 GetAssistNum();                                                                      // [Final|Public] RVA: 0x60DCEDC
    void ClientSendBanTimeForCauser();                                                         // [Public] RVA: 0x60DCE18
    void CalculateLootGuaranteeFactor();                                                       // [Final|Public] RVA: 0x60DCE04
    void AddCharacterLootExtData(uint32 InType, int64 InValue);                                // [Final|Public] RVA: 0x60DCC24
};

// ============================================================
// Inheritance: SGPooledFireEffect : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGPooledFireEffect : public PooledActor {
public:
    ParticleSystemComponent* FireParticleCmp;                                                  // 0x0360 (0x08)
    SGWeaponEffectFOVComponent* ParticleFovComp;                                               // 0x0368 (0x08)
    SGInventory* Weapon;                                                                       // 0x0370 (0x08)

    // --- Functions ---
    void PoolEndPlay();                                                                        // [Final|Protected] RVA: 0x612C79C
    void PoolBeginPlay();                                                                      // [Final|Protected] RVA: 0x612C784
};

// ============================================================
// Inheritance: SGPooledFireEffectAnyThread : SGPooledFireEffect : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGPooledFireEffectAnyThread : public SGPooledFireEffect {
public:
};

// ============================================================
// Inheritance: SGProjectileTrajectory : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGProjectileTrajectory : public Actor {
public:
    enum TrajectoryDrawPolicy;                                                                 // 0x0318 (0x01)
    SplineComponent* SplineComponent;                                                          // 0x0320 (0x08)
    StaticMesh* SplineStaticMesh;                                                              // 0x0328 (0x08)
    MaterialInstance* SplineMaterial;                                                          // 0x0330 (0x08)
    MaterialInstance* SplineMaterialStart;                                                     // 0x0338 (0x08)
    InstancedStaticMeshComponent* InstancedStaticMesh;                                         // 0x0340 (0x08)
    StaticMesh* HISM;                                                                          // 0x0348 (0x08)
    MaterialInstance* HISMMat;                                                                 // 0x0350 (0x08)
    ProceduralMeshComponent* ProceduralMesh;                                                   // 0x0358 (0x08)
    MaterialInterface* ProceduralMeshMat;                                                      // 0x0360 (0x08)
    MaterialInterface* ProceduralMeshMatMpe;                                                   // 0x0368 (0x08)
    MaterialInstanceDynamic* ProceduralMeshDynamicMat;                                         // 0x0370 (0x08)
    MaterialInstanceDynamic* ProceduralMeshDynamicMatMpe;                                      // 0x0378 (0x08)
    MaterialInstanceDynamic* UsedProceduralMeshDynamicMat;                                     // 0x0380 (0x08)
    float CylinderRadius;                                                                      // 0x0388 (0x04)
    int32 CylinderSlice;                                                                       // 0x038C (0x04)
    bool bInverseUV;                                                                           // 0x0390 (0x01) BitMask: 0xFF
    float NormalGrenadeOpacity;                                                                // 0x0394 (0x04)
    float OnHoldGrenadeOpacity;                                                                // 0x0398 (0x04)
    CurveFloat* TrajectoryFadeInCurve;                                                         // 0x03A0 (0x08)
    float TraceRadiusForProcedrualDraw;                                                        // 0x03B0 (0x04)
    float FixRotateAngle;                                                                      // 0x03B4 (0x04)
    bool bDebugPoint;                                                                          // 0x03B8 (0x01) BitMask: 0xFF
    float DebugNormalLength;                                                                   // 0x03BC (0x04)
    CurveFloat* FarEndLineScaleCurve;                                                          // 0x03C0 (0x08)
    CurveFloat* NearHandLineScaleCurve;                                                        // 0x03C8 (0x08)
    uint8 NearHandScaleLineNum;                                                                // 0x03D0 (0x01)
    TMap<Vector, Vector> PointLocAndVelocityMap;                                               // 0x03D8 (0x50)
    Vector StartLocation;                                                                      // 0x0428 (0x0C)
    Vector InitialVelocity;                                                                    // 0x0434 (0x0C)
    float Gravity;                                                                             // 0x0440 (0x04)
    float PathLifeTime;                                                                        // 0x0444 (0x04)
    float TimeInterval;                                                                        // 0x0448 (0x04)
    ParticleSystem* BeamSegmentParticleSystem;                                                 // 0x0450 (0x08)
    ParticleSystem* BeamForeSegmentParticleSystem;                                             // 0x0458 (0x08)
    int32 BeamForeCount;                                                                       // 0x0460 (0x04)
    int32 TranslucencySortPriorityOverride;                                                    // 0x0464 (0x04)
    TArray<ParticleSystemComponent*> BeamSegmentParticleSystemComponentArray;                  // 0x0468 (0x10)
    TArray<SplineMeshComponent*> SplineMeshComponentArray;                                     // 0x0478 (0x10)
    ParticleSystemComponent* WarningParticleSystemComponent;                                   // 0x0488 (0x08)

    // --- Functions ---
    void VisualizeBeamSegment(int32 Index, BeamSegmentData BeamSegmentData);                   // [Final|Protected] RVA: 0x60FFE58
    void SetTrajectoryFadeInCurrentTime(float SetTime);                                        // [Final|Public] RVA: 0x60FFAB8
    void SetProceduralMeshLineOpacity(float Opacity);                                          // [Final|Public] RVA: 0x60FFA24
    BeamSegmentData GetBeamSegmentDataAtTime(float BeginTime, float EndTime);                  // [Final|Protected] RVA: 0x60FF6D4
    void CreateProceduralMesh_Complex(out TMap<Vector, Vector> TrajectoryPointsWithVelocity);  // [Final|Protected] RVA: 0x60FF52C
    void CreateProceduralMesh(out TMap<Vector, Vector> TrajectoryPointsWithVelocity);          // [Final|Protected] RVA: 0x60FF3C0
    Vector CalcTargetLocation(const Vector InStartLocation, const Vector InInitialVelocity, float InTime);  // [Protected] RVA: 0x60FF100
};

// ============================================================
// Inheritance: SGProjectile_GravityBullet_HD : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGProjectile_GravityBullet_HD : public PooledActor {
public:
    bool bDebugBulletTrace;                                                                    // 0x03B0 (0x01) BitMask: 0xFF
    SphereComponent* BulletCollisionComp;                                                      // 0x03B8 (0x08)
    NiagaraComponent* BulletFXComp;                                                            // 0x03C0 (0x08)
    TSubclassOf<Actor> AmmoClass;                                                              // 0x03C8 (0x08)
    SGBulletMovementComponent_HD* BulletMovementComp;                                          // 0x03D0 (0x08)
    Rotator BulletRotationOffset;                                                              // 0x03D8 (0x0C)
    bool bShouldDamageDynamicObjects;                                                          // 0x03E4 (0x01) BitMask: 0xFF
    SGWeapon* OwnerWeapon;                                                                     // 0x03E8 (0x08)

    // --- Functions ---
    void PoolEndPlay();                                                                        // [Final|Public] RVA: 0x1D71EFC
    void PoolBeginPlay();                                                                      // [Final|Public] RVA: 0x1DFA5FC
};

// ============================================================
// Inheritance: SGSmokeActor : ParticleVolumeActor : PooledActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGSmokeActor : public ParticleVolumeActor {
public:
    bool bIsTearGasSmoke;                                                                      // 0x0698 (0x01) BitMask: 0xFF
    FMulticastDelegate OnEnterSmokeGrenade;                                                    // 0x06A0 (0x10)
};

// ============================================================
// Inheritance: SGTeam : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGTeam : public Actor {
public:
    TArray<Actor*> TeamMembers;                                                                // 0x0320 (0x10)
    SGActorFactionComponent* FactionComponent;                                                 // 0x0330 (0x08)

    // --- Functions ---
    bool RemoveFromTeam(Actor* C, bool bRemoveAll);                                            // [Public] RVA: 0x610E074
    TArray<Actor*> GetTeamMembers();                                                           // [Public] RVA: 0x610C980
    ActorComponent* GetFactionComp();                                                          // [Public] RVA: 0x610B724
    bool AddToTeam(Actor* C);                                                                  // [Public] RVA: 0x610A2F4
};

// ============================================================
// Inheritance: SGTeamInfo : SGTeam : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGTeamInfo : public SGTeam {
public:
    enum TeamInfoType;                                                                         // 0x0348 (0x01)
    int32 TeamIndex;                                                                           // 0x034C (0x04)
    int32 TeamMemberCount;                                                                     // 0x0350 (0x04)
    int32 MaxTeamMemberCount;                                                                  // 0x0354 (0x04)
    FText TeamName;                                                                            // 0x0358 (0x18)
    int32 TeamLogo;                                                                            // 0x0370 (0x04)
    int32 StartPointGroupIndex;                                                                // 0x0374 (0x04)
    TArray<uint64> ShowShareSkinPrivilegeIconGIDs;                                             // 0x0378 (0x10)
    bool bPeriodicalDBNOWipeOut;                                                               // 0x0388 (0x01) BitMask: 0xFF
    FMulticastDelegate OnTeamLevelChanged;                                                     // 0x0398 (0x10)
    TArray<Actor*> OBTeamMembers;                                                              // 0x03A8 (0x10)
    TArray<PlayerState*> TeamMemberPlayerStates;                                               // 0x03B8 (0x10)
    TArray<PlayerState*> InBattleTeamMemberPlayerStates;                                       // 0x03C8 (0x10)
    TArray<FString> InBattleTeamMemberPlayerNames;                                             // 0x03D8 (0x10)
    TArray<SGPlayerIconInfo> InBattleTeamMemberIconInfo;                                       // 0x03E8 (0x10)
    TArray<SGPlayerBannerInfo> InBattleTeamMemberBannerInfo;                                   // 0x03F8 (0x10)
    TArray<int32> InBattleTeamMemberPlayerNationalFlagIsos;                                    // 0x0408 (0x10)
    TArray<enum> InBattleTeamMemberPlayerCondition;                                            // 0x0418 (0x10)
    TArray<SGAICharacter*> TeamMemberAICharacters;                                             // 0x0428 (0x10)
    TArray<int32> TeamConfirmedPerkID;                                                         // 0x0438 (0x10)
    TArray<int64> TeamGuid2VisualIdxMapKey;                                                    // 0x0448 (0x10)
    TArray<int32> TeamGuid2VisualIdxMapValue;                                                  // 0x0458 (0x10)
    TArray<int64> TeamGuidIncludeNotConnect;                                                   // 0x0468 (0x10)
    int32 CurVisualIdx;                                                                        // 0x0478 (0x04)
    float CheckDBNOWipeOutPeriod;                                                              // 0x047C (0x04)
    bool bOpenContainerLootProtectByTeammate;                                                  // 0x0480 (0x01) BitMask: 0xFF
    NPCAITeam* AIGroupInfo;                                                                    // 0x0488 (0x08)
    SGInventory* TeamStorage;                                                                  // 0x0490 (0x08)
    TArray<int64> SuccessTeamMemberGIDArr;                                                     // 0x0498 (0x10)
    TArray<SGInventory*> TeamStorageBoxes;                                                     // 0x04A8 (0x10)
    int32 TotalTeamMemberStoragesValue;                                                        // 0x04B8 (0x04)
    TArray<TeamMemberStorageInfo> TeamMemberStorageArr;                                        // 0x04C0 (0x10)
    int32 TotalTeamStorageValue;                                                               // 0x04D0 (0x04)
    int32 TeamStorageValue;                                                                    // 0x04D4 (0x04)
    int32 TeamLevel;                                                                           // 0x04D8 (0x04)
    int32 TeamExp;                                                                             // 0x04DC (0x04)
    int32 AppliedStorageExtraRowNum;                                                           // 0x04E0 (0x04)
    TArray<Vector2D> TeamMemberDeathLocationArray;                                             // 0x04E8 (0x10)
    TArray<int32> TeamAreaIDArray;                                                             // 0x04F8 (0x10)
    FMulticastDelegate OnAreaIDArrayChange;                                                    // 0x0508 (0x10)
    FMulticastDelegate OnTeamMemberKillOther;                                                  // 0x0518 (0x10)
    FMulticastDelegate OnTeamMemberCauseDamage;                                                // 0x0528 (0x10)
    FMulticastDelegate OnTeamMemberAddInventory;                                               // 0x0538 (0x10)

    // --- Functions ---
    void UpdateTeamStorageSearchingStateByPS(PlayerState* PlayerState);                        // [Public] RVA: 0x5FDF82C
    void SetTotalTeamStorageValue(int32 InTeamStorageTotalValue);                              // [Final|Public] RVA: 0x610EF0C
    void SetTeamStorageValue(int32 InTeamStorageValue);                                        // [Final|Public] RVA: 0x610EE74
    void SetTeamMemberDeathLocationArray(int32 PlayerIndex, Vector2D Pos);                     // [Final|Public] RVA: 0x610ED90
    void SetTeamAreaIDArray(int32 PlayerIndex, int32 AreaID);                                  // [Final|Public] RVA: 0x610ECA8
    void SetStartPointGroupIndex(int32 InIndex);                                               // [Final|Public] RVA: 0x610EC04
    void SetOpenContainerLootProtectByTeammate(bool InOpenContainerLootProtectByTeammate);     // [Final|Public] RVA: 0x610EB68
    void SetInBattleTeamMemberPlayerCondition(int32 PlayerIndex, enum Condition);              // [Final|Public] RVA: 0x610EA80
    void SetConfirmedPerkID(SGCharacter* Character, int32 PerkID);                             // [Final|Public] RVA: 0x610E5C4
    void SetAIGroupInfo(NPCAITeam* InAIGroupInfo);                                             // [Final|Public] RVA: 0x610E52C
    void ServerSetTeamMemberDeathLocationArray(int32 PlayerIndex, Vector2D Pos);               // [Public] RVA: 0x610E418
    void ServerClearTeamMemberInfo(int32 PlayerIndex);                                         // [Final|Public] RVA: 0x610B33C
    void RemoveOBTeamMemberPlayer(Controller* C);                                              // [Final|Public] RVA: 0x610E174
    void PlayerFinishGame(PlayerController* C, enum FinishType, Actor* EscapeVolume);          // [Public] RVA: 0x610DF2C
    void OnRoundGamePrepare();                                                                 // [Public] RVA: 0x1516400
    void OnRep_TotalTeamStorageValue();                                                        // [Final|Public] RVA: 0x2073B58
    void OnRep_TeamStorageValue();                                                             // [Final|Public] RVA: 0x2073BB8
    void OnRep_TeamMemberStorageArr();                                                         // [Final|Public] RVA: 0x610DC30
    void OnRep_TeamMemberSignArray();                                                          // [Final|Public] RVA: 0x1E6B658
    void OnRep_TeamMemberPlayerState();                                                        // [Final|Public] RVA: 0x1FC7520
    void OnRep_TeamMemberAICharacters();                                                       // [Final|Public] RVA: 0x1E26B80
    void OnRep_TeamLevel();                                                                    // [Final|Public] RVA: 0x610DBCC
    void OnRep_TeamIndex();                                                                    // [Final|Public] RVA: 0x1F6C6A4
    void OnRep_TeamExp();                                                                      // [Final|Public] RVA: 0x610DBCC
    void OnRep_TeamConfirmedPerkID();                                                          // [Final|Public] RVA: 0x610DBB8
    void OnRep_TeamAreaID(const TArray<int32> OldValue);                                       // [Final|Public] RVA: 0x1D3AE88
    void OnRep_InBattleTeamMemberPlayerStates();                                               // [Final|Public] RVA: 0x1515B78
    void OnRep_InBattleTeamMemberPlayerNames();                                                // [Final|Public] RVA: 0x1E5442C
    void OnRep_InBattleTeamMemberPlayerCondition();                                            // [Final|Public] RVA: 0x208DD60
    void OnRep_InBattleTeamMemberNationalFlagIsos();                                           // [Final|Public] RVA: 0x220C628
    void OnRep_InBattleTeamMemberIconInfo();                                                   // [Final|Public] RVA: 0x1FF0964
    void OnRep_InBattleTeamMemberBannerInfo();                                                 // [Final|Public] RVA: 0x1C39CF4
    void OnRebornSaftyStateChanged(PlayerController* PlayerController, bool IsInRebornSafty);  // [Final|Public] RVA: 0x5EF7344
    void OnPlayerAddToTeam(Actor* C);                                                          // [Public] RVA: 0x5FE0804
    void OnInventoryParentActorChanged(SGInventory* InvActor, Actor* PreParentActor, Actor* ParentActor, int32 InParentIndex);  // [Final|Public] RVA: 0x610D248
    void MulticastInBattleTeamMemberPlayerStates(const TArray<PlayerState*> PlayerStates);     // [Public] RVA: 0x1515708
    bool IsGIDInTeam(int64 gid);                                                               // [Final|Public] RVA: 0x610CE0C
    bool IsFriendlyToAll();                                                                    // [Public] RVA: 0x610CDE4
    void InitTeamStorageBox();                                                                 // [Public] RVA: 0x5ED15B4
    void InitTeamStorage();                                                                    // [Public] RVA: 0x209D128
    uint32 GetUnSettmentTeamMembersCount();                                                    // [Public] RVA: 0x610CDBC
    int32 GetTeamStorageValue(bool bIncludeRatio);                                             // [Public] RVA: 0x610CCCC
    int32 GetTeamStorageTotalValue();                                                          // [Final|Public] RVA: 0x610CCB4
    float GetTeamStorageRatio();                                                               // [Public] RVA: 0x610CC88
    int32 GetTeamStorageExtraRowNum();                                                         // [Final|Public] RVA: 0x610CC64
    int32 GetTeamStorageAvgNum();                                                              // [Public] RVA: 0x610CC3C
    SGInventory* GetTeamStorage();                                                             // [Final|Public] RVA: 0x610CC24
    int32 GetTeamSignTypeMemberByIndex(int32 Index);                                           // [Final|Public] RVA: 0x610CB34
    int32 GetTeamPlayerNationalFlagIsoByIndex(int32 PlayerIndex);                              // [Final|Public] RVA: 0x610CA5C
    FString GetTeamPlayerNameByIndex(int32 PlayerIndex);                                       // [Final|Public] RVA: 0x209D3C8
    int64 GetTeamPlayerGIDByIndex(int32 PlayerIndex);                                          // [Final|Public] RVA: 0x610C9B4
    int32 GetTeamMemberStorageValue(int64 gid);                                                // [Public] RVA: 0x610C8D0
    int32 GetTeamMemberStorageExtraRowNum();                                                   // [Final|Public] RVA: 0x610C8AC
    SGInventory* GetTeamMemberStorage(int64 gid);                                              // [Final|Public] RVA: 0x610C804
    Vector2D GetTeamMemberSignArrayVectorByIndex(int32 Index);                                 // [Public] RVA: 0x610C75C
    TArray<Vector2D> GetTeamMemberSignArray();                                                 // [Public] RVA: 0x610C68C
    uint32 GetTeamMembersCount();                                                              // [Final|Public] RVA: 0x283AE68
    TArray<PlayerState*> GetTeamMemberPlayerStates();                                          // [Final|Public] RVA: 0x610C670
    TArray<ASGPlayerData> GetTeammemberPlayerInfoArray();                                      // [Public] RVA: 0x610CD7C
    int32 GetTeamMemberIndexByGID(int64 gid);                                                  // [Final|Public] RVA: 0x610C5C8
    int32 GetTeamMemberIndex(PlayerState* PS);                                                 // [Final|Public] RVA: 0x610C520
    int32 GetTeamMemberFinalTeamBoxReward(int64 gid);                                          // [Public] RVA: 0x610C470
    Vector2D GetTeamMemberDeathLocationByIndex(int32 Index);                                   // [Final|Public] RVA: 0x610C3CC
    TArray<Vector2D> GetTeamMemberDeathLocationArray();                                        // [Final|Public] RVA: 0x610C3B0
    enum GetTeamMemberConditionByIndex(int32 Index);                                           // [Final|Public] RVA: 0x20E1C20
    TArray<enum> GetTeamMemberCondition();                                                     // [Final|Public] RVA: 0x610C28C
    TArray<Character*> GetTeamMemberCharacters();                                              // [Public] RVA: 0x610C25C
    PlayerState* GetTeamMemberByIndex(int32 Index);                                            // [Final|Public] RVA: 0x20DB388
    SGAICharacter* GetTeamMemberAICharactersByGID(uint64 gid);                                 // [Final|Public] RVA: 0x610C1B4
    TArray<SGAICharacter*> GetTeamMemberAICharacters();                                        // [Final|Public] RVA: 0x610C160
    int32 GetTeamLevel();                                                                      // [Final|Public] RVA: 0x610C148
    int32 GetTeamIndex();                                                                      // [Final|Public] RVA: 0x610C130
    int32 GetTeamIDMemberByIndex(int32 Index);                                                 // [Final|Public] RVA: 0x610C05C
    TArray<int64> GetTeamGuidIncludeNotConnect();                                              // [Final|Public] RVA: 0x610BF0C
    int32 GetTeamExp();                                                                        // [Final|Public] RVA: 0x610BEF4
    TArray<int64> GetSuccessTeamMemberGIDArr();                                                // [Final|Public] RVA: 0x610BDA4
    int32 GetStartPointGroupIndex();                                                           // [Final|Public] RVA: 0x610BD8C
    int32 GetPlayerVisualIdx(int64 Guid);                                                      // [Final|Public] RVA: 0x610BCE4
    void GetPlayerOwnStorageInventorySourceInfo(PlayerState* PS, out TArray<InventorySourceInfo> InventorySourceInfos);  // [Public] RVA: 0x610BBD0
    int32 GetPlayerInSquadIndex(PlayerState* PS);                                              // [Final|Public] RVA: 0x610BB28
    void GetOwnStorageItems(PlayerState* PS, out TArray<SGPlayerItemInfoBase*> OutItemsInfo);  // [Public] RVA: 0x610BA14
    TArray<Actor*> GetOBTeamMembers();                                                         // [Final|Public] RVA: 0x610B9F8
    uint32 GetNumHumans();                                                                     // [Final|Public] RVA: 0x610B9D4
    uint32 GetNoDBNOTeamMembersCount(Controller* ExceptPlayer);                                // [Public] RVA: 0x610B924
    int32 GetInBattleTeamMembersIndex(PlayerState* PS);                                        // [Final|Public] RVA: 0x1D3AAA0
    TArray<PlayerState*> GetInBattleTeamMemberPlayerStates();                                  // [Final|Public] RVA: 0x610B908
    TArray<int32> GetInBattleTeamMemberPlayerNationalFlagIsos();                               // [Final|Public] RVA: 0x610B8EC
    TArray<FString> GetInBattleTeamMemberNames();                                              // [Final|Public] RVA: 0x610B8D0
    TArray<SGPlayerIconInfo> GetInBattleTeamMemberIconInfo();                                  // [Final|Public] RVA: 0x610B8B4
    TArray<SGPlayerBannerInfo> GetInBattleTeamMemberBannerInfo();                              // [Final|Public] RVA: 0x610B898
    int32 GetInBattlePlayerIndexByPS(PlayerState* CurPlayerState);                             // [Final|Public] RVA: 0x610B750
    int32 GetExpToNextLevel();                                                                 // [Final|Public] RVA: 0x610B700
    float GetExpPercentFromCurrentLevel();                                                     // [Final|Public] RVA: 0x610B6D8
    void GetExpInLevelInfo(out int32 OutCurExpInLevel, out int32 OutMaxExpOfLevel);            // [Final|Public] RVA: 0x610B5D8
    int32 GetAreaIDByIndex(int32 Index);                                                       // [Final|Public] RVA: 0x610B530
    TArray<TeamMemberStorageValue> GetAllTeamMemberStorageValues();                            // [Public] RVA: 0x610B440
    TArray<int64> GetAllTeammateGID();                                                         // [Final|Public] RVA: 0x1FF1EEC
    uint32 GetAliveTeamMembersCount();                                                         // [Public] RVA: 0x610B418
    NPCAITeam* GetAIGroupInfo();                                                               // [Final|Public] RVA: 0x610B400
    void ClearTeamMemberInfo(int32 PlayerIndex);                                               // [Public] RVA: 0x610B33C
    void AIFinishGame(Controller* C, enum FinishType, Actor* EscapeVolume);                    // [Public] RVA: 0x6109D40
    void AIEscaped(Character* AICharacter, Actor* EscapeVolume);                               // [Public] RVA: 0x6109C54
    void AddTGRSuccessLevelMember(int64 gid);                                                  // [Final|Public] RVA: 0x6109FC4
    void AddTeamGuidIncludeNotConnect(int64 NewGuid);                                          // [Final|Public] RVA: 0x610A20C
    void AddTeamExp(int32 ExpAmount);                                                          // [Final|Public] RVA: 0x610A090
    void AddOBTeamMemberPlayer(Controller* C);                                                 // [Final|Public] RVA: 0x6109E74
};

// ============================================================
// Inheritance: SGWeapon : SGInventory : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGWeapon : public SGInventory {
public:
    enum WeaponType;                                                                           // 0x08F8 (0x01)
    enum GunWeaponSubType;                                                                     // 0x08F9 (0x01)
    enum MeleeWeaponSubType;                                                                   // 0x08FA (0x01)
    enum MeleeWeaponAnimType;                                                                  // 0x08FB (0x01)
    bool IsUseWalkHandIkAdditiveInSprint;                                                      // 0x08FC (0x01) BitMask: 0xFF
    enum WeaponDetectorType;                                                                   // 0x08FD (0x01)
    bool bValuableInventoryMeleeWeapon;                                                        // 0x08FE (0x01) BitMask: 0xFF
    bool bThrowableWeaponHasFired;                                                             // 0x08FF (0x01) BitMask: 0xFF
    bool bThrowFireRollbackNotify;                                                             // 0x0900 (0x01) BitMask: 0xFF
    SGWeaponViewEffectComponent* CurrentWeaponViewEffectComp;                                  // 0x0908 (0x08)
    FMulticastDelegate OnProcessWeaponInnerEvent;                                              // 0x0918 (0x10)
    FMulticastDelegate OnFinishAssemble;                                                       // 0x0928 (0x10)
    FMulticastDelegate ChangeWeaponOwner;                                                      // 0x0938 (0x10)
    FMulticastDelegate OnWeaponAdapterAssembled;                                               // 0x0948 (0x10)
    FMulticastDelegate OnWeaponLeftHandMeshActive;                                             // 0x0958 (0x10)
    FMulticastDelegate OnWeaponAdapterDisassembled;                                            // 0x0968 (0x10)
    FMulticastDelegate OnMeleeWeaponCanReenterFire;                                            // 0x0978 (0x10)
    FMulticastDelegate OnMeleeWeaponCanNextPhase;                                              // 0x0988 (0x10)
    FMulticastDelegate OnMeleeWeaponCanNotNextPhase;                                           // 0x0998 (0x10)
    FMulticastDelegate OnEnterAnimRecovery;                                                    // 0x09A8 (0x10)
    FMulticastDelegate OnAnimationSetLoaded;                                                   // 0x09B8 (0x10)
    FMulticastDelegate OnWeaponMergeFinished;                                                  // 0x09C8 (0x10)
    FMulticastDelegate OnAllWeaponMeshLoaded;                                                  // 0x09D8 (0x10)
    FMulticastDelegate OnWeaponLeftHandMeshLoaded;                                             // 0x09E8 (0x10)
    FMulticastDelegate OnSightListChanged;                                                     // 0x09F8 (0x10)
    FMulticastDelegate OnWeaponRemoved;                                                        // 0x0A08 (0x10)
    FMulticastDelegate OnWeaponAttachedToHand;                                                 // 0x0A18 (0x10)
    FMulticastDelegate OnWeaponDetachedFromHand;                                               // 0x0A28 (0x10)
    FMulticastDelegate OnWeaponPlayedMontage;                                                  // 0x0A38 (0x10)
    FMulticastDelegate OnWeaponPlayedLeftMeshMontage;                                          // 0x0A48 (0x10)
    FMulticastDelegate OnZoomProgressChanged;                                                  // 0x0A58 (0x10)
    FMulticastDelegate OnWeaponAdapterDetach;                                                  // 0x0A68 (0x10)
    FMulticastDelegate OnUpdateExtraMeshInfo;                                                  // 0x0A78 (0x10)
    TSet<uint32> NeedRecoverTickComponentsSet;                                                 // 0x0AE8 (0x50)
    TArray<Character*> EnemyCharacters;                                                        // 0x0B40 (0x10)
    float EngageAngle;                                                                         // 0x0B50 (0x04)
    SGWeaponRecoilDataAsset_HD* RecoilData;                                                    // 0x0B58 (0x08)
    TMap<int64, SGWeaponRecoilDataAsset_HD*> RecoilDataOverrideMap;                            // 0x0B60 (0x50)
    SGWeaponRecoilDataAsset_HD* ActiveRecoilData;                                              // 0x0BB0 (0x08)
    CurveLinearColor* WeaponStabilityToBreathScaleCurve;                                       // 0x0BB8 (0x08)
    CurveFloat* WeaponStabilityToImpactResistanceCurve;                                        // 0x0BC0 (0x08)
    SGCharacter* CurrentEngageEnemy;                                                           // 0x0BD0 (0x08)
    SGCharacter* DestWeaponCharacter;                                                          // 0x0BE0 (0x08)
    SGWeaponAssembleComponent* WeaponAssembleComp;                                             // 0x0BF0 (0x08)
    SGWeaponMeshComponent* WeaponMeshComp;                                                     // 0x0BF8 (0x08)
    SGWeaponMergeComponent* WeaponMergeComp;                                                   // 0x0C00 (0x08)
    SGWeaponZoomComponent* WeaponZoomComp;                                                     // 0x0C08 (0x08)
    SGWeaponFiringComponent* WeaponFiringComp;                                                 // 0x0C10 (0x08)
    SGWeaponImpactComponent* WeaponImpactComp;                                                 // 0x0C18 (0x08)
    SGWeaponRecoilComponent* WeaponRecoilComp;                                                 // 0x0C20 (0x08)
    SGUAMWeaponAnimationComponent* WeaponAnimationComp;                                        // 0x0C28 (0x08)
    SGWeaponAppearanceComponent* WeaponAppearanceComp;                                         // 0x0C30 (0x08)
    SGWeaponMovementComponent* WeaponMovementComp;                                             // 0x0C38 (0x08)
    SGWeaponBoreComponent* WeaponBoreComp;                                                     // 0x0C40 (0x08)
    SGWeaponFireIntervalComponent* WeaponFireIntervalComp;                                     // 0x0C48 (0x08)
    SGGunSoundComponent* GunSoundComp;                                                         // 0x0C50 (0x08)
    SGUAMWeaponModifyBoneComponent* ModifyBoneComp;                                            // 0x0C58 (0x08)
    SGWeaponCameraComponent* WeaponCameraComp;                                                 // 0x0C60 (0x08)
    SGWeaponSpreadComponent* WeaponSpreadComp;                                                 // 0x0C68 (0x08)
    SGWeaponAmmoComponent* WeaponAmmoComp;                                                     // 0x0C70 (0x08)
    SGWeaponDurabilityComponent* WeaponDurabilityComp;                                         // 0x0C78 (0x08)
    SGWeaponValidationComponent* WeaponValidationComp;                                         // 0x0C80 (0x08)
    SGWeaponTacticalInvStateComponent* WeaponTacticalInvStateComp;                             // 0x0C88 (0x08)
    SGWeaponHeatComponent_HD* WeaponHeatComp;                                                  // 0x0C90 (0x08)
    AbilitySystemComponent* WeaponASC;                                                         // 0x0C98 (0x08)
    enum WeaponCustomSkill;                                                                    // 0x0CA0 (0x01)
    TArray<ActorComponent*> FlashLightComponents;                                              // 0x0CA8 (0x10)
    bool bWeaponCanTacticalPistol;                                                             // 0x0CC0 (0x01) BitMask: 0x01
    bool bIgnoreWeaponLODPolicy;                                                               // 0x0CC0 (0x01) BitMask: 0x02
    bool bLeverAction;                                                                         // 0x0CC0 (0x01) BitMask: 0x04

    // --- Functions ---
    void SetNeedUpdateMeshInScope(bool InbNeedUpdate);                                         // [Final|Public] RVA: 0x6129538
    void RefreshAllComponents();                                                               // [Public] RVA: 0x15B37F0
    void OnRep_ThrowFireRollbackNotify();                                                      // [Final|Protected] RVA: 0x396F680
    void OnRep_DestWeaponCharacter();                                                          // [Final|Public] RVA: 0x1699BA4
    void OnDetachedFromHand();                                                                 // [Final|Protected] RVA: 0x1C0EC70
    void OnAttachedToHand();                                                                   // [Final|Protected] RVA: 0x1C0EAF8
    void MergeWeaponPIE();                                                                     // [Final|Public] RVA: 0x20280C8
    bool IsLeverAction();                                                                      // [Final|Public] RVA: 0x6129148
    SGWeaponZoomComponent* GetWeaponZoomComp();                                                // [Final|Public] RVA: 0x6128BA4
    enum GetWeaponType();                                                                      // [Final|Public] RVA: 0x6128B8C
    SGWeaponTacticalInvStateComponent* GetWeaponTacticalInvStateComp();                        // [Final|Public] RVA: 0x6128B68
    SGWeaponSpreadComponent* GetWeaponSpreadComp();                                            // [Final|Public] RVA: 0x6128B44
    SGWeaponRecoilComponent* GetWeaponRecoilComp();                                            // [Final|Public] RVA: 0x6128B20
    SGWeaponMovementComponent* GetWeaponMovementComp();                                        // [Final|Public] RVA: 0x6128AFC
    SGWeaponMeshComponent* GetWeaponMeshComp();                                                // [Final|Public] RVA: 0x6128AD8
    SGWeaponMergeComponent* GetWeaponMergeComp();                                              // [Final|Public] RVA: 0x6128AB4
    SGWeaponImpactComponent* GetWeaponImpactComp();                                            // [Final|Public] RVA: 0x6128A90
    SGWeaponHeatComponent_HD* GetWeaponHeatComp();                                             // [Final|Public] RVA: 0x6128A6C
    SGWeaponFiringComponent* GetWeaponFiringComp();                                            // [Final|Public] RVA: 0x6128A48
    SGWeaponFireIntervalComponent* GetWeaponFireIntervalComp();                                // [Final|Public] RVA: 0x6128A24
    SGWeaponDurabilityComponent* GetWeaponDurabilityComp();                                    // [Final|Public] RVA: 0x6128A00
    enum GetWeaponDetectorType();                                                              // [Final|Public] RVA: 0x61289E8
    bool GetWeaponCanTacticalPistol();                                                         // [Final|Public] RVA: 0x61289CC
    SGWeaponCameraComponent* GetWeaponCameraComp();                                            // [Final|Public] RVA: 0x61289A8
    SGWeaponBoreComponent* GetWeaponBoreComp();                                                // [Final|Public] RVA: 0x6128984
    int64 GetWeaponAssembleID();                                                               // [Final|Public] RVA: 0x612896C
    SGWeaponAssembleComponent* GetWeaponAssembleComp();                                        // [Final|Public] RVA: 0x6128948
    SGWeaponAppearanceComponent* GetWeaponAppearanceComp();                                    // [Final|Public] RVA: 0x6128924
    SGUAMWeaponAnimationComponent* GetWeaponAnimationComp();                                   // [Final|Public] RVA: 0x6128900
    SGWeaponAmmoComponent* GetWeaponAmmoComp();                                                // [Final|Public] RVA: 0x61288DC
    bool GetNeedUpdateMeshInScope();                                                           // [Final|Public] RVA: 0x6128208
    SGUAMWeaponModifyBoneComponent* GetModifyBoneComp();                                       // [Final|Public] RVA: 0x61281E4
    enum GetMeleeWeaponSubType();                                                              // [Final|Public] RVA: 0x6128110
    enum GetMeleeWeaponAnimType();                                                             // [Final|Public] RVA: 0x61280F8
    bool GetIsUseWalkHandIkAdditiveInSprint();                                                 // [Final|Public] RVA: 0x6127FE0
    bool GetIgnoreWeaponLODPolicy();                                                           // [Final|Public] RVA: 0x6127FC4
    enum GetGunWeaponSubType();                                                                // [Final|Public] RVA: 0x6127FAC
    SGGunSoundComponent* GetGunSoundComp();                                                    // [Final|Public] RVA: 0x6127F88
};

// ============================================================
// Inheritance: SGWeaponAssembleEnvironment : SGAssembleBase : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGWeaponAssembleEnvironment : public SGAssembleBase {
public:
    bool CaputureInited;                                                                       // 0x0770 (0x01) BitMask: 0xFF
    float Saturate;                                                                            // 0x0774 (0x04)
    int32 MarginPixel;                                                                         // 0x0778 (0x04)
    TMap<FString, CachedRTInfo> CachedRTInfoMap;                                               // 0x0780 (0x50)
    bool SaveRT;                                                                               // 0x07F0 (0x01) BitMask: 0xFF
    bool SaveRTUsingItemID;                                                                    // 0x07F1 (0x01) BitMask: 0xFF
    bool AutoCalcZeroRotator;                                                                  // 0x07F3 (0x01) BitMask: 0xFF
    float RTWidthForUnassembled;                                                               // 0x07F4 (0x04)
    float RTWidth;                                                                             // 0x07F8 (0x04)
    bool bGenerateMipmap;                                                                      // 0x07FC (0x01) BitMask: 0xFF
    CurveFloat* ScaleCurve;                                                                    // 0x0800 (0x08)
    DataTable* RotatorConf;                                                                    // 0x0808 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent;                                            // 0x0810 (0x08)
    bool UseCache;                                                                             // 0x0818 (0x01) BitMask: 0xFF
    bool UseLocalImage;                                                                        // 0x0819 (0x01) BitMask: 0xFF
    bool DebugEnableCapture;                                                                   // 0x081A (0x01) BitMask: 0xFF
    bool bResetMesh;                                                                           // 0x081B (0x01) BitMask: 0xFF
    TArray<int64> DebugTestItemID;                                                             // 0x0820 (0x10)
    FString DebugTestUniqueID;                                                                 // 0x0830 (0x10)
    int32 DebugTestFullWeaponID;                                                               // 0x0840 (0x04)
    bool bForceReplaceWeaponAdapterIcon;                                                       // 0x0844 (0x01) BitMask: 0xFF
    bool bForceReplaceUnassembledArmorIcon;                                                    // 0x0845 (0x01) BitMask: 0xFF
    bool bForceReplaceAssembledWeapon;                                                         // 0x0846 (0x01) BitMask: 0xFF
    bool bDebugWeaponCaptureSize;                                                              // 0x0849 (0x01) BitMask: 0xFF
    DataTable* DebugWeaponCaptureSizeTable;                                                    // 0x0850 (0x08)
    MaterialInterface* MaterialTemplate;                                                       // 0x0858 (0x08)
    bool bEnableShadow;                                                                        // 0x0860 (0x01) BitMask: 0xFF
    int32 CacheValidateTime;                                                                   // 0x0864 (0x04)
    MaterialParameterCollection* MaterialParameterCollection;                                  // 0x0868 (0x08)
    Rotator ExBaseMeshRot;                                                                     // 0x0870 (0x0C)
    Vector ExCameraPosForCollapseHelmet;                                                       // 0x087C (0x0C)
    Vector ExCameraPosForCollapseWeapon;                                                       // 0x0888 (0x0C)
    int32 GridSize;                                                                            // 0x0894 (0x04)
    Rotator Rot_1x1;                                                                           // 0x0898 (0x0C)
    Rotator Rot_1x2;                                                                           // 0x08A4 (0x0C)
    Rotator Rot_1x3;                                                                           // 0x08B0 (0x0C)
    float NearClippingPlaneForUnassembledAdapter;                                              // 0x08BC (0x04)
    Vector2D DefineRTSize;                                                                     // 0x08C4 (0x08)
    SphereReflectionCaptureComponent* CaptureComponent;                                        // 0x08D0 (0x08)
    bool bAutoCapture;                                                                         // 0x08D8 (0x01) BitMask: 0xFF
    TArray<FString> ExistOfflineIcons;                                                         // 0x08E0 (0x10)
    TMap<SGInventory*, uint64> LoadedInventoryIDMap;                                           // 0x08F0 (0x50)
    TArray<SGPlayerItemInfoBase*> PendingItemQueue;                                            // 0x0940 (0x10)
    bool bGenSkinInv;                                                                          // 0x09C0 (0x01) BitMask: 0xFF
    bool bRestrictMaxPixel;                                                                    // 0x09C1 (0x01) BitMask: 0xFF
    int32 MaxPixelPerGrid;                                                                     // 0x09C4 (0x04)
    int32 MaxPixel;                                                                            // 0x09C8 (0x04)
    int32 MaxPixel_1x1;                                                                        // 0x09CC (0x04)
    bool bSaveUnassembledAdapter;                                                              // 0x09D0 (0x01) BitMask: 0xFF
    TArray<ActorComponent*> ActorComps;                                                        // 0x09D8 (0x10)
    TMap<SGInventory*, ImageWaitCap> WeaponWaitCaptureMap;                                     // 0x09E8 (0x50)
    SceneComponent* PivotComp;                                                                 // 0x0A60 (0x08)
    int32 MaxCachedMaterailNumInLobby;                                                         // 0x0ABC (0x04)
    int32 MaxCachedMaterailNumInBattle;                                                        // 0x0AC0 (0x04)
    int32 MaxCachedMaterailSizeInLobby;                                                        // 0x0AC4 (0x04)
    TArray<SGWeaponAssembleEnvironment*> AssembleEnvs;                                         // 0x0AC8 (0x10)
    bool ShouldCheckExist;                                                                     // 0x0B28 (0x01) BitMask: 0xFF
    bool IsEditorTool;                                                                         // 0x0B29 (0x01) BitMask: 0xFF
    float MaxAllowStreamingTime;                                                               // 0x0B38 (0x04)
    bool CreateInvsFinished;                                                                   // 0x0B3D (0x01) BitMask: 0xFF
    bool CreateWeaponWaitCaptureMapFinished;                                                   // 0x0B3E (0x01) BitMask: 0xFF
    bool IgnoreOfflineIcon;                                                                    // 0x0B3F (0x01) BitMask: 0xFF
    SGWeaponAssembleEnvironmentManager* EnvManager;                                            // 0x0B44 (0x08)

    // --- Functions ---
    void SetUseCache(bool bUse);                                                               // [Final|Public] RVA: 0x61311AC
    void SetupLightingBeforeCapture(SGInventory* InInventory);                                 // [Public] RVA: 0x1F1DAF8
    void SetTextureParameterValue(MaterialInstanceDynamic* AssembleRTMaterial, Texture* Texture);  // [Final|Protected] RVA: 0x61310C8
    void SetOverrideLightGroupType(enum InOverrideLightGroupType);                             // [Final|Protected] RVA: 0x6131034
    void SetCameraPos(SceneCaptureComponent2D* SceneCaptureComp, Vector Pos, Vector Offset);   // [Final|Protected] RVA: 0x6130CD0
    void ResetRT(Box Box, SceneCaptureComponent2D* SceneCaptureComp, float ImgWidth, bool UseViewportSize, bool UseDefine);  // [Final|Protected] RVA: 0x61300D0
    void ReleaseRT(Image* Image);                                                              // [Final|Public] RVA: 0x612FA68
    bool RefreshWeaponWithImage(SGInventory* InInventory, Object* Image, bool bSaveRT, Rotator TargetRot, float CameraPosX);  // [Final|Public] RVA: 0x612F86C
    void InitalizeAssembleSystem(SGInventory* InInventory);                                    // [Final|Public] RVA: 0x612F104
    void ClearLoadedInv();                                                                     // [Final|Public] RVA: 0x612DD30
    void CaptureWeaponToRT();                                                                  // [Final|Protected] RVA: 0x612DCF4
    bool CaptureAlways(bool bAlways);                                                          // [Final|Public] RVA: 0x612DA48
    void CancelRenderImg(Image* TargetImg);                                                    // [Final|Public] RVA: 0x612D9AC
    void AllocateRT(FString UniqueID);                                                         // [Final|Public] RVA: 0x612D8F8
    void AdjustCameraNearClippingPlane();                                                      // [Final|Protected] RVA: 0x612D5F0
    void AddLoadedInv(SGInventory* Inv, int32 ItemId);                                         // [Final|Public] RVA: 0x612D358
};

// ============================================================
// Inheritance: SGWeaponAssembleEnvironmentManager : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGWeaponAssembleEnvironmentManager : public Actor {
public:
    TMap<FString, CachedRTInfo> CachedRTInfoMap;                                               // 0x0318 (0x50)
    TMap<SGInventory*, ImageWaitCap> WeaponWaitCaptureMap;                                     // 0x0368 (0x50)
    int32 MaxPoolNum;                                                                          // 0x03B8 (0x04)
    float EnvTimeoutSeconds;                                                                   // 0x03BC (0x04)
    TSubclassOf<SGWeaponAssembleEnvironment> AssembleEnvClass;                                 // 0x03C8 (0x08)
    TArray<SGWeaponAssembleEnvironment*> AssembleEnvPool;                                      // 0x03D0 (0x10)
    TArray<SGWeaponAssembleEnvironment*> WorkingAssembleEnvList;                               // 0x03E0 (0x10)
    TArray<SGWeaponAssembleEnvironment*> AllAssembleEnvList;                                   // 0x03F0 (0x10)
    TMap<SGWeaponAssembleEnvironment*, float> WorkingEnvUseTimeMap;                            // 0x0400 (0x50)

    // --- Functions ---
    void StartAutoCapture();                                                                   // [Final|Public] RVA: 0x6134C5C
    void ReleaseRT(Image* Image);                                                              // [Final|Public] RVA: 0x179148C
    bool RefreshWeaponWithImage(SGInventory* InInventory, Object* Image, bool bSaveRT, Rotator TargetRot, float CameraPosX);  // [Final|Public] RVA: 0x61343E4
    void OnWeaponLoadComplete(FString UniqueID, SGAssembleBase* AssembleEnv);                  // [Final|Public] RVA: 0x21F0AD8
    bool IsManagedEnv(SGWeaponAssembleEnvironment* env);                                       // [Final|Public] RVA: 0x613406C
    void CancelRenderImg(Image* TargetImg);                                                    // [Final|Public] RVA: 0x61335E8
    void AllocateRT(FString UniqueID);                                                         // [Final|Public] RVA: 0x6133400
};

// ============================================================
// Inheritance: SGWorldSettingsActor : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGWorldSettingsActor : public Actor {
public:
    TArray<TSubclassOf<ActorComponent>> WorldSettingsComponentClasses;                         // 0x0318 (0x10)
    TArray<ActorComponent*> WorldSettingsComponents;                                           // 0x0328 (0x10)
};

// ============================================================
// Inheritance: CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/UAGame
// ============================================================
class CAAICharacter : public SGAICharacter {
public:
    uint32 AimingRotationOffset;                                                               // 0x2340 (0x04)
    bool bUseInterpConstant;                                                                   // 0x2350 (0x01) BitMask: 0xFF

    // --- Functions ---
    void OnRep_AimingRotationOffset();                                                         // [Final|Protected] RVA: 0x1218FA4
    void DisablePartCollision(FName BoneName);                                                 // [Final|Public] RVA: 0x6B70AC4
};

// ============================================================
// Inheritance: CAAssembleEnvironment : SGWeaponAssembleEnvironment : SGAssembleBase : Actor : Object
// Package: /Script/UAGame
// ============================================================
class CAAssembleEnvironment : public SGWeaponAssembleEnvironment {
public:
    float ForceActiveTime;                                                                     // 0x0B50 (0x04)
    int32 ForcedLodModel;                                                                      // 0x0B54 (0x04)
    float RotateSpeed;                                                                         // 0x0B58 (0x04)
    float CameraPosXOffset;                                                                    // 0x0B5C (0x04)
    float CameraPosXRate;                                                                      // 0x0B60 (0x04)
    float CameraPosXItemGridRate;                                                              // 0x0B64 (0x04)
    float WeaponOffsetRate;                                                                    // 0x0B68 (0x04)
    float WeaponOffset;                                                                        // 0x0B6C (0x04)
    float CamMaxRate;                                                                          // 0x0B70 (0x04)
    float CamMinRate;                                                                          // 0x0B74 (0x04)
    DataTable* CameraPosXOverrideConf;                                                         // 0x0B78 (0x08)
    TMap<FString, CaptureCameraConf> ExtraCaptureCameraConfMap;                                // 0x0B80 (0x50)
    bool bAllowCacheShowInfo;                                                                  // 0x0BD0 (0x01) BitMask: 0xFF
    int32 ShowType;                                                                            // 0x0BD4 (0x04)
    SceneComponent* RotateComp;                                                                // 0x0BD8 (0x08)
    MaterialInstanceDynamic* AssembleRTMaterial;                                               // 0x0BE0 (0x08)
    Object* CacheImage;                                                                        // 0x0C28 (0x08)
    SGInventory* CacheInventory;                                                               // 0x0C30 (0x08)

    // --- Functions ---
    bool SetItemWithImage(SGInventory* InInventory, Object* Image);                            // [Final|Public] RVA: 0x6B73208
    void SetDefineSize(Vector2D DefineSize);                                                   // [Final|Public] RVA: 0x6B73050
    void ResetCacheShowInfo();                                                                 // [Final|Public] RVA: 0x6B722E4
    void OnScroll(float Rate);                                                                 // [Final|Public] RVA: 0x6B72248
    void OnInputTouchPC(uint8 Handle, uint8 Type, const Vector Location);                      // [Final|Public] RVA: 0x6B71F9C
    void ClearCache();                                                                         // [Final|Public] RVA: 0x6B70894
    bool CheckOnLoading();                                                                     // [Final|Public] RVA: 0x6B706E8
    void CaptureExtra(TMap<FString, Object*> ImageMap);                                        // [Final|Public] RVA: 0x6B704C0
};

// ============================================================
// Inheritance: CAMeshDrawStatsActor : Actor : Object
// Package: /Script/UAGame
// ============================================================
class CAMeshDrawStatsActor : public Actor {
public:

    // --- Functions ---
    void OnGameFlowStateChanged(FName NewState, FName OldState);                               // [Final|Public] RVA: 0x22E3248
};

// ============================================================
// Inheritance: QuestManagerActor : MFQuestManagerActor : Actor : Object
// Package: /Script/UAGame
// ============================================================
class QuestManagerActor : public MFQuestManagerActor {
public:
    DataTable* QuestTable;                                                                     // 0x0328 (0x08)
    DataTable* ActQuestTemplateTable;                                                          // 0x0330 (0x08)
    TArray<int32> TraceTasks;                                                                  // 0x0338 (0x10)
    int32 MaxTraceNum;                                                                         // 0x0348 (0x04)
    TSubclassOf<MFQuestBase> DummyQuestClass;                                                  // 0x0350 (0x08)
    TArray<int32> TutorialHintItemIDs;                                                         // 0x0358 (0x10)
    TArray<enum> TutorialHintSelfBagWidgetIDs;                                                 // 0x0368 (0x10)
    TArray<enum> TutorialHintCorpseBagWidgetIDs;                                               // 0x0378 (0x10)
    TArray<FString> TutorialHintWidgetPaths;                                                   // 0x0388 (0x10)

    // --- Functions ---
    void SetTutorialHintWidgets(const TArray<FString> InWidgetPaths);                          // [Final|Public] RVA: 0x6B91FD0
    void SetTutorialHintItemIDs(const TArray<int32> InItemIDs);                                // [Final|Public] RVA: 0x6B91E78
    void SetTutorialHintBagWidgetIDs(bool bIsCorpse, const TArray<enum> InWidgetIDs);          // [Final|Public] RVA: 0x6B91D5C
    void SaveTraceQuest();                                                                     // [Final|Public] RVA: 0x6B91D48
    void ResetTraceTask(int32 TaskId);                                                         // [Final|Public] RVA: 0x6B91CB0
    void RemoveTraceTask(int32 TaskId);                                                        // [Final|Public] RVA: 0x6B91C18
    void RemoveCompleteTraceTask();                                                            // [Final|Public] RVA: 0x6B91C04
    void RefreshQuestBeforeState(int32 InQuestID, PlayerController* InPC);                     // [Final|Public] RVA: 0x6B91B20
    void PrintReplicateData();                                                                 // [Final|Public] RVA: 0x6B91B0C
    void OnQuestGraphStatusChange(MFQuestNodeGraph* NodeGraph, enum NewStatus);                // [Final|Protected] RVA: 0x6B91A10
    void LoadTraceQuest();                                                                     // [Final|Public] RVA: 0x6B918BC
    bool IsSeasonQuest(int32 InGraphID);                                                       // [Final|Public] RVA: 0x6B91828
    TArray<FString> GetTutorialHintWidgets();                                                  // [Final|Public] RVA: 0x6B9180C
    TArray<int32> GetTutorialHintItemIDs();                                                    // [Final|Public] RVA: 0x6B917F0
    TArray<enum> GetTutorialHintBagWidgetIDs(bool bIsCorpse);                                  // [Final|Public] RVA: 0x6B91738
    TArray<int32> GetTraceTasks();                                                             // [Final|Public] RVA: 0x6B91630
    int32 GetQuestIDFromQuest(MFQuestBase* InQuest);                                           // [Final|Public] RVA: 0x6B91554
    int32 GetQuestGraphIDFromQuestGraph(MFQuestNodeGraph* InGraph);                            // [Public] RVA: 0x6B914A4
    MFQuestNodeGraph* GetQuestGraphByID(int32 InGraphID, PlayerController* InPlayerController);  // [Final|Public] RVA: 0x6B913AC
    QuestReplicateData GetQuestDataWithID(int32 InGraphID, PlayerController* InPC);            // [Final|Public] RVA: 0x6B91294
    void GetPlayerSeasonQuestsPartByState(PlayerController* InPC, out TArray<QuestReplicateData> InProgress, out TArray<QuestReplicateData> Success, out TArray<QuestReplicateData> Fail);  // [Final|Public] RVA: 0x6B9108C
    TArray<TraceableActorInfo> GetPlayerQuestTraceInfos(PlayerController* InPC);               // [Final|Public] RVA: 0x6B90D04
    TraceableActorInfo GetPlayerQuestTraceInfoByTargetID(PlayerController* InPC, int32 TargetId);  // [Final|Public] RVA: 0x6B90BCC
    void GetPlayerQuestsPartByState(PlayerController* InPC, out TArray<QuestReplicateData> InProgress, out TArray<QuestReplicateData> Success, out TArray<QuestReplicateData> Fail);  // [Final|Public] RVA: 0x6B90E84
    TArray<QuestReplicateData> GetPlayerQuests(PlayerController* InPC);                        // [Final|Public] RVA: 0x6B90DC4
    int32 GetMaxTraceNum();                                                                    // [Final|Public] RVA: 0x6B90BB4
    MFQuestBase* GetGraphQuestFromQuestID(MFQuestNodeGraph* InGraph, int32 InQuestID);         // [Final|Public] RVA: 0x6B90A7C
    int32 GetGraphIDFromQuest(MFQuestBase* InQuest);                                           // [Final|Public] RVA: 0x6B909E4
    TArray<QuestInventory> GetAllQuestInventoryData(PlayerController* PC);                     // [Final|Public] RVA: 0x6B90924
    MFQuestNodeGraph* CreateNewQuestGraphWithID(int32 InGraphID, Controller* InController, bool bAct);  // [Public] RVA: 0x6B907B8
    MFQuestBase* CreateNewQuestFromID(int32 InGraphID, int32 InQuestID, Controller* InController);  // [Final|Public] RVA: 0x6B90678
    MFQuestBase* CreateNewQuestFromCreateData(out TaskCreateData InTaskCreateData, out QuestCreateData InQuestCreateData);  // [Final|Public] RVA: 0x6B90434
    void ClearTutorialHint();                                                                  // [Final|Public] RVA: 0x6B90420
    void ClearTraceTask();                                                                     // [Final|Public] RVA: 0x6B903BC
    void AutoTraceOneQuest();                                                                  // [Final|Public] RVA: 0x6B903A8
    void AddTraceTask(int32 TaskId);                                                           // [Final|Public] RVA: 0x6B90310
};

// ============================================================
// Inheritance: UAAutoColorGrading : AutoColorGrading : Actor : Object
// Package: /Script/UAGame
// ============================================================
class UAAutoColorGrading : public AutoColorGrading {
public:
    SpotLightComponent* CameraSpotlight;                                                       // 0x03D8 (0x08)
    float CameraLocationBack;                                                                  // 0x03E0 (0x04)
    float CameraLocationUp;                                                                    // 0x03E4 (0x04)
    float CameraLocationLeft;                                                                  // 0x03E8 (0x04)
    float CameraLocationForward;                                                               // 0x03EC (0x04)
};

// ============================================================
// Inheritance: UAFaction : SGFaction : Actor : Object
// Package: /Script/UAGame
// ============================================================
class UAFaction : public SGFaction {
public:
    bool bFactionInnerFriendly;                                                                // 0x0390 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UpdateFactionmemberLocationInfo();                                                    // [Final|Public] RVA: 0x6BD6978
    void SetFactionmamberCharacterByGID(uint64 gid, SGCharacter* SGCharacter);                 // [Final|Public] RVA: 0x6BD6540
    void OnPlayerFinishGame(PlayerController* C, enum FinishType, Actor* EscapeVolume);        // [Final|Public] RVA: 0x6BD5FC4
    void OnCharacterKilled(Pawn* KilledPawn, const KillInfo KillInfo);                         // [Final|Public] RVA: 0x6BD5D70
    void OnAIEscaped(Character* AICharacter, Actor* EscapeVolume);                             // [Final|Public] RVA: 0x6BD5C88
    TArray<FactionmemberBaseInfo> GetTeammemberPlayerBaseInfoArray();                          // [Final|Public] RVA: 0x6BD55D0
    void AddNewFactionmemberBaseInfo(FString PlayerName, uint64 gid, uint64 TeamIndex, enum CharacterType, SGCharacter* Character);  // [Final|Public] RVA: 0x6BD3E78
};

// ============================================================
// Inheritance: UATeamInfo : SGTeamInfo : SGTeam : Actor : Object
// Package: /Script/UAGame
// ============================================================
class UATeamInfo : public SGTeamInfo {
public:
    TArray<TeammemberPlayerBaseInfo> TeammemberPlayerBaseInfoArray;                            // 0x0548 (0x10)
    float TimerInterval;                                                                       // 0x0568 (0x04)
    float ClearTimerInterval;                                                                  // 0x056C (0x04)
    TArray<TeamPlayerInfo> TeamMemberPlayerInfosArray;                                         // 0x0570 (0x10)
    TArray<TeamPlayerInfo> OldTeamMemberPlayerInfosArray;                                      // 0x0580 (0x10)
    enum OldSignType;                                                                          // 0x0590 (0x01)
    TArray<TeamPlayerBaseInfo> TeamMemberPlayerBaseInfosArray;                                 // 0x0598 (0x10)
    TArray<SGInventory*> TeamStorageCountSubscribedItems;                                      // 0x05A8 (0x10)
    TArray<SGInventory*> TeamMemberStorageCountSubscribedItems;                                // 0x05B8 (0x10)
    TArray<PlayerState*> TeamPlayerStateArray;                                                 // 0x05C8 (0x10)
    TArray<Character*> TeamCharacterArray;                                                     // 0x05D8 (0x10)
    TArray<PlayerState*> InbattlePlayerStateArray;                                             // 0x05E8 (0x10)

    // --- Functions ---
    void SetTeamMemberPlayerInfoArray(int32 PlayerIndex, TeamPlayerInfo PlayerInfo);           // [Final|Public] RVA: 0x6C58504
    void ReleaseTeamMemberStorage(int64 gid);                                                  // [Final|Public] RVA: 0x6C5823C
    void RefreshTeamInfo();                                                                    // [Final|Public] RVA: 0x6C58228
    void PlayerStateRepFinish(SGPlayerState* SGPS);                                            // [Final|Public] RVA: 0x6C5818C
    void OnTeamStorageItemTotalCountChanged(SGInventory* InInventory, int32 OldTotalCount, int32 NewTotalCount);  // [Final|Public] RVA: 0x3C88B40
    void OnTeamStorageChanged();                                                               // [Final|Public] RVA: 0x6C58178
    void OnTeamMemberStorageItemTotalCountChanged(SGInventory* InInventory, int32 OldTotalCount, int32 NewTotalCount);  // [Final|Public] RVA: 0x3C88A30
    void OnTeamMemberStorageChanged();                                                         // [Final|Public] RVA: 0x6C58164
    void OnRoundControlStateChanged(PlayerController* PlayerController, enum RoundState, int32 CurrRound);  // [Final|Public] RVA: 0x6C58024
    void OnRep_TeamMemberPlayerInfosArray();                                                   // [Final|Public] RVA: 0x1DAFAAC
    void OnRep_TeammemberPlayerBaseInfoArray();                                                // [Final|Public] RVA: 0x1D09D60
    void OnInventoryBeginPlay(SGInventory* Inventory, enum InventoryType);                     // [Final|Public] RVA: 0x6C57B64
    void OnEscapePointsChange(PlayerState* PlayerState, const TArray<int32> EscapePointIDs);   // [Final|Public] RVA: 0x6C57A48
    bool IsTeamLevelUnlockedForSynthesizer();                                                  // [Final|Public] RVA: 0x6C57814
    int32 GetTeamMemberValidPlayerSignNum();                                                   // [Final|Public] RVA: 0x6C57670
    TeammemberTitleInfo GetTeamMemberTitleInfo(int32 InTeamIndex);                             // [Final|Public] RVA: 0x6C57598
    int32 GetTeamMembersIndexByPlayerInfo(Actor* C);                                           // [Final|Public] RVA: 0x6C57694
    Vector2D GetTeamMemberSignPositionByIndexAndSignType(int32 Index, enum Type);              // [Final|Public] RVA: 0x6C574A4
    TeamPlayerInfo GetTeamMemberPlayerInfoByIndex(int32 Index);                                // [Final|Public] RVA: 0x6C573A8
    TeamPlayerBaseInfo GetTeamMemberPlayerBaseInfoByIndex(int32 Index);                        // [Final|Public] RVA: 0x6C572C0
    TArray<TeammemberPlayerBaseInfo> GetTeammemberPlayerBaseInfoArray();                       // [Final|Public] RVA: 0x6C5773C
    int32 GetTargetMemberIdxByTaskId(int32 TaskId, int32 selfTeamId);                          // [Final|Public] RVA: 0x6C571C8
    int32 GetTargetMemberIdxByConfigID(int32 ConfigID, int32 selfTeamId);                      // [Final|Public] RVA: 0x6C570D0
    int32 GetSquadIndex(int32 Index);                                                          // [Final|Public] RVA: 0x6C56FFC
    int32 GetRequiredTeamLevelToUnlockSynthesizer();                                           // [Final|Public] RVA: 0x6C56F30
    void GetRefTeamMemberSignPositionByIndexAndSignType(int32 Index, enum Type, out Vector2D Pos);  // [Final|Public] RVA: 0x6C56DB4
    bool GetRefTeamMemberPlayerInfoByIndex(int32 Index, out TeamPlayerInfo Info);              // [Final|Public] RVA: 0x6C56C9C
    int32 GetPlayerSortIndex(int32 IndexInTeam);                                               // [Final|Public] RVA: 0x6C56BF4
    int32 GetChangeTeamPlayerInfo(TArray<TeamPlayerInfo> OldInfosArray, TArray<TeamPlayerInfo> NewInfosArray, out enum SignType, out bool IsNewSign);  // [Final|Public] RVA: 0x6C56674
    void ClearRefreshTeamInfoTimerHandle();                                                    // [Final|Public] RVA: 0x6C56660
};

