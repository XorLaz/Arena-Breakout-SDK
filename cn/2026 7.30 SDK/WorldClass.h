#pragma once
// Auto-generated World class dump (GWorld)
// Game: 暗区突围
// Base: 0x140000000

// 只含当前关卡跑着的类; 全量类型见 Class.h / Struct.h / Enums.h

// ============================================================
// Inheritance: BP_LightFlash_CA_C : Actor : Object
// Package: /Game/ArtResourceHD/Assets/Effect/LightFlash/BP_LightFlash_CA
// ============================================================
class BP_LightFlash_CA_C : public Actor {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0318 (0x08)
    StaticMeshComponent* RayHorizontal;                                                        // 0x0320 (0x08)
    StaticMeshComponent* LensBillboard;                                                        // 0x0328 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0330 (0x08)
    CurveVector* DistanceFade;                                                                 // 0x0338 (0x08)
    CurveVector* AngleFade;                                                                    // 0x0340 (0x08)
    float Distance;                                                                            // 0x0348 (0x04)
    float RayIntensity;                                                                        // 0x034C (0x04)
    float RayAngle;                                                                            // 0x0350 (0x04)
    float RayLength;                                                                           // 0x0354 (0x04)
    Vector2D RayParticalTileUV;                                                                // 0x0358 (0x08)
    Color RayColor;                                                                            // 0x0360 (0x04)
    Color LensColor1;                                                                          // 0x0364 (0x04)
    Color LensColor2;                                                                          // 0x0368 (0x04)
    Color LensColor3;                                                                          // 0x036C (0x04)
    bool DoOnce1;                                                                              // 0x0370 (0x01) BitMask: 0xFF
    bool DoOnce2;                                                                              // 0x0371 (0x01) BitMask: 0xFF

    // --- Functions ---
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_LightFlash_CA(int32 EntryPoint, const TArray<Actor*> Temp_object_Variable, Vector CallFunc_GetActorForwardVector_ReturnValue, Vector CallFunc_Multiply_VectorFloat_ReturnValue, Actor* CallFunc_GetOwner_ReturnValue, SGInventoryFlashlightComponent_HD* CallFunc_K2_FindComponentByClass_ReturnValue, SGWeapon* K2Node_DynamicCast_AsSGWeapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetWeaponTacticalInvCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, LinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, LinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_1, LinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_2, LinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, LinearColor K2Node_MakeStruct_LinearColor, MaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, Vector CallFunc_K2_GetActorLocation_ReturnValue, MaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, Character* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetCharacterCurrentScopeCameraFOVProportion_ReturnValue, PlayerController* CallFunc_GetPlayerController_ReturnValue, Vector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_IsSpectatingFreeView_ReturnValue, Vector CallFunc_Add_VectorVector_ReturnValue, HitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, Vector CallFunc_BreakHitResult_Location, Vector CallFunc_BreakHitResult_ImpactPoint, Vector CallFunc_BreakHitResult_Normal, Vector CallFunc_BreakHitResult_ImpactNormal, PhysicalMaterial* CallFunc_BreakHitResult_PhysMat, Actor* CallFunc_BreakHitResult_HitActor, PrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, Vector CallFunc_BreakHitResult_TraceStart, Vector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsVisible_ReturnValue, float K2Node_Event_DeltaSeconds, PlayerController* CallFunc_GetPlayerController_ReturnValue_1, Vector CallFunc_GetForwardVector_ReturnValue, Vector CallFunc_Multiply_VectorFloat_ReturnValue_2, Vector CallFunc_GetForwardVector_ReturnValue_1, Vector CallFunc_GetCameraLocation_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, Vector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, Vector CallFunc_GetVectorValue_ReturnValue, float CallFunc_FClamp_ReturnValue_1, LinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, Vector CallFunc_GetVectorValue_ReturnValue_1, LinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue_1);  // [Final] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_LightFlash_LA_C : BP_LightFlash_CA_C : Actor : Object
// Package: /Game/ArtResourceHD/Assets/Effect/LightFlash/BP_LightFlash_LA
// ============================================================
class BP_LightFlash_LA_C : public BP_LightFlash_CA_C {
public:
};

// ============================================================
// Inheritance: BP_LightFlash_X30_C : BP_LightFlash_CA_C : Actor : Object
// Package: /Game/ArtResourceHD/Assets/Effect/LightFlash/BP_LightFlash_X30
// ============================================================
class BP_LightFlash_X30_C : public BP_LightFlash_CA_C {
public:
};

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
    ChildActorComponent* Lighting_WeaponShare_Blueprint;                                       // 0x0B80 (0x08)
    ChildActorComponent* Lighting_DefaultLight;                                                // 0x0B88 (0x08)
    ChildActorComponent* Lighting_AccessoryLight;                                              // 0x0B90 (0x08)
    ChildActorComponent* Lighting_OtherLight;                                                  // 0x0B98 (0x08)
    ChildActorComponent* Lighting_WeaponLight;                                                 // 0x0BA0 (0x08)
    ChildActorComponent* Lighting_ClothLight;                                                  // 0x0BA8 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent2D;                                          // 0x0BB0 (0x08)
    SceneComponent* Pivot;                                                                     // 0x0BB8 (0x08)
    SceneComponent* RotateBase;                                                                // 0x0BC0 (0x08)
    StaticMeshComponent* StaticMesh;                                                           // 0x0BC8 (0x08)
    SkeletalMeshComponent* BaseMesh;                                                           // 0x0BD0 (0x08)
    SceneComponent* Scene;                                                                     // 0x0BD8 (0x08)

    // --- Functions ---
    void RefreshConfigByShowType(int32 ShowType, bool CallFunc_EqualEqual_IntInt_ReturnValue);  // [Public] RVA: 0x1812688
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
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x1812688
    void ExecuteUbergraph_BP_SceneRenderingSettings(int32 EntryPoint);                         // [Final] RVA: 0x1812688
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
    FString GetModuleName();                                                                   // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/BP_UamAICharacter
// ============================================================
class BP_UamAICharacter_C : public BP_UamAICharacterTemplate_HD_C {
public:
    BPC_CharacterAIRandomInventoryComponentV2_C* BPC_CharacterAIRandomInventoryComponentV2;    // 0x2308 (0x08)
};

// ============================================================
// Inheritance: BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/BP_UamAICharacterTemplate
// ============================================================
class BP_UamAICharacterTemplate_C : public CAAICharacter {
public:
    SGCharacterElectricShockEffectComponent* SGCharacterElectricShockEffect;                   // 0x2110 (0x08)
    UACharacterInventoryManagerComponent* UACharacterInventoryManager;                         // 0x2118 (0x08)
    CACharacterAIAimingComponent* SGCharacterAIAiming;                                         // 0x2120 (0x08)
    UAWetnessComponent* UAWetness;                                                             // 0x2128 (0x08)
    SGCharacterTacticalPistolComponent* SGCharacterTacticalPistol;                             // 0x2130 (0x08)
    SGCharacterMovementDBNOComponent* SGCharacterMovementDBNO;                                 // 0x2138 (0x08)
    SGCharacterAITeamComponent* SGCharacterAITeam;                                             // 0x2140 (0x08)
    UACharacterAIStaticsComponent* UACharacterAIStatics;                                       // 0x2148 (0x08)
    SGCharacterAIWeaponTraceComponent* SGCharacterAIWeaponTrace;                               // 0x2150 (0x08)
    SGCharacterAILeanWallComponent* SGCharacterAILeanWall;                                     // 0x2158 (0x08)
    SGCharacterAIWeaponManagerComponent* SGCharacterAIWeaponManager;                           // 0x2160 (0x08)
    SGCharacterAISenseAbilityComponent* SGCharacterAISenseAbility;                             // 0x2168 (0x08)
    SGCharacterFragGrenadeEffectComponent* SGCharacterFragGrenadeEffect;                       // 0x2170 (0x08)
    UACharacterAIPickUpComponent* UACharacterAIPickUp;                                         // 0x2178 (0x08)
    SGCharacterFlashGrenadeEffectComponent* SGCharacterFlashGrenadeEffect;                     // 0x2180 (0x08)
    SGAICharacterAvatarMergeComponent* SGAICharacterAvatarMerge;                               // 0x2188 (0x08)
    SGCharacterWeaponSwayComponent* SGCharacterWeaponSway;                                     // 0x2190 (0x08)
    SGCharacterCurveBreathComponent* SGCharacterCurveBreath;                                   // 0x2198 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x21A0 (0x08)
    SGCharacterAICastShadowComponent* SGCharacterCastShadow;                                   // 0x21A8 (0x08)
    BPC_CharacterArmorManager_C* BPC_CharacterArmorManager;                                    // 0x21B0 (0x08)
    SGCharacterTeamMove_C* SGCharacterTeamMove;                                                // 0x21B8 (0x08)
    UACharacterDeathComponent* UACharacterDeath;                                               // 0x21C0 (0x08)
    SGCharacterSignificanceComponent* SGCharacterSignificance;                                 // 0x21C8 (0x08)
    SGCharacterLagCompensationComponent* SGCharacterLagCompensation;                           // 0x21D0 (0x08)
    SGCharacterSwimComponent* SGCharacterSwim;                                                 // 0x21D8 (0x08)
    AkComponent* Ak;                                                                           // 0x21E0 (0x08)
    SGCharacterAIDBNOComponent* SGCharacterAIDBNO;                                             // 0x21E8 (0x08)
    SGCharacterProgressManagerComponent* SGCharacterProgressManager;                           // 0x21F0 (0x08)
    SGCharacterBeUsedRescueComponent* SGCharacterBeUsedRescue;                                 // 0x21F8 (0x08)
    SGCharacterAITeamRescueComponent* SGCharacterAITeamRescue;                                 // 0x2200 (0x08)
    BPC_UamCharacterAISoundComponent_V2_C* BPC_UamCharacterAISoundComponent_V2;                // 0x2208 (0x08)
    SGCharacterBoneBreakComponent* SGCharacterBoneBreak;                                       // 0x2210 (0x08)
    SGCharacterAIPoseComponent* SGCharacterAIPose;                                             // 0x2218 (0x08)
    SGCharacterAvatarManagerComponent* SGCharacterAvatarManager;                               // 0x2220 (0x08)
    SGCharacterAvatarComponent* SGCharacterAvatar;                                             // 0x2228 (0x08)
    SGCharacterUseComponent* SGCharacterUse;                                                   // 0x2230 (0x08)
    SGCharacterAIDoorOpenerComponent* SGCharacterAIDoorOpener;                                 // 0x2238 (0x08)
    SGCharacterAIRecoilComponent* SGCharacterAIRecoil;                                         // 0x2240 (0x08)
    SGCharacterMovementProneComponent* SGCharacterMovementProne;                               // 0x2248 (0x08)
    SGCharacterInventoryGiveComponent* SGCharacterInventoryGive;                               // 0x2250 (0x08)
    SGCharacterFootEffectComponent* SGCharacterFootEffect;                                     // 0x2258 (0x08)
    SGCharacterBeUsedCorpseComponent* SGCharacterBeUsedCorpse;                                 // 0x2260 (0x08)
    SGCharacterContainerInventoryComponent* SGCharacterContainerInventory;                     // 0x2268 (0x08)
    SGCharacterAITurnComponent* SGCharacterAITurn;                                             // 0x2270 (0x08)
    SGCharacterAIPathNodeComponent* SGCharacterAIPathNode;                                     // 0x2278 (0x08)
    SGCharacterAIFireComponent* SGCharacterAIFire;                                             // 0x2280 (0x08)
    SGCharacterAIComponent* SGCharacterAI;                                                     // 0x2288 (0x08)
    SGCharacterMeshComponent* SGCharacterMesh;                                                 // 0x2290 (0x08)
    SGCharacterWeaponAttachComponent* SGCharacterWeaponAttach;                                 // 0x2298 (0x08)
    SGCharacterTakeHitEffectComponent* SGCharacterTakeHitEffect;                               // 0x22A0 (0x08)
    SGCharacterAITakeDamageComponent* SGCharacterAITakeDamage;                                 // 0x22A8 (0x08)
    SGCharacterStunGrenadeEffectComponent* SGCharacterStunGrenadeEffect;                       // 0x22B0 (0x08)
    SGCharacterSprintComponent* SGCharacterSprint;                                             // 0x22B8 (0x08)
    SGCharacterRagdollNewComponent* SGCharacterRagdollNew;                                     // 0x22C0 (0x08)
    SGCharacterIKComponent* SGCharacterIK;                                                     // 0x22C8 (0x08)
    SGCharacterHealthComponent* SGCharacterHealth;                                             // 0x22D0 (0x08)
    SGCharacterFallComponent* SGCharacterFall;                                                 // 0x22D8 (0x08)
    SGCharacterAnimationComponent* SGCharacterAnimation;                                       // 0x22E0 (0x08)
    SGCharacterEnduranceComponent* SGCharacterEndurance;                                       // 0x22E8 (0x08)
};

// ============================================================
// Inheritance: BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/BP_UamAICharacterTemplate_HD
// ============================================================
class BP_UamAICharacterTemplate_HD_C : public BP_UamAICharacterTemplate_C {
public:
    SGCharacterFOVComponent* SGCharacterFOV;                                                   // 0x22F0 (0x08)
    SGCharacterMovementAbilityComponent* SGCharacterMovementAbility;                           // 0x22F8 (0x08)
    FluidInteractorComponent* FluidFieldInteractor;                                            // 0x2300 (0x08)

    // --- Functions ---
    void UserConstructionScript(bool CallFunc_IsEditor_ReturnValue, const Transform Temp_struct_Variable, FluidMeshInteractorComponent* CallFunc_AddComponent_ReturnValue, HitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue);  // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_AIController_Tutorial_C : BP_BaseAIController_C : SGAIController : AIController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_AIController_Tutorial
// ============================================================
class BP_AIController_Tutorial_C : public BP_BaseAIController_C {
public:
    BPC_Tutorial_MovingDirector_C* BPC_Tutorial_MovingDirector;                                // 0x05D0 (0x08)
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
    float TestSize;                                                                            // 0x2310 (0x04)
};

// ============================================================
// Inheritance: BP_Tutorial_Enemy_02_CA_C : BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Enemy_02_CA
// ============================================================
class BP_Tutorial_Enemy_02_CA_C : public BP_UamAICharacter_C {
public:
    float TestSize;                                                                            // 0x2310 (0x04)
};

// ============================================================
// Inheritance: BP_Tutorial_Enemy_Motel_CA_C : BP_UamAICharacter_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/AICharacter/Tutorials/BP_Tutorial_Enemy_Motel_CA
// ============================================================
class BP_Tutorial_Enemy_Motel_CA_C : public BP_UamAICharacter_C {
public:
    float TestSize;                                                                            // 0x2310 (0x04)
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
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0570 (0x08)
    BPC_BehaviorTreeComponent_C* BPC_BehaviorTreeComponent;                                    // 0x0578 (0x08)
    BPC_AIOrderListener_C* BPC_AIOrderListener;                                                // 0x0580 (0x08)
    NPCBehaviorLODSystemComponent* NPCBehaviorLODSystem;                                       // 0x0588 (0x08)
    BPC_PlayerDebugOrderManager_C* BPC_PlayerControllerAIComponent;                            // 0x0590 (0x08)
    BPC_AIGroupRequestComponent_C* BPC_AIGroupRequestComponent;                                // 0x0598 (0x08)
    BPC_QuestInstigatorComp_Individual_C* BPC_QuestInstigatorComp_Individual;                  // 0x05A0 (0x08)
    BPC_UamAIMultiTargetSelector_C* BPC_UamAIMultiTargetSelector;                              // 0x05A8 (0x08)
    BPC_AIMoverSystemComponent_C* BPC_AIMoverSystemComponent;                                  // 0x05B0 (0x08)
    BPC_AITacticSystem_Base_C* BPC_AITacticSystem;                                             // 0x05B8 (0x08)
    BPC_AIMemory_Temp_C* BPC_AIMemory_Temp;                                                    // 0x05C0 (0x08)
    BPC_BaseAIPerceptionComponent_C* BaseAIPerceptionComponent;                                // 0x05C8 (0x08)

    // --- Functions ---
    void FindPathByNavSkeleton(Vector TargetLoc, TSet<int32> UnreachablePointIDs, int32 CurrentPointID, out bool Success, out TArray<int32> PathPointIDs, out TArray<NavSkeletonGraphResultNode> PathNodes, TArray<int32> NewLocalVar_0, int32 CurrentPoint, NavSkeletonGraphAStarFilter Filter, TSet<int32> LockPointIDs, TArray<int32> PathPointIDArray, float MisDist, int32 NextPointID, TArray<NavSkeletonGraphResultNode> PathNods, NavSkeletonGraphFindResult FindResultStruct, int32 TargetPointID, int32 MyPointID, Vector TargetLocation, Actor* OwnerActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_1, ref TArray<int32> CallFunc_QueryNearestPointIDs_ReturnValue, ref TArray<int32> CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Get_Item, bool CallFunc_Set_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Set_Remove_ReturnValue_1, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_2, NavSkeletonGraphResultNode CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_3, int32 CallFunc_QueryNearestPointID_ReturnValue, Vector CallFunc_K2_GetActorLocation_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_4, int32 CallFunc_QueryNearestPointID_ReturnValue_1, NavSkeletonPoint CallFunc_GetPointData_ReturnValue, Pawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, NavSkeletonGraphAStarFilter K2Node_MakeStruct_NavSkeletonGraphAStarFilter, NavSkeletonGraphFindResult CallFunc_FindPath_ReturnValue, NPCAINavSkeletonSystem* CallFunc_GetWorldSubsystem_ReturnValue_5, NavSkeletonPoint CallFunc_GetPointData_ReturnValue_1, const int32 Temp_int_Variable, bool CallFunc_AI_ReachMoveTargetLoc_ReturnResult, bool CallFunc_Set_Remove_ReturnValue_2);  // [Public] RVA: 0x1812688
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_BaseAIController(int32 EntryPoint, float K2Node_Event_DeltaSeconds, Pawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, Vector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);  // [Final] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_AIPerceptionDynamicActor_C : NPCAIPerceptionDynamicActor : Actor : Object
// Package: /Game/InBattle/Blueprints/AI/Components/OnGameState/BP_AIPerceptionDynamicActor
// ============================================================
class BP_AIPerceptionDynamicActor_C : public NPCAIPerceptionDynamicActor {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0350 (0x08)
};

// ============================================================
// Inheritance: BP_UamPlayerCameraManagerTemplate_C : SGPlayerCameraManager : PlayerCameraManager : Actor : Object
// Package: /Game/InBattle/Blueprints/Camera/BP_UamPlayerCameraManagerTemplate
// ============================================================
class BP_UamPlayerCameraManagerTemplate_C : public SGPlayerCameraManager {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x3140 (0x08)
    PostProcessComponent* PostProcessMaterials;                                                // 0x3148 (0x08)

    // --- Functions ---
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x1812688
    void UpdatePostProcessComponentWeight(float Weight);                                       // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_UamPlayerCameraManagerTemplate(int32 EntryPoint, const Transform Temp_struct_Variable, PostProcessComponent* CallFunc_AddComponent_ReturnValue, float K2Node_Event_Weight);  // [Final] RVA: 0x1812688
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
    ChildActorComponent* Lighting_HelmetLights;                                                // 0x0A60 (0x08)
    ChildActorComponent* Lighting_DefaultLight;                                                // 0x0A68 (0x08)
    ChildActorComponent* Lighting_OtherLight;                                                  // 0x0A70 (0x08)
    ChildActorComponent* Lighting_ClothLight;                                                  // 0x0A78 (0x08)
    ChildActorComponent* Lighting_AccessoryLight;                                              // 0x0A80 (0x08)
    ChildActorComponent* Lighting_WeaponLight;                                                 // 0x0A88 (0x08)
    StaticMeshComponent* StaticMeshakm;                                                        // 0x0A90 (0x08)
    SceneComponent* Scene;                                                                     // 0x0A98 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent2D;                                          // 0x0AA0 (0x08)
    SkeletalMeshComponent* BaseMesh;                                                           // 0x0AA8 (0x08)
    SceneComponent* Pivot;                                                                     // 0x0AB0 (0x08)

    // --- Functions ---
    void UserConstructionScript();                                                             // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_PlayerControllerBase_C : SGPlayerController : PlayerController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/Components/PlayerController/BP_PlayerControllerBase
// ============================================================
class BP_PlayerControllerBase_C : public SGPlayerController {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0980 (0x08)
    CACommonRPCComponent* CACommonRPC;                                                         // 0x0988 (0x08)
    CAPCMousePinComponent* CAPCMousePin;                                                       // 0x0990 (0x08)
    UAAnnouncePlayComponent* UAAnnouncePlay;                                                   // 0x0998 (0x08)
    SGPCMark1PRenderStateComponent* SGPCMark1PRenderState;                                     // 0x09A0 (0x08)
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x09A8 (0x08)
    CAPCAimingComponent* SGPCAiming;                                                           // 0x09B0 (0x08)
    SGPCBehaviorControlComponent* SGPCBehaviorControl;                                         // 0x09B8 (0x08)
    BPC_QuestInstigatorComp_Individual_C* BPC_QuestInstigatorComp_Individual;                  // 0x09C0 (0x08)
    BPC_PCAutoTestComponent_C* BPC_PCAutoTest;                                                 // 0x09C8 (0x08)
    CAPCInputHandleComponent* CAPCInputHandle;                                                 // 0x09D0 (0x08)
    SGPCThermalViewComponent* SGPCThermalView;                                                 // 0x09D8 (0x08)
    SGPCLocalFileKillCamComponent* SGPCLocalFileKillCam;                                       // 0x09E0 (0x08)
    UAPCQuestManagerComponent* UAPCQuestManager;                                               // 0x09E8 (0x08)
    SGPCProcessPenetrationComponent* SGPCProcessPenetration;                                   // 0x09F0 (0x08)
    SGPCMotionSensorComponent* SGPCMotionSensor;                                               // 0x09F8 (0x08)
    SGPCSpectatingComponent* SGPCSpectating;                                                   // 0x0A00 (0x08)
    SGPCFOVComponent* SGPCFOV;                                                                 // 0x0A08 (0x08)
    SGPCAssetLoadManager* SGPCAssetLoadManager;                                                // 0x0A10 (0x08)
    SGPCMessageComponent* SGPCMessage;                                                         // 0x0A18 (0x08)
    SGPCAutoAimingComponent* SGPCAutoAiming;                                                   // 0x0A20 (0x08)
    SGPCRPCFunTransformComponent* SGPCRPCFunTransform;                                         // 0x0A28 (0x08)
    SGPCWeaponAssembleComponent* SGPCWeaponAssemble;                                           // 0x0A30 (0x08)
    UAPCServerCommandComponent* UAPCServerCommand;                                             // 0x0A38 (0x08)
    SGPCFPPModeComponent* SGPCFPPMode;                                                         // 0x0A40 (0x08)
    SGPCDeathCameraComponent* SGPCDeathCamera;                                                 // 0x0A48 (0x08)
    SGPCRotateRateComponent* SGPCRotateRate;                                                   // 0x0A50 (0x08)
    UAPCUIModeComponent* UAPCUIMode;                                                           // 0x0A58 (0x08)
    FMulticastDelegate DebugInit;                                                              // 0x0A60 (0x10)
    FMulticastDelegate BPC_AIDebugInitFinished;                                                // 0x0A70 (0x10)

    // --- Functions ---
    void ProcessDebugCommand(FString Value);                                                   // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_PlayerControllerBase(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, FString K2Node_Event_Value, BP_LightingDebugMesh_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, Transform CallFunc_GetTransform_ReturnValue, Actor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, BP_LightingDebugMesh_C* CallFunc_GetActorOfClass_ReturnValue_1, BP_LightingDebugMesh_C* CallFunc_FinishSpawningActor_ReturnValue, ref TArray<StaticMeshComponent*> CallFunc_GetComponentsByTag_ReturnValue, ref TArray<StaticMeshComponent*> CallFunc_GetComponentsByTag_ReturnValue_1, StaticMeshComponent* CallFunc_Array_Get_Item, StaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, StaticMeshComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, StaticMeshComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, ref TArray<StaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue, StaticMeshComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1);  // [Final] RVA: 0x1812688
    void BPC_AIDebugInitFinished__DelegateSignature(ActorComponent* BPC_AIDebug);              // [Public] RVA: 0x1812688
    void DebugInit__DelegateSignature();                                                       // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_CharacterBase_C : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/BP_CharacterBase
// ============================================================
class BP_CharacterBase_C : public SGCharacter {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x1D50 (0x08)
    SGCharacterElectricShockEffectComponent* SGCharacterElectricShockEffect;                   // 0x1D58 (0x08)
    UAWetnessComponent* UAWetness;                                                             // 0x1D60 (0x08)
    UACharacterAvatarManagerComponent* UACharacterAvatarManager;                               // 0x1D68 (0x08)
    SGCharacterHearingComponent* SGCharacterHearing;                                           // 0x1D70 (0x08)
    SGMotionWarpingComponent* SGMotionWarping;                                                 // 0x1D78 (0x08)
    SGCharacterMovementLadderClimbComponent* SGCharacterMovementLadderClimb;                   // 0x1D80 (0x08)
    SGCharacterLookAroundComponent* SGCharacterLookAround;                                     // 0x1D88 (0x08)
    SGCharacterSpectatingComponent* SGCharacterSpectating;                                     // 0x1D90 (0x08)
    BPC_UamCharacterConditonDetecterComponent_C* BPC_UamCharacterConditonDetecterComponent;    // 0x1D98 (0x08)
    BPC_UamCharacterLoadProtectComponent_C* BPC_UamCharacterLoadProtectComponent;              // 0x1DA0 (0x08)
    UACharacterContainerPickupsGridMgrComponent* UACharacterContainerPickupsGridMgr;           // 0x1DA8 (0x08)
    SGUAMCharacterPoseCacheComponent* SGUAMCharacterPoseCache;                                 // 0x1DB0 (0x08)
    UACharacterInspectionComponent* UACharacterInspection;                                     // 0x1DB8 (0x08)
    SGCharacterFragGrenadeEffectComponent* SGCharacterFragGrenadeEffect;                       // 0x1DC0 (0x08)
    SGCharacterSkillComponent* SGCharacterSkill;                                               // 0x1DC8 (0x08)
    BPC_CharacterInventoryDetectComponent_C* BPC_CharacterInventoryDetectComponent;            // 0x1DD0 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x1DD8 (0x08)
    SGCharacterActivityComponent* SGCharacterActivity;                                         // 0x1DE0 (0x08)
    UACharacterInventoryManagerComponent* UACharacterInventoryManager;                         // 0x1DE8 (0x08)
    BPC_CharacterArmorManager_C* BPC_CharacterArmorManager;                                    // 0x1DF0 (0x08)
    SGCharacterTeamMove_C* SGCharacterTeamMove;                                                // 0x1DF8 (0x08)
    UACharacterDeathComponent* UACharacterDeath;                                               // 0x1E00 (0x08)
    SGCharacterSignificanceComponent* SGCharacterSignificance;                                 // 0x1E08 (0x08)
    SGCharacterLagCompensationComponent* SGCharacterLagCompensation;                           // 0x1E10 (0x08)
    SGCharacterSwimComponent* SGCharacterSwim;                                                 // 0x1E18 (0x08)
    BPC_CharacterContainerInventoryComponent_C* BPC_CharacterContainerInventoryComponent;      // 0x1E20 (0x08)
    AkComponent* Ak;                                                                           // 0x1E28 (0x08)
    SGCharacterMovementVaultComponent* SGCharacterMovementVault;                               // 0x1E30 (0x08)
    SGCharacterDBNOComponent* SGCharacterDBNO;                                                 // 0x1E38 (0x08)
    SGCharacterInvInteractFlagComponent* SGCharacterInvInteractFlag;                           // 0x1E40 (0x08)
    SGCharacterMovementDBNOComponent* SGCharacterMovementDBNO;                                 // 0x1E48 (0x08)
    SGCharacterFlashGrenadeEffectComponent* SGCharacterFlashGrenadeEffect;                     // 0x1E50 (0x08)
    SGCharacterTeamRescueComponent* SGCharacterTeamRescue;                                     // 0x1E58 (0x08)
    SGCharacterWeaponTraceComponent* SGCharacterWeaponTrace;                                   // 0x1E60 (0x08)
    SGCharacterDamageDebugComponent* SGCharacterDamageDebug;                                   // 0x1E68 (0x08)
    SGCharacterTurnComponent* SGCharacterTurn;                                                 // 0x1E70 (0x08)
    SGCharacterBoneBreakComponent* SGCharacterBoneBreak;                                       // 0x1E78 (0x08)
    SGCharacterFreshWoundComponent* SGCharacterFreshWound;                                     // 0x1E80 (0x08)
    SGCharacterWeaponSwayComponent* SGCharacterWeaponSway;                                     // 0x1E88 (0x08)
    SGCharacterRagdollNewComponent* SGCharacterRagdollNew;                                     // 0x1E90 (0x08)
    SGCharacterSoundComponent* SGCharacterSound;                                               // 0x1E98 (0x08)
    SGCharacterFoodComponent* SGCharacterFood;                                                 // 0x1EA0 (0x08)
    SGCharacterCurveBreathComponent* SGCharacterCurveBreath;                                   // 0x1EA8 (0x08)
    SGCharacterAvatarComponent* SGCharacterAvatar;                                             // 0x1EB0 (0x08)
    SGCharacterDebugMovementComponent* SGCharacterDebugMovement;                               // 0x1EB8 (0x08)
    SGCharacterEnduranceComponent* SGCharacterEndurance;                                       // 0x1EC0 (0x08)
    SGCharacterMoistureComponent* SGCharacterMoisture;                                         // 0x1EC8 (0x08)
    SGCharacterInventoryGiveComponent* SGCharacterInventoryGive;                               // 0x1ED0 (0x08)
    SGCharacterFootEffectComponent* SGCharacterFootEffect;                                     // 0x1ED8 (0x08)
    SGCharacterProgressManagerComponent* SGCharacterProgressManager;                           // 0x1EE0 (0x08)
    SGCharacterWeightComponent* SGCharacterWeight;                                             // 0x1EE8 (0x08)
    SGCharacterAvatarMergeComponent* SGCharacterAvatarMerge;                                   // 0x1EF0 (0x08)
    SGCharacterMeshComponent* SGCharacterMesh;                                                 // 0x1EF8 (0x08)
    SGCharacterWeaponManagerComponent* SGCharacterWeaponManager;                               // 0x1F00 (0x08)
    SGCharacterWeaponAttachComponent* SGCharacterWeaponAttach;                                 // 0x1F08 (0x08)
    SGCharacterUseComponent* SGCharacterUse;                                                   // 0x1F10 (0x08)
    SGCharacterBeUsedRescueComponent* SGCharacterBeUsedRescue;                                 // 0x1F18 (0x08)
    SGCharacterBeUsedCorpseComponent* SGCharacterBeUsedCorpse;                                 // 0x1F20 (0x08)
    SGCharacterTakeHitEffectComponent* SGCharacterTakeHitEffect;                               // 0x1F28 (0x08)
    SGCharacterTakeDamageComponent* SGCharacterTakeDamage;                                     // 0x1F30 (0x08)
    SGCharacterStunGrenadeEffectComponent* SGCharacterStunGrenadeEffect;                       // 0x1F38 (0x08)
    SGCharacterSprintComponent* SGCharacterSprint;                                             // 0x1F40 (0x08)
    SGCharacterSenseAbilityComponent* SGCharacterSenseAbility;                                 // 0x1F48 (0x08)
    SGCharacterInteractionComponent* SGCharacterInteraction;                                   // 0x1F50 (0x08)
    SGCharacterMovementProneComponent* SGCharacterMovementProne;                               // 0x1F58 (0x08)
    SGCharacterMovementAbilityComponent* SGCharacterMovementAbility;                           // 0x1F60 (0x08)
    SGCharacterLeanWallComponent* SGCharacterLeanWall;                                         // 0x1F68 (0x08)
    UACharacterInputProcessComponent* UACharacterInputProcess;                                 // 0x1F70 (0x08)
    SGCharacterIKComponent* SGCharacterIK;                                                     // 0x1F78 (0x08)
    SGCharacterHealthComponent* SGCharacterHealth;                                             // 0x1F80 (0x08)
    SGCharacterFallComponent* SGCharacterFall;                                                 // 0x1F88 (0x08)
    SGCharacterEnergyComponent* SGCharacterEnergy;                                             // 0x1F90 (0x08)
    SGCharacterAnimationComponent* SGCharacterAnimation;                                       // 0x1F98 (0x08)
    SGCharacterInventorySearchComponent* SGCharacterInventorySearch;                           // 0x1FA0 (0x08)
    SGCharacterFOVComponent* SGCharacterFOV;                                                   // 0x1FA8 (0x08)

    // --- Functions ---
    void ExecuteUbergraph_BP_CharacterBase(int32 EntryPoint);                                  // [Final] RVA: 0x1812688
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
    UAGameStateBigGoldRaidComponent* UAGameStateBigGoldRaid;                                   // 0x05B8 (0x08)
    BPC_GameStateIntelligenceComponent_C* BPC_GameStateIntelligenceComponent;                  // 0x05C0 (0x08)
    SGGSPasswordDoorManagerComponent* SGGSPasswordDoorManager;                                 // 0x05C8 (0x08)
    UAScanDeviceInfoComponent* UAScanDeviceInfo;                                               // 0x05D0 (0x08)
    GameplayTasksComponent* GameplayTasks;                                                     // 0x05D8 (0x08)
    UAGameStateBroadcastComponent* UAGameStateBroadcast;                                       // 0x05E0 (0x08)
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x05E8 (0x08)
    SGGameStateSprayComponent* SGGameStateSpray;                                               // 0x05F0 (0x08)
    SGProjectileExplosionManager* SGProjectileExplosionManager;                                // 0x05F8 (0x08)
    SGGameStateDestroyActorManagerComponent* SGGameStateDestroyActorManager;                   // 0x0600 (0x08)
    UAGameStateTraceComponent* UAGameStateTrace;                                               // 0x0608 (0x08)
    UAGameStateDeathDropComponent* UAGameStateDeathDrop;                                       // 0x0610 (0x08)
    SGGameStateTeamManagerComponent* SGGameStateTeamManager;                                   // 0x0618 (0x08)
    SGGameStateSoundComponent* SGGameStateSound;                                               // 0x0620 (0x08)
    SGGSAILevelComponent* SGGSAILevel;                                                         // 0x0628 (0x08)
    SGGameStateTicketComponent* SGGameStateTicket;                                             // 0x0630 (0x08)
    SGGameStateTimeComponent* SGGameStateTime;                                                 // 0x0638 (0x08)
    SGGameStateScoreComponent* SGGameStateScore;                                               // 0x0640 (0x08)
    BPC_UamTutorialGSEventComponent_C* BPC_UamTutorialGSEventComponent;                        // 0x0648 (0x08)
    BPC_QuestManagerComp_C* BPC_QuestManagerComp;                                              // 0x0650 (0x08)
    BPC_UamGSEscapeManagerComponent_C* BPC_UamGSEscapeManagerComponent;                        // 0x0658 (0x08)
    BPC_UamGameStateTODTimeComponent_C* BPC_UamGameStateTODTimeComponent;                      // 0x0660 (0x08)
    SGGameStateClientInventoryComponent* SGGameStateClientInventory;                           // 0x0668 (0x08)
    BPC_UamGameStateStatisComponent_C* BPC_UamGameStateStatisComponent;                        // 0x0670 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0678 (0x08)
};

// ============================================================
// Inheritance: BP_PlayerStateBase_C : SGPlayerState : PlayerState : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/GameBase/BP_PlayerStateBase
// ============================================================
class BP_PlayerStateBase_C : public SGPlayerState {
public:
    BPC_PlayerStateIntelligenceComponent_C* BPC_PlayerStateIntelligenceComponent;              // 0x0AE8 (0x08)
    SGPlayerActivityItemInfoComponent* SGPlayerActivityItemInfo;                               // 0x0AF0 (0x08)
    BPC_PlayerStateTraceComponent_C* BPC_PlayerStateTraceComponent;                            // 0x0AF8 (0x08)
    SGPSFlowStateComponent* SGPSFlowState;                                                     // 0x0B00 (0x08)
    BPC_PlayerStateZoneInfoComp_C* BPC_PlayerStateZoneInfoComp;                                // 0x0B08 (0x08)
    SGPlayerStateDebugComponent* SGPlayerStateDebug;                                           // 0x0B10 (0x08)
    SGPlayerStateRankComponent* SGPlayerStateRank;                                             // 0x0B18 (0x08)
    SGPlayerStateHealthComponent* SGPlayerStateHealth;                                         // 0x0B20 (0x08)
    BPC_PlayerStateDeathComp_C* BPC_PlayerStateDeathComp;                                      // 0x0B28 (0x08)
    SGPlayerStateKillComponent* SGPlayerStateKill;                                             // 0x0B30 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0B38 (0x08)
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
    UATraceDataInfoComponent* UATraceDataInfo;                                                 // 0x05B8 (0x08)
    SGMissionDataNoOwnerComponent* SGMissionDataNoOwner;                                       // 0x05C0 (0x08)
    SGActorFactionComponent* SGActorFaction;                                                   // 0x05C8 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x05D0 (0x08)
    UATeamZoneInfoComponent* UATeamZoneInfo;                                                   // 0x05D8 (0x08)
    UATeamEscapeComponent* UATeamEscape;                                                       // 0x05E0 (0x08)
};

// ============================================================
// Inheritance: BP_Tutorial_AICharacterTemplate_C : BP_UamAICharacterTemplate_HD_C : BP_UamAICharacterTemplate_C : CAAICharacter : SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_Tutorial_AICharacterTemplate
// ============================================================
class BP_Tutorial_AICharacterTemplate_C : public BP_UamAICharacterTemplate_HD_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x2308 (0x08)
    BPC_CharacterInputProcessComponent_C* BPC_CharacterInputProcessComponent;                  // 0x2310 (0x08)
    BPC_UamTutorial_HideSelfComponent_C* BPC_UamTutorial_HideSelfComponent;                    // 0x2318 (0x08)
    BPC_CharacterAIRandomInventoryComponentV2_C* BPC_CharacterAIRandomInventoryComponentV2;    // 0x2320 (0x08)
    CACharacterAIAimingComponent* CACharacterAIAiming;                                         // 0x2328 (0x08)
    SGCharacterInventoryManagerComponent* SGCharacterInventoryManager;                         // 0x2330 (0x08)
    SGMotionWarpingComponent* SGMotionWarping;                                                 // 0x2338 (0x08)
    BPC_Tutorial_AnimationComponent_C* BPC_Tutorial_AnimationComponent;                        // 0x2340 (0x08)
    SGTutorialAIFireComponent* SGTutorialAIFire;                                               // 0x2348 (0x08)
    BPC_Tutorial_BlockPlayer_C* BPC_Tutorial_BlockPlayer;                                      // 0x2350 (0x08)
    TextRenderComponent* TopText;                                                              // 0x2358 (0x08)
    GameplayEffectSpecHandle GE_FollowSpeedSpec;                                               // 0x2360 (0x10)
    FMulticastDelegate OnFollowPathFinished;                                                   // 0x2370 (0x10)
    FMulticastDelegate OnMoveToTargetFinished;                                                 // 0x2380 (0x10)
    FMulticastDelegate OnAttackEnemyFinished;                                                  // 0x2390 (0x10)
    FMulticastDelegate OnWaitFinished;                                                         // 0x23A0 (0x10)
    FMulticastDelegate OnCrouchFinished;                                                       // 0x23B0 (0x10)

    // --- Functions ---
    void UpdateFollowSpeed(float NewSpeed, float DestScale, bool CallFunc_IsValid_ReturnValue, GameplayEffectSpecHandle CallFunc_MakeOutgoingSpec_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, GameplayEffectSpecHandle CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, ActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameplayEffectMagnitude_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);  // [Public] RVA: 0x1812688
    void UserConstructionScript();                                                             // [Public] RVA: 0x1812688
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x1812688
    void ExecuteUbergraph_BP_Tutorial_AICharacterTemplate(int32 EntryPoint);                   // [Final] RVA: 0x1812688
    void OnCrouchFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x1812688
    void OnWaitFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x1812688
    void OnAttackEnemyFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x1812688
    void OnMoveToTargetFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x1812688
    void OnFollowPathFinished__DelegateSignature(BP_Tutorial_AICharacterTemplate_C* InAIChar, bool bSuccess);  // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_UamTutorialCharacter_C : BP_CharacterBase_C : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialCharacter
// ============================================================
class BP_UamTutorialCharacter_C : public BP_CharacterBase_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x1FB0 (0x08)
    SGCharacterCastShadowComponent* SGCharacterCastShadow;                                     // 0x1FB8 (0x08)
    BP_TutorialInvalidAreaSensor_C* BP_TutorialInvalidAreaSensor;                              // 0x1FC0 (0x08)
    SGCharacterCustomCameraComponent* SGCharacterCustomCamera;                                 // 0x1FC8 (0x08)
    BPC_UamTutorial_HideSelfComponent_C* BPC_UamTutorial_HideSelfComponent;                    // 0x1FD0 (0x08)
    BPC_UamTurorialCharacterViewTargetComponent_C* BPC_UamTurorialCharacterViewTargetComponent;  // 0x1FD8 (0x08)
    BPC_UamTutorialCharacterDeathComponent_C* BPC_UamTutorialCharacterDeathComponent;          // 0x1FE0 (0x08)
    BPC_UamTurorialCharacterCameraBlackBarComponent_C* BlackBarComponent;                      // 0x1FE8 (0x08)
    BPC_UamTutorialCharacterDefaultInventoryComponent_C* BPC_UamTutorialCharacterDefaultInventoryComponent;  // 0x1FF0 (0x08)
    SphereComponent* DeathCameraPoint;                                                         // 0x1FF8 (0x08)
    AkComponent* AkSoundComponent_0;                                                           // 0x2000 (0x08)
    SphereComponent* Sphere_0;                                                                 // 0x2008 (0x08)
    bool bSyncRotationToController;                                                            // 0x2010 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UserConstructionScript();                                                             // [Public] RVA: 0x1812688
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x1812688
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(PrimitiveComponent* OverlappedComponent, Actor* OtherActor, PrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const HitResult SweepResult);  // RVA: 0x1812688
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(PrimitiveComponent* OverlappedComponent, Actor* OtherActor, PrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // RVA: 0x1812688
    void EventSyncRotationToController(float DeltaSeconds, Vector OldLocation, Vector OldVelocity);  // RVA: 0x1812688
    void ExecuteUbergraph_BP_UamTutorialCharacter(int32 EntryPoint, FDelegate K2Node_CreateDelegate_OutputDelegate, PrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, Actor* K2Node_ComponentBoundEvent_OtherActor_1, PrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const HitResult K2Node_ComponentBoundEvent_SweepResult, PrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, Actor* K2Node_ComponentBoundEvent_OtherActor, PrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, float K2Node_CustomEvent_DeltaSeconds, Vector K2Node_CustomEvent_OldLocation, Vector K2Node_CustomEvent_OldVelocity, Controller* CallFunc_GetController_ReturnValue, Rotator CallFunc_K2_GetActorRotation_ReturnValue, Rotator CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, Rotator CallFunc_MakeRotator_ReturnValue);  // [Final] RVA: 0x1812688
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
    bool NeedBlockLoadLevelWhenStartMatch();                                                   // [Protected] RVA: 0x1812688
    void K2_OnRestartPlayer(Controller* NewPlayer);                                            // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_UamTutorialGameMode(int32 EntryPoint, Controller* K2Node_Event_NewPlayer);  // [Final] RVA: 0x1812688
    void PlayLevelBEnding__DelegateSignature();                                                // [Public] RVA: 0x1812688
    void PlayLevelAEnding__DelegateSignature();                                                // [Public] RVA: 0x1812688
    void TogglePlayerGod__DelegateSignature(bool bNewGod);                                     // [Public] RVA: 0x1812688
    void FinishSwitchCheckpoint__DelegateSignature();                                          // [Public] RVA: 0x1812688
    void SwitchToCurrentCheckPoint__DelegateSignature();                                       // [Public] RVA: 0x1812688
    void LevelB-End__DelegateSignature();                                                      // [Public] RVA: 0x1812688
    void LevelB-Start__DelegateSignature();                                                    // [Public] RVA: 0x1812688
    void LevelA-End__DelegateSignature();                                                      // [Public] RVA: 0x1812688
    void LevelA-Start__DelegateSignature();                                                    // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_UamTutorialGameState_C : BP_GameStateBase_C : SGGameState : GameState : GameStateBase : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialGameState
// ============================================================
class BP_UamTutorialGameState_C : public BP_GameStateBase_C {
public:
    BPC_UamGameStateFactionManagerComponent_C* BPC_UamGameStateFactionManagerComponent;        // 0x0680 (0x08)
    SGGSDSParamComponent* SGGSDSParam;                                                         // 0x0688 (0x08)
    UAGameStateStatisComponent* UAGameStateStatis;                                             // 0x0690 (0x08)
    UAGameStateGameTypeComponent* UAGameStateGameType;                                         // 0x0698 (0x08)
    SGGameStateWorldSettingsCacheComponent* SGGameStateWorldSettingsCache;                     // 0x06A0 (0x08)
    UAGameStateTutorialTransmitComp* UAGameStateTutorialTransmitComp;                          // 0x06A8 (0x08)
    UAGSOtherLevelConfigComponent* UAGSOtherLevelConfig;                                       // 0x06B0 (0x08)
    BP_UamTutorialTransmitComp_C* BP_UamTutorialTransmitComp;                                  // 0x06B8 (0x08)
    BPC_UamTutorialGameStateActorPoolComp_C* BPC_UamTutorialGameStateActorPoolComp;            // 0x06C0 (0x08)
    BP_UamTutorialCheckPointManagerComp_C* BP_UamTutorialCheckPointManagerComp;                // 0x06C8 (0x08)
    BP_UamTutorialGameStateFlowComponent_C* BP_UamTutorialGameStateFlowComponent;              // 0x06D0 (0x08)
    bool bShouldTutorialBegin;                                                                 // 0x06D8 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: BP_UamTutorialHUD_C : SGHUD : HUD : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialHUD
// ============================================================
class BP_UamTutorialHUD_C : public SGHUD {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0578 (0x08)
};

// ============================================================
// Inheritance: BP_UamTutorialPlayerController_C : BP_PlayerControllerBase_C : SGPlayerController : PlayerController : Controller : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialPlayerController
// ============================================================
class BP_UamTutorialPlayerController_C : public BP_PlayerControllerBase_C {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0A80 (0x08)
    UAPCSettlementComponent* UAPCSettlement;                                                   // 0x0A88 (0x08)
    BPC_UamPCStatisComponent_C* BPC_UamPCStatisComponent;                                      // 0x0A90 (0x08)
    BPC_UamTutorialPCFlowControlComponent_C* BPC_UamTutorialPCFlowControlComponent;            // 0x0A98 (0x08)
    BPC_UamTutorialPCEscapeFlowComponent_C* BPC_UamTutorialPCEscapeFlowComponent;              // 0x0AA0 (0x08)
    BPC_UamTutorialPlayerControllerDeathCheckComponent_C* BPC_UamTutorialPlayerControllerDeathCheckComponent;  // 0x0AA8 (0x08)
    BPC_UamPCSubtitleComponent_C* BPC_UamPCSubtitleComponent;                                  // 0x0AB0 (0x08)
    BPC_UamPCWatchGameComponent_C* BPC_UamPCWatchGameComponent;                                // 0x0AB8 (0x08)
    bool DebugMontage;                                                                         // 0x0AC0 (0x01) BitMask: 0xFF
    FMulticastDelegate TutorialPCEventDispatcher;                                              // 0x0AC8 (0x10)
    FMulticastDelegate TutorialHudMessageDispatcher;                                           // 0x0AD8 (0x10)
    FMulticastDelegate SwitchToB2;                                                             // 0x0AE8 (0x10)
    FMulticastDelegate B1MediaFinished;                                                        // 0x0AF8 (0x10)
    bool FinishToB2;                                                                           // 0x0B08 (0x01) BitMask: 0xFF

    // --- Functions ---
    void InpActEvt_Period_K2Node_InputKeyEvent_0(Key Key);                                     // RVA: 0x1812688
    void ServerDo();                                                                           // RVA: 0x1812688
    void ClientCallHudMessage(int32 Messageid);                                                // RVA: 0x1812688
    void ExecuteUbergraph_BP_UamTutorialPlayerController(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_MessageID, Key K2Node_InputKeyEvent_Key);  // [Final] RVA: 0x1812688
    void B1MediaFinished__DelegateSignature();                                                 // [Public] RVA: 0x1812688
    void SwitchToB2__DelegateSignature();                                                      // [Public] RVA: 0x1812688
    void TutorialHudMessageDispatcher__DelegateSignature(int32 Messageid);                     // [Public] RVA: 0x1812688
    void TutorialPCEventDispatcher__DelegateSignature();                                       // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_UamTutorialPlayerState_C : BP_PlayerStateBase_C : SGPlayerState : PlayerState : Info : Actor : Object
// Package: /Game/InBattle/Blueprints/Game/UamTutorialGame/BP_UamTutorialPlayerState
// ============================================================
class BP_UamTutorialPlayerState_C : public BP_PlayerStateBase_C {
public:
    BPC_UamPCEscapeComponent_C* BPC_UamPCEscapeComponent;                                      // 0x0B40 (0x08)
    BPC_UamPlayerStateStatisComponent_C* BPC_UamPlayerStateStatisComponent;                    // 0x0B48 (0x08)
    SGPSChatInboxComponent* SGPSChatInbox;                                                     // 0x0B50 (0x08)
    UAPlayerStateTeamComponent* UAPlayerStateTeam;                                             // 0x0B58 (0x08)
};

// ============================================================
// Inheritance: BP_HeadsetsBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Headsets/BP_HeadsetsBase
// ============================================================
class BP_HeadsetsBase_C : public SGInventory {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08B0 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08C8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08E0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E8 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x08F0 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x08F8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0900 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0908 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)

    // --- Functions ---
    void SetSoundAttenuationScale(Character* InventoryOwner, enum AttachPosition);             // [Public] RVA: 0x1812688
    void ReceiveChangeAttachPositionEvent(Character* OwnerCharacter, enum NewPosition);        // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_HeadsetsBase(int32 EntryPoint, Character* K2Node_Event_OwnerCharacter, enum K2Node_Event_NewPosition);  // [Final] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_HelmetBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Armor/Helmet/BP_HelmetBase
// ============================================================
class BP_HelmetBase_C : public SGInventory {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08B0 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x08B8 (0x08)
    SGInventoryHelmetSwitchComponent* SGInventoryHelmetSwitch;                                 // 0x08C0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C8 (0x08)
    SGInventoryArmorComponent* SGInventoryArmor;                                               // 0x08D0 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x08D8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08E0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08E8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08F0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08F8 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0900 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x0908 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0910 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0918 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0920 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0928 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0930 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0938 (0x08)

    // --- Functions ---
    void SetSoundAttenuationScale(Character* InventoryOwner, enum AttachPosition);             // [Protected] RVA: 0x1812688
    void ReceiveChangeAttachPositionEvent(Character* OwnerCharacter, enum NewPosition);        // [Public] RVA: 0x1812688
    void ExecuteUbergraph_BP_HelmetBase(int32 EntryPoint, Character* K2Node_Event_OwnerCharacter, enum K2Node_Event_NewPosition);  // [Final] RVA: 0x1812688
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
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    SGInventoryArmorComponent* SGInventoryArmor;                                               // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E0 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x08E8 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x08F0 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08F8 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0900 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0908 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0920 (0x08)
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
    SetRTPCComponent* SetRTPC1;                                                                // 0x0920 (0x08)
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
    SetRTPCComponent* SetRTPC1;                                                                // 0x0920 (0x08)
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
    SGInventoryContainerInteractPerformanceComponent* SGInventoryContainerInteractPerformance;  // 0x08B0 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x08B8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C0 (0x08)
    SGInventoryArmorComponent* SGInventoryArmor;                                               // 0x08C8 (0x08)
    SGInventoryTypeComponent_Armor* SGInventoryTypeComponent_Armor;                            // 0x08D0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D8 (0x08)
    SGInventoryBeUsedLootComponent* SGInventoryBeUsedLoot;                                     // 0x08E0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08E8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08F0 (0x08)
    SGInventoryContainerSearchingComponent* SGInventoryContainerSearching;                     // 0x08F8 (0x08)
    SGInventoryContainerMgrComponent* SGInventoryContainerMgr;                                 // 0x0900 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x0908 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0910 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0918 (0x08)
    SGInventoryTypeComponent* SGInventoryType;                                                 // 0x0920 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0928 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0930 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0938 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_ContainerBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Container/BP_ContainerBase
// ============================================================
class BP_ContainerBase_C : public SGInventory {
public:
    SGInventoryContainerInteractPerformanceComponent* Perfomance_Base;                         // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08C0 (0x08)
    SGInventoryBeUsedLootComponent* SGInventoryBeUsedLoot;                                     // 0x08C8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryContainerSearchingComponent* SGInventoryContainerSearching;                     // 0x08E0 (0x08)
    SGInventoryContainerMgrComponent* SGInventoryContainerMgr;                                 // 0x08E8 (0x08)
    SGInventoryEquipMeshComponent* SGInventoryEquipMesh;                                       // 0x08F0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08F8 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0900 (0x08)
    SGInventoryTypeComponent* SGInventoryType;                                                 // 0x0908 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0910 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0918 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0920 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0928 (0x08)
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
// Inheritance: BP_DeathBoxWAND2_C : BP_RewardBox_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/DeathBox/BP_DeathBoxWAND2
// ============================================================
class BP_DeathBoxWAND2_C : public BP_RewardBox_C {
public:
};

// ============================================================
// Inheritance: BP_RewardBox_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/DeathBox/BP_RewardBox
// ============================================================
class BP_RewardBox_C : public SGInventory {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08B0 (0x08)
    SGInventoryContainerInteractPerformanceComponent* Perfomance_Base;                         // 0x08B8 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x08C0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08D0 (0x08)
    SGInventoryTypeComponent_CorpseContainer* SGInventoryTypeComponent_CorpseContainer;        // 0x08D8 (0x08)
    SGInventoryBeUsedLootComponent* SGInventoryBeUsedLoot;                                     // 0x08E0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh1;                                                // 0x08E8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08F0 (0x08)
    SGInventoryContainerSearchingComponent* SGInventoryContainerSearching;                     // 0x08F8 (0x08)
    SGInventoryContainerMgrComponent* SGInventoryContainerMgr;                                 // 0x0900 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0908 (0x08)
    float TimeSincePlayEffect;                                                                 // 0x0910 (0x04)
    bool IsPlayingEffect;                                                                      // 0x0914 (0x01) BitMask: 0xFF
    float MaxEffectTime;                                                                       // 0x0918 (0x04)
    TArray<MeshComponent*> LoadingMeshComps;                                                   // 0x0920 (0x10)
    TArray<MaterialInstanceDynamic*> MIDArray;                                                 // 0x0930 (0x10)
    TArray<MeshComponent*> DeleteArray;                                                        // 0x0940 (0x10)
    float CustomTickInterval;                                                                  // 0x0950 (0x04)
    TimerHandle CustomTickTimerHandle;                                                         // 0x0958 (0x08)
    TMap<FName, CurveFloat*> ScalarParameterCurves;                                            // 0x0960 (0x50)
    TMap<MaterialInstance*, MaterialInstance*> MaterialInstanceMap;                            // 0x09B0 (0x50)
    float ServerBeginPlayTime;                                                                 // 0x0A00 (0x04)

    // --- Functions ---
    void ConvertToOpaqueMat();                                                                 // [Public] RVA: 0x1812688
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x1812688
    void CustomTick();                                                                         // RVA: 0x1812688
    void AutoConvert(StaticMesh* InventoryStaticMesh);                                         // RVA: 0x1812688
    void ExecuteUbergraph_BP_RewardBox(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegate K2Node_CreateDelegate_OutputDelegate, SceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, NiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, FDelegate K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, MeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Array_Index_Variable_4, MeshComponent* CallFunc_Array_Get_Item_1, MaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, ref TArray<MaterialInterface*> CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, ref TArray<MaterialInterface*> CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, MaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, TimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, ref TArray<FName> CallFunc_Map_Keys_Keys, FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, CurveFloat* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, uint8 CallFunc_GetGraphicsQualityLevel_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, StaticMesh* K2Node_CustomEvent_InventoryStaticMesh, bool CallFunc_BooleanAND_ReturnValue);  // [Final] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_ItemBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Items/BP_ItemBase
// ============================================================
class BP_ItemBase_C : public SGInventory {
public:
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08B8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08C0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08C8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryTypeComponent_Item* SGInventoryTypeComponent_Item;                              // 0x08E0 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08E8 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x08F0 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x08F8 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0900 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0908 (0x08)
};

// ============================================================
// Inheritance: BP_Dogtag33_C : BP_ItemBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Items/LootItems/408110003/BP_Dogtag33
// ============================================================
class BP_Dogtag33_C : public BP_ItemBase_C {
public:
    SGInventoryDogTagComponent* SGInventoryDogTag;                                             // 0x0910 (0x08)
};

// ============================================================
// Inheritance: BP_RecoveryBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Inventory/Recovery/BP_RecoveryBase
// ============================================================
class BP_RecoveryBase_C : public SGInventory {
public:
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08B8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08C0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08C8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08D0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08D8 (0x08)
    SGInventoryTypeComponent_Recovery* SGInventoryTypeComponent_Recovery;                      // 0x08E0 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08E8 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x08F0 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x08F8 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0900 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0908 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D0 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08D8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08E0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08E8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08F8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0900 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0908 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0910 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0918 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0920 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0928 (0x08)
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
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0930 (0x08)
};

// ============================================================
// Inheritance: BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Bolt/BP_ChargingHandleBase
// ============================================================
class BP_ChargingHandleBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D0 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08D8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08E0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08F8 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0900 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0908 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0910 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0918 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0920 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0928 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08E0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08F8 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0900 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0908 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0910 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0918 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0920 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0928 (0x08)
};

// ============================================================
// Inheritance: BP_Foregrip_AFG_Uam_C : BP_ForegripBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Foregrip/Foregrip_AFG/BP_Foregrip_AFG_Uam
// ============================================================
class BP_Foregrip_AFG_Uam_C : public BP_ForegripBase_C {
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D0 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08D8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08E0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08F8 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0900 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0908 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0910 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0918 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0920 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0928 (0x08)
};

// ============================================================
// Inheritance: BP_GasBlock_AR15_M4FS_Uam_C : BP_GasBlockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Gasblock/GasBlock_AR15_M4FS/BP_GasBlock_AR15_M4FS_Uam
// ============================================================
class BP_GasBlock_AR15_M4FS_Uam_C : public BP_GasBlockBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0930 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08E0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08E8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08F0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08F8 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0900 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0918 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0920 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0928 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility1;                                          // 0x08B0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08B8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C0 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08E0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08F8 (0x08)
    SGWeaponContainerComponent* SGWeaponContainer;                                             // 0x0900 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0908 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0910 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0918 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0920 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0928 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0930 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0938 (0x08)
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
// Inheritance: BP_MountBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Mount/BP_MountBase
// ============================================================
class BP_MountBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08E0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08E8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08F0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08F8 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0900 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0908 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0910 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0918 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0920 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventorySoundDiffuseComponent* SGInventorySoundDiffuse;                                 // 0x08B8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C0 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D0 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08D8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08E0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08E8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08F0 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x08F8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0900 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0908 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0910 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0918 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x0920 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0928 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0930 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08B8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C0 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D8 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08E0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08E8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08F0 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F8 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0900 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0908 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0910 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0918 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0920 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0928 (0x08)
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
// Inheritance: BP_ReceiverCoverBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Receiver/BP_ReceiverCoverBase
// ============================================================
class BP_ReceiverCoverBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08D8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08E0 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08E8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08F0 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F8 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0900 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0908 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0910 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0918 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0920 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0928 (0x08)
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
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0930 (0x08)
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
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x08B0 (0x08)
    PostProcessComponent* PostProcess;                                                         // 0x08B8 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08C0 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C8 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08D0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08E0 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x08E8 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08F0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08F8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0900 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0908 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0910 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0918 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0920 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0928 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0930 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0938 (0x08)

    // --- Functions ---
    void ExecuteUbergraph_BP_SightBase(int32 EntryPoint);                                      // [Final] RVA: 0x1812688
};

// ============================================================
// Inheritance: BP_IronSight_Rear_AK_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_AK/BP_IronSight_Rear_AK_Uam
// ============================================================
class BP_IronSight_Rear_AK_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_AKM_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_AKM/BP_IronSight_Rear_AKM_Uam
// ============================================================
class BP_IronSight_Rear_AKM_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_AR15_CarryHandle_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_AR15_CarryHandle/BP_IronSight_Rear_AR15_CarryHandle_Uam
// ============================================================
class BP_IronSight_Rear_AR15_CarryHandle_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_M870_XSShort_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_M870_XSShort/BP_IronSight_Rear_M870_XSShort_Uam
// ============================================================
class BP_IronSight_Rear_M870_XSShort_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: IronSight_Rear_SOK12_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_SOK12/IronSight_Rear_SOK12
// ============================================================
class IronSight_Rear_SOK12_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_IronSight_Rear_TT01_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/IronSight_Rear_TT01/BP_IronSight_Rear_TT01
// ============================================================
class BP_IronSight_Rear_TT01_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_Sight_Holographic_553_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/Sight_Holographic_553/BP_Sight_Holographic_553_Uam
// ============================================================
class BP_Sight_Holographic_553_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_Sight_Holographic_EXPS3_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/Sight_Holographic_EXPS3/BP_Sight_Holographic_EXPS3_Uam
// ============================================================
class BP_Sight_Holographic_EXPS3_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_Sight_ReflexSight_EKP818_Uam_C : BP_SightBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Sight/Sight_ReflexSight_EKP818/BP_Sight_ReflexSight_EKP818_Uam
// ============================================================
class BP_Sight_ReflexSight_EKP818_Uam_C : public BP_SightBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0940 (0x08)
};

// ============================================================
// Inheritance: BP_StockBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/Stock/BP_StockBase
// ============================================================
class BP_StockBase_C : public SGInventory {
public:
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x08B0 (0x08)
    SGInventoryAnimationComponent* SGInventoryAnimation;                                       // 0x08B8 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08C0 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x08C8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08D0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08D8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08E0 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x08E8 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08F0 (0x08)
    SGInventoryModifyAttributeComponent* SGInventoryModifyAttribute;                           // 0x08F8 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0900 (0x08)
    SGInventoryTypeComponent_Adapter* SGInventoryTypeComponent_Adapter;                        // 0x0908 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0910 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0918 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0920 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0928 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x0930 (0x08)
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
    SGInventoryFlashlightComponent_HD* SGInventoryFlashlightComponent_HD;                      // 0x0930 (0x08)
    ParticleSystemComponent* LaserPS;                                                          // 0x0938 (0x08)
};

// ============================================================
// Inheritance: BP_LaserBase_C : BP_ChargingHandleBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Adapter/TacticalDevices/BP_LaserBase
// ============================================================
class BP_LaserBase_C : public BP_ChargingHandleBase_C {
public:
    SGInventoryLaserComponent* SGInventoryLaser;                                               // 0x0930 (0x08)
    ParticleSystemComponent* LaserPS;                                                          // 0x0938 (0x08)
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
    SGInventoryFlashlightComponent_HD* SGInventoryFlashlightComponent_HD;                      // 0x0940 (0x08)
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
    SGInventorySearchComponent* SGInventorySearch_0;                                           // 0x0910 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0918 (0x08)
};

// ============================================================
// Inheritance: BP_AmmoBase_C : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/Ammo/BP_AmmoBase
// ============================================================
class BP_AmmoBase_C : public SGInventory {
public:
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x08B0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x08B8 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x08C0 (0x08)
    SGInventoryGiveComponent* SGInventoryGive;                                                 // 0x08C8 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x08D0 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x08D8 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x08E0 (0x08)
    SGInventoryTypeComponent_Ammo* SGInventoryTypeComponent_Ammo;                              // 0x08E8 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x08F0 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x08F8 (0x08)
    SGInventoryBulletMeshComponent* SGInventoryBulletMesh;                                     // 0x0900 (0x08)
    SGInventoryBulletDamageComponent* SGInventoryBulletDamage;                                 // 0x0908 (0x08)
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
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0C30 (0x08)
    SGWeaponCrosshairComponent* SGWeaponCrosshair;                                             // 0x0C38 (0x08)
    BPC_Weapon_Validation_C* BPC_Weapon_Validation;                                            // 0x0C40 (0x08)
    BPC_Weapon_Impact_C* BPC_Weapon_Impact;                                                    // 0x0C48 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0C50 (0x08)
    SGUAMWeaponGiveComponent* SGUamWeaponGive;                                                 // 0x0C58 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0C60 (0x08)
    SGInventoryBeUsedComponent* SGInventoryBeUsed;                                             // 0x0C68 (0x08)
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0C70 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0C78 (0x08)
    SGWeaponDebugComponent* SGWeaponDebug;                                                     // 0x0C80 (0x08)
    SGWeaponCameraComponent* SGWeaponCamera;                                                   // 0x0C88 (0x08)
    SGWeaponFireIntervalComponent* SGWeaponFireInterval;                                       // 0x0C90 (0x08)
    SGWeaponFiringComponent* SGWeaponFiring;                                                   // 0x0C98 (0x08)
    SGWeaponAppearanceComponent* SGWeaponAppearance;                                           // 0x0CA0 (0x08)
    SGWeaponAmmoComponent* SGWeaponAmmo;                                                       // 0x0CA8 (0x08)
    SGWeaponZoomComponent* SGWeaponZoom;                                                       // 0x0CB0 (0x08)
    SGWeaponStateComponent* SGWeaponState;                                                     // 0x0CB8 (0x08)
    SGWeaponMovementComponent* SGWeaponMovement;                                               // 0x0CC0 (0x08)
    SGWeaponDamageComponent* SGWeaponDamage;                                                   // 0x0CC8 (0x08)
    SGUAMWeaponAnimationComponent* SGUamWeaponAnimation;                                       // 0x0CD0 (0x08)
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
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_AK74N_Uam_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/AKS74N/BP_Weapon_AK74N_Uam
// ============================================================
class BP_Weapon_AK74N_Uam_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_AKS74U_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/AKS74U/BP_Weapon_AKS74U
// ============================================================
class BP_Weapon_AKS74U_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGInventoryCameraComponent* SGInventoryCamera;                                             // 0x0D70 (0x08)
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D78 (0x08)
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
    SGWeaponOrnamentComponent* SGWeaponOrnament;                                               // 0x0C40 (0x08)
    SetRTPCComponent* SetRTPC;                                                                 // 0x0C48 (0x08)
    SGWeaponHeatComponent_HD* SGWeaponHeatComponent_HD;                                        // 0x0C50 (0x08)
    SGWeaponDataComponent* SGWeaponData;                                                       // 0x0C58 (0x08)
    SGWeaponMeshComponent* SGWeaponMesh;                                                       // 0x0C60 (0x08)
    SGWeaponMergeComponent* SGWeaponMerge;                                                     // 0x0C68 (0x08)
    SGWeaponTacticalInvStateComponent* SGWeaponTacticalInvState;                               // 0x0C70 (0x08)
    SGGunSoundComponent* SGGunSound;                                                           // 0x0C78 (0x08)
    BPC_RecoilComp_C* BPC_RecoilComp;                                                          // 0x0C80 (0x08)
    SGWeaponCrosshairComponent* SGWeaponCrosshair;                                             // 0x0C88 (0x08)
    BPC_Weapon_Validation_C* BPC_Weapon_Validation;                                            // 0x0C90 (0x08)
    BPC_Weapon_Impact_C* BP_WeapComp_Impact;                                                   // 0x0C98 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0CA0 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0CA8 (0x08)
    SGInventoryTypeComponent_Weapon* SGInventoryTypeComponent_Weapon;                          // 0x0CB0 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0CB8 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0CC0 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0CC8 (0x08)
    SGInventoryAssembleComponent* SGInventoryAssemble;                                         // 0x0CD0 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0CD8 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0CE0 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0CE8 (0x08)
    SGUAMWeaponGiveComponent* SGUamWeaponGive;                                                 // 0x0CF0 (0x08)
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0CF8 (0x08)
    SGWeaponZoomComponent* SGWeaponZoom;                                                       // 0x0D00 (0x08)
    SGWeaponStateComponent* SGWeaponState;                                                     // 0x0D08 (0x08)
    SGWeaponSpreadComponent* SGWeaponSpread;                                                   // 0x0D10 (0x08)
    SGWeaponMovementComponent* SGWeaponMovement;                                               // 0x0D18 (0x08)
    SGWeaponFiringComponent* SGWeaponFiring;                                                   // 0x0D20 (0x08)
    SGWeaponFireIntervalComponent* SGWeaponFireInterval;                                       // 0x0D28 (0x08)
    SGWeaponDamageComponent* SGWeaponDamage;                                                   // 0x0D30 (0x08)
    SGWeaponCameraComponent* SGWeaponCamera;                                                   // 0x0D38 (0x08)
    SGWeaponBoreComponent* SGWeaponBore;                                                       // 0x0D40 (0x08)
    SGWeaponAssembleComponent* SGWeaponAssemble;                                               // 0x0D48 (0x08)
    SGUAMWeaponAppearanceComponent* SGUamWeaponAppearance;                                     // 0x0D50 (0x08)
    SGUAMWeaponAnimationComponent* SGUamWeaponAnimation;                                       // 0x0D58 (0x08)
    SGWeaponAmmoComponent* SGWeaponAmmo;                                                       // 0x0D60 (0x08)
    SGWeaponDebugComponent* SGWeaponDebug;                                                     // 0x0D68 (0x08)
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
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M4A1_Uam_C : BP_AssultRifle_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/M4A1/BP_Weapon_M4A1_Uam
// ============================================================
class BP_Weapon_M4A1_Uam_C : public BP_AssultRifle_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M870_Uam_C : BP_Shotgun_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/M870/BP_Weapon_M870_Uam
// ============================================================
class BP_Weapon_M870_Uam_C : public BP_Shotgun_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_S12K_C : BP_Shotgun_WeaponBase_C : BP_MainWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MainWeapon/Saiga12/BP_Weapon_S12K
// ============================================================
class BP_Weapon_S12K_C : public BP_Shotgun_WeaponBase_C {
public:
    SGWeaponAssembleEnvironmentConfig* SGWeaponAssembleEnvironmentConfig;                      // 0x0D70 (0x08)
};

// ============================================================
// Inheritance: BP_MeleeWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MeleeWeapon/BP_MeleeWeaponBase
// ============================================================
class BP_MeleeWeaponBase_C : public BP_SGWeapon_C {
public:
    SGWeaponMeshComponent* SGWeaponMesh;                                                       // 0x0C40 (0x08)
    SGMeleeWeaponSoundComponent* SGMeleeWeaponSound;                                           // 0x0C48 (0x08)
    SGWeaponCrosshairComponent* SGWeaponCrosshair;                                             // 0x0C50 (0x08)
    BPC_Weapon_Validation_C* BPC_Weapon_Validation;                                            // 0x0C58 (0x08)
    BPC_Weapon_Impact_C* BP_WeapComp_Impact;                                                   // 0x0C60 (0x08)
    SGUAMWeaponGiveComponent* SGUamWeaponGive;                                                 // 0x0C68 (0x08)
    BPC_InventoryFOVComp_C* BPC_InventoryFOVComp;                                              // 0x0C70 (0x08)
    UAInventoryInitDataComponent* UAInventoryInitData;                                         // 0x0C78 (0x08)
    SGInventoryBeUsedGiveComponent* SGInventoryBeUsedGive;                                     // 0x0C80 (0x08)
    SGInventoryPickupMeshComponent* SGInventoryPickupMesh;                                     // 0x0C88 (0x08)
    SGInventorySourceTypeComponent* SGInventorySourceType;                                     // 0x0C90 (0x08)
    SGInventoryTypeComponent_Weapon* SGInventoryTypeComponent_Weapon;                          // 0x0C98 (0x08)
    SGInventoryGridComponent* SGInventoryGrid;                                                 // 0x0CA0 (0x08)
    SGInventoryDropComponent* SGInventoryDrop;                                                 // 0x0CA8 (0x08)
    SGInventoryMeshComponent* SGInventoryMesh;                                                 // 0x0CB0 (0x08)
    SGWeaponDebugComponent* SGWeaponDebug;                                                     // 0x0CB8 (0x08)
    SGWeaponCameraComponent* SGWeaponCamera;                                                   // 0x0CC0 (0x08)
    SGWeaponFireIntervalComponent* SGWeaponFireInterval;                                       // 0x0CC8 (0x08)
    SGWeaponFiringComponent* SGWeaponFiring;                                                   // 0x0CD0 (0x08)
    SGWeaponAppearanceComponent* SGWeaponAppearance;                                           // 0x0CD8 (0x08)
    SGWeaponAmmoComponent* SGWeaponAmmo;                                                       // 0x0CE0 (0x08)
    SGWeaponZoomComponent* SGWeaponZoom;                                                       // 0x0CE8 (0x08)
    SGWeaponStateComponent* SGWeaponState;                                                     // 0x0CF0 (0x08)
    SGWeaponMovementComponent* SGWeaponMovement;                                               // 0x0CF8 (0x08)
    SGWeaponDamageComponent* SGWeaponDamage;                                                   // 0x0D00 (0x08)
    SGUAMWeaponAnimationComponent* SGUamWeaponAnimation;                                       // 0x0D08 (0x08)
};

// ============================================================
// Inheritance: BP_Weapon_M9_Bayonet_Uam_C : BP_MeleeWeaponBase_C : BP_SGWeapon_C : SGWeapon : SGInventory : Actor : Object
// Package: /Game/InBattle/Blueprints/Weapons/WeaponBase/MeleeWeapon/M9_Bayonet/BP_Weapon_M9_Bayonet_Uam
// ============================================================
class BP_Weapon_M9_Bayonet_Uam_C : public BP_MeleeWeaponBase_C {
public:
    SGInventorySearchComponent* SGInventorySearch;                                             // 0x0D10 (0x08)
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
    SGInventoryAbilityComponent* SGInventoryAbility;                                           // 0x0C30 (0x08)
    SGInventoryCommonDataComponent* SGInventoryCommonData;                                     // 0x0C38 (0x08)
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
    void ExecuteUbergraph_BP_CaptureActor(int32 EntryPoint);                                   // [Final] RVA: 0x1812688
};

// ============================================================
// Inheritance: ActionPointSystemActor : Actor : Object
// Package: /Script/AIActionPointGeneratorRuntime
// ============================================================
class ActionPointSystemActor : public Actor {
public:
    TMap<int64, float> PointToOtherNavPathLengths;                                             // 0x0318 (0x50)
    float MAX_NAV_PATH_DISTANCE;                                                               // 0x0368 (0x04)
    int32 PointToOtherNavPathLengthsCount;                                                     // 0x036C (0x04)
};

// ============================================================
// Inheritance: TacticSystemActor : ActionPointSystemActor : Actor : Object
// Package: /Script/AIActionPointGeneratorRuntime
// ============================================================
class TacticSystemActor : public ActionPointSystemActor {
public:
    CoverSystem* CoverSystem;                                                                  // 0x0370 (0x08)
    TArray<TacticPointData> TacticPoints;                                                      // 0x0378 (0x10)
    TArray<TacticPointData> DoorTacticPoints;                                                  // 0x0388 (0x10)
    TArray<TacticPointData> WindowTacticPoints;                                                // 0x0398 (0x10)
    TArray<TacticPointData> EscapeTacticPoints;                                                // 0x03A8 (0x10)
    TacticPointTypeColor TacticPointTypeColor;                                                 // 0x03B8 (0xD0)
    TArray<enum> GenerateOrientSafetyTypes;                                                    // 0x0488 (0x10)
    TArray<KeyRoutePointData> KeyRoutePoints;                                                  // 0x0498 (0x10)
    TMap<int32, float> KeyRoutePointsChians;                                                   // 0x04A8 (0x50)
    int32 NumOfOrientPointSafe;                                                                // 0x04F8 (0x04)
    int32 LengthOfOrientPointSafe;                                                             // 0x04FC (0x04)
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
    bool UseBlackboard(BlackboardData* BlackboardAsset, out BlackboardComponent* BlackboardComponent);  // [Final|Public] RVA: 0x7CD5BA8
    void UnclaimTaskResource(TSubclassOf<GameplayTaskResource> ResourceClass);                 // [Final|Public] RVA: 0x7CD57D4
    void SetPathFollowingComponent(PathFollowingComponent* NewPFComponent);                    // [Final|Public] RVA: 0x7CD51A0
    void SetMoveBlockDetection(bool bEnable);                                                  // [Final|Public] RVA: 0x7CD5104
    bool RunBehaviorTree(BehaviorTree* BTAsset);                                               // [Public] RVA: 0x7CD4E0C
    void OnUsingBlackBoard(BlackboardComponent* BlackboardComp, BlackboardData* BlackboardAsset);  // [Protected] RVA: 0x1812688
    void OnGameplayTaskResourcesClaimed(GameplayResourceSet NewlyClaimed, GameplayResourceSet FreshlyReleased);  // [Public] RVA: 0x7CD49F4
    uint8 MoveToLocation(const Vector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<NavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // [Final|Public] RVA: 0x7CD46D8
    uint8 MoveToActor(Actor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<NavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // [Final|Public] RVA: 0x7CD4420
    void K2_SetFocus(Actor* NewFocus);                                                         // [Final|Public] RVA: 0x7CD41C8
    void K2_SetFocalPoint(Vector FP);                                                          // [Final|Public] RVA: 0x7CD4118
    void K2_ClearFocus();                                                                      // [Final|Public] RVA: 0x7CD40FC
    bool HasPartialPath();                                                                     // [Final|Public] RVA: 0x7CD3E10
    PathFollowingComponent* GetPathFollowingComponent();                                       // [Final|Public] RVA: 0x7CD3C30
    uint8 GetMoveStatus();                                                                     // [Final|Public] RVA: 0x7CD3B70
    Vector GetImmediateMoveDestination();                                                      // [Final|Public] RVA: 0x7CD3A28
    Actor* GetFocusActor();                                                                    // [Final|Public] RVA: 0x7CD3A04
    Vector GetFocalPointOnActor(const Actor* Actor);                                           // [Public] RVA: 0x7CD3944
    Vector GetFocalPoint();                                                                    // [Final|Public] RVA: 0x7CD3910
    AIPerceptionComponent* GetAIPerceptionComponent();                                         // [Final|Public] RVA: 0x746AD88
    void ClaimTaskResource(TSubclassOf<GameplayTaskResource> ResourceClass);                   // [Final|Public] RVA: 0x7CD2CF8
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
    SplineComponent* GetRailSplineComponent();                                                 // [Final|Public] RVA: 0x4622F50
};

// ============================================================
// Inheritance: CineCameraActor : CameraActor : Actor : Object
// Package: /Script/CinematicCamera
// ============================================================
class CineCameraActor : public CameraActor {
public:
    CameraLookatTrackingSettings LookatTrackingSettings;                                       // 0x09F0 (0x50)

    // --- Functions ---
    CineCameraComponent* GetCineCameraComponent();                                             // [Final|Public] RVA: 0x29B0424
};

// ============================================================
// Inheritance: Object
// Package: /Script/CoreUObject
// ============================================================
class Object {
public:

    // --- Functions ---
    void ExecuteUbergraph(int32 EntryPoint);                                                   // [Public] RVA: 0x1812688
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
    bool WasRecentlyRendered(float Tolerance);                                                 // [Final|Public] RVA: 0x7A48324
    void UserConstructionScript();                                                             // [Public] RVA: 0x1812688
    void TearOff();                                                                            // [Public] RVA: 0x51FBE04
    void SnapRootComponentTo(Actor* InParentActor, FName InSocketName);                        // [Final|Public] RVA: 0x7A48200
    void SetTickGroup(uint8 NewTickGroup);                                                     // [Final|Public] RVA: 0x7A480D0
    void SetTickableWhenPaused(bool bTickableWhenPaused);                                      // [Final|Public] RVA: 0x7A48164
    void SetReplicates(bool bInReplicates);                                                    // [Final|Public] RVA: 0x7A48034
    void SetReplicateMovement(bool bInReplicateMovement);                                      // [Public] RVA: 0x7A47F94
    void SetOwner(Actor* NewOwner);                                                            // [Public] RVA: 0x5BDBC0C
    void SetNetDormancy(uint8 NewDormancy);                                                    // [Final|Public] RVA: 0x7A47EF8
    void SetLifeSpan(float InLifespan);                                                        // [Public] RVA: 0x7A47E58
    void SetAutoDestroyWhenFinished(bool bVal);                                                // [Final|Public] RVA: 0x7A47DBC
    void SetActorTickInterval(float TickInterval);                                             // [Final|Public] RVA: 0x7A47D24
    void SetActorTickEnabled(bool bEnabled);                                                   // [Final|Public] RVA: 0x229CFB8
    void SetActorScale3D(Vector NewScale3D);                                                   // [Final|Public] RVA: 0x7A47C7C
    void SetActorRelativeScale3D(Vector NewRelativeScale);                                     // [Final|Public] RVA: 0x7A47BD4
    void SetActorHiddenInGame(bool bNewHidden);                                                // [Public] RVA: 0x22067CC
    void SetActorEnableCollision(bool bNewActorEnableCollision);                               // [Final|Public] RVA: 0x2810114
    void RemoveTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);               // [Public] RVA: 0x7A47B34
    void RemoveTickPrerequisiteActor(Actor* PrerequisiteActor);                                // [Public] RVA: 0x7A47A94
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x1812688
    void ReceiveRadialDamage(float DamageReceived, const DamageType* DamageType, Vector Origin, const HitResult HitInfo, Controller* InstigatedBy, Actor* DamageCauser);  // [Public] RVA: 0x1812688
    void ReceivePointDamage(float Damage, const DamageType* DamageType, Vector HitLocation, Vector HitNormal, PrimitiveComponent* HitComponent, FName BoneName, Vector ShotFromDirection, Controller* InstigatedBy, Actor* DamageCauser, const HitResult HitInfo);  // [Public] RVA: 0x1812688
    void ReceiveHit(PrimitiveComponent* MyComp, Actor* Other, PrimitiveComponent* OtherComp, bool bSelfMoved, Vector HitLocation, Vector HitNormal, Vector NormalImpulse, const HitResult Hit);  // [Public] RVA: 0x1812688
    void ReceiveEndPlay(uint8 EndPlayReason);                                                  // [Protected] RVA: 0x1812688
    void ReceiveDestroyed();                                                                   // [Public] RVA: 0x1812688
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x1812688
    void ReceiveAnyDamage(float Damage, const DamageType* DamageType, Controller* InstigatedBy, Actor* DamageCauser);  // [Public] RVA: 0x1812688
    void ReceiveActorOnReleased(Key ButtonReleased);                                           // [Public] RVA: 0x1812688
    void ReceiveActorOnInputTouchLeave(const uint8 FingerIndex);                               // [Public] RVA: 0x1812688
    void ReceiveActorOnInputTouchEnter(const uint8 FingerIndex);                               // [Public] RVA: 0x1812688
    void ReceiveActorOnInputTouchEnd(const uint8 FingerIndex);                                 // [Public] RVA: 0x1812688
    void ReceiveActorOnInputTouchBegin(const uint8 FingerIndex);                               // [Public] RVA: 0x1812688
    void ReceiveActorOnClicked(Key ButtonPressed);                                             // [Public] RVA: 0x1812688
    void ReceiveActorEndOverlap(Actor* OtherActor);                                            // [Public] RVA: 0x1812688
    void ReceiveActorEndCursorOver();                                                          // [Public] RVA: 0x1812688
    void ReceiveActorBeginOverlap(Actor* OtherActor);                                          // [Public] RVA: 0x1812688
    void ReceiveActorBeginCursorOver();                                                        // [Public] RVA: 0x1812688
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);  // [Public] RVA: 0x7A47950
    void OnRep_ReplicateMovement();                                                            // [Public] RVA: 0x1D70840
    void OnRep_ReplicatedMovement();                                                           // [Public] RVA: 0x139DCB4
    void OnRep_Owner();                                                                        // [Protected] RVA: 0x15831AC
    void OnRep_Instigator();                                                                   // [Public] RVA: 0x209FC04
    void OnRep_AttachmentReplication();                                                        // [Public] RVA: 0x1AA03B0
    void MakeNoise(float Loudness, Pawn* NoiseInstigator, Vector NoiseLocation, float MaxRange, FName Tag);  // [Final|Public] RVA: 0x7A47754
    MaterialInstanceDynamic* MakeMIDForMaterial(MaterialInterface* Parent);                    // [Final|Public] RVA: 0x50F58D8
    bool K2_TeleportTo(Vector DestLocation, Rotator DestRotation);                             // [Final|Public] RVA: 0x7A47630
    bool K2_SetActorTransform(const Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A473F4
    bool K2_SetActorRotation(Rotator NewRotation, bool bTeleportPhysics);                      // [Final|Public] RVA: 0x7A472EC
    void K2_SetActorRelativeTransform(const Transform NewRelativeTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A470BC
    void K2_SetActorRelativeRotation(Rotator NewRelativeRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A46ED4
    void K2_SetActorRelativeLocation(Vector NewRelativeLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A46CEC
    bool K2_SetActorLocationAndRotation(Vector NewLocation, Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A46A98
    bool K2_SetActorLocation(Vector NewLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A468A8
    void K2_OnReset();                                                                         // [Public] RVA: 0x1812688
    void K2_OnEndViewTarget(PlayerController* PC);                                             // [Public] RVA: 0x1812688
    void K2_OnBecomeViewTarget(PlayerController* PC);                                          // [Public] RVA: 0x1812688
    SceneComponent* K2_GetRootComponent();                                                     // [Final|Public] RVA: 0x7A46884
    void K2_GetRefActorLocation(out Vector OutPosition);                                       // [Final|Public] RVA: 0x7A465E4
    TArray<ActorComponent*> K2_GetComponentsByClass(TSubclassOf<ActorComponent> ComponentClass);  // [Final|Public] RVA: 0x7A4644C
    Rotator K2_GetActorRotation();                                                             // [Final|Public] RVA: 0x7A461E4
    float K2_GetActorLocationZ();                                                              // [Final|Public] RVA: 0x7A45FEC
    float K2_GetActorLocationY();                                                              // [Final|Public] RVA: 0x7A45DEC
    float K2_GetActorLocationX();                                                              // [Final|Public] RVA: 0x7A45BEC
    Vector K2_GetActorLocation();                                                              // [Final|Public] RVA: 0x1B4B750
    void K2_DetachFromActor(enum LocationRule, enum RotationRule, enum ScaleRule);             // [Final|Public] RVA: 0x7A45A98
    void K2_DestroyComponent(ActorComponent* Component);                                       // [Final|Public] RVA: 0x7A459F8
    void K2_DestroyActor();                                                                    // [Public] RVA: 0x1849528
    void K2_AttachToComponent(SceneComponent* Parent, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7A457A8
    void K2_AttachToActor(Actor* ParentActor, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7A45568
    void K2_AttachRootComponentToActor(Actor* InParentActor, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7A453A0
    void K2_AttachRootComponentTo(SceneComponent* InParent, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7A451F8
    void K2_AddActorWorldTransformKeepScale(const Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A44FC8
    void K2_AddActorWorldTransform(const Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A44D98
    void K2_AddActorWorldRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A44BB0
    void K2_AddActorWorldOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A449C8
    void K2_AddActorLocalTransform(const Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A44798
    void K2_AddActorLocalRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A445B0
    void K2_AddActorLocalOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7A443C8
    bool IsOverlappingActor(const Actor* Other);                                               // [Final|Public] RVA: 0x7A44320
    bool IsChildActor();                                                                       // [Final|Public] RVA: 0x7A442AC
    bool IsActorTickEnabled();                                                                 // [Final|Public] RVA: 0x7A44294
    bool IsActorBeingDestroyed();                                                              // [Final|Public] RVA: 0x7A44278
    bool HasAuthority();                                                                       // [Final|Public] RVA: 0x1F6FB64
    float GetVerticalDistanceTo(const Actor* OtherActor);                                      // [Final|Public] RVA: 0x7A43E00
    Vector GetVelocity();                                                                      // [Public] RVA: 0x7A43DC8
    Transform GetTransform();                                                                  // [Final|Public] RVA: 0x7A43B6C
    bool GetTickableWhenPaused();                                                              // [Final|Public] RVA: 0x7A43B54
    float GetSquaredDistanceTo(const Actor* OtherActor);                                       // [Final|Public] RVA: 0x7A43AA8
    uint8 GetRemoteRole();                                                                     // [Final|Public] RVA: 0x4C68884
    ChildActorComponent* GetParentComponent();                                                 // [Final|Public] RVA: 0x7A43A14
    Actor* GetParentActor();                                                                   // [Final|Public] RVA: 0x7A439F0
    Actor* GetOwner();                                                                         // [Final|Public] RVA: 0x29B01EC
    void GetOverlappingComponents(out TArray<PrimitiveComponent*> OverlappingComponents);      // [Final|Public] RVA: 0x7A438B4
    void GetOverlappingActors(out TArray<Actor*> OverlappingActors, TSubclassOf<Actor> ClassFilter);  // [Final|Public] RVA: 0x7A437A4
    uint8 GetLocalRole();                                                                      // [Final|Public] RVA: 0x23145D8
    float GetLifeSpan();                                                                       // [Public] RVA: 0x7A43778
    Controller* GetInstigatorController();                                                     // [Final|Public] RVA: 0x7A43758
    Pawn* GetInstigator();                                                                     // [Final|Public] RVA: 0x5C8A7A0
    Vector GetInputVectorAxisValue(const Key InputAxisKey);                                    // [Final|Public] RVA: 0x7A435FC
    float GetInputAxisValue(const FName InputAxisName);                                        // [Final|Public] RVA: 0x7A43438
    float GetInputAxisKeyValue(const Key InputAxisKey);                                        // [Final|Public] RVA: 0x7A432EC
    float GetHorizontalDotProductTo(const Actor* OtherActor);                                  // [Final|Public] RVA: 0x7A42D10
    float GetHorizontalDistanceTo(const Actor* OtherActor);                                    // [Final|Public] RVA: 0x7A42874
    float GetGameTimeSinceCreation();                                                          // [Final|Public] RVA: 0x7A4284C
    float GetDotProductTo(const Actor* OtherActor);                                            // [Final|Public] RVA: 0x7A42258
    float GetDistanceTo(const Actor* OtherActor);                                              // [Final|Public] RVA: 0x7A421AC
    TArray<ActorComponent*> GetComponentsByTag(TSubclassOf<ActorComponent> ComponentClass, FName Tag);  // [Final|Public] RVA: 0x7A41FC4
    TArray<ActorComponent*> GetComponentsByInterface(TSubclassOf<Interface> Interface);        // [Final|Public] RVA: 0x7A41E2C
    ActorComponent* GetComponentByInterface(TSubclassOf<Interface> Interface);                 // [Final|Public] RVA: 0x7A41D84
    ActorComponent* GetComponentByClass(TSubclassOf<ActorComponent> ComponentClass);           // [Final|Public] RVA: 0x1B2A6B0
    FName GetAttachParentSocketName();                                                         // [Final|Public] RVA: 0x7A41D58
    Actor* GetAttachParentActor();                                                             // [Final|Public] RVA: 0x7A41D38
    void GetAttachedActors(out TArray<Actor*> OutActors, bool bResetArray);                    // [Final|Public] RVA: 0x143FF88
    void GetAllChildActors(out TArray<Actor*> ChildActors, bool bIncludeDescendants);          // [Final|Public] RVA: 0x7A41C28
    Vector GetActorUpVector();                                                                 // [Final|Public] RVA: 0x7A41BC4
    float GetActorTimeDilation();                                                              // [Final|Public] RVA: 0x7A41B9C
    float GetActorTickInterval();                                                              // [Final|Public] RVA: 0x29A8D84
    Vector GetActorScale3D();                                                                  // [Final|Public] RVA: 0x7A41B68
    Vector GetActorRightVector();                                                              // [Final|Public] RVA: 0x7A41B04
    Vector GetActorRelativeScale3D();                                                          // [Final|Public] RVA: 0x7A41AD4
    Vector GetActorForwardVector();                                                            // [Final|Public] RVA: 0x7A41A70
    void GetActorEyesViewPoint(out Vector OutLocation, out Rotator OutRotation);               // [Public] RVA: 0x7A41938
    bool GetActorEnableCollision();                                                            // [Final|Public] RVA: 0x7A4191C
    void GetActorBounds(bool bOnlyCollidingComponents, out Vector Origin, out Vector BoxExtent, bool bIncludeFromChildActors);  // [Final|Public] RVA: 0x7A41708
    void ForceNetUpdate();                                                                     // [Public] RVA: 0x5CC16D0
    void FlushNetDormancy();                                                                   // [Final|Public] RVA: 0x7A416F4
    void FinishAddComponent(ActorComponent* Component, bool bManualAttachment, const Transform RelativeTransform);  // [Final|Public] RVA: 0x7A41424
    void EnableInput(PlayerController* PlayerController);                                      // [Public] RVA: 0x673A13C
    void DisableInput(PlayerController* PlayerController);                                     // [Public] RVA: 0x673A3FC
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);                           // [Final|Public] RVA: 0x7A41388
    void AddTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);                  // [Public] RVA: 0x7A412E8
    void AddTickPrerequisiteActor(Actor* PrerequisiteActor);                                   // [Public] RVA: 0x7A41248
    ActorComponent* AddComponentByClass(TSubclassOf<ActorComponent> Class, bool bManualAttachment, const Transform RelativeTransform, bool bDeferredFinish);  // [Final|Public] RVA: 0x7A40FB8
    ActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const Transform RelativeTransform, const Object* ComponentTemplateContext, bool bDeferredFinish);  // [Final|Public] RVA: 0x1CCF278
    bool ActorHasTag(FName Tag);                                                               // [Final|Public] RVA: 0x7A40F10
    void ActiveManualReplicate();                                                              // [Final|Public] RVA: 0x7A40EF8
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
    FString GetLayerSpecDescription(const TArray<float> LayerSpec);                            // [Final|Public] RVA: 0x7A56A14
    void GetDefaultParameters(out TArray<AutoColorGradingData> outParameters);                 // [Final|Public] RVA: 0x7A56978
    void GetCurrentPositionAndDiff(out float OutPosition, out float outDiff);                  // [Final|Public] RVA: 0x7A56874
    void FeedLayerSpecParams(const TArray<float> LayerSpec);                                   // [Final|Public] RVA: 0x7A56734
    void EnableAutoColorGrading(bool bEnable);                                                 // [Final|Public] RVA: 0x7A56698
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
    PostProcessSettings PostProcessSettings;                                                   // 0x0350 (0x6A0)

    // --- Functions ---
    int32 GetAutoActivatePlayerIndex();                                                        // [Final|Public] RVA: 0x7A625FC
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
    void UnCrouch(bool bClientSimulation);                                                     // [Public] RVA: 0x5B4A1E0
    void StopJumping();                                                                        // [Public] RVA: 0x5CC157C
    void StopAnimMontage(AnimMontage* AnimMontage);                                            // [Public] RVA: 0x7A6BFD4
    void ServerMovePacked(const CharacterServerMovePackedBits PackedBits);                     // [Public] RVA: 0x7A6B80C
    void ServerMoveOld(float OldTimeStamp, Vector_NetQuantize10 OldAccel, MovementCompressedFlags OldMoveFlags);  // [Public] RVA: 0x7A6B674
    void ServerMoveNoBase(float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // [Public] RVA: 0x7A6B358
    void ServerMoveDualNoBase(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // [Public] RVA: 0x7A6AEA0
    void ServerMoveDualHybridRootMotion(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7A6A92C
    void ServerMoveDual(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7A6A3B8
    void ServerMove(float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags CompressedMoveFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7A69FDC
    void RootMotionDebugClientPrintOnScreen(FString inString);                                 // [Public] RVA: 0x7A69EDC
    bool PreGetCachedMoveOverlapsShapes(const Transform NewTransform, const Transform OldTransform, bool bRealMove, bool SweepOrLineTrace);  // [Final|Public] RVA: 0x7A69CA4
    float PlayAnimMontage(AnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);  // [Public] RVA: 0x7A69B5C
    void OnWalkingOffLedge(const Vector PreviousFloorImpactNormal, const Vector PreviousFloorContactNormal, const Vector PreviousLocation, float TimeDelta);  // [Public] RVA: 0x2257B24
    void OnRep_RootMotion();                                                                   // [Final|Public] RVA: 0x1BDA29C
    void OnRep_ReplicatedBasedMovement();                                                      // [Public] RVA: 0x155F584
    void OnRep_ReplayLastTransformUpdateTimeStamp();                                           // [Final|Public] RVA: 0x19D3BE8
    void OnRep_IsCrouched();                                                                   // [Public] RVA: 0x2770480
    void OnLaunched(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);                 // [Public] RVA: 0x1812688
    void OnLanded(const HitResult Hit);                                                        // [Public] RVA: 0x1812688
    void OnJumped();                                                                           // [Public] RVA: 0x7A69B44
    void LaunchCharacter(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);            // [Public] RVA: 0x7A699EC
    void K2_UpdateCustomMovement(float DeltaTime);                                             // [Public] RVA: 0x1812688
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);               // [Public] RVA: 0x1812688
    void K2_OnMovementModeChanged(uint8 PrevMovementMode, uint8 NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // [Public] RVA: 0x1812688
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x1812688
    void Jump();                                                                               // [Public] RVA: 0x7A67940
    bool IsPlayingRootMotion();                                                                // [Final|Public] RVA: 0x7A6791C
    bool IsPlayingNetworkedRootMotionMontage();                                                // [Final|Public] RVA: 0x7A678F8
    bool IsJumpProvidingForce();                                                               // [Public] RVA: 0x7A678D0
    bool HasAnyRootMotion();                                                                   // [Final|Public] RVA: 0x7A67898
    AnimMontage* GetCurrentMontage();                                                          // [Final|Public] RVA: 0x7A6622C
    Vector GetBaseTranslationOffset();                                                         // [Final|Public] RVA: 0x7A66204
    Rotator GetBaseRotationOffsetRotator();                                                    // [Final|Public] RVA: 0x7A661D0
    float GetAnimRootMotionTranslationScale();                                                 // [Final|Public] RVA: 0x7A660DC
    void Crouch(bool bClientSimulation);                                                       // [Public] RVA: 0x7A6603C
    void ClientVeryShortAdjustPosition(float Timestamp, Vector NewLoc, PrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7A65B60
    void ClientMoveResponsePacked(const CharacterMoveResponsePackedBits PackedBits);           // [Public] RVA: 0x7A65A04
    void ClientCheatWalk();                                                                    // [Public] RVA: 0x7A659EC
    void ClientCheatGhost();                                                                   // [Public] RVA: 0x7A659D4
    void ClientCheatFly();                                                                     // [Public] RVA: 0x7A659BC
    void ClientAdjustRootMotionSourcePosition(float Timestamp, RootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, Vector ServerLoc, Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, PrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7A654D4
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, Vector ServerLoc, Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, PrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7A6510C
    void ClientAdjustPosition(float Timestamp, Vector NewLoc, Vector NewVel, PrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, uint8 ServerSprintFailReason);  // [Public] RVA: 0x7A64D9C
    void ClientAckGoodMove(float Timestamp);                                                   // [Public] RVA: 0x7A64CF8
    bool CanJumpInternal();                                                                    // [Protected] RVA: 0x7A64CD0
    bool CanJump();                                                                            // [Final|Public] RVA: 0x7A64C6C
    bool CanCrouch();                                                                          // [Public] RVA: 0x2797EB0
    void CacheInitialMeshOffset(Vector MeshRelativeLocation, Rotator MeshRelativeRotation);    // [Public] RVA: 0x7A64B54
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
    void UnPossess();                                                                          // [Final|Public] RVA: 0x7A6F79C
    void StopMovement();                                                                       // [Public] RVA: 0x5BED274
    void SetInitialLocationAndRotation(const Vector NewLocation, const Rotator NewRotation);   // [Public] RVA: 0x5CD5A7C
    void SetIgnoreMoveInput(bool bNewMoveInput);                                               // [Public] RVA: 0x7A6F6FC
    void SetIgnoreLookInput(bool bNewLookInput);                                               // [Public] RVA: 0x7A6F65C
    void SetControlRotation(const Rotator NewRotation);                                        // [Public] RVA: 0x7A6F5BC
    void ResetIgnoreMoveInput();                                                               // [Public] RVA: 0x4612BF0
    void ResetIgnoreLookInput();                                                               // [Public] RVA: 0x5CDE6E0
    void ResetIgnoreInputFlags();                                                              // [Public] RVA: 0x21F8C4C
    void ReceiveUnPossess(Pawn* UnpossessedPawn);                                              // [Protected] RVA: 0x1812688
    void ReceivePossess(Pawn* PossessedPawn);                                                  // [Protected] RVA: 0x1812688
    void ReceiveInstigatedAnyDamage(float Damage, const DamageType* DamageType, Actor* DamagedActor, Actor* DamageCauser);  // [Protected] RVA: 0x1812688
    void Possess(Pawn* InPawn);                                                                // [Final|Public] RVA: 0x7A6F520
    void OnRep_PlayerState();                                                                  // [Public] RVA: 0xFB98F8
    void OnRep_Pawn();                                                                         // [Public] RVA: 0xFB98D4
    bool LineOfSightTo(const Actor* Other, Vector ViewPoint, bool bAlternateChecks);           // [Public] RVA: 0x7A6F3C8
    Pawn* K2_GetPawn();                                                                        // [Final|Public] RVA: 0x29B0B60
    bool IsPlayerController();                                                                 // [Final|Public] RVA: 0x7A6F3AC
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7A6F384
    bool IsLookInputIgnored();                                                                 // [Public] RVA: 0x7A6F35C
    bool IsLocalPlayerController();                                                            // [Final|Public] RVA: 0x7A6F318
    bool IsLocalController();                                                                  // [Public] RVA: 0x7A6F2F0
    Actor* GetViewTarget();                                                                    // [Public] RVA: 0x22627D0
    Rotator GetDesiredRotation();                                                              // [Public] RVA: 0x7A6F0B0
    Rotator GetControlRotation();                                                              // [Public] RVA: 0x7A6F078
    void ClientSetRotation(Rotator NewRotation, bool bResetCamera);                            // [Public] RVA: 0x22B086C
    void ClientSetLocation(Vector NewLocation, Rotator NewRotation);                           // [Public] RVA: 0x7A6EF20
    PlayerController* CastToPlayerController();                                                // [Final|Public] RVA: 0x7A6EED8
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
    void StartMatch();                                                                         // [Public] RVA: 0x5D60058
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);                                       // [Public] RVA: 0x5D04E00
    void Say(FString Msg);                                                                     // [Public] RVA: 0x7A83170
    void RestartGame();                                                                        // [Public] RVA: 0x5D60088
    bool ReadyToStartMatch();                                                                  // [Protected] RVA: 0x229EFD0
    bool ReadyToEndMatch();                                                                    // [Protected] RVA: 0x1CB67FC
    bool NeedBlockLoadLevelWhenStartMatch();                                                   // [Protected] RVA: 0x2797EB0
    void K2_OnSetMatchState(FName NewState);                                                   // [Protected] RVA: 0x1812688
    bool IsMatchInProgress();                                                                  // [Public] RVA: 0x7A7FDCC
    FName GetMatchState();                                                                     // [Final|Public] RVA: 0x7A7EBDC
    void EndMatch();                                                                           // [Public] RVA: 0x5D60070
    void AbortMatch();                                                                         // [Public] RVA: 0x5D5FEF0
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
    void StartPlay();                                                                          // [Public] RVA: 0x1B18160
    Pawn* SpawnDefaultPawnFor(Controller* NewPlayer, Actor* StartSpot);                        // [Public] RVA: 0x2788C48
    Pawn* SpawnDefaultPawnAtTransform(Controller* NewPlayer, const Transform SpawnTransform);  // [Public] RVA: 0x28103B4
    bool ShouldReset(Actor* ActorToReset);                                                     // [Public] RVA: 0x7A845C8
    void ReturnToMainMenuHost();                                                               // [Public] RVA: 0x5AE6CFC
    void RestartPlayerAtTransform(Controller* NewPlayer, const Transform SpawnTransform);      // [Public] RVA: 0x7A82EE8
    void RestartPlayerAtPlayerStart(Controller* NewPlayer, Actor* StartSpot);                  // [Public] RVA: 0x7A82DFC
    void RestartPlayer(Controller* NewPlayer);                                                 // [Public] RVA: 0x5B4B194
    void ResetLevel();                                                                         // [Public] RVA: 0x29B2AD0
    bool PlayerCanRestart(PlayerController* Player);                                           // [Public] RVA: 0x18456FC
    bool MustSpectate(PlayerController* NewPlayerController);                                  // [Public] RVA: 0x2099F18
    void K2_PostLogin(PlayerController* NewPlayer);                                            // [Public] RVA: 0x1812688
    void K2_OnSwapPlayerControllers(PlayerController* OldPC, PlayerController* NewPC);         // [Protected] RVA: 0x1812688
    void K2_OnRestartPlayer(Controller* NewPlayer);                                            // [Public] RVA: 0x1812688
    void K2_OnLogout(Controller* ExitingController);                                           // [Public] RVA: 0x1812688
    void K2_OnChangeName(Controller* Other, FString NewName, bool bNameChange);                // [Public] RVA: 0x1812688
    Actor* K2_FindPlayerStart(Controller* Player, FString IncomingName);                       // [Final|Public] RVA: 0x7A7FEBC
    void InitStartSpot(Actor* StartSpot, Controller* NewPlayer);                               // [Public] RVA: 0x29B2484
    void InitializeHUDForPlayer(PlayerController* NewPlayer);                                  // [Protected] RVA: 0x22C5218
    bool HasMatchStarted();                                                                    // [Public] RVA: 0x7A6F2F0
    bool HasMatchEnded();                                                                      // [Public] RVA: 0x5AE645C
    void HandleStartingNewPlayer(PlayerController* NewPlayer);                                 // [Public] RVA: 0x1846A10
    int32 GetNumSpectators();                                                                  // [Public] RVA: 0x7A7ECB4
    int32 GetNumPlayers();                                                                     // [Public] RVA: 0x7A7EC8C
    TSubclassOf<Object> GetDefaultPawnClassForController(Controller* InController);            // [Public] RVA: 0x225FA4C
    Actor* FindPlayerStart(Controller* Player, FString IncomingName);                          // [Public] RVA: 0x2046118
    Actor* ChoosePlayerStart(Controller* Player);                                              // [Public] RVA: 0x1846F8C
    void ChangeName(Controller* Controller, FString NewName, bool bNameChange);                // [Public] RVA: 0x7A7BCD4
    bool CanSpectate(PlayerController* Viewer, PlayerState* ViewTarget);                       // [Public] RVA: 0x7A7BBC0
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
    void OnRep_MatchState();                                                                   // [Public] RVA: 0x29A8B5C
    void OnRep_ElapsedTime();                                                                  // [Public] RVA: 0x29B2AD0
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
    void OnRep_SpectatorClass();                                                               // [Protected] RVA: 0xFB98F8
    void OnRep_ReplicatedWorldTimeSeconds();                                                   // [Protected] RVA: 0x1B18160
    void OnRep_ReplicatedHasBegunPlay();                                                       // [Protected] RVA: 0x23125E8
    void OnRep_GameModeClass();                                                                // [Protected] RVA: 0xFB98D4
    bool HasMatchStarted();                                                                    // [Public] RVA: 0x483929C
    bool HasMatchEnded();                                                                      // [Public] RVA: 0x5C533DC
    bool HasBegunPlay();                                                                       // [Public] RVA: 0x7A88FEC
    float GetServerWorldTimeSeconds();                                                         // [Public] RVA: 0x7A88F88
    float GetPlayerStartTime(Controller* Controller);                                          // [Public] RVA: 0x7A88A90
    float GetPlayerRespawnDelay(Controller* Controller);                                       // [Public] RVA: 0x7A889E0
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
    void ShowHUD();                                                                            // [Public] RVA: 0x1BF3FE4
    void ShowDebugToggleSubCategory(FName Category);                                           // [Final|Public] RVA: 0x7A8D4C0
    void ShowDebugForReticleTargetToggle(TSubclassOf<Actor> DesiredClass);                     // [Final|Public] RVA: 0x7A8D420
    void ShowDebug(FName DebugType);                                                           // [Public] RVA: 0x7A8D384
    void RemoveDebugText(Actor* SrcActor, bool bLeaveDurationText);                            // [Final|Public] RVA: 0x7A8D0B4
    void RemoveAllDebugStrings();                                                              // [Final|Public] RVA: 0x7A8D098
    void ReceiveHitBoxRelease(const FName BoxName);                                            // [Public] RVA: 0x1812688
    void ReceiveHitBoxEndCursorOver(const FName BoxName);                                      // [Public] RVA: 0x1812688
    void ReceiveHitBoxClick(const FName BoxName);                                              // [Public] RVA: 0x1812688
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);                                    // [Public] RVA: 0x1812688
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);                                             // [Public] RVA: 0x1812688
    Vector Project(Vector Location);                                                           // [Final|Public] RVA: 0x7A8CFD0
    void PreviousDebugTarget();                                                                // [Public] RVA: 0x5AE6444
    void NextDebugTarget();                                                                    // [Public] RVA: 0x23125E8
    void GetTextSize(FString Text, out float OutWidth, out float OutHeight, Font* Font, float Scale);  // [Final|Public] RVA: 0x7A8CC5C
    PlayerController* GetOwningPlayerController();                                             // [Final|Public] RVA: 0x4E34A60
    Pawn* GetOwningPawn();                                                                     // [Final|Public] RVA: 0x7A8CC3C
    void GetActorsInSelectionRectangle(TSubclassOf<Actor> ClassFilter, const Vector2D FirstPoint, const Vector2D SecondPoint, out TArray<Actor*> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);  // [Final|Public] RVA: 0x7A8C964
    void DrawTextureSimple(Texture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7A8C6D4
    void DrawTexture(Texture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, LinearColor TintColor, uint8 BlendMode, float Scale, bool bScalePosition, float Rotation, Vector2D RotPivot);  // [Final|Public] RVA: 0x7A8C000
    void DrawText(FString Text, LinearColor TextColor, float ScreenX, float ScreenY, Font* Font, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7A8BD4C
    void DrawRect(LinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);  // [Final|Public] RVA: 0x7A8BB54
    void DrawMaterialTriangle(MaterialInterface* Material, Vector2D V0_Pos, Vector2D V1_Pos, Vector2D V2_Pos, Vector2D V0_UV, Vector2D V1_UV, Vector2D V2_UV, LinearColor V0_Color, LinearColor V1_Color, LinearColor V2_Color);  // [Final|Public] RVA: 0x7A8B6BC
    void DrawMaterialSimple(MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7A8B354
    void DrawMaterial(MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, Vector2D RotPivot);  // [Final|Public] RVA: 0x7A8AD1C
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, LinearColor LineColor, float LineThickness);  // [Final|Public] RVA: 0x7A8AAD0
    void Deproject(float ScreenX, float ScreenY, out Vector WorldPosition, out Vector WorldDirection);  // [Final|Public] RVA: 0x7A8A8D0
    void AddHitBox(Vector2D position, Vector2D Size, FName InName, bool bConsumesInput, int32 Priority);  // [Final|Public] RVA: 0x7A8A6EC
    void AddDebugText(FString DebugText, Actor* SrcActor, float Duration, Vector Offset, Vector DesiredOffset, Color TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, Font* InFont, float FontScale, bool bDrawShadow);  // [Final|Public] RVA: 0x7A8A264
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
    void WorldOriginLocationChanged(IntVector OldOriginLocation, IntVector NewOriginLocation);  // [Public] RVA: 0x1812688
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // [Public] RVA: 0x7AECD3C
    bool RemoteEvent(FName EventName);                                                         // [Public] RVA: 0x7AEC4A0
    void LevelReset();                                                                         // [Public] RVA: 0x1812688
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
    void SpawnDefaultController();                                                             // [Public] RVA: 0x5AE6B4C
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);                  // [Final|Public] RVA: 0x7AFB1C8
    void ReceiveUnpossessed(Controller* OldController);                                        // [Public] RVA: 0x1812688
    void ReceivePossessed(Controller* NewController);                                          // [Public] RVA: 0x1812688
    void PawnMakeNoise(float Loudness, Vector NoiseLocation, bool bUseNoiseMakerLocation, Actor* NoiseMaker);  // [Final|Public] RVA: 0x7AFA524
    void OnRep_PlayerState();                                                                  // [Public] RVA: 0x1C5379C
    void OnRep_Controller();                                                                   // [Public] RVA: 0x5AE5FC8
    void LaunchPawn(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);                 // [Final|Public] RVA: 0x7AFA230
    Vector K2_GetMovementInputVector();                                                        // [Final|Public] RVA: 0x7AFA094
    bool IsPlayerControlled();                                                                 // [Public] RVA: 0x7A6F2F0
    bool IsPawnControlled();                                                                   // [Final|Public] RVA: 0x7AFA1E0
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7AFA1B8
    bool IsLocallyControlled();                                                                // [Public] RVA: 0x7AFA190
    bool IsControlled();                                                                       // [Final|Public] RVA: 0x7AFA138
    bool IsBotControlled();                                                                    // [Public] RVA: 0x5AE645C
    Vector GetPendingMovementInputVector();                                                    // [Final|Public] RVA: 0x7AFA094
    Vector GetNavAgentLocation();                                                              // [Public] RVA: 0x7AFA010
    PawnMovementComponent* GetMovementComponent();                                             // [Public] RVA: 0x7A71244
    Actor* GetMovementBaseActor(const Pawn* Pawn);                                             // [Static|Final|Public] RVA: 0x7AF9F78
    Vector GetLastMovementInputVector();                                                       // [Final|Public] RVA: 0x7AF9F50
    Rotator GetControlRotation();                                                              // [Final|Public] RVA: 0x7AF9E50
    Controller* GetController();                                                               // [Final|Public] RVA: 0x5CBA4A8
    Rotator GetBaseAimRotation();                                                              // [Public] RVA: 0x7AF9B60
    void DetachFromControllerPendingDestroy();                                                 // [Public] RVA: 0x5AE6F7C
    Vector ConsumeMovementInputVector();                                                       // [Public] RVA: 0x7AF9B28
    void AddMovementInput(Vector WorldDirection, float ScaleValue, bool bForce);               // [Public] RVA: 0x7AF9584
    void AddControllerYawInput(float Val);                                                     // [Public] RVA: 0x5AE67F4
    void AddControllerRollInput(float Val);                                                    // [Public] RVA: 0x5AE6EC4
    void AddControllerPitchInput(float Val);                                                   // [Public] RVA: 0x5AE6754
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
    CameraCacheEntry CameraCache;                                                              // 0x0390 (0x740)
    CameraCacheEntry LastFrameCameraCache;                                                     // 0x0AD0 (0x740)
    TViewTarget ViewTarget;                                                                    // 0x1210 (0x750)
    TViewTarget PendingViewTarget;                                                             // 0x1960 (0x750)
    CameraCacheEntry CameraCachePrivate;                                                       // 0x20E0 (0x740)
    CameraCacheEntry LastFrameCameraCachePrivate;                                              // 0x2820 (0x740)
    TArray<CameraModifier*> ModifierList;                                                      // 0x2F60 (0x10)
    TArray<TSubclassOf<CameraModifier>> DefaultModifiers;                                      // 0x2F70 (0x10)
    float FreeCamDistance;                                                                     // 0x2F80 (0x04)
    Vector FreeCamOffset;                                                                      // 0x2F84 (0x0C)
    Vector ViewTargetOffset;                                                                   // 0x2F90 (0x0C)
    FMulticastDelegate OnAudioFadeChangeEvent;                                                 // 0x2FA0 (0x10)
    TArray<EmitterCameraLensEffectBase*> CameraLensEffects;                                    // 0x2FC0 (0x10)
    CameraModifier_CameraShake* CachedCameraShakeMod;                                          // 0x2FD0 (0x08)
    CameraAnimInst* AnimInstPool;                                                              // 0x2FD8 (0x08)
    TArray<PostProcessSettings> PostProcessBlendCache;                                         // 0x3018 (0x10)
    TArray<CameraAnimInst*> ActiveAnims;                                                       // 0x3038 (0x10)
    TArray<CameraAnimInst*> FreeAnims;                                                         // 0x3048 (0x10)
    CameraActor* AnimCameraActor;                                                              // 0x3058 (0x08)
    bool bIsOrthographic;                                                                      // 0x3060 (0x01) BitMask: 0x01
    bool bDefaultConstrainAspectRatio;                                                         // 0x3060 (0x01) BitMask: 0x02
    bool bClientSimulatingViewTarget;                                                          // 0x3060 (0x01) BitMask: 0x40
    bool bUseClientSideCameraUpdates;                                                          // 0x3060 (0x01) BitMask: 0x80
    bool bGameCameraCutThisFrame;                                                              // 0x3061 (0x01) BitMask: 0x04
    float ViewPitchMin;                                                                        // 0x3064 (0x04)
    float ViewPitchMax;                                                                        // 0x3068 (0x04)
    float ViewYawMin;                                                                          // 0x306C (0x04)
    float ViewYawMax;                                                                          // 0x3070 (0x04)
    float ViewRollMin;                                                                         // 0x3074 (0x04)
    float ViewRollMax;                                                                         // 0x3078 (0x04)
    float ServerUpdateCameraTimeout;                                                           // 0x3080 (0x04)

    // --- Functions ---
    void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();                              // [Final|Protected] RVA: 0x7B07D54
    void StopCameraShake(CameraShakeBase* ShakeInstance, bool bImmediately);                   // [Public] RVA: 0x7B07BC4
    void StopCameraFade();                                                                     // [Public] RVA: 0x1AFC80C
    void StopCameraAnimInst(CameraAnimInst* AnimInst, bool bImmediate);                        // [Public] RVA: 0x7B07AD4
    void StopAllInstancesOfCameraShakeFromSource(TSubclassOf<CameraShakeBase> Shake, CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Public] RVA: 0x7B0799C
    void StopAllInstancesOfCameraShake(TSubclassOf<CameraShakeBase> Shake, bool bImmediately);  // [Public] RVA: 0x7B078AC
    void StopAllInstancesOfCameraAnim(CameraAnim* Anim, bool bImmediate);                      // [Public] RVA: 0x7B077BC
    void StopAllCameraShakesFromSource(CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Public] RVA: 0x7B076CC
    void StopAllCameraShakes(bool bImmediately);                                               // [Public] RVA: 0x7B0762C
    void StopAllCameraAnims(bool bImmediate);                                                  // [Public] RVA: 0x7B0758C
    MatineeCameraShake* StartMatineeCameraShakeFromSource(TSubclassOf<MatineeCameraShake> ShakeClass, CameraShakeSourceComponent* SourceComponent, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7B07390
    MatineeCameraShake* StartMatineeCameraShake(TSubclassOf<MatineeCameraShake> ShakeClass, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7B071E8
    CameraShakeBase* StartCameraShakeFromSource(TSubclassOf<CameraShakeBase> ShakeClass, CameraShakeSourceComponent* SourceComponent, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7B06F58
    CameraShakeBase* StartCameraShake(TSubclassOf<CameraShakeBase> ShakeClass, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7B06DAC
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, LinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);  // [Public] RVA: 0x7B06B60
    void SetManualCameraFade(float InFadeAmount, LinearColor Color, bool bInFadeAudio);        // [Public] RVA: 0x7B063C4
    void SetGameCameraCutThisFrame();                                                          // [Final|Public] RVA: 0x7B0626C
    bool RemoveCameraModifier(CameraModifier* ModifierToRemove);                               // [Public] RVA: 0x6700388
    void RemoveCameraLensEffect(EmitterCameraLensEffectBase* Emitter);                         // [Public] RVA: 0x7B04CF0
    CameraAnimInst* PlayCameraAnim(CameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7B03E84
    void PhotographyCameraModify(const Vector NewCameraLocation, const Vector PreviousCameraLocation, const Vector OriginalCameraLocation, out Vector ResultCameraLocation);  // [Public] RVA: 0x7B03C7C
    void OnPhotographySessionStart();                                                          // [Public] RVA: 0x23145C0
    void OnPhotographySessionEnd();                                                            // [Public] RVA: 0x451CC14
    void OnPhotographyMultiPartCaptureStart();                                                 // [Public] RVA: 0x1EE66B4
    void OnPhotographyMultiPartCaptureEnd();                                                   // [Public] RVA: 0x1BF3FE4
    PlayerController* GetOwningPlayerController();                                             // [Public] RVA: 0x7B03624
    float GetFOVAngle();                                                                       // [Public] RVA: 0x7A6CD34
    Rotator GetCameraRotation();                                                               // [Public] RVA: 0x7B02064
    Vector GetCameraLocation();                                                                // [Public] RVA: 0x7B0202C
    CameraModifier* FindCameraModifierByClass(TSubclassOf<CameraModifier> ModifierClass);      // [Public] RVA: 0x7B01F7C
    void ClearCameraLensEffects();                                                             // [Public] RVA: 0x2770480
    bool BlueprintUpdateCamera(Actor* CameraTarget, out Vector NewCameraLocation, out Rotator NewCameraRotation, out float NewCameraFOV);  // [Public] RVA: 0x1812688
    CameraModifier* AddNewCameraModifier(TSubclassOf<CameraModifier> ModifierClass);           // [Public] RVA: 0x7AFEA90
    EmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<EmitterCameraLensEffectBase> LensEffectEmitterClass);  // [Public] RVA: 0x7AFE9E0
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
    bool WasInputKeyJustReleased(Key Key);                                                     // [Final|Public] RVA: 0x7B08020
    bool WasInputKeyJustPressed(Key Key);                                                      // [Final|Public] RVA: 0x7B07EDC
    void ToggleSpeaking(bool bInSpeaking);                                                     // [Public] RVA: 0x7B07E3C
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);       // [Final|Private] RVA: 0x6721630
    void SwitchLevel(FString URL);                                                             // [Public] RVA: 0x7B07D68
    void StopHapticEffect(enum Hand);                                                          // [Final|Public] RVA: 0x7B07CB4
    void StartFire(uint8 FireModeNum);                                                         // [Public] RVA: 0x7B0714C
    void SetVirtualJoystickVisibility(bool bVisible);                                          // [Public] RVA: 0x7B06AC0
    void SetViewTargetWithBlend(Actor* NewViewTarget, float BlendTime, uint8 BlendFunc, float BlendExp, bool bLockOutgoing);  // [Public] RVA: 0x7B068DC
    void SetName(FString S);                                                                   // [Public] RVA: 0x7B067DC
    void SetMouseLocation(const int32 X, const int32 Y);                                       // [Final|Public] RVA: 0x7B066F4
    void SetMouseCursorWidget(uint8 Cursor, UserWidget* CursorWidget);                         // [Final|Public] RVA: 0x7B06510
    void SetHapticsByValue(const float Frequency, const float Amplitude, enum Hand);           // [Final|Public] RVA: 0x7B06284
    void SetDisableHaptics(bool bNewDisabled);                                                 // [Public] RVA: 0x5CC6590
    void SetControllerLightColor(Color Color);                                                 // [Final|Public] RVA: 0x7B061A8
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // [Public] RVA: 0x7B05F9C
    void SetAudioListenerOverride(SceneComponent* AttachToComponent, Vector Location, Rotator Rotation);  // [Final|Public] RVA: 0x7B05D9C
    void SetAudioListenerAttenuationOverride(SceneComponent* AttachToComponent, Vector AttenuationLocationOVerride);  // [Final|Public] RVA: 0x7B05C14
    void ServerViewSelf(ViewTargetTransitionParams TransitionParams);                          // [Public] RVA: 0x7B05B38
    void ServerViewPrevPlayer();                                                               // [Public] RVA: 0x7B05AEC
    void ServerViewNextPlayer();                                                               // [Public] RVA: 0x7B05AA0
    void ServerVerifyViewTarget();                                                             // [Public] RVA: 0x7B05A54
    void ServerUpdateMultipleLevelsVisibility(const TArray<UpdateLevelVisibilityLevelInfo> LevelVisibilities);  // [Final|Public] RVA: 0x7B05958
    void ServerUpdateLevelVisibility(const UpdateLevelVisibilityLevelInfo LevelVisibility);    // [Final|Public] RVA: 0x14D8B18
    void ServerUpdateCamera(Vector_NetQuantize CamLoc, int32 CamPitchAndYaw);                  // [Public] RVA: 0x7B05820
    void ServerUnmutePlayer(UniqueNetIdRepl PlayerId);                                         // [Public] RVA: 0x7B05720
    void ServerToggleAILogging();                                                              // [Public] RVA: 0x7B056D4
    void ServerShortTimeout();                                                                 // [Public] RVA: 0x2517860
    void ServerSetSpectatorWaiting(bool bWaiting);                                             // [Public] RVA: 0x7B0560C
    void ServerSetSpectatorLocation(Vector NewLoc, Rotator NewRot);                            // [Public] RVA: 0x7B054B4
    void ServerRestartPlayer();                                                                // [Public] RVA: 0x7B05468
    void ServerPause();                                                                        // [Public] RVA: 0x7B0541C
    void ServerNotifyLoadedWorld(FName WorldPackageName);                                      // [Final|Public] RVA: 0x7B05348
    void ServerMutePlayer(UniqueNetIdRepl PlayerId);                                           // [Public] RVA: 0x7B05248
    void ServerExecRPC(FString Msg);                                                           // [Public] RVA: 0x7B05150
    void ServerExec(FString Msg);                                                              // [Final|Public] RVA: 0x5C41AAC
    void ServerCheckClientPossessionReliable();                                                // [Public] RVA: 0x7B05104
    void ServerCheckClientPossession();                                                        // [Public] RVA: 0x7B050B8
    void ServerChangeName(FString S);                                                          // [Public] RVA: 0x7B04F94
    void ServerCamera(FName NewMode);                                                          // [Public] RVA: 0x7B04ED8
    void ServerAcknowledgePossession(Pawn* P);                                                 // [Public] RVA: 0x1AF2F3C
    void SendToConsole(FString Command);                                                       // [Public] RVA: 0x7B04E04
    void RestartLevel();                                                                       // [Public] RVA: 0x7B04DEC
    void ResetControllerLightColor();                                                          // [Final|Public] RVA: 0x7B04D90
    bool ProjectWorldLocationToScreen(Vector WorldLocation, out Vector2D ScreenLocation, bool bPlayerViewportRelative);  // [Final|Public] RVA: 0x7B04B58
    void PlayHapticEffect(HapticFeedbackEffect_Base* HapticEffect, enum Hand, float Scale, bool bLoop);  // [Final|Public] RVA: 0x7B04574
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, uint8 Action, LatentActionInfo LatentInfo);  // [Final|Private] RVA: 0x7B04248
    void Pause();                                                                              // [Public] RVA: 0x7B03C64
    void OnServerStartedVisualLogger(bool bIsLogging);                                         // [Public] RVA: 0x7B03BC4
    void LocalTravel(FString URL);                                                             // [Public] RVA: 0x7B03AC4
    void K2_ClientPlayForceFeedback(ForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);  // [Final|Public] RVA: 0x7B038A8
    bool IsInputKeyDown(Key Key);                                                              // [Final|Public] RVA: 0x7B03764
    void GetViewportSize(out int32 SizeX, out int32 SizeY);                                    // [Final|Public] RVA: 0x7B03664
    SpectatorPawn* GetSpectatorPawn();                                                         // [Final|Public] RVA: 0x7B0364C
    bool GetMousePosition(out float LocationX, out float LocationY);                           // [Final|Public] RVA: 0x7B03520
    Vector GetInputVectorKeyState(Key Key);                                                    // [Final|Public] RVA: 0x7B03414
    void GetInputTouchState(uint8 FingerIndex, out float LocationX, out float LocationY, out bool bIsCurrentlyPressed);  // [Final|Public] RVA: 0x7B03258
    void GetInputMouseDelta(out float DeltaX, out float DeltaY);                               // [Final|Public] RVA: 0x7B03154
    void GetInputMotionState(out Vector Tilt, out Vector RotationRate, out Vector Gravity, out Vector Acceleration);  // [Final|Public] RVA: 0x7B02EE0
    float GetInputKeyTimeDown(Key Key);                                                        // [Final|Public] RVA: 0x7B02D94
    void GetInputAnalogStickState(uint8 WhichStick, out float StickX, out float StickY);       // [Final|Public] RVA: 0x7B02C48
    float GetInputAnalogKeyState(Key Key);                                                     // [Final|Public] RVA: 0x7B02AFC
    HUD* GetHUD();                                                                             // [Final|Public] RVA: 0x7B020EC
    bool GetHitResultUnderFingerForObjects(uint8 FingerIndex, const TArray<uint8> ObjectTypes, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B02910
    bool GetHitResultUnderFingerByChannel(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B02750
    bool GetHitResultUnderFinger(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B02590
    bool GetHitResultUnderCursorForObjects(const TArray<uint8> ObjectTypes, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B023F4
    bool GetHitResultUnderCursorByChannel(uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B0227C
    bool GetHitResultUnderCursor(uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B02104
    Vector GetFocalLocation();                                                                 // [Public] RVA: 0x7B020B4
    float GetDeprecatedInputYawScale();                                                        // [Final|Public] RVA: 0x4E34AEC
    float GetDeprecatedInputRollScale();                                                       // [Final|Public] RVA: 0x7B0209C
    float GetDeprecatedInputPitchScale();                                                      // [Final|Public] RVA: 0x5115490
    void FOV(float NewFOV);                                                                    // [Public] RVA: 0x7B01EDC
    void EnableCheats();                                                                       // [Public] RVA: 0x7B01EC4
    bool DoLineTraceAtScreenPosition(const Vector2D ScreenPosition, const uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7B01D08
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, out Vector WorldLocation, out Vector WorldDirection);  // [Final|Public] RVA: 0x7B01AFC
    bool DeprojectMousePositionToWorld(out Vector WorldLocation, out Vector WorldDirection);   // [Final|Public] RVA: 0x7B01988
    void ConsoleKey(Key Key);                                                                  // [Public] RVA: 0x7B01898
    void ClientWasKicked(const FText KickReason);                                              // [Public] RVA: 0x7B017D8
    void ClientVoiceHandshakeComplete();                                                       // [Public] RVA: 0x27A0760
    void ClientUpdateMultipleLevelsStreamingStatus(const TArray<UpdateLevelStreamingLevelStatus> LevelStatuses);  // [Public] RVA: 0x7B016D8
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);  // [Public] RVA: 0x7B014D0
    void ClientUnmutePlayer(UniqueNetIdRepl PlayerId);                                         // [Public] RVA: 0x7B01400
    void ClientTravelInternal(FString URL, uint8 TravelType, bool bSeamless, Guid MapPackageGuid);  // [Public] RVA: 0x7B01210
    void ClientTravel(FString URL, uint8 TravelType, bool bSeamless, Guid MapPackageGuid);     // [Final|Public] RVA: 0x7B0105C
    void ClientTeamMessage(PlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);  // [Public] RVA: 0x7B00EC4
    void ClientStopForceFeedback(ForceFeedbackEffect* ForceFeedbackEffect, FName Tag);         // [Public] RVA: 0x7B00DD8
    void ClientStopCameraShakesFromSource(CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Final|Public] RVA: 0x7B00CD8
    void ClientStopCameraShake(TSubclassOf<CameraShakeBase> Shake, bool bImmediately);         // [Public] RVA: 0x7B00BE8
    void ClientStopCameraAnim(CameraAnim* AnimToStop);                                         // [Public] RVA: 0x7B00B48
    void ClientStartOnlineSession();                                                           // [Public] RVA: 0x7B00B30
    void ClientStartCameraShakeFromSource(TSubclassOf<CameraShakeBase> Shake, CameraShakeSourceComponent* SourceComponent);  // [Final|Public] RVA: 0x7B00A04
    void ClientStartCameraShake(TSubclassOf<CameraShakeBase> Shake, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7B0086C
    void ClientSpawnCameraLensEffect(TSubclassOf<EmitterCameraLensEffectBase> LensEffectEmitterClass);  // [Public] RVA: 0x4835E04
    void ClientSetViewTarget(Actor* A, ViewTargetTransitionParams TransitionParams);           // [Public] RVA: 0x7B00758
    void ClientSetSpectatorWaiting(bool bWaiting);                                             // [Public] RVA: 0x7B006B8
    void ClientSetHUD(TSubclassOf<HUD> NewHUDClass);                                           // [Public] RVA: 0x22281F8
    void ClientSetForceMipLevelsToBeResident(MaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);  // [Public] RVA: 0x7B00584
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);  // [Public] RVA: 0x7B003D0
    void ClientSetCameraMode(FName NewCamMode);                                                // [Public] RVA: 0x7B00334
    void ClientSetCameraFade(bool bEnableFading, Color FadeColor, Vector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);  // [Public] RVA: 0x7B000F4
    void ClientSetBlockOnAsyncLoading();                                                       // [Public] RVA: 0x5CC8668
    void ClientReturnToMainMenuWithTextReason(const FText ReturnReason);                       // [Public] RVA: 0x7B00034
    void ClientReturnToMainMenu(FString ReturnReason);                                         // [Public] RVA: 0x7AFFF34
    void ClientRetryClientRestart(Pawn* NewPawn);                                              // [Public] RVA: 0x7AFFE94
    void ClientRestart(Pawn* NewPawn);                                                         // [Public] RVA: 0xFB9064
    void ClientReset();                                                                        // [Public] RVA: 0x7AF7740
    void ClientRepObjRef(Object* Object);                                                      // [Public] RVA: 0x7AFFDF4
    void ClientReceiveLocalizedMessage(TSubclassOf<LocalMessage> Message, int32 Switch, PlayerState* RelatedPlayerState_1, PlayerState* RelatedPlayerState_2, Object* OptionalObject);  // [Public] RVA: 0x19B129C
    void ClientPrestreamTextures(Actor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);  // [Public] RVA: 0x7AFFC58
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);                     // [Public] RVA: 0x7AFFB10
    void ClientPlaySoundAtLocation(SoundBase* Sound, Vector Location, float VolumeMultiplier, float PitchMultiplier);  // [Public] RVA: 0x7AFF978
    void ClientPlaySound(SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);     // [Public] RVA: 0x7AFF844
    void ClientPlayForceFeedback_Internal(ForceFeedbackEffect* ForceFeedbackEffect, ForceFeedbackParameters Params);  // [Final|Private] RVA: 0x7AFF73C
    void ClientPlayCameraAnim(CameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, enum Space, Rotator CustomPlaySpace);  // [Public] RVA: 0x7AFF3E4
    void ClientMutePlayer(UniqueNetIdRepl PlayerId);                                           // [Public] RVA: 0x7AFF314
    void ClientMessage(FString S, FName Type, float MsgLifeTime);                              // [Public] RVA: 0x7AFF1C4
    void ClientIgnoreMoveInput(bool bIgnore);                                                  // [Public] RVA: 0x7AFF124
    void ClientIgnoreLookInput(bool bIgnore);                                                  // [Public] RVA: 0x5B4AEDC
    void ClientGotoState(FName NewState);                                                      // [Public] RVA: 0x23170CC
    void ClientGameEnded(Actor* EndGameFocus, bool bIsWinner);                                 // [Public] RVA: 0x7AFF034
    void ClientForceGarbageCollection();                                                       // [Public] RVA: 0x5B4B14C
    void ClientFlushLevelStreaming();                                                          // [Final|Public] RVA: 0x7AFEFBC
    void ClientEndOnlineSession();                                                             // [Public] RVA: 0x7AFEFA4
    void ClientEnableNetworkVoice(bool bEnable);                                               // [Public] RVA: 0x18430F4
    void ClientCommitMapChange();                                                              // [Public] RVA: 0x5B4B164
    void ClientClearCameraLensEffects();                                                       // [Public] RVA: 0x7AFEF8C
    void ClientCapBandwidth(int32 Cap);                                                        // [Public] RVA: 0x22FEC58
    void ClientCancelPendingMapChange();                                                       // [Public] RVA: 0x7AFEF74
    void ClientAddTextureStreamingLoc(Vector InLoc, float Duration, bool bOverrideLocation);   // [Final|Public] RVA: 0x7AFEE3C
    void ClearAudioListenerOverride();                                                         // [Final|Public] RVA: 0x7AFEE10
    void ClearAudioListenerAttenuationOverride();                                              // [Final|Public] RVA: 0x7AFEDE4
    bool CanRestartPlayer();                                                                   // [Public] RVA: 0x7AFEDBC
    void Camera(FName NewMode);                                                                // [Public] RVA: 0x7AFED20
    void AddYawInput(float Val);                                                               // [Public] RVA: 0x7AFEC80
    void AddRollInput(float Val);                                                              // [Public] RVA: 0x7AFEBE0
    void AddPitchInput(float Val);                                                             // [Public] RVA: 0x7AFEB40
    void ActivateTouchInterface(TouchInterface* NewTouchInterface);                            // [Public] RVA: 0x7AFE940
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
    void ReceiveOverrideWith(PlayerState* OldPlayerState);                                     // [Protected] RVA: 0x1812688
    void ReceiveCopyProperties(PlayerState* NewPlayerState);                                   // [Protected] RVA: 0x1812688
    void OnRep_UniqueId();                                                                     // [Public] RVA: 0x4525784
    void OnRep_Score();                                                                        // [Public] RVA: 0x1BF3FE4
    void OnRep_PlayerName();                                                                   // [Public] RVA: 0x1EE66B4
    void OnRep_PlayerId();                                                                     // [Public] RVA: 0x23145C0
    void OnRep_bIsInactive();                                                                  // [Public] RVA: 0x451CC14
    FString GetPlayerName();                                                                   // [Final|Public] RVA: 0x1836014
    uint8 GetCompressedPingStdDev();                                                           // [Final|Public] RVA: 0x29A8E24
    uint8 GetCompressedPingForTwoSeconds();                                                    // [Final|Public] RVA: 0x29A914C
    uint8 GetCompressedPingForHalfSecond();                                                    // [Final|Public] RVA: 0x29A9164
    uint8 GetCompressedPing();                                                                 // [Final|Public] RVA: 0x1D854A0
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
    WorldSettings* K2_GetWorldSettings();                                                      // [Final|Public] RVA: 0x7B37D8C
    bool HasValidSceneEV100();                                                                 // [Final|Public] RVA: 0x7B37D68
    void HandleTimelineScrubbed();                                                             // [Final|Public] RVA: 0x7B37D54
    float GetLastSmoothedSceneEV100();                                                         // [Final|Public] RVA: 0x5CE6864
    float GetLastSceneEV100();                                                                 // [Final|Public] RVA: 0x7B37D3C
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
    ReverbSettings DefaultReverbSettings;                                                      // 0x03F8 (0x20)
    InteriorSettings DefaultAmbientZoneSettings;                                               // 0x0418 (0x24)
    float MonoCullingDistance;                                                                 // 0x043C (0x04)
    SoundMix* DefaultBaseSoundMix;                                                             // 0x0440 (0x08)
    float TimeDilation;                                                                        // 0x0448 (0x04)
    float MatineeTimeDilation;                                                                 // 0x044C (0x04)
    float DemoPlayTimeDilation;                                                                // 0x0450 (0x04)
    float MinGlobalTimeDilation;                                                               // 0x0454 (0x04)
    float MaxGlobalTimeDilation;                                                               // 0x0458 (0x04)
    float MinUndilatedFrameTime;                                                               // 0x045C (0x04)
    float MaxUndilatedFrameTime;                                                               // 0x0460 (0x04)
    BroadphaseSettings BroadphaseSettings;                                                     // 0x0464 (0x40)
    PlayerState* Pauser;                                                                       // 0x04A8 (0x08)
    TArray<NetViewer> ReplicationViewers;                                                      // 0x04B0 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x04C0 (0x10)
    PlayerState* PauserPlayerState;                                                            // 0x04D0 (0x08)
    int32 MaxNumberOfBookmarks;                                                                // 0x04D8 (0x04)
    TSubclassOf<BookmarkBase> DefaultBookmarkClass;                                            // 0x04E0 (0x08)
    TArray<BookmarkBase*> BookmarkArray;                                                       // 0x04E8 (0x10)
    TSubclassOf<BookmarkBase> LastBookmarkClass;                                               // 0x04F8 (0x08)

    // --- Functions ---
    void OnRep_WorldGravityZ();                                                                // [Public] RVA: 0x1BF3FE4
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
    void ShowBurnin();                                                                         // [Final|Public] RVA: 0x7558488
    void SetSequence(LevelSequence* InSequence);                                               // [Final|Public] RVA: 0x75583EC
    void SetReplicatePlayback(bool ReplicatePlayback);                                         // [Final|Public] RVA: 0x7558338
    void SetBindingByTag(FName BindingTag, const TArray<Actor*> Actors, bool bAllowBindingsFromAsset);  // [Final|Public] RVA: 0x7558090
    void SetBinding(MovieSceneObjectBindingID Binding, const TArray<Actor*> Actors, bool bAllowBindingsFromAsset);  // [Final|Public] RVA: 0x7557F00
    void ResetBindings();                                                                      // [Final|Public] RVA: 0x7557EEC
    void ResetBinding(MovieSceneObjectBindingID Binding);                                      // [Final|Public] RVA: 0x7557E28
    void RemoveBindingByTag(FName Tag, Actor* Actor);                                          // [Final|Public] RVA: 0x7557D40
    void RemoveBinding(MovieSceneObjectBindingID Binding, Actor* Actor);                       // [Final|Public] RVA: 0x7557C2C
    void OnLevelSequenceLoaded__DelegateSignature();                                           // [Public] RVA: 0x1812688
    LevelSequence* LoadSequence();                                                             // [Final|Public] RVA: 0x7557B94
    void HideBurnin();                                                                         // [Final|Public] RVA: 0x7557B48
    LevelSequencePlayer* GetSequencePlayer();                                                  // [Final|Public] RVA: 0x7557AF8
    LevelSequence* GetSequence();                                                              // [Final|Public] RVA: 0x7557AA4
    TArray<MovieSceneObjectBindingID> FindNamedBindings(FName Tag);                            // [Final|Public] RVA: 0x75578EC
    MovieSceneObjectBindingID FindNamedBinding(FName Tag);                                     // [Final|Public] RVA: 0x7557800
    void AddBindingByTag(FName BindingTag, Actor* Actor, bool bAllowBindingsFromAsset);        // [Final|Public] RVA: 0x7557514
    void AddBinding(MovieSceneObjectBindingID Binding, Actor* Actor, bool bAllowBindingsFromAsset);  // [Final|Public] RVA: 0x75573AC
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
    bool bDebugBlock;                                                                          // 0x0338 (0x01) BitMask: 0xFF
    int32 IndexOfUpdateFlashBlock;                                                             // 0x033C (0x04)
    int32 IndexOfCheckEnemyFlashBlock;                                                         // 0x0340 (0x04)
    float SevereLightBurnDistanceCoef;                                                         // 0x0344 (0x04)
    float ModerateLightBurnDistanceCoef;                                                       // 0x0348 (0x04)
    float MildLightBurnDistanceCoef;                                                           // 0x034C (0x04)
};

// ============================================================
// Inheritance: MFQuestManagerActor : Actor : Object
// Package: /Script/MFQuestSystem
// ============================================================
class MFQuestManagerActor : public Actor {
public:
    TArray<MFQuestNodeGraph*> QuestGraphList;                                                  // 0x0318 (0x10)

    // --- Functions ---
    void GetQuestNodeGraphFromPC(PlayerController* InOwnerPC, out TArray<MFQuestNodeGraph*> InGraphList);  // [Public] RVA: 0x5F56B30
    MFQuestNodeGraph* CreateNewQuestGraph(Controller* InOwnerController);                      // [Public] RVA: 0x5F561C4
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
    void SpawnFromPool(const bool Reconstruct, const PoolSpawnOptions SpawnOptions, const Transform SpawnTransform);  // [Final|Public] RVA: 0x48B5DF0
    void SetLifeSpanPool(float InLifespan);                                                    // [Public] RVA: 0x48B5B78
    void ReturnToPool();                                                                       // [Final|Public] RVA: 0x48B5B3C
    SharedObjectPool* GetSharedPool();                                                         // [Final|Public] RVA: 0x4622F50
    ObjectPool* GetOwningPool();                                                               // [Final|Public] RVA: 0x48B5018
    float GetLifeSpanPool();                                                                   // [Public] RVA: 0x48B440C
    void EVENT_OnPoolEndPlay();                                                                // [Public] RVA: 0x1BF3FE4
    void EVENT_OnPoolBeginPlay();                                                              // [Public] RVA: 0x1EE66B4
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
    void Recalculate();                                                                        // [Final|Public] RVA: 0x5ACC634
    void PlaySmokeEffectWithDelay();                                                           // [Final|Public] RVA: 0x5ACC620
    void OnDoorStateChange(SGDoorBase* Door, enum NewState);                                   // [Final|Public] RVA: 0x5ACBFA4
    void OnActorLeave(Actor* OverlappedActor, Actor* OtherActor);                              // [Final|Private] RVA: 0x1394B74
    void OnActorEnter(Actor* OverlappedActor, Actor* OtherActor);                              // [Final|Private] RVA: 0x139505C
    bool IsLineTraceHit(const Vector Start, const Vector End);                                 // [Final|Public] RVA: 0x5ACBE30
    void InitializeVolume();                                                                   // [Final|Public] RVA: 0x5ACBE1C
    bool HasOverlapBox(const Vector Pos, const Quat Rot, const Vector BoxHalfExtent);          // [Final|Public] RVA: 0x5ACBB9C
    void DynamicTextureTest(StaticMeshActor* StaticMeshActor);                                 // [Final|Public] RVA: 0x5ACAE34
};

// ============================================================
// Inheritance: SGAICharacter : SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGAICharacter : public SGCharacter {
public:
    AIRankData RankData;                                                                       // 0x1D58 (0x0C)
    float PatrolRadius;                                                                        // 0x1D64 (0x04)
    float CautionRadius;                                                                       // 0x1D68 (0x04)
    float CrossFireRadius;                                                                     // 0x1D6C (0x04)
    int32 Kill_PMCAI_Count;                                                                    // 0x1D70 (0x04)
    int32 Kill_ScavAI_Count;                                                                   // 0x1D74 (0x04)
    int32 Kill_PMCPlayer_Count;                                                                // 0x1D78 (0x04)
    int32 Kill_ScavPlayer_Count;                                                               // 0x1D7C (0x04)
    int32 loot_count;                                                                          // 0x1D80 (0x04)
    FName SpawnedGroupID;                                                                      // 0x1D84 (0x08)
    int32 EquipmentPoolID;                                                                     // 0x1D8C (0x04)
    int64 AIID;                                                                                // 0x1D90 (0x08)
    int32 AITeamIndex;                                                                         // 0x1D98 (0x04)
    uint64 MasterPlayerGID;                                                                    // 0x1DA0 (0x08)
    int64 AIUID;                                                                               // 0x1DA8 (0x08)
    int64 PathGroupID;                                                                         // 0x1DB0 (0x08)
    int32 AILevel;                                                                             // 0x1DB8 (0x04)
    TArray<int32> BattleVolumesIn;                                                             // 0x1DC0 (0x10)
    float GrenadeThrowAngle;                                                                   // 0x1DD0 (0x04)
    float GrenadeInitSpeed;                                                                    // 0x1DD4 (0x04)
    float GrenadeFlyingTime;                                                                   // 0x1DD8 (0x04)
    float GrenadeHoldedTime;                                                                   // 0x1DDC (0x04)
    float OverrideExtraGrenadePlayEffectTime;                                                  // 0x1DE0 (0x04)
    NPCAINavModifierVolume* GrenadeNavModifier;                                                // 0x1DE8 (0x08)
    float LastBattleEnterTime;                                                                 // 0x1DF0 (0x04)
    FMulticastDelegate OnAICharacterReady;                                                     // 0x1DF8 (0x10)
    FMulticastDelegate OnAICharacterGoalEnemyDied;                                             // 0x1E08 (0x10)
    FMulticastDelegate OnPathSegmentBecomeDanger;                                              // 0x1E18 (0x10)
    FMulticastDelegate OnAIAimingStartOneRound;                                                // 0x1E28 (0x10)
    FMulticastDelegate OnAIFireStartOneRound;                                                  // 0x1E38 (0x10)
    FMulticastDelegate OnAIFireStopOneRound;                                                   // 0x1E48 (0x10)
    FMulticastDelegate OnAIExitRLModeEvt;                                                      // 0x1E58 (0x10)
    FMulticastDelegate OnAIUIDChangedEvt;                                                      // 0x1E68 (0x10)
    DataTable* SoundData;                                                                      // 0x1E78 (0x08)
    bool bActive;                                                                              // 0x1E80 (0x01) BitMask: 0xFF
    bool bInDSLODControlled;                                                                   // 0x1E81 (0x01) BitMask: 0xFF
    bool IsSafeKeeper;                                                                         // 0x1E82 (0x01) BitMask: 0xFF
    float DeathNetCullDistanceSquared;                                                         // 0x1E8C (0x04)
    TMap<int32, NPCAICoverEnvQueryData*> EQSDataInstances;                                     // 0x1E90 (0x50)
    bool bAIReady;                                                                             // 0x1EE0 (0x01) BitMask: 0xFF
    bool bCanStartAI;                                                                          // 0x1EE1 (0x01) BitMask: 0xFF
    FString AIName;                                                                            // 0x1EE8 (0x10)
    FString DirectorName;                                                                      // 0x1EF8 (0x10)
    FString AIAvatarUrl;                                                                       // 0x1F08 (0x10)
    FString AISpawnTag;                                                                        // 0x1F18 (0x10)
    int32 Handle;                                                                              // 0x1F2C (0x04)
    SpawnRecord MySpawnRecord;                                                                 // 0x1F30 (0xE0)
    SGCharacterAIStaticsComponent* AIStaticsComponent;                                         // 0x2010 (0x08)
    TSet<ActorComponent*> TempCloseTickComps;                                                  // 0x2018 (0x50)
    bool bNeedShowTeammateInfo;                                                                // 0x2068 (0x01) BitMask: 0xFF
    SGCharacterAIAimingComponent* AimingComponent;                                             // 0x2070 (0x08)
    PMCAIProfileInfo AIProfileInfo;                                                            // 0x2078 (0x70)

    // --- Functions ---
    int32 TotalKillCount();                                                                    // [Final|Public] RVA: 0x5AEFC6C
    void SetIsSafeKeeper(bool InValue);                                                        // [Final|Public] RVA: 0x5AEF984
    void SetCanStartAI();                                                                      // [Final|Public] RVA: 0x5AEF96C
    void SetAIUID(int64 InValue);                                                              // [Final|Public] RVA: 0x5AEF82C
    void SetAIReady(bool bReady, bool bSpawnAtUnderGround);                                    // [Final|Public] RVA: 0x5AEF728
    void SetAIName(FString NewName);                                                           // [Final|Public] RVA: 0x5AEF5C4
    void SetAIID(int64 InValue);                                                               // [Final|Public] RVA: 0x5AEF520
    void SetAIAvatarUrl(FString NewAvatarUrl);                                                 // [Final|Public] RVA: 0x5AEF478
    void SetAIActive(bool Active);                                                             // [Final|Public] RVA: 0x5AEF3D4
    bool RemoveEQSDataInstance(int32 QueryID);                                                 // [Final|Public] RVA: 0x5AEF028
    void OnRep_AIUIDChanged();                                                                 // [Final|Protected] RVA: 0x2118934
    void OnRep_AIReady();                                                                      // [Final|Protected] RVA: 0x5AEEE28
    void OnRep_AIActiveChanged();                                                              // [Final|Protected] RVA: 0x1C7B7F0
    void OnPostDied(Character* DeadCharacter, Controller* Killer, DamageEventObject* DamageEventObject);  // [Final|Public] RVA: 0x5AEECE8
    void OnKillOther(const KillInfo KillInfo, const KillOtherStatis KillOtherStatics);         // [Final|Public] RVA: 0x5AEEBAC
    void OnHandleAfterCharacterUpdateAvatarLayers();                                           // [Final|Protected] RVA: 0x1DA7C88
    bool MarkBattleLeave(enum reason);                                                         // [Final|Public] RVA: 0x5AEEB04
    bool MarkBattleEnter();                                                                    // [Final|Public] RVA: 0x5AEEAE0
    bool IsAIReady();                                                                          // [Final|Public] RVA: 0x5AEEAAC
    float GetTimeBecomeSafeKeeper();                                                           // [Final|Public] RVA: 0x5AEE9F4
    Actor* GetStartSpot();                                                                     // [Final|Public] RVA: 0x5AEE9D0
    Vector GetSpawnPosition();                                                                 // [Final|Public] RVA: 0x5AEE9A8
    int64 GetPathGroupID();                                                                    // [Final|Public] RVA: 0x5AEE990
    int64 GetID();                                                                             // [Final|Public] RVA: 0x5AEE940
    int64 GetHandle();                                                                         // [Final|Public] RVA: 0x5AEE91C
    NPCAICoverEnvQueryData* GetEQSDataInstance(int32 QueryID);                                 // [Final|Public] RVA: 0x5AEE74C
    float GetBattleDuration();                                                                 // [Final|Public] RVA: 0x5AEE724
    PMCAIProfileInfo GetAIProfileInfo();                                                       // [Final|Public] RVA: 0x5AEE708
    int32 GetAILevel();                                                                        // [Final|Public] RVA: 0x5AEE6F0
    float GetAIActivedTime();                                                                  // [Public] RVA: 0x5AEE6C0
    bool GetAIActive();                                                                        // [Public] RVA: 0x5AEE690
    NPCAICoverEnvQueryData* CreateEQSDataInstance(int32 QueryID);                              // [Final|Public] RVA: 0x5AEE5E8
    bool BackToSpawnPoint();                                                                   // [Final|Public] RVA: 0x5AEE278
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
    float FocalPointPredictionTime;                                                            // 0x0568 (0x04)
    int32 MaxLinetracePerNavQuery;                                                             // 0x056C (0x04)

    // --- Functions ---
    void SetRotationInterval(float InRotationInterval);                                        // [Final|Public] RVA: 0x5AF4310
    void SetPauseZombieRotation(enum reason, bool bPause);                                     // [Final|Public] RVA: 0x5AF4224
    void RequestResumeBehaviorTree(enum reason, FString Message);                              // [Final|Public] RVA: 0x5AF3EA4
    void RequestPauseBehaviorTree(enum reason, FString Message);                               // [Final|Public] RVA: 0x5AF3D9C
    void OnPostDied(Character* DeadCharacter, Controller* Killer, DamageEventObject* DamageEventObject);  // [Final|Protected] RVA: 0x5AF3308
    void OnGoalEnmeyChanged(Character* FromCharacter, Actor* LastEnemy, Actor* CurrentEnemy);  // [Final|Protected] RVA: 0x5AF319C
    void ModifyRotation_Recoil(float DeltaTime, bool bUpdateControlRotation, const Vector FocalPoint, out Rotator ViewRotation, const Rotator BaseRotation);  // [Final|Protected] RVA: 0x5AF2B40
    bool IsZombieRotationPaused();                                                             // [Final|Public] RVA: 0x5AF2B24
    bool IsTargetLastBeenSeen(Actor* InTarget);                                                // [Public] RVA: 0x5AF2938
    bool IsBehaviorTreePausedByReason(enum reason);                                            // [Final|Public] RVA: 0x5AF2860
    bool IsBehaviorTreePaused();                                                               // [Final|Public] RVA: 0x5AF2844
    Actor* GetStartSpot();                                                                     // [Final|Public] RVA: 0x5AF27B4
    void ForceResumeAllBehaviorTree(FString Message);                                          // [Final|Public] RVA: 0x5AF1F94
    bool FindAimPoint(const Vector DoubtPoint, const float CostLimit, bool bStanding, float IgnPointRadius, out Vector OutAimPoint, out bool OutIsPartial);  // [Final|Public] RVA: 0x5AF1CE8
};

// ============================================================
// Inheritance: SGAssembleBase : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGAssembleBase : public Actor {
public:
    TArray<WeaponAssembleEnvironmentInfo> AssembleInfoArray;                                   // 0x0318 (0x10)
    SkeletalMeshComponent* BaseSkeletalMeshComp;                                               // 0x0328 (0x08)
    StaticMeshComponent* BaseStaticMeshComp;                                                   // 0x0330 (0x08)
    SGConfigUtil* Config;                                                                      // 0x0338 (0x08)
    Box Bounds;                                                                                // 0x0340 (0x1C)
    Box BaseBounds;                                                                            // 0x035C (0x1C)
    TMap<SGInventory*, InvBulletInfo> InvBulletInfos;                                          // 0x0378 (0x50)
    SGInventory* CachedInv;                                                                    // 0x03C8 (0x08)
    TSubclassOf<SGConfigUtil> ConfigClass;                                                     // 0x03D0 (0x08)
    uint8 ILCQ_Type;                                                                           // 0x03D8 (0x01)
    int32 LightChannel;                                                                        // 0x03DC (0x04)
    float Margin;                                                                              // 0x03E0 (0x04)
    TSubclassOf<AnimInstance> AnimInstance;                                                    // 0x03E8 (0x08)
    TMap<int32, Object*> LoadedMesh;                                                           // 0x03F0 (0x50)
    TMap<int32, int32> AdditionalCameraPosXForAdapter;                                         // 0x0440 (0x50)
    TMap<int32, int32> AdditionalCameraPosXsInCollapseForAdapter;                              // 0x0490 (0x50)
    TMap<int32, int32> AdditionalRenderCalcZInCollapseForAdapter;                              // 0x04E0 (0x50)
    bool AsStatic;                                                                             // 0x0530 (0x01) BitMask: 0xFF
    TMap<int32, AnimSequenceBase*> CollapseInvIDAnimMap;                                       // 0x0568 (0x50)
    SGInventory* CurrentAssembleInv;                                                           // 0x05B8 (0x08)
    MeshSkinMaterialInfo CachedInvSkinMatInfo;                                                 // 0x05C0 (0x18)
    TMap<int32, Object*> LoadedExtraMeshs;                                                     // 0x05E0 (0x50)
    Object* LoadedShelfMesh;                                                                   // 0x0638 (0x08)
    TArray<PrimitiveComponent*> CueSpawnedComponents;                                          // 0x0648 (0x10)

    // --- Functions ---
    void SetForceGameMesh(bool bInForceGameMesh);                                              // [Final|Protected] RVA: 0x5B16F68
    void ResetMesh(SceneCaptureComponent2D* InSceneCaptureComponent);                          // [Final|Protected] RVA: 0x5B16D20
    int32 GetForcedLOD();                                                                      // [Final|Protected] RVA: 0x5B16984
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
    void PoolEndPlay();                                                                        // [Final|Protected] RVA: 0x1EB9494
};

// ============================================================
// Inheritance: SGCharacter : SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGCharacter : public SGCharacterBase {
public:
    WidgetComponent* LinkIndicatorComp;                                                        // 0x0760 (0x08)
    FMulticastDelegate MoveBlockedByEvent;                                                     // 0x0768 (0x10)
    FMulticastDelegate ContinuallyMoveBlockedByEvent;                                          // 0x0778 (0x10)
    FMulticastDelegate DeafEvent;                                                              // 0x0788 (0x10)
    FMulticastDelegate LackInMoistureEvent;                                                    // 0x0798 (0x10)
    FMulticastDelegate LackInFoodEvent;                                                        // 0x07A8 (0x10)
    FMulticastDelegate EnduranceChangedEvent;                                                  // 0x07B8 (0x10)
    FMulticastDelegate GameplayEffectExecuted;                                                 // 0x07C8 (0x10)
    FMulticastDelegate HealthConditionChangedEvent;                                            // 0x07D8 (0x10)
    FMulticastDelegate HealthChangedEvent;                                                     // 0x07E8 (0x10)
    FMulticastDelegate EnergyChangeEvent;                                                      // 0x07F8 (0x10)
    FMulticastDelegate EnergyRecoverScaleEvent;                                                // 0x0808 (0x10)
    FMulticastDelegate EnergyLowExhaustedChangedEvent;                                         // 0x0818 (0x10)
    FMulticastDelegate MoistureChangeEvent;                                                    // 0x0828 (0x10)
    FMulticastDelegate FoodChangeEvent;                                                        // 0x0838 (0x10)
    FMulticastDelegate HearingChangedEvent;                                                    // 0x0848 (0x10)
    FMulticastDelegate ReloadEvent;                                                            // 0x0858 (0x10)
    FMulticastDelegate OutOfEnduranceEvent;                                                    // 0x0868 (0x10)
    FMulticastDelegate DamageSpreadingRoundFinishEvent;                                        // 0x0878 (0x10)
    FMulticastDelegate RecoverFromEnduranceEvent;                                              // 0x0888 (0x10)
    FMulticastDelegate PreTakeDamageEvent;                                                     // 0x0898 (0x10)
    FMulticastDelegate TakeRealDamageEvent;                                                    // 0x08A8 (0x10)
    FMulticastDelegate TakeDamageByDebuffEvent;                                                // 0x08B8 (0x10)
    FMulticastDelegate FFPTakeHitEvent;                                                        // 0x08C8 (0x10)
    FMulticastDelegate CauseDamageEvent;                                                       // 0x0908 (0x10)
    FMulticastDelegate CauseRealDamageEvent;                                                   // 0x0918 (0x10)
    FMulticastDelegate ArmorTakeDamageEvent;                                                   // 0x0928 (0x10)
    FMulticastDelegate CauseDebuffEvent;                                                       // 0x0938 (0x10)
    FMulticastDelegate CauseArmorDurabilityReduce;                                             // 0x0948 (0x10)
    FMulticastDelegate WantToDieModifyEvent;                                                   // 0x0958 (0x10)
    FMulticastDelegate PerkAbilityRealUseEvent;                                                // 0x0968 (0x10)
    FMulticastDelegate InteractFultonEvent;                                                    // 0x0978 (0x10)
    FMulticastDelegate OnDeathAnimationEndedEvent;                                             // 0x0988 (0x10)
    FMulticastDelegate OnDoJumpFailed;                                                         // 0x0998 (0x10)
    FMulticastDelegate KillEvent;                                                              // 0x09A8 (0x10)
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
    FMulticastDelegate IsTouchGrassEvent;                                                      // 0x0B00 (0x10)
    FMulticastDelegate OnPickUpPullBolt;                                                       // 0x0B10 (0x10)
    FMulticastDelegate OnDoPullBoltNotify;                                                     // 0x0B20 (0x10)
    FMulticastDelegate OnOperationResultOpen;                                                  // 0x0B30 (0x10)
    FMulticastDelegate StartInteractBoxInventoryEvent;                                         // 0x0B40 (0x10)
    FMulticastDelegate FinishGameEvent;                                                        // 0x0B50 (0x10)
    FMulticastDelegate RotaterEvent;                                                           // 0x0B60 (0x10)
    FMulticastDelegate OpenContextMenuEvent;                                                   // 0x0B70 (0x10)
    FMulticastDelegate OpenContextMenuDTEvent;                                                 // 0x0B80 (0x10)
    FMulticastDelegate BoxInventoryOpenedEvent;                                                // 0x0B90 (0x10)
    FMulticastDelegate DoorEvent;                                                              // 0x0BA0 (0x10)
    FMulticastDelegate LootContainerEvent;                                                     // 0x0BB0 (0x10)
    FMulticastDelegate LootItemEvent;                                                          // 0x0BC0 (0x10)
    FMulticastDelegate LootCorpseOrDeathBoxEvent;                                              // 0x0BD0 (0x10)
    FMulticastDelegate LootItemEventOnClient;                                                  // 0x0BE0 (0x10)
    FMulticastDelegate WalkEvent;                                                              // 0x0BF0 (0x10)
    FMulticastDelegate LocationReport;                                                         // 0x0C00 (0x10)
    FMulticastDelegate StuckLocationReport;                                                    // 0x0C10 (0x10)
    Vector LastLocation;                                                                       // 0x0C20 (0x0C)
    FMulticastDelegate StartUsingRecoveryItemEvent;                                            // 0x0C68 (0x10)
    FMulticastDelegate RecoveryItemActivatedEvent;                                             // 0x0C78 (0x10)
    FMulticastDelegate ReceiveRecoveryEffectEvent;                                             // 0x0C88 (0x10)
    FMulticastDelegate UseInventoryFlashEvent;                                                 // 0x0C98 (0x10)
    FMulticastDelegate InventoryFlashDebuffEvent;                                              // 0x0CA8 (0x10)
    FMulticastDelegate OnCurrentWeaponChange;                                                  // 0x0CB8 (0x10)
    FMulticastDelegate OnUpdateWeaponAnimationSetsEvent;                                       // 0x0CC8 (0x10)
    FMulticastDelegate UnProne;                                                                // 0x0CD8 (0x10)
    FMulticastDelegate ProneToCrouch;                                                          // 0x0CE8 (0x10)
    FMulticastDelegate CrouchToProne;                                                          // 0x0CF8 (0x10)
    FMulticastDelegate StandToProne;                                                           // 0x0D08 (0x10)
    FMulticastDelegate EnterDBNOStatusEvent;                                                   // 0x0D18 (0x10)
    FMulticastDelegate ExitDBNOStatusEvent;                                                    // 0x0D28 (0x10)
    FMulticastDelegate EnterWFRStatusEvent;                                                    // 0x0D38 (0x10)
    FMulticastDelegate ExitWFRStatusEvent;                                                     // 0x0D48 (0x10)
    FMulticastDelegate RagdollStageChanged;                                                    // 0x0D58 (0x10)
    FMulticastDelegate AbortRescueTeammateEvent;                                               // 0x0D68 (0x10)
    FMulticastDelegate OnClickAtk;                                                             // 0x0D78 (0x10)
    FMulticastDelegate OnClickStopAtk;                                                         // 0x0D88 (0x10)
    FMulticastDelegate PreAddInventoryEvent;                                                   // 0x0D98 (0x10)
    FMulticastDelegate OnPeriodicGameplayEffectExecuteEvent;                                   // 0x0DA8 (0x10)
    FMulticastDelegate OnGameplayEffectAppliedEvent;                                           // 0x0DB8 (0x10)
    FMulticastDelegate OnAnyGameplayEffectRemovedEvent;                                        // 0x0DC8 (0x10)
    FMulticastDelegate OnGameplayDebuffStatusChangedEvent;                                     // 0x0DD8 (0x10)
    FMulticastDelegate OnStartSearchingContainerEvent;                                         // 0x0DE8 (0x10)
    FMulticastDelegate OnContainerRoughSearchEndEvent;                                         // 0x0DF8 (0x10)
    FMulticastDelegate OnContainerSearchEnd;                                                   // 0x0E08 (0x10)
    FMulticastDelegate OnRecvMsg;                                                              // 0x0E18 (0x10)
    FMulticastDelegate OnAvatarAddedEvent;                                                     // 0x0E28 (0x10)
    FMulticastDelegate OnNativeAvatarAddedEvent;                                               // 0x0E38 (0x10)
    FMulticastDelegate OnAvatarRemovedEvent;                                                   // 0x0E48 (0x10)
    FMulticastDelegate OnNativeAvatarRemovedEvent;                                             // 0x0E58 (0x10)
    FMulticastDelegate OnBadgeUpdateEvent;                                                     // 0x0E68 (0x10)
    FMulticastDelegate OnEnterCheckVolumeEvent;                                                // 0x0E78 (0x10)
    FMulticastDelegate OnBecomeViewTarget;                                                     // 0x0E88 (0x10)
    FMulticastDelegate OnEndViewTarget;                                                        // 0x0E98 (0x10)
    FMulticastDelegate OnStartSpectatedByController;                                           // 0x0EA8 (0x10)
    FMulticastDelegate OnStopSpectatedByController;                                            // 0x0EB8 (0x10)
    FMulticastDelegate OnUpdateOnBackWeaponVisibility;                                         // 0x0EC8 (0x10)
    FMulticastDelegate OnGetViewedByController;                                                // 0x0ED8 (0x10)
    FMulticastDelegate OnLockInventoriesInContainer;                                           // 0x0EE8 (0x10)
    FMulticastDelegate OnUsingInventoryChanged;                                                // 0x0EF8 (0x10)
    FMulticastDelegate EnterDSSendWeaponAttri;                                                 // 0x0F08 (0x10)
    FMulticastDelegate OnKillQuestProgressAdd;                                                 // 0x0F18 (0x10)
    FMulticastDelegate OnCollectQuestProgressChanged;                                          // 0x0F28 (0x10)
    FMulticastDelegate OnKillMissionProgressAdd;                                               // 0x0F38 (0x10)
    FMulticastDelegate OnCollectMissionProgressChanged;                                        // 0x0F48 (0x10)
    FMulticastDelegate ClientLocationCorrectionEvent;                                          // 0x0F58 (0x10)
    FMulticastDelegate FrameRateJitterEvent;                                                   // 0x0F68 (0x10)
    FMulticastDelegate ThermalViewHackEvent;                                                   // 0x0F78 (0x10)
    FMulticastDelegate CharacterPreAddInventoryEvent;                                          // 0x0F88 (0x10)
    FMulticastDelegate CharacterAddInventoryEvent;                                             // 0x0F98 (0x10)
    FMulticastDelegate CharacterRemoveInventoryEvent;                                          // 0x0FB8 (0x10)
    FMulticastDelegate ActivityInventoryAddedEvent;                                            // 0x0FC8 (0x10)
    FMulticastDelegate ActivityInventoryRemovedEvent;                                          // 0x0FD8 (0x10)
    FMulticastDelegate CharacterInventoryMovedEvent;                                           // 0x0FE8 (0x10)
    FMulticastDelegate Client_InventoryGridInfoChangedEvent;                                   // 0x0FF8 (0x10)
    FMulticastDelegate OnCharacterSexChanged;                                                  // 0x1008 (0x10)
    FMulticastDelegate OnCharacterAvatarDataChanged;                                           // 0x1018 (0x10)
    FMulticastDelegate OnCharacterRagdollPoseFinished;                                         // 0x1028 (0x10)
    FMulticastDelegate OnCharacterMeshChanged;                                                 // 0x1038 (0x10)
    FMulticastDelegate OnCharacterAvatarMeshLoaded;                                            // 0x1048 (0x10)
    FMulticastDelegate OnCharacterAvatarMeshDressed;                                           // 0x1058 (0x10)
    FMulticastDelegate OnCharacterAvatarMeshUnDressed;                                         // 0x1068 (0x10)
    FMulticastDelegate OnCharacterAllAvatarMeshLoaded;                                         // 0x1078 (0x10)
    FMulticastDelegate OnPrimaryWeaponAllMeshLoaded;                                           // 0x1088 (0x10)
    FMulticastDelegate OnCharacterAvatarListChanged;                                           // 0x1098 (0x10)
    FMulticastDelegate OnShowMergedAvatar;                                                     // 0x10A8 (0x10)
    FMulticastDelegate OnSetNewOwner;                                                          // 0x10B8 (0x10)
    FMulticastDelegate OnRepControllerEvent;                                                   // 0x10C8 (0x10)
    FMulticastDelegate OnSetNewPlayerState;                                                    // 0x10D8 (0x10)
    FMulticastDelegate OnChangeCustomFOV;                                                      // 0x10E8 (0x10)
    FMulticastDelegate OnEnableCustomFOV;                                                      // 0x10F8 (0x10)
    FMulticastDelegate OnSprintRequest;                                                        // 0x1108 (0x10)
    FMulticastDelegate OnSprintingChanged;                                                     // 0x1118 (0x10)
    FMulticastDelegate OnCharacterScopeSceneCaptureStatusChanged;                              // 0x1128 (0x10)
    FMulticastDelegate OnCharacterZoomChanged;                                                 // 0x1138 (0x10)
    FMulticastDelegate OnCharacterSwitchScope;                                                 // 0x1148 (0x10)
    FMulticastDelegate OnCharacterSwitchZoom;                                                  // 0x1158 (0x10)
    FMulticastDelegate OnCharacterEnterSmoke;                                                  // 0x1168 (0x10)
    FMulticastDelegate OnCharacterFlashed;                                                     // 0x1178 (0x10)
    FMulticastDelegate OnCharacterStuned;                                                      // 0x1188 (0x10)
    FMulticastDelegate MedicineRoulette;                                                       // 0x1198 (0x10)
    FMulticastDelegate OnIsBleed;                                                              // 0x11A8 (0x10)
    FMulticastDelegate OnAbilityActivated;                                                     // 0x11B8 (0x10)
    FMulticastDelegate DBNOEndReport;                                                          // 0x11C8 (0x10)
    FMulticastDelegate InventoryGiveComplete;                                                  // 0x11D8 (0x10)
    FMulticastDelegate InventoryLoadComplete;                                                  // 0x11F8 (0x10)
    FMulticastDelegate DressInventoryLoadComplete;                                             // 0x1208 (0x10)
    FMulticastDelegate OnInventorySkeletalMeshLoadComplete;                                    // 0x1218 (0x10)
    FMulticastDelegate OnCharacterSkeletalMeshLoadComplete;                                    // 0x1228 (0x10)
    FMulticastDelegate OnInventoryStaticMeshLoadComplete;                                      // 0x1238 (0x10)
    FMulticastDelegate OnCharacterStaticMeshLoadComplete;                                      // 0x1248 (0x10)
    FMulticastDelegate OnBeforeCharacterUpdateAvatarLayers;                                    // 0x1258 (0x10)
    FMulticastDelegate OnAfterCharacterUpdateAvatarLayers;                                     // 0x1268 (0x10)
    FMulticastDelegate OnEnableHighPowerScope;                                                 // 0x1278 (0x10)
    FMulticastDelegate OnCharacterBecomeCorpse;                                                // 0x1288 (0x10)
    FMulticastDelegate OnCharacterLoadProtectStateChanged;                                     // 0x1298 (0x10)
    FMulticastDelegate OnAutoAimAntiHackStatisReceived;                                        // 0x12A8 (0x10)
    FMulticastDelegate OnCarriedFaceShieldActivated;                                           // 0x12B8 (0x10)
    FMulticastDelegate OnCharacterCastShadow;                                                  // 0x12C8 (0x10)
    FMulticastDelegate OnWeaponHarmVerifyFail;                                                 // 0x12D8 (0x10)
    FMulticastDelegate OnPickUpInventory;                                                      // 0x12E8 (0x10)
    FMulticastDelegate OnActivateInteract;                                                     // 0x12F8 (0x10)
    FMulticastDelegate OnSoundLevelInfluenceFactorChanged;                                     // 0x1308 (0x10)
    FMulticastDelegate OnSoundMaxDistanceInfluenceFactorChanged;                               // 0x1318 (0x10)
    FDelegate TinnitusDelegate;                                                                // 0x1328 (0x10)
    FDelegate FullBodyGestureDelegate;                                                         // 0x1338 (0x10)
    FMulticastDelegate OnDestroyActor;                                                         // 0x1348 (0x10)
    FMulticastDelegate OnCharacterPreDestroyed;                                                // 0x1358 (0x10)
    FMulticastDelegate OnCharacterDestroyed;                                                   // 0x1368 (0x10)
    FMulticastDelegate OnFSMEscapeStateChange;                                                 // 0x1378 (0x10)
    FMulticastDelegate OnWeaponListChange;                                                     // 0x1388 (0x10)
    FMulticastDelegate OnCharacterResetToLastSavedState;                                       // 0x1398 (0x10)
    FMulticastDelegate OnActiveLongDistanceTacticalInv;                                        // 0x13A8 (0x10)
    FMulticastDelegate OnEquipSkeletalMeshLoadCompleted;                                       // 0x13B8 (0x10)
    FMulticastDelegate OnEquipSkeletalMeshAvatarLoadCompleted;                                 // 0x13C8 (0x10)
    FMulticastDelegate OnPrePlayAdapterMontage;                                                // 0x13D8 (0x10)
    FMulticastDelegate OnInventoryEquipped;                                                    // 0x13E8 (0x10)
    FMulticastDelegate OnInventoryUnequipped;                                                  // 0x13F8 (0x10)
    FMulticastDelegate OnEquipStaticMeshLoadCompleted;                                         // 0x1408 (0x10)
    FMulticastDelegate OnPreUpdateAvatars;                                                     // 0x1418 (0x10)
    FMulticastDelegate OnUpdateAvatarsAddInventory;                                            // 0x1428 (0x10)
    FMulticastDelegate OnUpdateAvatarsAfterAddInventory;                                       // 0x1438 (0x10)
    FMulticastDelegate OnEquipMeshDecideLoadSkeletalMeshInLobby;                               // 0x1448 (0x10)
    FMulticastDelegate OnInvMeshDecideLoadSkeletalMeshInLobby;                                 // 0x1458 (0x10)
    FMulticastDelegate OnInvAnimInstanceLoad;                                                  // 0x1468 (0x10)
    FMulticastDelegate OnUpdateAvatarsFinish;                                                  // 0x1478 (0x10)
    FMulticastDelegate ASCRepPlayMontage;                                                      // 0x14A0 (0x10)
    FMulticastDelegate OnUpdateAvatarsAddConfData;                                             // 0x14B0 (0x10)
    FMulticastDelegate OnUpdateAvatarsAfterAddConfData;                                        // 0x14C0 (0x10)
    FMulticastDelegate AnnihilateBeginSuitSelect;                                              // 0x14D0 (0x10)
    FMulticastDelegate AnnihilateBattleResult;                                                 // 0x14E0 (0x10)
    FMulticastDelegate TDMTypeGameResult;                                                      // 0x14F0 (0x10)
    FMulticastDelegate OnRebornSaftyStateChanged;                                              // 0x1500 (0x10)
    FMulticastDelegate OnBulletOperation;                                                      // 0x1510 (0x10)
    FMulticastDelegate OnActorHiddenInGame;                                                    // 0x1520 (0x10)
    FMulticastDelegate OnPerkBeyondCoolDownReduce;                                             // 0x1558 (0x10)
    FMulticastDelegate OnPerkEquipped;                                                         // 0x1568 (0x10)
    FMulticastDelegate OnWalkCameraSpringIntensitySettingChanged;                              // 0x15B8 (0x10)
    FMulticastDelegate CharacterViewInventoryEndEvent;                                         // 0x15E8 (0x10)
    FMulticastDelegate OnGiveCharacterDropItemsEvent;                                          // 0x1608 (0x10)
    SGCharacterTestDamageComponent* TestDamageComponent;                                       // 0x1630 (0x08)
    FName LinkHoverScoket;                                                                     // 0x1638 (0x08)
    bool bShouldDeferConstructionAIC;                                                          // 0x1640 (0x01) BitMask: 0xFF
    SGCharacterLocalDataComponent* LocalDataComponent;                                         // 0x1648 (0x08)
    CameraComponent* CharacterCameraComponent;                                                 // 0x1650 (0x08)
    ShapeComponent* SoundVolumeOverlapComponent;                                               // 0x1658 (0x08)
    CameraComponent* FPPCameraComponent;                                                       // 0x1660 (0x08)
    float SmoothTargetViewRotationSpeed;                                                       // 0x1680 (0x04)
    SGPlayerController* CurrentViewerPC;                                                       // 0x1688 (0x08)
    bool bIsTurning;                                                                           // 0x1690 (0x01) BitMask: 0xFF
    bool bEnableBeAutoAimed;                                                                   // 0x1691 (0x01) BitMask: 0xFF
    bool bEnableViewSignificance;                                                              // 0x169D (0x01) BitMask: 0xFF
    uint32 PlayerViewInfo;                                                                     // 0x16A0 (0x04)
    float PlayerViewPitch;                                                                     // 0x16A4 (0x04)
    float PlayerViewYaw;                                                                       // 0x16A8 (0x04)
    enum PlayerTurnInfo;                                                                       // 0x16AC (0x01)
    enum CachedCharacterType;                                                                  // 0x16AD (0x01)
    uint64 gid;                                                                                // 0x16B0 (0x08)
    enum FactionType;                                                                          // 0x16B8 (0x01)
    enum CharacterSex;                                                                         // 0x16B9 (0x01)
    Controller* LastPossessedController;                                                       // 0x16C0 (0x08)
    bool bMeshTickThisFrame;                                                                   // 0x16C8 (0x01) BitMask: 0xFF
    ReplicationVaultInfo RepVaultInfo;                                                         // 0x16D0 (0x40)
    bool bInPerkShield;                                                                        // 0x1710 (0x01) BitMask: 0xFF
    SGInventory* CurrentViewingInventory;                                                      // 0x1718 (0x08)
    bool bEnterSmoke;                                                                          // 0x1734 (0x01) BitMask: 0xFF
    int32 UROLoadBalanceBudget;                                                                // 0x1758 (0x04)
    SGCharacterMovementComponent* SGCharacterMovement;                                         // 0x1760 (0x08)
    int64 ProxyCharacterCounter;                                                               // 0x1790 (0x08)
    FMulticastDelegate OnReadyToPlay;                                                          // 0x17A8 (0x10)
    FMulticastDelegate OnCheatStatisEvent;                                                     // 0x17B8 (0x10)
    AbilitySystemComponent* AbilitySystemComponent;                                            // 0x17C8 (0x08)
    SGContextMenu* Menu;                                                                       // 0x17D0 (0x08)
    TimerHandle LocationReportHandle;                                                          // 0x17D8 (0x08)
    Vector CharacterMeshLocationOffset;                                                        // 0x17E8 (0x0C)
    bool bReadyToPlay;                                                                         // 0x17F4 (0x01) BitMask: 0xFF
    TSet<ActorComponent*> WaitingForInitComponents;                                            // 0x17F8 (0x50)
    TSet<SGInventory*> ActiveLongDistanceTacticalInvs;                                         // 0x1848 (0x50)
    bool bTickingOnDeath;                                                                      // 0x1898 (0x01) BitMask: 0xFF
    Actor* LastHitByDamageCauser;                                                              // 0x18A0 (0x08)
    SGLastHitByInfo LastHitByOtherInfo;                                                        // 0x18A8 (0x30)
    Vector_NetQuantize Acceleration;                                                           // 0x18DC (0x0C)
    Vector_NetQuantize PredictStopLocation;                                                    // 0x18E8 (0x0C)
    bool bIsReplayViewTarget;                                                                  // 0x18F8 (0x01) BitMask: 0xFF
    bool bSimulateNavWalkSnapFloor;                                                            // 0x18F9 (0x01) BitMask: 0xFF
    uint8 LaserTraceCollisionChannel;                                                          // 0x18FA (0x01)
    float CharacterSpawnTime;                                                                  // 0x18FC (0x04)
    bool bRestarting;                                                                          // 0x1900 (0x01) BitMask: 0xFF
    SGCharacterWeaponManagerComponent* WeaponManagerComponent;                                 // 0x1908 (0x08)
    SGCharacterDeathComponent* DeathComponent;                                                 // 0x1910 (0x08)
    SGCharacterBeUsedCorpseComponent* CorpseBeUsedComponent;                                   // 0x1918 (0x08)
    SGCharacterMovementAbilityComponent* MovementAbilityComponent;                             // 0x1920 (0x08)
    SGCharacterBaseTurnComponent* TurnComponent;                                               // 0x1928 (0x08)
    SGCharacterInputProcessComponent* InputProcessComponent;                                   // 0x1930 (0x08)
    SGCharacterMovementProneComponent* MovementProneComponent;                                 // 0x1938 (0x08)
    SGCharacterMovementDBNOComponent* MovementDBNOComponent;                                   // 0x1940 (0x08)
    SGCharacterMovementVaultComponent* MovementVaultComponent;                                 // 0x1948 (0x08)
    SGCharacterDBNOComponent* DBNOComponent;                                                   // 0x1950 (0x08)
    SGCharacterFallComponent* CharacterFallComponent;                                          // 0x1958 (0x08)
    SGCharacterLeanWallComponent* LeanComponent;                                               // 0x1960 (0x08)
    SGCharacterRagdollNewComponent* RagdollComponent;                                          // 0x1968 (0x08)
    SGCharacterAIComponent* AIComponent;                                                       // 0x1970 (0x08)
    SGCharacterAIPoseComponent* AIPoseComponent;                                               // 0x1978 (0x08)
    SGCharacterWeaponSwayComponent* WeaponSwayComponent;                                       // 0x1980 (0x08)
    SGUAMCharacterPoseCacheComponent* PoseCacheComponent;                                      // 0x1988 (0x08)
    MFClimateMovableRainWetnessComponent* WetnessComponent;                                    // 0x1990 (0x08)
    SGCharacterEnergyComponent* EnergyComponent;                                               // 0x1998 (0x08)
    SGCharacterSprintComponent* SprintComponent;                                               // 0x19A0 (0x08)
    SGActorUseComponent* UseComponent;                                                         // 0x19A8 (0x08)
    SGCharacterAnimationComponent* AnimationComponent;                                         // 0x19B0 (0x08)
    SGCharacterPreviewComponent* PreviewComponent;                                             // 0x19B8 (0x08)
    SGCharacterWeaponTraceComponent* WeaponTraceComponent;                                     // 0x19C0 (0x08)
    SGCharacterCurveBreathComponent* CurveBreathComponent;                                     // 0x19C8 (0x08)
    SGCharacterTakeHitEffectComponent* TakeHitEffectComponent;                                 // 0x19D0 (0x08)
    SGCharacterTakeCoverComponent* TakeCoverComponent;                                         // 0x19D8 (0x08)
    SGCharacterMovementLadderClimbComponent* MovementLadderClimbComponent;                     // 0x19E0 (0x08)
    SGCharacterInteractionComponent* InteractionComponent;                                     // 0x19E8 (0x08)
    SGCharacterTeamRescueComponent* TeamRescueComponent;                                       // 0x19F0 (0x08)
    SGCharacterIKComponent* IKComponent;                                                       // 0x19F8 (0x08)
    SGCharacterStunGrenadeEffectComponent* StunGrenadeEffectComponent;                         // 0x1A00 (0x08)
    SGCharacterWeightComponent* WeightComponent;                                               // 0x1A08 (0x08)
    SGCharacterSenseAbilityComponent* SenseAbilityComponent;                                   // 0x1A10 (0x08)
    SGCharacterCastShadowComponent* CastShadowComp;                                            // 0x1A18 (0x08)
    SGCharacterAvatarComponent* AvatarComp;                                                    // 0x1A20 (0x08)
    SGCharacterAvatarManagerComponent* AvatarManagerComp;                                      // 0x1A28 (0x08)
    SGCharacterMeshComponent* CharacterMeshComp;                                               // 0x1A30 (0x08)
    SGCharacterAvatarMergeComponent* AvatarMergeComp;                                          // 0x1A38 (0x08)
    SGCharacterBoneBreakComponent* CharacterBoneBreakComponent;                                // 0x1A40 (0x08)
    SGCharacterFootEffectComponent* FootEffectComponent;                                       // 0x1A48 (0x08)
    SGCharacterFragGrenadeEffectComponent* FragEffectComponent;                                // 0x1A50 (0x08)
    SGCharacterDebugMovementComponent* CharacterDebugMovementComponent;                        // 0x1A58 (0x08)
    SGCharacterWeaponManagerComponent* CharacterWeaponManagerComponent;                        // 0x1A60 (0x08)
    SGCharacterLoadProtectComponent* CharacterLoadProtectComponent;                            // 0x1A68 (0x08)
    SGCharacterTLogComponent* CharacterTLogComponent;                                          // 0x1A70 (0x08)
    SGCharacterInventoryManagerComponent* CharacterInventoryManagerComponent;                  // 0x1A78 (0x08)
    SGMotionWarpingComponent* MotionWarpingComponent;                                          // 0x1A80 (0x08)
    SGCharacterInventoryComponent* CharacterInventoryComponent;                                // 0x1A88 (0x08)
    SGCharacterMoveBlockedAvoidanceComponent* MoveBlockedAvoidanceComponent;                   // 0x1A90 (0x08)
    SGCharacterSoundComponent* CharacterSoundComponent;                                        // 0x1A98 (0x08)
    SGCharacterArmorManagerComponent* CharacterArmorManagerComponent;                          // 0x1AA0 (0x08)
    SGCharacterWeaponAttachComponent* CharacterWeaponAttachComponent;                          // 0x1AA8 (0x08)
    SGCharacterInventoryGiveComponent* CharacterInventoryGiveComponent;                        // 0x1AB0 (0x08)
    SGCharacterDeliverCargoComponent* CharacterDeliverCargoComponent;                          // 0x1AB8 (0x08)
    SGCharacterTacticalPistolComponent* CharacterTacticalPistolComponent;                      // 0x1AC0 (0x08)
    SGCharacterVehicleComponent* VehicleComponent;                                             // 0x1AC8 (0x08)
    SGCharacterLagCompensationComponent* LagCompensationComp;                                  // 0x1AD0 (0x08)
    SGCharacterEnduranceComponent* EnduranceComponent;                                         // 0x1AD8 (0x08)
    SGCharacterSwimComponent* CharacterSwimComponent;                                          // 0x1AE0 (0x08)
    SGCharacterHealthComponent* CharacterHealthComponent;                                      // 0x1AE8 (0x08)
    SGCharacterFOVComponent* CharacterFOVComponent;                                            // 0x1AF0 (0x08)
    SGCharacterTakeDamageComponent* CharacterTakeDamageComponent;                              // 0x1AF8 (0x08)
    SGCharacterLookAroundComponent* CharacterLookAroundComponent;                              // 0x1B00 (0x08)
    SGCharacterPerkManagerComponent* CharacterPerkManagerComponent;                            // 0x1B08 (0x08)
    float MovingDirAngleCrossTolerance;                                                        // 0x1BC8 (0x04)
    Vector ViewPointOffset;                                                                    // 0x1BCC (0x0C)
    float DesiredFOV;                                                                          // 0x1BD8 (0x04)
    Vector HeadLocation;                                                                       // 0x1BDC (0x0C)
    Vector CameraLocation;                                                                     // 0x1BE8 (0x0C)
    float Health;                                                                              // 0x1BF4 (0x04)
    float GameDuration;                                                                        // 0x1BF8 (0x04)
    int32 CurrentTotalValue;                                                                   // 0x1BFC (0x04)
    BodyBounds BodyBounds;                                                                     // 0x1C00 (0x1C)
    bool UsingHDMesh;                                                                          // 0x1C78 (0x01) BitMask: 0xFF
    bool LocalCapture;                                                                         // 0x1C79 (0x01) BitMask: 0xFF
    SGCharacterFastRepProxy* CharacterFastRepProxy;                                            // 0x1C88 (0x08)
    StaticMesh* CorpseProxyMesh;                                                               // 0x1C90 (0x28)
    StaticMeshComponent* CorpseProxyComponent;                                                 // 0x1CB8 (0x08)
    StaticMesh* LoadedCorpseProxyMesh;                                                         // 0x1CC0 (0x08)
    PhysicalAnimationComponent* PhysicalAnimationComponent;                                    // 0x1D00 (0x08)
    PhysicsControlComponent* PhysicsControlComponent;                                          // 0x1D08 (0x08)
    bool bBlendCameraBoneWhenEnableDualFov;                                                    // 0x1D10 (0x01) BitMask: 0xFF
    uint32 RandomSeed;                                                                         // 0x1D14 (0x04)
    bool bIsContinuousWeaponChange;                                                            // 0x1D20 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UpdateViewPointOffsetForReplay(Vector InOffset);                                      // [Final|Public] RVA: 0x5B25248
    void UpdateLinkIndicatorTarget(SGCharacter* NewTarget);                                    // [Final|Public] RVA: 0x5B251AC
    void UpdateHealthForReplay(float InHealth);                                                // [Final|Public] RVA: 0x5B25104
    void UpdateHeadLocationForReplay(Vector InHeadLocation);                                   // [Final|Public] RVA: 0x5B25058
    void UpdateDesiredFOVForReplay(bool bZooming);                                             // [Final|Public] RVA: 0x5B24F1C
    void UpdateCurrentTotalValueForReplay(int32 InCurrentTotalValue);                          // [Final|Public] RVA: 0x5B24E78
    void UpdateCharactersBodyBounds(const BoxSphereBounds InBodyBounds);                       // [Final|Public] RVA: 0x5B24D9C
    void UpdateCameraLocationForReplay(Vector InCameraLocation);                               // [Final|Public] RVA: 0x5B24C0C
    void SetMeshTickThisFrame(bool InMeshTickThisFrame);                                       // [Final|Public] RVA: 0x5B24988
    void SetLastUpdateMeshRotation(Rotator InLastUpdateMeshRotation);                          // [Public] RVA: 0x5B248DC
    void SetFactionType(enum NewFactionType);                                                  // [Final|Public] RVA: 0x5B241D8
    void SetDressInventoryFinished(bool bFinished);                                            // [Final|Public] RVA: 0x5B24130
    void SetDressAvatarInvisible(bool bInvisible);                                             // [Final|Public] RVA: 0x5B24088
    void SetCharacterSex(enum InCharacterSex);                                                 // [Final|Public] RVA: 0x5B23FF0
    void SetCharacterLocationReliable(Vector position);                                        // [Public] RVA: 0x5B23F44
    void ServerSwitchSecurityCamera(int32 IndexDelta);                                         // [Public] RVA: 0x5B23D4C
    void ServerSetTurnInfo(uint8 InputPlayerTurnInfo);                                         // [Public] RVA: 0x5B23C94
    void ServerSetEnterSmokeStatus(bool bEnter);                                               // [Public] RVA: 0x5B23BF4
    void ServerPredictStopLocation(const Vector InPredictStopLocation);                        // [Public] RVA: 0x5B23B00
    void ServerNotifyInteractParamEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase, const TArray<SGInventory*> SelectInventories);  // [Public] RVA: 0x5B23928
    void ServerNotifyInteractEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase);  // [Public] RVA: 0x5B237C0
    void ServerCancelViewMonitor();                                                            // [Public] RVA: 0x5B23774
    void ResetDressAvatarCounter();                                                            // [Final|Public] RVA: 0x5B23758
    void RemoveGameplayTagChangedEventByTagName(FDelegate InDelegate, FString TagName, uint8 EventType);  // [Final|Public] RVA: 0x5B23590
    void RemoveGameplayTagChangedEvent(FDelegate InDelegate, const GameplayTag Tag, uint8 EventType);  // [Final|Public] RVA: 0x5B23438
    void RegisterGameplayTagChangedEventByTagName(FDelegate InDelegate, FString TagName, uint8 EventType);  // [Final|Public] RVA: 0x1723598
    void RegisterGameplayTagChangedEvent(FDelegate InDelegate, const GameplayTag Tag, uint8 EventType);  // [Final|Public] RVA: 0x5B232E0
    void OnZoomChanged(bool bIsZooming);                                                       // [Final|Public] RVA: 0x5B230A0
    void OnTinnitus(GameplayTag Tag, int32 Count);                                             // [Final|Protected] RVA: 0x1FB8FB0
    void OnSwitchWeaponCompleted(SGWeapon* Weapon, FString WeaponName, SGWeapon* OldWeapon);   // [Final|Protected] RVA: 0x5B22F48
    void OnSwitchWeapon(SGWeapon* Weapon, FString WeaponName);                                 // [Final|Protected] RVA: 0x5B22E40
    void OnStopSpectatedInvoke(PlayerController* PC);                                          // [Final|Public] RVA: 0x5B22DB0
    void OnStartSpectatedInvoke(PlayerController* PC);                                         // [Final|Public] RVA: 0x27A5528
    void OnSetNewOwnerInvoke(Actor* NewOwner);                                                 // [Final|Public] RVA: 0x5B22D0C
    void OnRep_TickingOnDeath();                                                               // [Final|Protected] RVA: 0x1E2A7BC
    void OnRep_ReplicateionVaultInfo();                                                        // [Final|Protected] RVA: 0x1602610
    void OnRep_ReadyToPlay();                                                                  // [Final|Protected] RVA: 0x164B7D4
    void OnRep_ProxyCounter();                                                                 // [Final|Private] RVA: 0x5B22CF8
    void OnRep_PlayerViewInfo();                                                               // [Public] RVA: 0x1147178
    void OnRep_GID();                                                                          // [Final|Protected] RVA: 0xEC8B20
    void OnRep_FastRepProxy();                                                                 // [Final|Protected] RVA: 0x5B22CE4
    void OnRep_EnterSmoke();                                                                   // [Final|Protected] RVA: 0x2264850
    void OnRep_CharacterSex();                                                                 // [Public] RVA: 0x1D97060
    void OnRep_CharacterProxy();                                                               // [Final|Public] RVA: 0x1E2A7BC
    void OnRep_CharacterFactionType();                                                         // [Protected] RVA: 0x213A818
    void OnRefreshVisibilityBasedAnimTickOption(bool bActiveLongDistanceTacticalInv);          // [Final|Public] RVA: 0x5B22C50
    void OnPeriodicGameplayEffectExecute(AbilitySystemComponent* AbilitySystemComp, const GameplayEffectSpec GameplayEffectSpec, ActiveGameplayEffectHandle ActiveGameplayEffectHandle);  // [Final|Public] RVA: 0x5B22ABC
    void OnGameplayEffectApplied(AbilitySystemComponent* AbilitySystemComp, const GameplayEffectSpec GameplayEffectSpec, ActiveGameplayEffectHandle ActiveGameplayEffectHandle);  // [Final|Public] RVA: 0x5B22928
    void OnGameModePlayerFinishGame(PlayerController* PlayerController, enum FinishType, Actor* EscapeVolume);  // [Final|Public] RVA: 0x5B227E8
    void OnFullBodyGestureTagChanged(GameplayTag Tag, int32 Count);                            // [Final|Protected] RVA: 0x5B22700
    void OnCharacterEnableHighPowerScope(bool bAssembled);                                     // [Final|Public] RVA: 0x1DAFB58
    void OnBeginGame(PlayerController* PC);                                                    // [Final|Public] RVA: 0x5B22664
    void OnAnyGameplayEffectRemoved(const ActiveGameplayEffect ActiveGameplayEffect);          // [Final|Public] RVA: 0x5B221CC
    void NotifyInteractParamEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase, const TArray<SGInventory*> SelectInventories);  // [Public] RVA: 0x5B2202C
    void NotifyInteractEvent(Actor* InteractTarget, enum EventType, SGInteractComponentBase* SGInteractComponentBase);  // [Public] RVA: 0x5B21EF8
    void NetMulticastUpdateReplicationInfo(const ReplicationInfo Info);                        // [Public] RVA: 0x5B21E44
    void MulticastSetCharacterLocation(Vector position);                                       // [Public] RVA: 0x5B21D98
    void MulticastHelpMe();                                                                    // [Public] RVA: 0x5B21D80
    void K2_OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                // [Public] RVA: 0x1812688
    void K2_OnStartDive(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x1812688
    void K2_OnStartDBNO(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x1812688
    void K2_OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                  // [Public] RVA: 0x1812688
    void K2_OnEndDive(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                   // [Public] RVA: 0x1812688
    void K2_OnEndDBNO(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                   // [Public] RVA: 0x1812688
    bool IsUsingHDMesh();                                                                      // [Final|Public] RVA: 0x5B21D68
    bool IsReadyToPlay();                                                                      // [Final|Public] RVA: 0x5B21D50
    bool IsLocalCapture();                                                                     // [Final|Public] RVA: 0x5B21D38
    bool IsDressInventoryFinished();                                                           // [Final|Public] RVA: 0x5B21D14
    bool IsDressAvatarInvisible();                                                             // [Final|Public] RVA: 0x5B21CF0
    bool IsDressAvatarFinished();                                                              // [Final|Public] RVA: 0x5B21CD0
    bool IsDead();                                                                             // [Final|Public] RVA: 0x5B21CAC
    bool IsContinuousWeaponChange();                                                           // [Final|Public] RVA: 0x5B21C94
    bool IsBlendCameraBoneWhenEnableDualFov();                                                 // [Final|Public] RVA: 0x5B21B8C
    SGCharacterWeightComponent* GetWeightComponent();                                          // [Final|Public] RVA: 0x5B21B68
    SGCharacterWeaponTraceComponent* GetWeaponTraceComponent();                                // [Final|Public] RVA: 0x5B21B44
    SGCharacterWeaponSwayComponent* GetWeaponSwayComponent();                                  // [Final|Public] RVA: 0x5B21B20
    SGCharacterWeaponManagerComponent* GetWeaponManagerComponent();                            // [Final|Public] RVA: 0x5B21AFC
    float GetWantToMoveDirAngle();                                                             // [Final|Public] RVA: 0x5B21AD4
    SGActorUseComponent* GetUseComponent();                                                    // [Final|Public] RVA: 0x5B21AB0
    SGCharacterTeamRescueComponent* GetTeamRescueComponent();                                  // [Final|Public] RVA: 0x5B21A8C
    SGCharacterTakeHitEffectComponent* GetTakeHitEffectComponent();                            // [Final|Public] RVA: 0x5B21A68
    SGCharacterTakeCoverComponent* GetTakeCoverComponent();                                    // [Final|Public] RVA: 0x5B21A44
    SGCharacterStunGrenadeEffectComponent* GetStunGrenadeEffectComponent();                    // [Final|Public] RVA: 0x5B21A20
    SGInventory* GetSteadyCurrentWeapon();                                                     // [Public] RVA: 0x5B219F8
    SGCharacterSprintComponent* GetSprintComponent();                                          // [Final|Public] RVA: 0x5B219D4
    SGAbilitySystemComponent* GetSGAbilitySystemComponent();                                   // [Final|Public] RVA: 0x5B21938
    SGCharacterSenseAbilityComponent* GetSenseAbilityComponent();                              // [Final|Public] RVA: 0x5B2198C
    SGCharacterRagdollNewComponent* GetRagdollComponent();                                     // [Final|Public] RVA: 0x5B21914
    Rotator GetPronePlaneRot();                                                                // [Public] RVA: 0x5B218DC
    SGCharacterPreviewComponent* GetPreviewComponent();                                        // [Final|Public] RVA: 0x5B218B8
    SGUAMCharacterPoseCacheComponent* GetPoseCacheComponent();                                 // [Final|Public] RVA: 0x5B21894
    Rotator GetPlayerViewRotation();                                                           // [Public] RVA: 0x5B2185C
    PlayerCameraManager* GetPlayerCameraManager();                                             // [Public] RVA: 0x5B21834
    SGCharacterMovementVaultComponent* GetMovementVaultComponent();                            // [Final|Public] RVA: 0x5B21690
    SGCharacterMovementProneComponent* GetMovementProneComponent();                            // [Final|Public] RVA: 0x5B2166C
    SGCharacterMovementLadderClimbComponent* GetMovementLadderClimbComponent();                // [Final|Public] RVA: 0x5B21648
    SGCharacterMovementDBNOComponent* GetMovementDBNOComponent();                              // [Final|Public] RVA: 0x5B21624
    SGCharacterMovementAbilityComponent* GetMovementAbilityComponent();                        // [Final|Public] RVA: 0x5B21600
    SGMotionWarpingComponent* GetMotionWarpingComponent();                                     // [Final|Public] RVA: 0x5B215DC
    bool GetMeshTickThisFrame();                                                               // [Final|Public] RVA: 0x5B215C4
    float GetLeaveSmokeTime();                                                                 // [Final|Public] RVA: 0x5B215AC
    SGCharacterLeanWallComponent* GetLeanComponent();                                          // [Final|Public] RVA: 0x5B21588
    Rotator GetLastUpdateMeshRotation();                                                       // [Public] RVA: 0x5B21550
    Controller* GetLastPossessedController();                                                  // [Final|Public] RVA: 0x5B21538
    bool GetIsEnterTearGas();                                                                  // [Final|Public] RVA: 0x5B21520
    SGCharacterInteractionComponent* GetInteractionComponent();                                // [Final|Public] RVA: 0x5B214FC
    SGCharacterInputProcessComponent* GetInputProcessComponent();                              // [Final|Public] RVA: 0x5B214D8
    SGCharacterIKComponent* GetIKComponent();                                                  // [Final|Public] RVA: 0x5B214B4
    enum GetFactionType();                                                                     // [Final|Public] RVA: 0x5B21474
    float GetEnterSmokeTime();                                                                 // [Final|Public] RVA: 0x5B2145C
    SGCharacterEnergyComponent* GetEnergyComponent();                                          // [Final|Public] RVA: 0x5B21438
    int32 GetDressAvatarFinished();                                                            // [Final|Public] RVA: 0x5B21418
    SGCharacterDeathComponent* GetDeathComponent();                                            // [Final|Public] RVA: 0x5B213F4
    SGCharacterDBNOComponent* GetDBNOComponent();                                              // [Final|Public] RVA: 0x5B213D0
    SGCharacterCurveBreathComponent* GetCurveBreathComponent();                                // [Final|Public] RVA: 0x5B213AC
    SGCharacterWeaponAttachComponent* GetCharacterWeaponAttachComponent();                     // [Final|Public] RVA: 0x5B21388
    SGCharacterVehicleComponent* GetCharacterVehicleComponent();                               // [Final|Public] RVA: 0x5B21364
    SGCharacterTLogComponent* GetCharacterTLogComponent();                                     // [Final|Public] RVA: 0x5B212F8
    SGCharacterTakeDamageComponent* GetCharacterTakeDamageComponent();                         // [Final|Public] RVA: 0x5B21340
    SGCharacterTacticalPistolComponent* GetCharacterTacticalPistolComponent();                 // [Final|Public] RVA: 0x5B2131C
    SGCharacterSwimComponent* GetCharacterSwimComponent();                                     // [Final|Public] RVA: 0x5B212D4
    SGCharacterSoundComponent* GetCharacterSoundComponent();                                   // [Final|Public] RVA: 0x5B212B0
    enum GetCharacterSex();                                                                    // [Final|Public] RVA: 0x5B21298
    SGCharacterPerkManagerComponent* GetCharacterPerkManagerComponent();                       // [Final|Public] RVA: 0x5B21274
    SGCharacterMoveBlockedAvoidanceComponent* GetCharacterMoveBlockedAvoidanceComponent();     // [Final|Public] RVA: 0x5B21250
    SGCharacterMeshComponent* GetCharacterMeshComponent();                                     // [Final|Public] RVA: 0x5B2122C
    SGCharacterLookAroundComponent* GetCharacterLookAroundComponent();                         // [Final|Public] RVA: 0x5B21208
    SGCharacterLoadProtectComponent* GetCharacterLoadProtectComponent();                       // [Final|Public] RVA: 0x5B211E4
    SGCharacterLagCompensationComponent* GetCharacterLagCompensationComp();                    // [Final|Public] RVA: 0x5B211C0
    SGCharacterInventoryManagerComponent* GetCharacterInventoryManagerComponent();             // [Final|Public] RVA: 0x5B2119C
    SGCharacterInventoryGiveComponent* GetCharacterInventoryGiveComponent();                   // [Final|Public] RVA: 0x5B21178
    SGCharacterInventoryComponent* GetCharacterInventoryComponent();                           // [Final|Public] RVA: 0x5B21154
    SGCharacterHealthComponent* GetCharacterHealthComponent();                                 // [Final|Public] RVA: 0x5B21130
    SGCharacterFragGrenadeEffectComponent* GetCharacterFragGrenadeEffectComponent();           // [Final|Public] RVA: 0x5B2110C
    SGCharacterFOVComponent* GetCharacterFOVComponent();                                       // [Final|Public] RVA: 0x5B210C4
    SGCharacterFootEffectComponent* GetCharacterFootEffectComponent();                         // [Final|Public] RVA: 0x5B210E8
    SGCharacterEnduranceComponent* GetCharacterEnduranceComponent();                           // [Final|Public] RVA: 0x5B210A0
    SGCharacterDeliverCargoComponent* GetCharacterDeliverCargoComponent();                     // [Final|Public] RVA: 0x5B2107C
    SGCharacterDebugMovementComponent* GetCharacterDebugMovementComponent();                   // [Final|Public] RVA: 0x5B21058
    SGCharacterBoneBreakComponent* GetCharacterBoneBreakComponent();                           // [Final|Public] RVA: 0x5B21034
    SGCharacterArmorManagerComponent* GetCharacterArmorManagerComponent();                     // [Final|Public] RVA: 0x5B21010
    SGCharacterCastShadowComponent* GetCastShadowComponent();                                  // [Final|Public] RVA: 0x5B20FEC
    MFClimateMovableRainWetnessComponent* GetCacheWetnessComponent();                          // [Final|Public] RVA: 0x5B20F18
    enum GetCachedCharacterType();                                                             // [Final|Public] RVA: 0x5B20F3C
    SGCharacterAvatarMergeComponent* GetAvatarMergeComponent();                                // [Final|Public] RVA: 0x5B20EF4
    SGCharacterAvatarManagerComponent* GetAvatarManagerComponent();                            // [Final|Public] RVA: 0x5B20ED0
    SGCharacterAvatarComponent* GetAvatarComponent();                                          // [Final|Public] RVA: 0x5B20EAC
    SGCharacterAIPoseComponent* GetAIPoseComponent();                                          // [Final|Public] RVA: 0x5B20E88
    SGCharacterAIComponent* GetAIComponent();                                                  // [Final|Public] RVA: 0x5B20E64
    void DisableTickOnDeath();                                                                 // [Final|Protected] RVA: 0x5B20CDC
    void DelayUpdateReplicationInfo();                                                         // [Final|Public] RVA: 0x5B20CC8
    void ClientReceiveForMultiNet();                                                           // [Public] RVA: 0x5B20BB4
    void ClientReceiveDoorUnlockEvent(enum DoorAction, Character* UserActor, SGDoorBase* Door);  // [Public] RVA: 0x5B20A80
    void ClientHideCharacter(bool InbHide);                                                    // [Public] RVA: 0x5B209E0
    void ClientBroadcastAchievement(int32 AchievementID, bool bSubAchievement);                // [Public] RVA: 0x5B208F4
    bool CheckIsInSmoke();                                                                     // [Final|Public] RVA: 0x5B20840
    void ChangeCameraSpringIntensity(int32 Value);                                             // [Final|Public] RVA: 0x5B2079C
    void CacheComponents();                                                                    // [Public] RVA: 0x5B20784
    void CacheCharacterType();                                                                 // [Final|Public] RVA: 0x5B20754
    void BroadcastOnEntersTearGasGrenade(bool bEnter);                                         // [Final|Public] RVA: 0x5B206B8
    void BroadcastOnEntersSmokeGrenade(bool bEnter);                                           // [Final|Public] RVA: 0x5B2061C
    void AddDressAvatarCounter(bool bAdd, FString Path);                                       // [Final|Public] RVA: 0x5B20150
};

// ============================================================
// Inheritance: SGCharacterBase : Character : Pawn : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGCharacterBase : public Character {
public:
    FMulticastDelegate TakeDamageEvent;                                                        // 0x05F0 (0x10)
    FMulticastDelegate PostTakeDamageEvent;                                                    // 0x0600 (0x10)
    FMulticastDelegate PreDiedEvent;                                                           // 0x0610 (0x10)
    FMulticastDelegate PoseChangedEvent;                                                       // 0x0620 (0x10)
    FMulticastDelegate LeanTypeChangedEvent;                                                   // 0x0630 (0x10)
    FMulticastDelegate OnPossessedByController;                                                // 0x0640 (0x10)
    FMulticastDelegate OnUnPossessedByController;                                              // 0x0650 (0x10)
    FMulticastDelegate OnOwnerOrRoleChanged;                                                   // 0x0660 (0x10)
    FMulticastDelegate SwitchWeaponEvent;                                                      // 0x0670 (0x10)
    FMulticastDelegate SwitchWeaponCompletedEvent;                                             // 0x0680 (0x10)
    FMulticastDelegate OnSetCurrentWeaponEvent;                                                // 0x0690 (0x10)
    FMulticastDelegate OnSetCurrentWeaponAfterMontageEvent;                                    // 0x06A0 (0x10)
    FMulticastDelegate CharacterRemoveWeaponEvent;                                             // 0x06B0 (0x10)
    FMulticastDelegate OnCharacterInvEquipPositionChangedEvent;                                // 0x06C0 (0x10)
    FMulticastDelegate OnGrenadeKillMulti;                                                     // 0x06D0 (0x10)
    FMulticastDelegate OnHarmTeammate;                                                         // 0x06E0 (0x10)
    FMulticastDelegate PostDiedEvent;                                                          // 0x06F0 (0x10)
    FMulticastDelegate OnEndVaultingEvent;                                                     // 0x0700 (0x10)
    FMulticastDelegate LandedEvent;                                                            // 0x0728 (0x10)

    // --- Functions ---
    Rotator GetViewRotOffset();                                                                // [Public] RVA: 0x5B342AC
    SGCharacterBaseTurnComponent* GetTurnComponent();                                          // [Public] RVA: 0x5B341C0
    SGCharacterMovementComponentBase* GetSGCharacterMovement();                                // [Public] RVA: 0x5B34198
    float GetMovingDirAngle();                                                                 // [Public] RVA: 0x5B3416C
    Rotator GetMeshRotation();                                                                 // [Final|Public] RVA: 0x5B34138
    SGCharacterWeaponManagerComponent* GetCharacterWeaponManagerComponent();                   // [Public] RVA: 0x5B34080
    SGCharacterMovementVaultComponent* GetCharacterVaultComponent();                           // [Public] RVA: 0x5B34058
    SGCharacterFallComponent* GetCharacterFallComponent();                                     // [Public] RVA: 0x5B34030
    SGAnimationComponentBase* GetAnimationComponent();                                         // [Public] RVA: 0x5B34008
    float GetAccDirAngle();                                                                    // [Final|Public] RVA: 0x5B33FE0
    AbilitySystemComponent* GetAbilitySystemComponent();                                       // [Public] RVA: 0x5B33FB4
    void FreezeEnableWorldOriginRebaseLogic(bool bInFreezeRebaseLogic);                        // [Final|Public] RVA: 0x5B33F18
    void EnableWorldOriginRebaseLogic(bool bEnable);                                           // [Final|Public] RVA: 0x5B33E7C
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
    void SwitchEnableCapture(bool bEnable);                                                    // [Final|Public] RVA: 0x5B37498
    void SetOwnerCharacter(Pawn* Character);                                                   // [Final|Public] RVA: 0x5B37530
    void SetCaptureCharacterSwitch(bool bSwitch);                                              // [Final|Public] RVA: 0x5B37498
    void ResetRotation();                                                                      // [Final|Public] RVA: 0x5B37484
    void OnWeaponEquipPositionChanged(SGInventory* Inventory, enum EquipPosition);             // [Final|Private] RVA: 0x5B3739C
    void OnShowMergedAvatar(SkeletalMeshComponent* MergedMeshComp, bool bShow);                // [Final|Private] RVA: 0x5B36DE0
    void OnRemoveInventoryEvent(Character* Character, SGInventory* TargetInventory);           // [Final|Private] RVA: 0x5B36CD0
    void OnPlayInventoryAnimation(SGInventory* Inventory, AnimSequenceBase* Anim);             // [Final|Private] RVA: 0x5B36BE8
    void OnOwnerEquipSkeletalMeshLoadCompleted(SGInventory* Inventory, SkeletalMeshComponent* SkeletalMeshComp);  // [Final|Private] RVA: 0x5B36B08
    void OnInventoryAttachPositionChanged(SGInventory* Inventory, const TArray<InventoryContainerBase> OldParentGridBaseTraceList, InventoryContainerBase NewParentContainerBase, enum OldAttachPos, enum NewAttachPos);  // [Final|Private] RVA: 0x5B367FC
    void OnInventoryAnimPoseChanged(SGInventory* Inv, const InventoryAnimPoseInfo AnimPoseInfo);  // [Final|Private] RVA: 0x5B366F4
    void OnFoldStock(SGInventory* StockInventory, bool bFold);                                 // [Final|Private] RVA: 0x5B3656C
    void OnCharacterSexChanged(enum CharacterSex);                                             // [Final|Private] RVA: 0x5B364D4
    void OnCharacterMeshChanged(SkeletalMesh* CharacterMesh);                                  // [Final|Private] RVA: 0x5B36384
    void OnBagOpen();                                                                          // [Final|Private] RVA: 0x5B36370
    void OnBagClose();                                                                         // [Final|Private] RVA: 0x5B3635C
    void OnBadgeAttachPositionChanged(SGInventory* Inv, SGInventory* AttachInv);               // [Final|Private] RVA: 0x5B36274
    void OnAvatarRemoved(SGInventory* TargetInventory);                                        // [Final|Private] RVA: 0x5B3611C
    void OnAvatarAdded(SGInventory* TargetInventory);                                          // [Final|Private] RVA: 0x5B35F88
    void OnAttachWeaponExtraMesh(SGWeapon* Weapon);                                            // [Final|Private] RVA: 0x5B35EEC
    void OnAfterCharacterUpdateAvatarLayers();                                                 // [Final|Private] RVA: 0x5B35ED8
    void MergeMesh();                                                                          // [Final|Protected] RVA: 0x5B35EC4
    SGInventoryEquipMeshComponent* GetWearableComponentByID(int64 ItemId);                     // [Final|Public] RVA: 0x5B357F4
    SGInventoryEquipMeshComponent* GetWearableComponent(SGInventory* Inv);                     // [Final|Public] RVA: 0x5B35418
    void DeferredCaptureCharacterUpdateLayers();                                               // [Final|Private] RVA: 0x5B35404
    void CaptureCharacterUpdateMeshLayers();                                                   // [Final|Private] RVA: 0x5B353DC
    void CaptureCharacter(bool bEnableCapture);                                                // [Final|Public] RVA: 0x5B35340
    void AdjustToBack(SGInventory* Inventory, out MeshComponent* AttachedMeshComponent, out FString AttachedSocke);  // [Final|Protected] RVA: 0x5B351C0
    void AddRotation(Rotator Rotation);                                                        // [Final|Public] RVA: 0x5B350D0
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
    void SetOpenContainerLootProtectByFaction(bool InOpenContainerLootProtectByFaction);       // [Final|Public] RVA: 0x5BF35F8
    void SetFactionType(enum CurFactionType);                                                  // [Public] RVA: 0x5BF355C
    bool RemoveFromFaction(SGTeamInfo* Team);                                                  // [Public] RVA: 0x5BF34AC
    void RemoveFactionDomain(SGFactionDomainVolume* Volume);                                   // [Final|Public] RVA: 0x5BF3408
    void RefreshDomainData();                                                                  // [Final|Public] RVA: 0x5BF33F4
    void OnRep_FactionmemberBaseInfoArray();                                                   // [Final|Public] RVA: 0x5BF326C
    TArray<int32> GetPlayerStartArr();                                                         // [Final|Public] RVA: 0x5BF2884
    bool GetOpenContainerLootProtectByFaction();                                               // [Final|Public] RVA: 0x5BF286C
    enum GetFactionType();                                                                     // [Final|Public] RVA: 0x5BF21D0
    int32 GetFactionMemberCount(out int32 ALiveNum, out int32 TotalNum);                       // [Public] RVA: 0x5BF1DC4
    TArray<SGAISpawnPoint*> GetAISpawnPointArr();                                              // [Final|Public] RVA: 0x5BF1098
    bool AddToFaction(SGTeamInfo* Team);                                                       // [Public] RVA: 0x5BF0EA4
    void AddFactionDomain(SGFactionDomainVolume* Volume);                                      // [Final|Public] RVA: 0x5BF0DB0
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
    void OnRoundGameStart();                                                                   // [Final|Public] RVA: 0x5BFE2E4
    void OnMissionInformGameEnd(enum GameModeType, bool bRealGameEnd);                         // [Final|Public] RVA: 0x5BFE018
    void OnGameBegin();                                                                        // [Final|Public] RVA: 0x5BFDF68
    bool IsZoneSvrValid();                                                                     // [Final|Public] RVA: 0x5BFDE64
    int32 GetValidPlayerNum();                                                                 // [Public] RVA: 0x5BFDE28
    int32 GetTotalPlayerNumber();                                                              // [Final|Public] RVA: 0x5BFDE10
    int32 GetTotalAINumber();                                                                  // [Final|Public] RVA: 0x5BFDDF8
    int32 GetSeedDSMemoryVirtual();                                                            // [Final|Public] RVA: 0x5BFDDC0
    int32 GetSeedDSMemoryPhysical();                                                           // [Final|Public] RVA: 0x5BFDD88
    int32 GetMaxPlayerNumberSimultaneous();                                                    // [Final|Public] RVA: 0x5BFDD70
    int32 GetMaxFPSExistFrames(int32 InMaxFPSIndex);                                           // [Final|Public] RVA: 0x5BFDCC8
    int32 GetLuaMemoryAfterFork();                                                             // [Final|Public] RVA: 0x5BFDCA8
    int32 GetDSMemoryVirtualAfterFork();                                                       // [Final|Public] RVA: 0x5BFDC8C
    int32 GetDSMemoryPhysicalAfterFork();                                                      // [Final|Public] RVA: 0x5BFDC70
    void FinishStatOnEndGame();                                                                // [Final|Public] RVA: 0x5BFDBC8
    PlayerController* FindPlayerControllerByGid(const int64 InGid);                            // [Public] RVA: 0x5BFDB18
    void CleanPlayerInfoForReconnection(uint64 InGid);                                         // [Public] RVA: 0x5BFD8E4
    void BroadcastReqPlayerFinishEvent(GameMode* GameMode, PlayerController* Exiting);         // [Final|Public] RVA: 0x5BFD518
    void BroadcastReqOBPlayerFinishEvent(GameMode* GameMode, PlayerController* Exiting);       // [Final|Public] RVA: 0x5BFD430
    void BroadcastPlayerStartEvent(PlayerController* Exiting);                                 // [Final|Public] RVA: 0x5BFD34C
    void BroadcastPlayerFinishEvent(PlayerController* Exiting, enum ResultType, Actor* EscapeVolume);  // [Final|Public] RVA: 0x5BFD20C
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
    void SetSupportSameCampMode(bool bSupport);                                                // [Final|Public] RVA: 0x5C119E4
    void SetDynamicMissionFlowList(TArray<MissionFlowData> InDynamicMissionFlowList);          // [Final|Public] RVA: 0x5C1178C
    void RecordAliveStateByGID(uint64 gid, enum PlayerAliveState);                             // [Final|Public] RVA: 0x5C11218
    void OnRep_ReplicateServerTime();                                                          // [Public] RVA: 0x1C0E7E0
    void OnRep_DSNetTickRate();                                                                // [Final|Public] RVA: 0x5C107AC
    void OnPreBeginGameInit();                                                                 // [Final|Public] RVA: 0x5C10798
    void OnPlayerFinishGame(PlayerController* PlayerController, enum FinishType, Actor* EscapeVolume);  // [Final|Public] RVA: 0x5C105E4
    void OnLoadCompleted_DebugCompClass(SoftObjectPath Path);                                  // [Final|Protected] RVA: 0x5C1052C
    void OnEscapeReport(int32 EscapePointID, bool IsGlobal, int32 InReportType, float InExtraData, const TArray<PlayerState*> TriggerPlayerStates, const TArray<PlayerState*> InVolumePlayerStates);  // [Public] RVA: 0x1C53944
    void OnApplicationWillDeactive();                                                          // [Public] RVA: 0x4612C08
    void OnApplicationHasReactive();                                                           // [Public] RVA: 0x4612BF0
    int32 GetSubModeID();                                                                      // [Final|Public] RVA: 0x282B6AC
    int32 GetSpecialID();                                                                      // [Final|Public] RVA: 0x5C0EC88
    DateTime GetServerNowTime();                                                               // [Final|Public] RVA: 0x5C0EC5C
    enum GetPlayerFinishType(uint64 gid);                                                      // [Final|Public] RVA: 0x5C0EBB4
    int32 GetPlayerCountByTeamType(enum InTeamType);                                           // [Final|Public] RVA: 0x5C0EB0C
    int32 GetMapID();                                                                          // [Final|Public] RVA: 0x2519A24
    int32 GetMainModeID();                                                                     // [Final|Public] RVA: 0x282B6D0
    enum GetGameSceneType();                                                                   // [Final|Public] RVA: 0x5C0E9FC
    TArray<MissionFlowData> GetDynamicMissionFlowList();                                       // [Final|Public] RVA: 0x5C0E994
    TArray<uint32> GetDistributedMissionFlowIDs();                                             // [Final|Public] RVA: 0x5C0E844
    int32 GetDifficulty();                                                                     // [Final|Public] RVA: 0x2519A94
    enum GetAliveStateByGID(uint64 gid);                                                       // [Final|Public] RVA: 0x5C0E324
    void ClientEscapeReport(int32 EscapePointID, bool IsGlobal, int32 InReportType, float InExtraData, const TArray<PlayerController*> TriggerPlayerControllers, const TArray<PlayerController*> InVolumePlayerControllers);  // [Final|Public] RVA: 0x5C0D9C0
    void AddDistributedMissionFlowID(uint32 InMissionFlowID);                                  // [Final|Public] RVA: 0x5C0D928
};

// ============================================================
// Inheritance: SGHUD : HUD : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGHUD : public HUD {
public:
    TArray<TSubclassOf<SGUserWidget>> ComponentClasses;                                        // 0x0428 (0x10)
    TArray<TSubclassOf<SGUserWidget>> LoadedComponentClasses;                                  // 0x0438 (0x10)
    TArray<TSubclassOf<SGUserWidget>> ComponentClassesDynamic;                                 // 0x0448 (0x10)
    TArray<SGUserWidget*> Components;                                                          // 0x0458 (0x10)
    TSubclassOf<SGHUD> TemplateClass;                                                          // 0x0468 (0x08)
    TArray<SGUserWidget*> ParticularUpdateWidgets;                                             // 0x0470 (0x10)
    TMap<int32, TSubclassOf<SGUserWidget>> CreateComponentTask;                                // 0x0480 (0x50)
    TArray<TSubclassOf<SGUserWidget>> DebugAppInfoClasses;                                     // 0x04D0 (0x10)
    TArray<TSubclassOf<SGUserWidget>> ManualLoadClasses;                                       // 0x04E0 (0x10)
    TArray<PendingLoadHUDClassInfo> PendingLoadHUDClassInfoList;                               // 0x04F0 (0x10)
    SGUserWidget* DebugAppInfoWidget;                                                          // 0x0500 (0x08)
    SafeZoneCache SafeZoneCache;                                                               // 0x050C (0x10)
    bool bForceEnableSafeZone;                                                                 // 0x051C (0x01) BitMask: 0xFF
    int32 CurrentCmdIndex;                                                                     // 0x0538 (0x04)
    SGHUDShakeEvents* HUDShakeEvents;                                                          // 0x0540 (0x08)

    // --- Functions ---
    void ToggleGM();                                                                           // [Protected] RVA: 0x5AE6CFC
    void SetAllWidgetVisibility(bool bVisible);                                                // [Final|Public] RVA: 0x5C48408
    void PreviousDebugCmd();                                                                   // [Protected] RVA: 0x5AE6B4C
    void OnShowTextDetail(const FText Text);                                                   // [Final|Private] RVA: 0x5C48114
    void OnNewWidgetCreated(SGUserWidget* NewWidget);                                          // [Final|Public] RVA: 0x1CC75F0
    void OnMoveShowTextDetail(const FText Text, const Vector2D TextDetail);                    // [Final|Private] RVA: 0x5C47A30
    void OnMoveHideTextDetail(const FText Text);                                               // [Final|Private] RVA: 0x5C4796C
    void OnLoadCompleted_HUDClass(SoftObjectPath Path, int32 CurrentPendingID);                // [Final|Protected] RVA: 0x5C47860
    void OnHideTextDetail(const FText Text);                                                   // [Final|Private] RVA: 0x5C4779C
    void NextDebugCmd();                                                                       // [Protected] RVA: 0x5AE6F7C
    void ManualLoadHUDClass();                                                                 // [Final|Public] RVA: 0x5C47788
    void InitDebugCmds();                                                                      // [Protected] RVA: 0x29B2AD0
    bool HasSafeZone(Canvas* InCanvas);                                                        // [Final|Protected] RVA: 0x5C475D4
    SGUserWidget* GetUserWidget(TSubclassOf<Object> StaticClass);                              // [Final|Public] RVA: 0x5C4752C
    void EnableSafeZone(Canvas* InCanvas, bool bEnable);                                       // [Final|Protected] RVA: 0x5C47418
    void EnableHandleEscape(SGUserWidget* Widget, bool bEnable);                               // [Final|Public] RVA: 0x5C4732C
    void DumpHUDDetails();                                                                     // [Final|Protected] RVA: 0x1E2A7BC
    void DrawEllipse(const Vector2D Center, const Vector2D Radius, int32 NumSides, LinearColor LineColor, float LineThickness);  // [Final|Public] RVA: 0x5C470E0
    void DestroyHUD(out FString ClassName);                                                    // [Final|Protected] RVA: 0x5BF6F28
    void DestroyAllManualLoadedHUD();                                                          // [Final|Public] RVA: 0x5C470CC
    void DestroyAllComponentClasses();                                                         // [Final|Protected] RVA: 0x1E2A7BC
    void DebugWeapon(int32 DebugFlag);                                                         // [Final|Protected] RVA: 0x4C77164
    void DebugSelfMovement(bool bDebugSelfMovement);                                           // [Final|Protected] RVA: 0x4523D3C
    void DebugPlayerState(bool bDebugPlayerState);                                             // [Final|Protected] RVA: 0x4523D3C
    void DebugLocation();                                                                      // [Final|Protected] RVA: 0x1E2A7BC
    void DebugInput();                                                                         // [Final|Protected] RVA: 0x5C47090
    void DebugDamage(bool bDebugDamage);                                                       // [Final|Protected] RVA: 0x4523D3C
    void DebugCamera(bool bDebugCamera);                                                       // [Final|Protected] RVA: 0x4523D3C
    void DebugBreath(bool bDebugBreath);                                                       // [Final|Protected] RVA: 0x4523D3C
    void DebugAttributeSets_Movement(bool bDebugAttributeSets_Movement);                       // [Final|Protected] RVA: 0x4523D3C
    void DebugAppInfo();                                                                       // [Final|Protected] RVA: 0x1E2A7BC
    void DebugAnimationCurve(bool bDebugAnimationCurve);                                       // [Final|Protected] RVA: 0x4523D3C
    void DebugAllMovement(bool bDebugAllMovement);                                             // [Final|Protected] RVA: 0x4523D3C
    void CreateHUD(out FString ClassName);                                                     // [Final|Protected] RVA: 0x5BF6F28
    void ClearDebugCanvas();                                                                   // [Final|Protected] RVA: 0x5C4707C
    void CallCreateComponents();                                                               // [Final|Protected] RVA: 0x1E2A7BC
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
    void PoolEndPlay();                                                                        // [Final|Protected] RVA: 0x1D0990C
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
    FMulticastDelegate OnInventoryHiddenStateChanged;                                          // 0x04C8 (0x10)
    FMulticastDelegate OnInventoryVisibilityChanged;                                           // 0x04D8 (0x10)
    FMulticastDelegate OnInventoryAttachToBack;                                                // 0x04E8 (0x10)
    FMulticastDelegate OnInventoryDressed;                                                     // 0x04F8 (0x10)
    FMulticastDelegate OnInventoryUnDressed;                                                   // 0x0508 (0x10)
    FMulticastDelegate OnStartInteractBoxInventory;                                            // 0x0518 (0x10)
    FMulticastDelegate OnInventoryGridInfoChange;                                              // 0x0528 (0x10)
    FMulticastDelegate OnDetectorUpdateCoolDown;                                               // 0x0628 (0x10)
    FMulticastDelegate OnPostSetSkeletalMesh;                                                  // 0x0638 (0x10)
    FMulticastDelegate OnInventoryRebornSaftyStateChanged;                                     // 0x0648 (0x10)
    FMulticastDelegate OnSearchFinished;                                                       // 0x0658 (0x10)
    FMulticastDelegate OnInstIdReplicated;                                                     // 0x0690 (0x10)
    SGInventoryZoneInfoComponent* ZoneInfoComponent;                                           // 0x06B8 (0x08)
    uint64 ItemId;                                                                             // 0x06C0 (0x08)
    uint32 ArmorLevel;                                                                         // 0x06C8 (0x04)
    uint32 ArmorMaterialID;                                                                    // 0x06CC (0x04)
    FString MagazineTypeName;                                                                  // 0x06D0 (0x10)
    Transform MagazineLeftHandOffset_ReloadMag;                                                // 0x06E0 (0x30)
    Transform MagazineLeftHandOffset_CheckMag;                                                 // 0x0710 (0x30)
    Rotator RenderRotator;                                                                     // 0x0740 (0x0C)
    bool isRollup;                                                                             // 0x074C (0x01) BitMask: 0xFF
    FString UniqueID;                                                                          // 0x0750 (0x10)
    SGInventoryCommonDataComponent* CommonDataComponent;                                       // 0x0760 (0x08)
    enum InventoryType;                                                                        // 0x0768 (0x01)
    enum LootContainerType;                                                                    // 0x0769 (0x01)
    enum RelevantCheckType;                                                                    // 0x0790 (0x01)
    enum PreRelevantCheckType;                                                                 // 0x0791 (0x01)
    TArray<Actor*> RelevantForActors;                                                          // 0x0798 (0x10)
    bool bIsInRebornSafty;                                                                     // 0x07A9 (0x01) BitMask: 0xFF
    uint64 LastRefreshFrame;                                                                   // 0x07B0 (0x08)
    int32 LastInfoChangeMask;                                                                  // 0x07B8 (0x04)
    int32 RuntimeID;                                                                           // 0x07C0 (0x04)
    enum EquipPosition;                                                                        // 0x07C4 (0x01)
    float MinComponentTickOptDist;                                                             // 0x07C8 (0x04)
    float MinComponentTickOptInterval;                                                         // 0x07CC (0x04)
    float MinActorTickOptDist;                                                                 // 0x07D0 (0x04)
    float MinActorTickOptInterval;                                                             // 0x07D4 (0x04)
    bool bForceUseOwnerTickInterval;                                                           // 0x07D8 (0x01) BitMask: 0xFF
    bool bFreezed;                                                                             // 0x07DC (0x01) BitMask: 0xFF
    ManualNetRelevantFollowOnwerInfo ManualFollowOnwer;                                        // 0x07E0 (0x10)
    bool bBeDormantWhenFollowOwner;                                                            // 0x07F0 (0x01) BitMask: 0xFF
    SGInventoryAssembleComponent* AssembleComp;                                                // 0x07F8 (0x08)
    SGInventoryEquipMeshComponent* EquipMeshComp;                                              // 0x0800 (0x08)
    SGInventoryMeshComponent* MeshComponent;                                                   // 0x0808 (0x08)
    SGInventoryCameraComponent* InventoryCameraComp;                                           // 0x0810 (0x08)
    SGInventoryModifyAttributeComponent* InventoryModifyAttributeComp;                         // 0x0818 (0x08)
    SGWeaponMovementComponent* WeaponMovementComponent;                                        // 0x0820 (0x08)
    SGInventoryTypeComponent_Avatar* InventoryTypeComponent_Avatar;                            // 0x0828 (0x08)
    SGInventoryTypeComponent_Armor* InventoryTypeComponent_Armor;                              // 0x0830 (0x08)
    SGInventoryTypeComponent_Badge* InventoryTypeComponent_Badge;                              // 0x0838 (0x08)
    SGInventoryAbilityComponent* InventoryAbilityComponent;                                    // 0x0840 (0x08)
    SGInventoryZoomComponent* InventoryZoomComponent;                                          // 0x0848 (0x08)
    SGInventorySoundDiffuseComponent* SoundDiffuseComponent;                                   // 0x0850 (0x08)
    SGInventoryGridComponent* CacheInventoryGridComponent;                                     // 0x0858 (0x08)
    SGInventoryArmorComponent* InventoryArmorComponent;                                        // 0x0860 (0x08)
    SGWidgetToRenderTargetComponent* WidgetToRenderTargetComponent;                            // 0x0868 (0x08)
    bool bIsPaint;                                                                             // 0x0870 (0x01) BitMask: 0xFF
    int32 PaintTextureId;                                                                      // 0x0874 (0x04)
    Texture* PaintTexturePtr;                                                                  // 0x0878 (0x28)
    enum BindShortcutPos;                                                                      // 0x08A0 (0x01)
    int32 ModifiedContainerIndex;                                                              // 0x08A4 (0x04)

    // --- Functions ---
    bool SkipTickOptimize();                                                                   // [Protected] RVA: 0x5C533DC
    bool ShouldDisplayHitEffect(int32 AttemptedDamage, int32 DamageAmount, int32 FinalHealth, int32 FinalArmor);  // [Public] RVA: 0x5C5324C
    void SetWeaponStainSkinID(int64 InWeaponStainSkinID);                                      // [Final|Public] RVA: 0x5C531B0
    void SetShowInvID(bool bShow);                                                             // [Final|Public] RVA: 0x5C53030
    void SetRefreshFrameToClient(enum InfoChangeType);                                         // [Public] RVA: 0x5C52E54
    void SetRefreshFrame(enum InfoChangeType);                                                 // [Final|Public] RVA: 0x5C52DBC
    void SetRebornSaftyState(bool IsInRebornSafty);                                            // [Final|Public] RVA: 0x5C52D20
    void SetIsForbbidenDiscardByCharacter(bool NewSetValue);                                   // [Final|Public] RVA: 0x5C52BF0
    void SetInventoryPaint(bool bUsePaint, int32 TextureId);                                   // [Final|Public] RVA: 0x5C52AF8
    void SetFreezed(bool bInFreezed);                                                          // [Final|Public] RVA: 0x5C529CC
    void SetBindShortcutPos(enum Pos);                                                         // [Final|Public] RVA: 0x5C527B4
    void ReceiveChangeAttachPositionEvent(Character* OwnerCharacter, enum NewPosition);        // [Public] RVA: 0x1812688
    void ProcessInventoryPaint();                                                              // [Final|Public] RVA: 0x5C52518
    void OnRep_RuntimeID();                                                                    // [Final|Public] RVA: 0x1D38310
    void OnRep_Repaint();                                                                      // [Final|Public] RVA: 0x5C52504
    void OnRep_IsInRebornSafty();                                                              // [Final|Public] RVA: 0x5C524F0
    void OnPreGiveTo(Pawn* Target, enum SourceType, enum Pos, ItemGridInfo DropPosition, Actor* InParentActor, SGInventory* Inventory);  // [Final|Protected] RVA: 0x5C522EC
    void OnInventoryRemoved(Character* OwnerCharacter);                                        // [Final|Protected] RVA: 0x1CD8890
    void OnInventoryAttachPositionChanged(SGInventory* Inventory, Character* OwnerCharacter, enum NewAttachPosition);  // [Protected] RVA: 0x1B8D92C
    void OnInventoryAdded(Character* OwnerCharacter);                                          // [Final|Protected] RVA: 0x1CD8890
    int64 K2_GetItemID();                                                                      // [Final|Public] RVA: 0x5C520A0
    bool IsFreezed();                                                                          // [Final|Public] RVA: 0x5C52088
    SGWidgetToRenderTargetComponent* GetWidgetToRenderTargetComponent();                       // [Final|Public] RVA: 0x5C51D04
    int64 GetWeaponStainSkinID();                                                              // [Final|Public] RVA: 0x5C51CEC
    uint64 GetRefreshFrameInfoChangeMask(uint64 LastCheckRefreshFrame);                        // [Final|Public] RVA: 0x5C51BBC
    float GetMoistureCostRatio();                                                              // [Final|Public] RVA: 0x5C51B94
    bool GetIsForbbidenDiscardByCharacter();                                                   // [Final|Public] RVA: 0x5C51B08
    FString GetInvName();                                                                      // [Final|Public] RVA: 0x5C515B8
    SGInventoryZoomComponent* GetInventoryZoomComponent();                                     // [Final|Public] RVA: 0x5C51AE4
    SGInventoryTypeComponent_Badge* GetInventoryTypeComponent_Badge();                         // [Final|Public] RVA: 0x5C51AC0
    SGInventoryTypeComponent_Avatar* GetInventoryTypeComponent_Avatar(bool bForceGet);         // [Final|Public] RVA: 0x5C51A14
    SGInventoryTypeComponent_Armor* GetInventoryTypeComponent_Armor(bool bForceGet);           // [Final|Public] RVA: 0x5C51968
    SGInventorySoundDiffuseComponent* GetInventorySoundDiffuseComponent();                     // [Final|Public] RVA: 0x5C51944
    FString GetInventoryShortName();                                                           // [Final|Public] RVA: 0xFFF128
    FString GetInventoryName();                                                                // [Final|Public] RVA: 0x5C51858
    SGInventoryModifyAttributeComponent* GetInventoryModifyAttributeComp();                    // [Final|Public] RVA: 0x5C51834
    SGInventoryMeshComponent* GetInventoryMeshComponent();                                     // [Final|Public] RVA: 0x5C51810
    SGInventoryGridComponent* GetInventoryGridComp();                                          // [Final|Public] RVA: 0x5C517EC
    SGInventoryEquipMeshComponent* GetInventoryEquipMeshComponent();                           // [Final|Public] RVA: 0x5C517C8
    SGInventoryCommonDataComponent* GetInventoryCommonDataComponent();                         // [Final|Public] RVA: 0x5C517A4
    SGInventoryCameraComponent* GetInventoryCameraComp();                                      // [Final|Public] RVA: 0x5C51780
    SGInventoryAssembleComponent* GetInventoryAssembleComp();                                  // [Final|Public] RVA: 0x5C5175C
    SGInventoryAbilityComponent* GetInventoryAbilityComponent();                               // [Final|Public] RVA: 0x5C51738
    float GetFoodCostRatio();                                                                  // [Final|Public] RVA: 0x5C51540
    Character* GetCharacterOwner();                                                            // [Final|Public] RVA: 0x5C51458
    enum GetBindShortcutPos();                                                                 // [Final|Public] RVA: 0x5C51440
    void DestroySelf();                                                                        // [Final|Public] RVA: 0x5C51340
    void DelayDestroySelf();                                                                   // [Final|Public] RVA: 0x5C5132C
    void CacheComponents();                                                                    // [Public] RVA: 0x4580FBC
    void BP_SetBagOpenState(Controller* Controller, bool State);                               // [Public] RVA: 0x1812688
};

// ============================================================
// Inheritance: SGPlayerCameraManager : PlayerCameraManager : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGPlayerCameraManager : public PlayerCameraManager {
public:
    TArray<TSubclassOf<ActorComponent>> ComponentClasses;                                      // 0x30B0 (0x10)
    TArray<TSubclassOf<ActorComponent>> ComponentClassesAdditional;                            // 0x30C0 (0x10)
    TSubclassOf<SGPlayerCameraManager> TemplateClass;                                          // 0x30D0 (0x08)
    SGPCMCameraMaterialComponent* CachedMaterialComponent;                                     // 0x30D8 (0x08)
    SGPCMDepthOfFieldComponent* CachedCameraDOFComponent;                                      // 0x30E0 (0x08)
    bool bEnableModifyRotationByMotionSensor;                                                  // 0x30E8 (0x01) BitMask: 0xFF
    bool bEnableModifyRotationByWeaponRecoil;                                                  // 0x30E9 (0x01) BitMask: 0xFF
    bool bEnableModifyRotationByAutoAiming;                                                    // 0x30EA (0x01) BitMask: 0xFF
    bool bEnableModifyRotationByForceLookingAt;                                                // 0x30EB (0x01) BitMask: 0xFF
    Rotator ThisFrameBeforeCameraShakeRotator;                                                 // 0x30EC (0x0C)
    SGPCMCameraFOVComponent* PCMFOVComponent;                                                  // 0x3120 (0x08)
    SGPCMCameraShakeComponent* CameraShakeComponent;                                           // 0x3128 (0x08)

    // --- Functions ---
    void UpdatePostProcessComponentWeight(float Weight);                                       // [Public] RVA: 0x1812688
    void OnDetectInRoomEvent(bool bNotifyInRoom);                                              // [Final|Public] RVA: 0x5CD6140
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
    bool bMoveTimeDiffEnable;                                                                  // 0x087A (0x01) BitMask: 0xFF
    int32 TimeOutValue;                                                                        // 0x087C (0x04)
    DSSwitchConfig DSSwitchConfig;                                                             // 0x0880 (0x0C)
    int32 NewTraceInfoIndex;                                                                   // 0x088C (0x04)
    bool IsReconnectPlayer;                                                                    // 0x0894 (0x01) BitMask: 0xFF
    int32 EndGameType;                                                                         // 0x0898 (0x04)
    bool HasBeginGame;                                                                         // 0x089C (0x01) BitMask: 0xFF
    enum FinishType;                                                                           // 0x089D (0x01)
    int32 nGetAttachLoopMaxNum;                                                                // 0x08A0 (0x04)
    int32 InputFlowDataSplitSize;                                                              // 0x08AC (0x04)
    SGCharacter* ControlledCharacter;                                                          // 0x0900 (0x08)
    NetConnection* CachedReachableConnection;                                                  // 0x0908 (0x08)
    float ForgiveJudgeTime;                                                                    // 0x0910 (0x04)
    TArray<SGCharacter*> HitSelfTeammates;                                                     // 0x0918 (0x10)
    bool bShowStrongTrajectory;                                                                // 0x0928 (0x01) BitMask: 0xFF
    float OBTrajectoryDistance;                                                                // 0x092C (0x04)
    TSubclassOf<ActorComponent> AIDebugComponentClass;                                         // 0x0930 (0x08)
    TArray<int32> EscapePointIDs;                                                              // 0x0938 (0x10)
    Vector PlayerStartLocation;                                                                // 0x0948 (0x0C)
    int32 InTeamIndex;                                                                         // 0x0954 (0x04)
    TSubclassOf<InputComponent> GlobalInputComponentClass;                                     // 0x0958 (0x08)
    InputComponent* GlobalInputComponent;                                                      // 0x0960 (0x08)
    bool bShouldUseTeleportCheckFrames;                                                        // 0x0968 (0x01) BitMask: 0xFF
    bool bAutoCheckAndStopHurryLoad;                                                           // 0x0969 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UpdateTipsLastTouchLocation(const Vector2D TipsLastTouchLocation);                    // [Final|Public] RVA: 0x5CD8120
    void TimerForServerDebugRPC();                                                             // [Final|Public] RVA: 0x5CD810C
    void TimerForHeartbeat();                                                                  // [Final|Public] RVA: 0x5CD80F8
    void SetUIInputMode(enum UIMode);                                                          // [Final|Public] RVA: 0x5CD8060
    void SetSGCharacter(SGCharacter* InCharacter);                                             // [Final|Public] RVA: 0x5CD7FC0
    void SetPlayerStartLocation(const Vector InPlayerStartLoc);                                // [Final|Public] RVA: 0x5CD7EF4
    void SetNewTraceInfoIndex(int32 InNewTraceInfoIndex);                                      // [Final|Public] RVA: 0x5CD7E5C
    void SetNetSpeedWhenLoadProtect(bool bRecoverDefaultValue);                                // [Final|Public] RVA: 0x4523D3C
    void SetEscapePointIDs(const TArray<int32> InEscapePointIDs);                              // [Final|Public] RVA: 0x5CD7D20
    void ServerUseVehicle(Actor* Vehicle, bool bWantDriver);                                   // [Public] RVA: 0x5CD7824
    void ServerTLogSoundIndicatorScore(FString TLogInfo);                                      // [Public] RVA: 0x5CD7778
    void ServerTLogSoundIndicatorCount(int32 Count);                                           // [Public] RVA: 0x5CD76DC
    void ServerSwitchSeat(SGCharacter* NZChar, int32 NewSeatIndex);                            // [Public] RVA: 0x5CD75C0
    void ServerSpectatingSettingsReport(const bool bAllowTeammatesCheckTheBackpack);           // [Public] RVA: 0x5CD7520
    void ServerSetVehicleSpringArmRelativeRotation(Rotator InRelativeRot);                     // [Public] RVA: 0x5CD7444
    void ServerSetVehicleCameraRelativeInfo(Rotator InRelativeRot, Vector InRelativeLoc);      // [Public] RVA: 0x5CD72EC
    void ServerSendTssAntiData(const TssAntiData AntiData);                                    // [Public] RVA: 0x5CD71AC
    void ServerSendShootInputFlowData(const ShootInputFlowData InputData);                     // [Protected] RVA: 0x5CD7074
    void ServerReplayButtonClickedReport(int32 SourceType);                                    // [Public] RVA: 0x5CD6FD8
    void ServerNotifyPCSpawned();                                                              // [Public] RVA: 0x5CD6F8C
    void ServerLeaveVehicle(Rotator CurrentRot);                                               // [Public] RVA: 0x5CD6EB0
    void ServerHeartbeat(int32 PingNum);                                                       // [Public] RVA: 0x5CD6E14
    void ServerForgiveTeammate(Character* TargetCharacter, bool bForgive, SGPlayerController* PC);  // [Public] RVA: 0x5CD6CD0
    void ServerDebugRPCTwo(FString Key, FString Value);                                        // [Public] RVA: 0x5CD6BB8
    void ServerDebugRPC(FString Str);                                                          // [Public] RVA: 0x5CD6B0C
    void SendDebugRPC(int32 Len, int32 Last, int32 Num);                                       // [Final|Public] RVA: 0x5CD69D0
    void ProcessDebugCommand(FString Value);                                                   // [Public] RVA: 0x1812688
    void OnRepDSSwitchConfig();                                                                // [Final|Protected] RVA: 0x1707950
    void OnRep_PlayerStartLocation();                                                          // [Final|Private] RVA: 0x5CD6794
    void OnRep_NewTraceInfoIndex();                                                            // [Final|Protected] RVA: 0x5CD6708
    void OnRep_InTeamIndex();                                                                  // [Final|Private] RVA: 0x5CD66F4
    void OnRep_FinishType();                                                                   // [Final|Public] RVA: 0x5CD66A0
    void OnRep_EscapePointIDs();                                                               // [Final|Private] RVA: 0x5CD668C
    void OnPlayerTryReconnect(NetConnection* InNetConnection);                                 // [Final|Protected] RVA: 0x5CD6514
    void OnPlayerOnReconnect(PlayerController* InPC);                                          // [Final|Protected] RVA: 0x5CD6478
    void OnPlayerInputClassLoadCompleted(SoftObjectPath Path);                                 // [Final|Private] RVA: 0x5CD63C0
    void OnPlayerFinishReconnect(NetConnection* InNetConnection);                              // [Final|Protected] RVA: 0x5CD6278
    void OnGameBegin(PlayerController* PlayerController);                                      // [Final|Public] RVA: 0x5CD61DC
    void OnCompetitionFlagChange(enum FlagType, bool bValue);                                  // [Final|Public] RVA: 0x5CD6054
    void OnBUseSoundIndicatorChange(bool bUseSoundIndicator);                                  // [Final|Public] RVA: 0x5CD5ED0
    uint8 MoveToLocation(const Vector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<NavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // [Final|Public] RVA: 0x5CD5BB4
    void K2_SetInitialLocationAndRotation(const Vector NewLocation, const Rotator NewRotation);  // [Final|Public] RVA: 0x5CD5A7C
    void InitNewPlayer(const UniqueNetIdRepl UniqueID, const FString Options, const FString Portal);  // [Public] RVA: 0x5CD58C4
    void GiveUpWFRToDie(Character* TargetCharacter);                                           // [Public] RVA: 0x5CD580C
    SGPCUIModeComponent* GetUIModeComponent();                                                 // [Final|Public] RVA: 0x5CD57E8
    SGPCSpectatingComponent* GetSpecatingComponent();                                          // [Final|Public] RVA: 0x5CD5724
    SGCharacter* GetSGCharacter();                                                             // [Final|Public] RVA: 0x5CD5700
    int32 GetNewTraceInfoIndex();                                                              // [Final|Public] RVA: 0x5CD56E8
    float GetMoveTimeDiff();                                                                   // [Final|Public] RVA: 0x5CD56C0
    int32 GetLostPingSeconds();                                                                // [Final|Public] RVA: 0x5CD56A0
    SGPCFPPModeComponent* GetFPPModeComponent();                                               // [Final|Public] RVA: 0x5CD5664
    SGCharacter* GetControlledSGCharacter();                                                   // [Final|Public] RVA: 0x5CD564C
    void ForgiveTeammate(Character* TargetCharacter, bool bForgive);                           // [Final|Public] RVA: 0x5CD52C4
    void DSInitConfig();                                                                       // [Final|Protected] RVA: 0x5CD52B0
    void CloseConnection();                                                                    // [Public] RVA: 0x5CD5298
    void ClientUseVehicleFailed();                                                             // [Public] RVA: 0x5CD5280
    void ClientUseTeleportCheckFrames(bool bEnable, bool bAutoStopHurryLoad);                  // [Public] RVA: 0x5CD5180
    void ClientReplayButtonClickedReport(int32 SourceType);                                    // [Public] RVA: 0x5CD50E4
    void ClientHudAddToast(FString Tips);                                                      // [Public] RVA: 0x5CD4FE4
    void ClientHeartbeat(int32 PingNum);                                                       // [Public] RVA: 0x5CD4F48
    void ClientGetOutOfStuck(enum Result);                                                     // [Public] RVA: 0x5CD4EAC
    void ClientBroadcastHitTeammates(SGCharacter* DamageCauser);                               // [Public] RVA: 0x5CD4E0C
    void CallServerGetOutOfStuckImpl(bool bClientStuck, const Vector StuckLocation);           // [Public] RVA: 0x5CD4C20
    void CallServerGetOutOfStuck();                                                            // [Final|Public] RVA: 0x5CD4C0C
    void BeforeCloseConnection();                                                              // [Public] RVA: 0x1812688
    void AfterPostInitializeComponents();                                                      // [Public] RVA: 0x1812688
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

    // --- Functions ---
    void UpdateServerOpenMicState(bool bOpen);                                                 // [Public] RVA: 0x5CE1B60
    void UpdatePing(float InPing);                                                             // [Public] RVA: 0x5CE1AC0
    void UpdateOpenMicState(bool bOpen);                                                       // [Final|Public] RVA: 0x5CE1A04
    void SetZonePlayerName(FString NewName);                                                   // [Final|Public] RVA: 0x5CE1820
    void SetTicketValue(int32 InTicketValue);                                                  // [Final|Public] RVA: 0x5CE1758
    void SetTeamTypeForTest(int32 InTeamType);                                                 // [Final|Public] RVA: 0x5CE16B4
    void SetSquadID(int32 ID);                                                                 // [Final|Public] RVA: 0x5CE15FC
    void SetSpecatedBanTime(float BanTime);                                                    // [Final|Public] RVA: 0x5CE1560
    void SetSignType(int32 Stype);                                                             // [Final|Public] RVA: 0x5CE14A4
    void SetSGCharacter(SGCharacter* CurrentCharacter);                                        // [Final|Public] RVA: 0x5CE13CC
    void SetCourtRanksInfo(int32 Level, int32 Elo);                                            // [Final|Public] RVA: 0x5CE1108
    void ServerSetSignType(int32 Stype);                                                       // [Public] RVA: 0x5CE1050
    void ServerReportRagdollOverridePose(SGCharacter* Character, uint8 reason, const Vector ClientPelvisLoc, float CostTime);  // [Public] RVA: 0x5CE0EC8
    void ServerMarkLastCameraAimTime();                                                        // [Public] RVA: 0x5CE0E7C
    void ServerClearLastCameraAimTime();                                                       // [Public] RVA: 0x5CE0E30
    void SendFinalFeedBack(SGCharacter* Character, bool bDecision);                            // [Public] RVA: 0x5CE088C
    void OnReq_RoomID();                                                                       // [Public] RVA: 0x21F8C4C
    void OnRep_TeamIndex();                                                                    // [Public] RVA: 0x2152F0C
    void OnRep_PlayerKDAInfo();                                                                // [Final|Public] RVA: 0x5CE04EC
    void OnRep_PlayerIdentityType();                                                           // [Final|Public] RVA: 0x204A5D4
    void OnRep_GID();                                                                          // [Final|Public] RVA: 0x1F81970
    void OnRep_ChatVoiceIDs();                                                                 // [Final|Public] RVA: 0x5CE04D8
    void OnRep_AllowTeammatesCheckTheBackpack();                                               // [Final|Public] RVA: 0x5CE04C4
    void OnPostDied(Character* DeadCharacter, Controller* Killer, DamageEventObject* DamageEventObject);  // [Final|Public] RVA: 0x5CE0300
    void OnKillOther(const KillInfo KillInfo, const KillOtherStatis KillOtherStatics);         // [Final|Public] RVA: 0x5CE0008
    void OnKilled(Pawn* KilledPawn, const KillInfo KillInfo);                                  // [Final|Public] RVA: 0x5CE0144
    void OnCharacterReadyToPlay(SGCharacter* Character);                                       // [Final|Protected] RVA: 0x5CDFE3C
    void LoadGuaranteeAdditionConf();                                                          // [Final|Public] RVA: 0x5CDFAB8
    bool IsReconnectSpawn();                                                                   // [Final|Public] RVA: 0x5CDF9CC
    bool IsOBPlayer();                                                                         // [Final|Public] RVA: 0x5CDF9AC
    bool IsCancelReconnection();                                                               // [Final|Public] RVA: 0x5CDF6EC
    bool IsAdministratorPlayer();                                                              // [Final|Public] RVA: 0x5CDF6D0
    void IncreaseKillPlayerPMC();                                                              // [Final|Public] RVA: 0x5CDF200
    void IncreaseKillAIPMC();                                                                  // [Final|Public] RVA: 0x5CDF174
    int32 GetSignType();                                                                       // [Final|Public] RVA: 0x5CDF004
    SGCharacter* GetSGCharacter();                                                             // [Final|Public] RVA: 0x5CDEFE0
    int32 GetRecentCollectionItemCounts(int32 InRecentTimes);                                  // [Final|Public] RVA: 0x5CDEC9C
    enum GetPlayerTeamType();                                                                  // [Final|Public] RVA: 0x27B34CC
    int32 GetPlayerNationalFlagIso();                                                          // [Final|Public] RVA: 0x29A8D98
    SGPlayerKDAInfo GetPlayerKDAInfo();                                                        // [Final|Public] RVA: 0x5CDEBA4
    SGPlayerIconInfo GetPlayerIconInfo();                                                      // [Final|Public] RVA: 0x1F6A9D4
    SGPlayerBannerInfo GetPlayerBannerInfo();                                                  // [Final|Public] RVA: 0x1B956D0
    uint8 GetPlatformId();                                                                     // [Final|Public] RVA: 0x5CDE9F0
    int32 GetKillNum();                                                                        // [Final|Public] RVA: 0x5CDE928
    int32 GetDeathNum();                                                                       // [Final|Public] RVA: 0x5CDE8F0
    int32 GetCourtRankLevel();                                                                 // [Final|Public] RVA: 0x5CDE8D8
    int64 GetCharacterLootExtData(uint32 InType);                                              // [Final|Public] RVA: 0x5CDE7BC
    int32 GetAssistNum();                                                                      // [Final|Public] RVA: 0x5CDE7A4
    void ClientSendBanTimeForCauser();                                                         // [Public] RVA: 0x5CDE6E0
    void CalculateLootGuaranteeFactor();                                                       // [Final|Public] RVA: 0x5CDE6CC
    void AddCharacterLootExtData(uint32 InType, int64 InValue);                                // [Final|Public] RVA: 0x5CDE4EC
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
    void PoolEndPlay();                                                                        // [Final|Protected] RVA: 0x5D29538
    void PoolBeginPlay();                                                                      // [Final|Protected] RVA: 0x5D29520
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
    void VisualizeBeamSegment(int32 Index, BeamSegmentData BeamSegmentData);                   // [Final|Protected] RVA: 0x5CFEC1C
    void SetTrajectoryFadeInCurrentTime(float SetTime);                                        // [Final|Public] RVA: 0x5CFE880
    void SetProceduralMeshLineOpacity(float Opacity);                                          // [Final|Public] RVA: 0x5CFE7EC
    BeamSegmentData GetBeamSegmentDataAtTime(float BeginTime, float EndTime);                  // [Final|Protected] RVA: 0x5CFE488
    void CreateProceduralMesh_Complex(out TMap<Vector, Vector> TrajectoryPointsWithVelocity);  // [Final|Protected] RVA: 0x5CFE234
    void CreateProceduralMesh(out TMap<Vector, Vector> TrajectoryPointsWithVelocity);          // [Final|Protected] RVA: 0x5CFE0C8
    Vector CalcTargetLocation(const Vector InStartLocation, const Vector InInitialVelocity, float InTime);  // [Protected] RVA: 0x5CFDE10
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
    void PoolEndPlay();                                                                        // [Final|Public] RVA: 0x1D3B8A4
    void PoolBeginPlay();                                                                      // [Final|Public] RVA: 0x1DC2690
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
    bool RemoveFromTeam(Actor* C, bool bRemoveAll);                                            // [Public] RVA: 0x5D0C2D4
    TArray<Actor*> GetTeamMembers();                                                           // [Public] RVA: 0x5D0AC04
    ActorComponent* GetFactionComp();                                                          // [Public] RVA: 0x5D099FC
    bool AddToTeam(Actor* C);                                                                  // [Public] RVA: 0x5D08714
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
    TArray<Actor*> OBTeamMembers;                                                              // 0x0398 (0x10)
    TArray<PlayerState*> TeamMemberPlayerStates;                                               // 0x03A8 (0x10)
    TArray<PlayerState*> InBattleTeamMemberPlayerStates;                                       // 0x03B8 (0x10)
    TArray<FString> InBattleTeamMemberPlayerNames;                                             // 0x03C8 (0x10)
    TArray<SGPlayerIconInfo> InBattleTeamMemberIconInfo;                                       // 0x03D8 (0x10)
    TArray<SGPlayerBannerInfo> InBattleTeamMemberBannerInfo;                                   // 0x03E8 (0x10)
    TArray<int32> InBattleTeamMemberPlayerNationalFlagIsos;                                    // 0x03F8 (0x10)
    TArray<enum> InBattleTeamMemberPlayerCondition;                                            // 0x0408 (0x10)
    TArray<SGAICharacter*> TeamMemberAICharacters;                                             // 0x0418 (0x10)
    TArray<int32> TeamConfirmedPerkID;                                                         // 0x0428 (0x10)
    TArray<int64> TeamGuid2VisualIdxMapKey;                                                    // 0x0438 (0x10)
    TArray<int32> TeamGuid2VisualIdxMapValue;                                                  // 0x0448 (0x10)
    TArray<int64> TeamGuidIncludeNotConnect;                                                   // 0x0458 (0x10)
    int32 CurVisualIdx;                                                                        // 0x0468 (0x04)
    float CheckDBNOWipeOutPeriod;                                                              // 0x046C (0x04)
    bool bOpenContainerLootProtectByTeammate;                                                  // 0x0470 (0x01) BitMask: 0xFF
    NPCAITeam* AIGroupInfo;                                                                    // 0x0478 (0x08)
    SGInventory* TeamStorage;                                                                  // 0x0480 (0x08)
    TArray<int64> SuccessTeamMemberGIDArr;                                                     // 0x0488 (0x10)
    TArray<SGInventory*> TeamStorageBoxes;                                                     // 0x0498 (0x10)
    int32 TotalTeamMemberStoragesValue;                                                        // 0x04A8 (0x04)
    TArray<TeamMemberStorageInfo> TeamMemberStorageArr;                                        // 0x04B0 (0x10)
    int32 TotalTeamStorageValue;                                                               // 0x04C0 (0x04)
    int32 TeamStorageValue;                                                                    // 0x04C4 (0x04)
    TArray<Vector2D> TeamMemberDeathLocationArray;                                             // 0x04C8 (0x10)
    TArray<int32> TeamAreaIDArray;                                                             // 0x04D8 (0x10)
    FMulticastDelegate OnAreaIDArrayChange;                                                    // 0x04E8 (0x10)
    FMulticastDelegate OnTeamMemberKillOther;                                                  // 0x04F8 (0x10)
    FMulticastDelegate OnTeamMemberCauseDamage;                                                // 0x0508 (0x10)
    FMulticastDelegate OnTeamMemberAddInventory;                                               // 0x0518 (0x10)

    // --- Functions ---
    void UpdateTeamStorageSearchingStateByPS(PlayerState* PlayerState);                        // [Public] RVA: 0x5D0D074
    void SetTotalTeamStorageValue(int32 InTeamStorageTotalValue);                              // [Final|Public] RVA: 0x5D0CFC8
    void SetTeamStorageValue(int32 InTeamStorageValue);                                        // [Final|Public] RVA: 0x5D0CF30
    void SetTeamMemberDeathLocationArray(int32 PlayerIndex, Vector2D Pos);                     // [Final|Public] RVA: 0x5D0CE4C
    void SetTeamAreaIDArray(int32 PlayerIndex, int32 AreaID);                                  // [Final|Public] RVA: 0x5D0CD64
    void SetStartPointGroupIndex(int32 InIndex);                                               // [Final|Public] RVA: 0x5D0CCC0
    void SetOpenContainerLootProtectByTeammate(bool InOpenContainerLootProtectByTeammate);     // [Final|Public] RVA: 0x5D0CC24
    void SetInBattleTeamMemberPlayerCondition(int32 PlayerIndex, enum Condition);              // [Final|Public] RVA: 0x5D0CB3C
    void SetAIGroupInfo(NPCAITeam* InAIGroupInfo);                                             // [Final|Public] RVA: 0x5D0C778
    void ServerSetTeamMemberDeathLocationArray(int32 PlayerIndex, Vector2D Pos);               // [Public] RVA: 0x5D0C664
    void ServerClearTeamMemberInfo(int32 PlayerIndex);                                         // [Final|Public] RVA: 0x5D09788
    void RemoveOBTeamMemberPlayer(Controller* C);                                              // [Final|Public] RVA: 0x5D0C3D4
    void PlayerFinishGame(PlayerController* C, enum FinishType, Actor* EscapeVolume);          // [Public] RVA: 0x5D0C1A0
    void OnRoundGamePrepare();                                                                 // [Public] RVA: 0x1C5379C
    void OnRep_TotalTeamStorageValue();                                                        // [Final|Public] RVA: 0x2066DCC
    void OnRep_TeamStorageValue();                                                             // [Final|Public] RVA: 0x2066E2C
    void OnRep_TeamMemberStorageArr();                                                         // [Final|Public] RVA: 0x5D0BE18
    void OnRep_TeamMemberSignArray();                                                          // [Final|Public] RVA: 0x1F6E3A8
    void OnRep_TeamMemberPlayerState();                                                        // [Final|Public] RVA: 0x2442978
    void OnRep_TeamMemberAICharacters();                                                       // [Final|Public] RVA: 0x1DE8AE8
    void OnRep_TeamIndex();                                                                    // [Final|Public] RVA: 0x1F30B78
    void OnRep_TeamConfirmedPerkID();                                                          // [Final|Public] RVA: 0x5D0BE04
    void OnRep_TeamAreaID(const TArray<int32> OldValue);                                       // [Final|Public] RVA: 0x1A00ECC
    void OnRep_InBattleTeamMemberPlayerStates();                                               // [Final|Public] RVA: 0x18363DC
    void OnRep_InBattleTeamMemberPlayerNames();                                                // [Final|Public] RVA: 0x1E358E4
    void OnRep_InBattleTeamMemberPlayerCondition();                                            // [Final|Public] RVA: 0x206C138
    void OnRep_InBattleTeamMemberNationalFlagIsos();                                           // [Final|Public] RVA: 0x2184514
    void OnRep_InBattleTeamMemberIconInfo();                                                   // [Final|Public] RVA: 0x1F6ADD4
    void OnRep_InBattleTeamMemberBannerInfo();                                                 // [Final|Public] RVA: 0x1B958F0
    void OnRebornSaftyStateChanged(PlayerController* PlayerController, bool IsInRebornSafty);  // [Final|Public] RVA: 0x5B0A01C
    void OnPlayerAddToTeam(Actor* C);                                                          // [Public] RVA: 0x5D0BB64
    void OnInventoryParentActorChanged(SGInventory* InvActor, Actor* PreParentActor, Actor* ParentActor, int32 InParentIndex);  // [Final|Public] RVA: 0x5D0B3FC
    void MulticastInBattleTeamMemberPlayerStates(const TArray<PlayerState*> PlayerStates);     // [Protected] RVA: 0x1C53F34
    bool IsGIDInTeam(int64 gid);                                                               // [Final|Public] RVA: 0x5D0B06C
    bool IsFriendlyToAll();                                                                    // [Public] RVA: 0x5D0B044
    void InitTeamStorageBox();                                                                 // [Public] RVA: 0x2045AA4
    void InitTeamStorage();                                                                    // [Public] RVA: 0x5AE6FAC
    uint32 GetUnSettmentTeamMembersCount();                                                    // [Public] RVA: 0x5D0B01C
    int32 GetTeamStorageValue(bool bIncludeRatio);                                             // [Public] RVA: 0x5D0AF2C
    int32 GetTeamStorageTotalValue();                                                          // [Final|Public] RVA: 0x5D0AF14
    float GetTeamStorageRatio();                                                               // [Public] RVA: 0x5D0AEE8
    int32 GetTeamStorageAvgNum();                                                              // [Public] RVA: 0x5D0AEC0
    SGInventory* GetTeamStorage();                                                             // [Final|Public] RVA: 0x5D0AEA8
    int32 GetTeamSignTypeMemberByIndex(int32 Index);                                           // [Final|Public] RVA: 0x5D0ADB8
    int32 GetTeamPlayerNationalFlagIsoByIndex(int32 PlayerIndex);                              // [Final|Public] RVA: 0x5D0ACE0
    FString GetTeamPlayerNameByIndex(int32 PlayerIndex);                                       // [Final|Public] RVA: 0x1EB67BC
    int64 GetTeamPlayerGIDByIndex(int32 PlayerIndex);                                          // [Final|Public] RVA: 0x5D0AC38
    int32 GetTeamMemberStorageValue(int64 gid);                                                // [Public] RVA: 0x5D0AB54
    SGInventory* GetTeamMemberStorage(int64 gid);                                              // [Final|Public] RVA: 0x5D0AAAC
    Vector2D GetTeamMemberSignArrayVectorByIndex(int32 Index);                                 // [Public] RVA: 0x5D0AA04
    TArray<Vector2D> GetTeamMemberSignArray();                                                 // [Public] RVA: 0x5D0A934
    uint32 GetTeamMembersCount();                                                              // [Final|Public] RVA: 0x29ABB58
    TArray<PlayerState*> GetTeamMemberPlayerStates();                                          // [Final|Public] RVA: 0x5D0A918
    TArray<ASGPlayerData> GetTeammemberPlayerInfoArray();                                      // [Public] RVA: 0x5D0AFDC
    int32 GetTeamMemberIndexByGID(int64 gid);                                                  // [Final|Public] RVA: 0x5D0A870
    int32 GetTeamMemberIndex(PlayerState* PS);                                                 // [Final|Public] RVA: 0x5D0A7C8
    int32 GetTeamMemberFinalTeamBoxReward(int64 gid);                                          // [Public] RVA: 0x5D0A718
    Vector2D GetTeamMemberDeathLocationByIndex(int32 Index);                                   // [Final|Public] RVA: 0x5D0A674
    TArray<Vector2D> GetTeamMemberDeathLocationArray();                                        // [Final|Public] RVA: 0x5D0A658
    enum GetTeamMemberConditionByIndex(int32 Index);                                           // [Final|Public] RVA: 0x1EE1208
    TArray<enum> GetTeamMemberCondition();                                                     // [Final|Public] RVA: 0x5D0A534
    TArray<Character*> GetTeamMemberCharacters();                                              // [Public] RVA: 0x5D0A504
    PlayerState* GetTeamMemberByIndex(int32 Index);                                            // [Final|Public] RVA: 0x1ED8330
    SGAICharacter* GetTeamMemberAICharactersByGID(uint64 gid);                                 // [Final|Public] RVA: 0x5D0A45C
    TArray<SGAICharacter*> GetTeamMemberAICharacters();                                        // [Final|Public] RVA: 0x5D0A408
    int32 GetTeamIndex();                                                                      // [Final|Public] RVA: 0x5D0A3F0
    int32 GetTeamIDMemberByIndex(int32 Index);                                                 // [Final|Public] RVA: 0x5D0A31C
    TArray<int64> GetTeamGuidIncludeNotConnect();                                              // [Final|Public] RVA: 0x5D0A1CC
    TArray<int64> GetSuccessTeamMemberGIDArr();                                                // [Final|Public] RVA: 0x5D0A07C
    int32 GetStartPointGroupIndex();                                                           // [Final|Public] RVA: 0x5D0A064
    int32 GetPlayerVisualIdx(int64 Guid);                                                      // [Final|Public] RVA: 0x5D09FBC
    void GetPlayerOwnStorageInventorySourceInfo(PlayerState* PS, out TArray<InventorySourceInfo> InventorySourceInfos);  // [Public] RVA: 0x5D09EA8
    int32 GetPlayerInSquadIndex(PlayerState* PS);                                              // [Final|Public] RVA: 0x5D09E00
    void GetOwnStorageItems(PlayerState* PS, out TArray<SGPlayerItemInfoBase*> OutItemsInfo);  // [Public] RVA: 0x5D09CEC
    TArray<Actor*> GetOBTeamMembers();                                                         // [Final|Public] RVA: 0x5D09CD0
    uint32 GetNumHumans();                                                                     // [Final|Public] RVA: 0x5D09CAC
    uint32 GetNoDBNOTeamMembersCount(Controller* ExceptPlayer);                                // [Public] RVA: 0x5D09BFC
    int32 GetInBattleTeamMembersIndex(PlayerState* PS);                                        // [Final|Public] RVA: 0x1A006A0
    TArray<PlayerState*> GetInBattleTeamMemberPlayerStates();                                  // [Final|Public] RVA: 0x5D09BE0
    TArray<int32> GetInBattleTeamMemberPlayerNationalFlagIsos();                               // [Final|Public] RVA: 0x5D09BC4
    TArray<FString> GetInBattleTeamMemberNames();                                              // [Final|Public] RVA: 0x5D09BA8
    TArray<SGPlayerIconInfo> GetInBattleTeamMemberIconInfo();                                  // [Final|Public] RVA: 0x5D09B8C
    TArray<SGPlayerBannerInfo> GetInBattleTeamMemberBannerInfo();                              // [Final|Public] RVA: 0x5D09B70
    int32 GetInBattlePlayerIndexByPS(PlayerState* CurPlayerState);                             // [Final|Public] RVA: 0x5D09A28
    int32 GetAreaIDByIndex(int32 Index);                                                       // [Final|Public] RVA: 0x5D09954
    TArray<TeamMemberStorageValue> GetAllTeamMemberStorageValues();                            // [Public] RVA: 0x5D09864
    TArray<int64> GetAllTeammateGID();                                                         // [Final|Public] RVA: 0xD6DF4C
    uint32 GetAliveTeamMembersCount();                                                         // [Public] RVA: 0x5D0983C
    NPCAITeam* GetAIGroupInfo();                                                               // [Final|Public] RVA: 0x5D09824
    void ClearTeamMemberInfo(int32 PlayerIndex);                                               // [Public] RVA: 0x5D09788
    void AIFinishGame(Controller* C, enum FinishType, Actor* EscapeVolume);                    // [Public] RVA: 0x5D082DC
    void AIEscaped(Character* AICharacter, Actor* EscapeVolume);                               // [Public] RVA: 0x5D081F0
    void AddTGRSuccessLevelMember(int64 gid);                                                  // [Final|Public] RVA: 0x5D08560
    void AddTeamGuidIncludeNotConnect(int64 NewGuid);                                          // [Final|Public] RVA: 0x5D0862C
    void AddOBTeamMemberPlayer(Controller* C);                                                 // [Final|Public] RVA: 0x5D08410
};

// ============================================================
// Inheritance: SGWeapon : SGInventory : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGWeapon : public SGInventory {
public:
    enum WeaponType;                                                                           // 0x08B8 (0x01)
    enum GunWeaponSubType;                                                                     // 0x08B9 (0x01)
    enum MeleeWeaponSubType;                                                                   // 0x08BA (0x01)
    enum MeleeWeaponAnimType;                                                                  // 0x08BB (0x01)
    bool IsUseWalkHandIkAdditiveInSprint;                                                      // 0x08BC (0x01) BitMask: 0xFF
    enum WeaponDetectorType;                                                                   // 0x08BD (0x01)
    bool bValuableInventoryMeleeWeapon;                                                        // 0x08BE (0x01) BitMask: 0xFF
    bool bThrowableWeaponHasFired;                                                             // 0x08BF (0x01) BitMask: 0xFF
    SGWeaponViewEffectComponent* CurrentWeaponViewEffectComp;                                  // 0x08C8 (0x08)
    FMulticastDelegate OnProcessWeaponInnerEvent;                                              // 0x08D8 (0x10)
    FMulticastDelegate OnFinishAssemble;                                                       // 0x08E8 (0x10)
    FMulticastDelegate ChangeWeaponOwner;                                                      // 0x08F8 (0x10)
    FMulticastDelegate OnWeaponAdapterAssembled;                                               // 0x0908 (0x10)
    FMulticastDelegate OnWeaponLeftHandMeshActive;                                             // 0x0918 (0x10)
    FMulticastDelegate OnWeaponAdapterDisassembled;                                            // 0x0928 (0x10)
    FMulticastDelegate OnMeleeWeaponCanReenterFire;                                            // 0x0938 (0x10)
    FMulticastDelegate OnMeleeWeaponCanNextPhase;                                              // 0x0948 (0x10)
    FMulticastDelegate OnMeleeWeaponCanNotNextPhase;                                           // 0x0958 (0x10)
    FMulticastDelegate OnEnterAnimRecovery;                                                    // 0x0968 (0x10)
    FMulticastDelegate OnAnimationSetLoaded;                                                   // 0x0978 (0x10)
    FMulticastDelegate OnWeaponMergeFinished;                                                  // 0x0988 (0x10)
    FMulticastDelegate OnAllWeaponMeshLoaded;                                                  // 0x0998 (0x10)
    FMulticastDelegate OnWeaponLeftHandMeshLoaded;                                             // 0x09A8 (0x10)
    FMulticastDelegate OnSightListChanged;                                                     // 0x09B8 (0x10)
    FMulticastDelegate OnWeaponRemoved;                                                        // 0x09C8 (0x10)
    FMulticastDelegate OnWeaponAttachedToHand;                                                 // 0x09D8 (0x10)
    FMulticastDelegate OnWeaponDetachedFromHand;                                               // 0x09E8 (0x10)
    FMulticastDelegate OnWeaponPlayedMontage;                                                  // 0x09F8 (0x10)
    FMulticastDelegate OnWeaponPlayedLeftMeshMontage;                                          // 0x0A08 (0x10)
    FMulticastDelegate OnZoomProgressChanged;                                                  // 0x0A18 (0x10)
    FMulticastDelegate OnWeaponAdapterDetach;                                                  // 0x0A28 (0x10)
    FMulticastDelegate OnUpdateExtraMeshInfo;                                                  // 0x0A38 (0x10)
    TSet<uint32> NeedRecoverTickComponentsSet;                                                 // 0x0AA8 (0x50)
    TArray<Character*> EnemyCharacters;                                                        // 0x0B00 (0x10)
    float EngageAngle;                                                                         // 0x0B10 (0x04)
    SGWeaponRecoilDataAsset_HD* RecoilData;                                                    // 0x0B18 (0x08)
    CurveLinearColor* WeaponStabilityToBreathScaleCurve;                                       // 0x0B20 (0x08)
    CurveFloat* WeaponStabilityToImpactResistanceCurve;                                        // 0x0B28 (0x08)
    SGCharacter* CurrentEngageEnemy;                                                           // 0x0B38 (0x08)
    SGCharacter* DestWeaponCharacter;                                                          // 0x0B48 (0x08)
    SGWeaponAssembleComponent* WeaponAssembleComp;                                             // 0x0B58 (0x08)
    SGWeaponMeshComponent* WeaponMeshComp;                                                     // 0x0B60 (0x08)
    SGWeaponMergeComponent* WeaponMergeComp;                                                   // 0x0B68 (0x08)
    SGWeaponZoomComponent* WeaponZoomComp;                                                     // 0x0B70 (0x08)
    SGWeaponFiringComponent* WeaponFiringComp;                                                 // 0x0B78 (0x08)
    SGWeaponImpactComponent* WeaponImpactComp;                                                 // 0x0B80 (0x08)
    SGWeaponRecoilComponent* WeaponRecoilComp;                                                 // 0x0B88 (0x08)
    SGUAMWeaponAnimationComponent* WeaponAnimationComp;                                        // 0x0B90 (0x08)
    SGWeaponAppearanceComponent* WeaponAppearanceComp;                                         // 0x0B98 (0x08)
    SGWeaponMovementComponent* WeaponMovementComp;                                             // 0x0BA0 (0x08)
    SGWeaponBoreComponent* WeaponBoreComp;                                                     // 0x0BA8 (0x08)
    SGWeaponFireIntervalComponent* WeaponFireIntervalComp;                                     // 0x0BB0 (0x08)
    SGGunSoundComponent* GunSoundComp;                                                         // 0x0BB8 (0x08)
    SGUAMWeaponModifyBoneComponent* ModifyBoneComp;                                            // 0x0BC0 (0x08)
    SGWeaponCameraComponent* WeaponCameraComp;                                                 // 0x0BC8 (0x08)
    SGWeaponSpreadComponent* WeaponSpreadComp;                                                 // 0x0BD0 (0x08)
    SGWeaponAmmoComponent* WeaponAmmoComp;                                                     // 0x0BD8 (0x08)
    SGWeaponDurabilityComponent* WeaponDurabilityComp;                                         // 0x0BE0 (0x08)
    SGWeaponValidationComponent* WeaponValidationComp;                                         // 0x0BE8 (0x08)
    SGWeaponTacticalInvStateComponent* WeaponTacticalInvStateComp;                             // 0x0BF0 (0x08)
    SGWeaponHeatComponent_HD* WeaponHeatComp;                                                  // 0x0BF8 (0x08)
    AbilitySystemComponent* WeaponASC;                                                         // 0x0C00 (0x08)
    enum WeaponCustomSkill;                                                                    // 0x0C08 (0x01)
    TArray<ActorComponent*> FlashLightComponents;                                              // 0x0C10 (0x10)
    bool bWeaponCanTacticalPistol;                                                             // 0x0C28 (0x01) BitMask: 0x01
    bool bIgnoreWeaponLODPolicy;                                                               // 0x0C28 (0x01) BitMask: 0x02
    bool bLeverAction;                                                                         // 0x0C28 (0x01) BitMask: 0x04

    // --- Functions ---
    void SetNeedUpdateMeshInScope(bool InbNeedUpdate);                                         // [Final|Public] RVA: 0x5D264F0
    void RefreshAllComponents();                                                               // [Public] RVA: 0x4581310
    void OnRep_DestWeaponCharacter();                                                          // [Final|Public] RVA: 0x1BDBC88
    void OnDetachedFromHand();                                                                 // [Final|Protected] RVA: 0x1C7FEE4
    void OnAttachedToHand();                                                                   // [Final|Protected] RVA: 0x1C7FD6C
    void MergeWeaponPIE();                                                                     // [Final|Public] RVA: 0x1E2A7BC
    bool IsLeverAction();                                                                      // [Final|Public] RVA: 0x5D26100
    SGWeaponZoomComponent* GetWeaponZoomComp();                                                // [Final|Public] RVA: 0x5D25B5C
    enum GetWeaponType();                                                                      // [Final|Public] RVA: 0x5D25B44
    SGWeaponTacticalInvStateComponent* GetWeaponTacticalInvStateComp();                        // [Final|Public] RVA: 0x5D25B20
    SGWeaponSpreadComponent* GetWeaponSpreadComp();                                            // [Final|Public] RVA: 0x5D25AFC
    SGWeaponRecoilComponent* GetWeaponRecoilComp();                                            // [Final|Public] RVA: 0x5D25AD8
    SGWeaponMovementComponent* GetWeaponMovementComp();                                        // [Final|Public] RVA: 0x5D25AB4
    SGWeaponMeshComponent* GetWeaponMeshComp();                                                // [Final|Public] RVA: 0x5D25A90
    SGWeaponMergeComponent* GetWeaponMergeComp();                                              // [Final|Public] RVA: 0x5D25A6C
    SGWeaponImpactComponent* GetWeaponImpactComp();                                            // [Final|Public] RVA: 0x5D25A48
    SGWeaponHeatComponent_HD* GetWeaponHeatComp();                                             // [Final|Public] RVA: 0x5D25A24
    SGWeaponFiringComponent* GetWeaponFiringComp();                                            // [Final|Public] RVA: 0x5D25A00
    SGWeaponFireIntervalComponent* GetWeaponFireIntervalComp();                                // [Final|Public] RVA: 0x5D259DC
    SGWeaponDurabilityComponent* GetWeaponDurabilityComp();                                    // [Final|Public] RVA: 0x5D259B8
    enum GetWeaponDetectorType();                                                              // [Final|Public] RVA: 0x5D259A0
    bool GetWeaponCanTacticalPistol();                                                         // [Final|Public] RVA: 0x5D25984
    SGWeaponCameraComponent* GetWeaponCameraComp();                                            // [Final|Public] RVA: 0x5D25960
    SGWeaponBoreComponent* GetWeaponBoreComp();                                                // [Final|Public] RVA: 0x5D2593C
    int64 GetWeaponAssembleID();                                                               // [Final|Public] RVA: 0x5D25924
    SGWeaponAssembleComponent* GetWeaponAssembleComp();                                        // [Final|Public] RVA: 0x5D25900
    SGWeaponAppearanceComponent* GetWeaponAppearanceComp();                                    // [Final|Public] RVA: 0x5D258DC
    SGUAMWeaponAnimationComponent* GetWeaponAnimationComp();                                   // [Final|Public] RVA: 0x5D258B8
    SGWeaponAmmoComponent* GetWeaponAmmoComp();                                                // [Final|Public] RVA: 0x5D25894
    bool GetNeedUpdateMeshInScope();                                                           // [Final|Public] RVA: 0x5D251F0
    SGUAMWeaponModifyBoneComponent* GetModifyBoneComp();                                       // [Final|Public] RVA: 0x5D251CC
    enum GetMeleeWeaponSubType();                                                              // [Final|Public] RVA: 0x5D250F8
    enum GetMeleeWeaponAnimType();                                                             // [Final|Public] RVA: 0x5D250E0
    bool GetIsUseWalkHandIkAdditiveInSprint();                                                 // [Final|Public] RVA: 0x5D24F68
    bool GetIgnoreWeaponLODPolicy();                                                           // [Final|Public] RVA: 0x5D24F4C
    enum GetGunWeaponSubType();                                                                // [Final|Public] RVA: 0x5D24F34
    SGGunSoundComponent* GetGunSoundComp();                                                    // [Final|Public] RVA: 0x5D24F10
};

// ============================================================
// Inheritance: SGWeaponAssembleEnvironment : SGAssembleBase : Actor : Object
// Package: /Script/SGFramework
// ============================================================
class SGWeaponAssembleEnvironment : public SGAssembleBase {
public:
    bool CaputureInited;                                                                       // 0x0718 (0x01) BitMask: 0xFF
    float Saturate;                                                                            // 0x071C (0x04)
    int32 MarginPixel;                                                                         // 0x0720 (0x04)
    TMap<FString, CachedRTInfo> CachedRTInfoMap;                                               // 0x0728 (0x50)
    bool SaveRT;                                                                               // 0x0790 (0x01) BitMask: 0xFF
    bool SaveRTUsingItemID;                                                                    // 0x0791 (0x01) BitMask: 0xFF
    bool AutoCalcZeroRotator;                                                                  // 0x0793 (0x01) BitMask: 0xFF
    float RTWidthForUnassembled;                                                               // 0x0794 (0x04)
    float RTWidth;                                                                             // 0x0798 (0x04)
    bool bGenerateMipmap;                                                                      // 0x079C (0x01) BitMask: 0xFF
    CurveFloat* ScaleCurve;                                                                    // 0x07A0 (0x08)
    DataTable* RotatorConf;                                                                    // 0x07A8 (0x08)
    SceneCaptureComponent2D* SceneCaptureComponent;                                            // 0x07B0 (0x08)
    bool UseCache;                                                                             // 0x07B8 (0x01) BitMask: 0xFF
    bool UseLocalImage;                                                                        // 0x07B9 (0x01) BitMask: 0xFF
    bool DebugEnableCapture;                                                                   // 0x07BA (0x01) BitMask: 0xFF
    bool bResetMesh;                                                                           // 0x07BB (0x01) BitMask: 0xFF
    TArray<int64> DebugTestItemID;                                                             // 0x07C0 (0x10)
    FString DebugTestUniqueID;                                                                 // 0x07D0 (0x10)
    int32 DebugTestFullWeaponID;                                                               // 0x07E0 (0x04)
    bool bForceReplaceWeaponAdapterIcon;                                                       // 0x07E4 (0x01) BitMask: 0xFF
    bool bForceReplaceUnassembledArmorIcon;                                                    // 0x07E5 (0x01) BitMask: 0xFF
    bool bForceReplaceAssembledWeapon;                                                         // 0x07E6 (0x01) BitMask: 0xFF
    bool bDebugWeaponCaptureSize;                                                              // 0x07E9 (0x01) BitMask: 0xFF
    DataTable* DebugWeaponCaptureSizeTable;                                                    // 0x07F0 (0x08)
    MaterialInterface* MaterialTemplate;                                                       // 0x07F8 (0x08)
    bool bEnableShadow;                                                                        // 0x0800 (0x01) BitMask: 0xFF
    int32 CacheValidateTime;                                                                   // 0x0804 (0x04)
    MaterialParameterCollection* MaterialParameterCollection;                                  // 0x0808 (0x08)
    Rotator ExBaseMeshRot;                                                                     // 0x0810 (0x0C)
    Vector ExCameraPosForCollapseHelmet;                                                       // 0x081C (0x0C)
    Vector ExCameraPosForCollapseWeapon;                                                       // 0x0828 (0x0C)
    int32 GridSize;                                                                            // 0x0834 (0x04)
    Rotator Rot_1x1;                                                                           // 0x0838 (0x0C)
    Rotator Rot_1x2;                                                                           // 0x0844 (0x0C)
    Rotator Rot_1x3;                                                                           // 0x0850 (0x0C)
    float NearClippingPlaneForUnassembledAdapter;                                              // 0x085C (0x04)
    Vector2D DefineRTSize;                                                                     // 0x0864 (0x08)
    SphereReflectionCaptureComponent* CaptureComponent;                                        // 0x0870 (0x08)
    bool bAutoCapture;                                                                         // 0x0878 (0x01) BitMask: 0xFF
    TArray<FString> ExistOfflineIcons;                                                         // 0x0880 (0x10)
    TMap<SGInventory*, uint64> LoadedInventoryIDMap;                                           // 0x0890 (0x50)
    bool bGenSkinInv;                                                                          // 0x08E0 (0x01) BitMask: 0xFF
    bool bRestrictMaxPixel;                                                                    // 0x08E1 (0x01) BitMask: 0xFF
    int32 MaxPixelPerGrid;                                                                     // 0x08E4 (0x04)
    int32 MaxPixel;                                                                            // 0x08E8 (0x04)
    int32 MaxPixel_1x1;                                                                        // 0x08EC (0x04)
    bool bSaveUnassembledAdapter;                                                              // 0x08F0 (0x01) BitMask: 0xFF
    TArray<ActorComponent*> ActorComps;                                                        // 0x08F8 (0x10)
    TMap<SGInventory*, ImageWaitCap> WeaponWaitCaptureMap;                                     // 0x0908 (0x50)
    SceneComponent* PivotComp;                                                                 // 0x0968 (0x08)
    int32 MaxCachedMaterailNumInLobby;                                                         // 0x09C4 (0x04)
    int32 MaxCachedMaterailNumInBattle;                                                        // 0x09C8 (0x04)
    int32 MaxCachedMaterailSizeInLobby;                                                        // 0x09CC (0x04)
    TArray<SGWeaponAssembleEnvironment*> AssembleEnvs;                                         // 0x09D0 (0x10)
    bool ShouldCheckExist;                                                                     // 0x0A30 (0x01) BitMask: 0xFF
    bool IsEditorTool;                                                                         // 0x0A31 (0x01) BitMask: 0xFF
    float MaxAllowStreamingTime;                                                               // 0x0A40 (0x04)
    bool CreateInvsFinished;                                                                   // 0x0A45 (0x01) BitMask: 0xFF
    bool CreateWeaponWaitCaptureMapFinished;                                                   // 0x0A46 (0x01) BitMask: 0xFF
    bool IgnoreOfflineIcon;                                                                    // 0x0A47 (0x01) BitMask: 0xFF
    SGWeaponAssembleEnvironmentManager* EnvManager;                                            // 0x0A4C (0x08)

    // --- Functions ---
    void SetUseCache(bool bUse);                                                               // [Final|Public] RVA: 0x5D2DF5C
    void SetupLightingBeforeCapture(SGInventory* InInventory);                                 // [Public] RVA: 0x1EA2E1C
    void SetTextureParameterValue(MaterialInstanceDynamic* AssembleRTMaterial, Texture* Texture);  // [Final|Protected] RVA: 0x5D2DE78
    void SetOverrideLightGroupType(enum InOverrideLightGroupType);                             // [Final|Protected] RVA: 0x5D2DDE4
    void SetCameraPos(SceneCaptureComponent2D* SceneCaptureComp, Vector Pos, Vector Offset);   // [Final|Protected] RVA: 0x5D2DA80
    void ResetRT(Box Box, SceneCaptureComponent2D* SceneCaptureComp, float ImgWidth, bool UseViewportSize, bool UseDefine);  // [Final|Protected] RVA: 0x5D2CE80
    void ReleaseRT(Image* Image);                                                              // [Final|Public] RVA: 0x5D2C804
    bool RefreshWeaponWithImage(SGInventory* InInventory, Object* Image, bool bSaveRT, Rotator TargetRot, float CameraPosX);  // [Final|Public] RVA: 0x5D2C608
    void InitalizeAssembleSystem(SGInventory* InInventory);                                    // [Final|Public] RVA: 0x5D2BEA0
    void ClearLoadedInv();                                                                     // [Final|Public] RVA: 0x5D2AACC
    void CaptureWeaponToRT();                                                                  // [Final|Protected] RVA: 0x5D2AA90
    bool CaptureAlways(bool bAlways);                                                          // [Final|Public] RVA: 0x5D2A7E4
    void CancelRenderImg(Image* TargetImg);                                                    // [Final|Public] RVA: 0x5D2A748
    void AllocateRT(FString UniqueID);                                                         // [Final|Public] RVA: 0x5D2A694
    void AdjustCameraNearClippingPlane();                                                      // [Final|Protected] RVA: 0x5D2A38C
    void AddLoadedInv(SGInventory* Inv, int32 ItemId);                                         // [Final|Public] RVA: 0x5D2A0F4
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
    void StartAutoCapture();                                                                   // [Final|Public] RVA: 0x5D31560
    void ReleaseRT(Image* Image);                                                              // [Final|Public] RVA: 0x14D7124
    bool RefreshWeaponWithImage(SGInventory* InInventory, Object* Image, bool bSaveRT, Rotator TargetRot, float CameraPosX);  // [Final|Public] RVA: 0x5D30CE8
    void OnWeaponLoadComplete(FString UniqueID, SGAssembleBase* AssembleEnv);                  // [Final|Public] RVA: 0x1E376A4
    bool IsManagedEnv(SGWeaponAssembleEnvironment* env);                                       // [Final|Public] RVA: 0x5D3095C
    void CancelRenderImg(Image* TargetImg);                                                    // [Final|Public] RVA: 0x5D2FED8
    void AllocateRT(FString UniqueID);                                                         // [Final|Public] RVA: 0x5D2FD04
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
    uint32 AimingRotationOffset;                                                               // 0x20E8 (0x04)
    bool bUseInterpConstant;                                                                   // 0x20F8 (0x01) BitMask: 0xFF

    // --- Functions ---
    void OnRep_AimingRotationOffset();                                                         // [Final|Protected] RVA: 0xEFDE8C
    void DisablePartCollision(FName BoneName);                                                 // [Final|Public] RVA: 0x66A5A38
};

// ============================================================
// Inheritance: CAAssembleEnvironment : SGWeaponAssembleEnvironment : SGAssembleBase : Actor : Object
// Package: /Script/UAGame
// ============================================================
class CAAssembleEnvironment : public SGWeaponAssembleEnvironment {
public:
    float ForceActiveTime;                                                                     // 0x0A58 (0x04)
    int32 ForcedLodModel;                                                                      // 0x0A5C (0x04)
    float RotateSpeed;                                                                         // 0x0A60 (0x04)
    float CameraPosXOffset;                                                                    // 0x0A64 (0x04)
    float CameraPosXRate;                                                                      // 0x0A68 (0x04)
    float CameraPosXItemGridRate;                                                              // 0x0A6C (0x04)
    float WeaponOffsetRate;                                                                    // 0x0A70 (0x04)
    float WeaponOffset;                                                                        // 0x0A74 (0x04)
    float CamMaxRate;                                                                          // 0x0A78 (0x04)
    float CamMinRate;                                                                          // 0x0A7C (0x04)
    DataTable* CameraPosXOverrideConf;                                                         // 0x0A80 (0x08)
    TMap<FString, CaptureCameraConf> ExtraCaptureCameraConfMap;                                // 0x0A88 (0x50)
    bool bAllowCacheShowInfo;                                                                  // 0x0AD8 (0x01) BitMask: 0xFF
    int32 ShowType;                                                                            // 0x0ADC (0x04)
    SceneComponent* RotateComp;                                                                // 0x0AE0 (0x08)
    MaterialInstanceDynamic* AssembleRTMaterial;                                               // 0x0AE8 (0x08)
    Object* CacheImage;                                                                        // 0x0B30 (0x08)
    SGInventory* CacheInventory;                                                               // 0x0B38 (0x08)

    // --- Functions ---
    bool SetItemWithImage(SGInventory* InInventory, Object* Image);                            // [Final|Public] RVA: 0x66A6F30
    void SetDefineSize(Vector2D DefineSize);                                                   // [Final|Public] RVA: 0x66A6D78
    void ResetCacheShowInfo();                                                                 // [Final|Public] RVA: 0x66A6A1C
    void OnScroll(float Rate);                                                                 // [Final|Public] RVA: 0x66A6980
    void OnInputTouchPC(uint8 Handle, uint8 Type, const Vector Location);                      // [Final|Public] RVA: 0x66A66D4
    void ClearCache();                                                                         // [Final|Public] RVA: 0x66A59E8
    bool CheckOnLoading();                                                                     // [Final|Public] RVA: 0x66A583C
    void CaptureExtra(TMap<FString, Object*> ImageMap);                                        // [Final|Public] RVA: 0x66A5614
};

// ============================================================
// Inheritance: CAMeshDrawStatsActor : Actor : Object
// Package: /Script/UAGame
// ============================================================
class CAMeshDrawStatsActor : public Actor {
public:

    // --- Functions ---
    void OnGameFlowStateChanged(FName NewState, FName OldState);                               // [Final|Public] RVA: 0x22C3728
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
    void SetTutorialHintWidgets(const TArray<FString> InWidgetPaths);                          // [Final|Public] RVA: 0x66C5B5C
    void SetTutorialHintItemIDs(const TArray<int32> InItemIDs);                                // [Final|Public] RVA: 0x66C5A04
    void SetTutorialHintBagWidgetIDs(bool bIsCorpse, const TArray<enum> InWidgetIDs);          // [Final|Public] RVA: 0x66C58E8
    void SaveTraceQuest();                                                                     // [Final|Public] RVA: 0x66C58D4
    void ResetTraceTask(int32 TaskId);                                                         // [Final|Public] RVA: 0x66C583C
    void RemoveTraceTask(int32 TaskId);                                                        // [Final|Public] RVA: 0x66C57A4
    void RemoveCompleteTraceTask();                                                            // [Final|Public] RVA: 0x66C5790
    void RefreshQuestBeforeState(int32 InQuestID, PlayerController* InPC);                     // [Final|Public] RVA: 0x66C56AC
    void PrintReplicateData();                                                                 // [Final|Public] RVA: 0x66C5698
    void OnQuestGraphStatusChange(MFQuestNodeGraph* NodeGraph, enum NewStatus);                // [Final|Protected] RVA: 0x66C510C
    void LoadTraceQuest();                                                                     // [Final|Public] RVA: 0x66C4514
    bool IsSeasonQuest(int32 InGraphID);                                                       // [Final|Public] RVA: 0x66C4480
    TArray<FString> GetTutorialHintWidgets();                                                  // [Final|Public] RVA: 0x66C4440
    TArray<int32> GetTutorialHintItemIDs();                                                    // [Final|Public] RVA: 0x66C4424
    TArray<enum> GetTutorialHintBagWidgetIDs(bool bIsCorpse);                                  // [Final|Public] RVA: 0x66C436C
    TArray<int32> GetTraceTasks();                                                             // [Final|Public] RVA: 0x66C4264
    int32 GetQuestIDFromQuest(MFQuestBase* InQuest);                                           // [Final|Public] RVA: 0x66C4188
    int32 GetQuestGraphIDFromQuestGraph(MFQuestNodeGraph* InGraph);                            // [Public] RVA: 0x66C40D8
    MFQuestNodeGraph* GetQuestGraphByID(int32 InGraphID, PlayerController* InPlayerController);  // [Final|Public] RVA: 0x66C3FE0
    QuestReplicateData GetQuestDataWithID(int32 InGraphID, PlayerController* InPC);            // [Final|Public] RVA: 0x66C3E48
    void GetPlayerSeasonQuestsPartByState(PlayerController* InPC, out TArray<QuestReplicateData> InProgress, out TArray<QuestReplicateData> Success, out TArray<QuestReplicateData> Fail);  // [Final|Public] RVA: 0x66C3C40
    TArray<TraceableActorInfo> GetPlayerQuestTraceInfos(PlayerController* InPC);               // [Final|Public] RVA: 0x66C38B8
    TraceableActorInfo GetPlayerQuestTraceInfoByTargetID(PlayerController* InPC, int32 TargetId);  // [Final|Public] RVA: 0x66C3780
    void GetPlayerQuestsPartByState(PlayerController* InPC, out TArray<QuestReplicateData> InProgress, out TArray<QuestReplicateData> Success, out TArray<QuestReplicateData> Fail);  // [Final|Public] RVA: 0x66C3A38
    TArray<QuestReplicateData> GetPlayerQuests(PlayerController* InPC);                        // [Final|Public] RVA: 0x66C3978
    int32 GetMaxTraceNum();                                                                    // [Final|Public] RVA: 0x66C3768
    MFQuestBase* GetGraphQuestFromQuestID(MFQuestNodeGraph* InGraph, int32 InQuestID);         // [Final|Public] RVA: 0x66C3630
    int32 GetGraphIDFromQuest(MFQuestBase* InQuest);                                           // [Final|Public] RVA: 0x66C3598
    TArray<QuestInventory> GetAllQuestInventoryData(PlayerController* PC);                     // [Final|Public] RVA: 0x66C34D8
    MFQuestNodeGraph* CreateNewQuestGraphWithID(int32 InGraphID, Controller* InController, bool bAct);  // [Public] RVA: 0x66C336C
    MFQuestBase* CreateNewQuestFromID(int32 InGraphID, int32 InQuestID, Controller* InController);  // [Final|Public] RVA: 0x66C322C
    MFQuestBase* CreateNewQuestFromCreateData(out TaskCreateData InTaskCreateData, out QuestCreateData InQuestCreateData);  // [Final|Public] RVA: 0x66C2FE8
    void ClearTutorialHint();                                                                  // [Final|Public] RVA: 0x66C2FD4
    void ClearTraceTask();                                                                     // [Final|Public] RVA: 0x66C2F70
    void AutoTraceOneQuest();                                                                  // [Final|Public] RVA: 0x66C2920
    void AddTraceTask(int32 TaskId);                                                           // [Final|Public] RVA: 0x66C2888
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
    void UpdateFactionmemberLocationInfo();                                                    // [Final|Public] RVA: 0x67049E4
    void SetFactionmamberCharacterByGID(uint64 gid, SGCharacter* SGCharacter);                 // [Final|Public] RVA: 0x67043DC
    void OnPlayerFinishGame(PlayerController* C, enum FinishType, Actor* EscapeVolume);        // [Final|Public] RVA: 0x6703DEC
    void OnCharacterKilled(Pawn* KilledPawn, const KillInfo KillInfo);                         // [Final|Public] RVA: 0x6703B98
    void OnAIEscaped(Character* AICharacter, Actor* EscapeVolume);                             // [Final|Public] RVA: 0x6703AB0
    TArray<FactionmemberBaseInfo> GetTeammemberPlayerBaseInfoArray();                          // [Final|Public] RVA: 0x6703740
    void AddNewFactionmemberBaseInfo(FString PlayerName, uint64 gid, uint64 TeamIndex, enum CharacterType, SGCharacter* Character);  // [Final|Public] RVA: 0x6702C04
};

// ============================================================
// Inheritance: UATeamInfo : SGTeamInfo : SGTeam : Actor : Object
// Package: /Script/UAGame
// ============================================================
class UATeamInfo : public SGTeamInfo {
public:
    TArray<TeammemberPlayerBaseInfo> TeammemberPlayerBaseInfoArray;                            // 0x0528 (0x10)
    float TimerInterval;                                                                       // 0x0548 (0x04)
    float ClearTimerInterval;                                                                  // 0x054C (0x04)
    TArray<TeamPlayerInfo> TeamMemberPlayerInfosArray;                                         // 0x0550 (0x10)
    TArray<TeamPlayerInfo> OldTeamMemberPlayerInfosArray;                                      // 0x0560 (0x10)
    enum OldSignType;                                                                          // 0x0570 (0x01)
    TArray<TeamPlayerBaseInfo> TeamMemberPlayerBaseInfosArray;                                 // 0x0578 (0x10)
    TArray<PlayerState*> TeamPlayerStateArray;                                                 // 0x0588 (0x10)
    TArray<Character*> TeamCharacterArray;                                                     // 0x0598 (0x10)
    TArray<PlayerState*> InbattlePlayerStateArray;                                             // 0x05A8 (0x10)

    // --- Functions ---
    void SetTeamMemberPlayerInfoArray(int32 PlayerIndex, TeamPlayerInfo PlayerInfo);           // [Final|Public] RVA: 0x677423C
    void ReleaseTeamMemberStorage(int64 gid);                                                  // [Final|Public] RVA: 0x6773AB0
    void RefreshTeamInfo();                                                                    // [Final|Public] RVA: 0x6773A9C
    void PlayerStateRepFinish(SGPlayerState* SGPS);                                            // [Final|Public] RVA: 0x6773A00
    void OnTeamStorageChanged();                                                               // [Final|Public] RVA: 0x67739EC
    void OnTeamMemberStorageChanged();                                                         // [Final|Public] RVA: 0x67739D8
    void OnRoundControlStateChanged(PlayerController* PlayerController, enum RoundState, int32 CurrRound);  // [Final|Public] RVA: 0x6773898
    void OnRep_TeamMemberPlayerInfosArray();                                                   // [Final|Public] RVA: 0x1D74C14
    void OnRep_TeammemberPlayerBaseInfoArray();                                                // [Final|Public] RVA: 0x1C718E0
    void OnInventoryBeginPlay(SGInventory* Inventory, enum InventoryType);                     // [Final|Public] RVA: 0x677338C
    void OnEscapePointsChange(PlayerState* PlayerState, const TArray<int32> EscapePointIDs);   // [Final|Public] RVA: 0x67731E0
    int32 GetTeamMemberValidPlayerSignNum();                                                   // [Final|Public] RVA: 0x6772F98
    TeammemberTitleInfo GetTeamMemberTitleInfo(int32 InTeamIndex);                             // [Final|Public] RVA: 0x6772EC0
    int32 GetTeamMembersIndexByPlayerInfo(Actor* C);                                           // [Final|Public] RVA: 0x6772FBC
    Vector2D GetTeamMemberSignPositionByIndexAndSignType(int32 Index, enum Type);              // [Final|Public] RVA: 0x6772DCC
    TeamPlayerInfo GetTeamMemberPlayerInfoByIndex(int32 Index);                                // [Final|Public] RVA: 0x6772BD4
    TeamPlayerBaseInfo GetTeamMemberPlayerBaseInfoByIndex(int32 Index);                        // [Final|Public] RVA: 0x6772AEC
    TArray<TeammemberPlayerBaseInfo> GetTeammemberPlayerBaseInfoArray();                       // [Final|Public] RVA: 0x6773064
    int32 GetTargetMemberIdxByTaskId(int32 TaskId, int32 selfTeamId);                          // [Final|Public] RVA: 0x67729F4
    int32 GetTargetMemberIdxByConfigID(int32 ConfigID, int32 selfTeamId);                      // [Final|Public] RVA: 0x67728FC
    int32 GetSquadIndex(int32 Index);                                                          // [Final|Public] RVA: 0x6772828
    void GetRefTeamMemberSignPositionByIndexAndSignType(int32 Index, enum Type, out Vector2D Pos);  // [Final|Public] RVA: 0x6772604
    bool GetRefTeamMemberPlayerInfoByIndex(int32 Index, out TeamPlayerInfo Info);              // [Final|Public] RVA: 0x67724EC
    int32 GetPlayerSortIndex(int32 IndexInTeam);                                               // [Final|Public] RVA: 0x6772330
    int32 GetChangeTeamPlayerInfo(TArray<TeamPlayerInfo> OldInfosArray, TArray<TeamPlayerInfo> NewInfosArray, out enum SignType, out bool IsNewSign);  // [Final|Public] RVA: 0x6771DB0
    void ClearRefreshTeamInfoTimerHandle();                                                    // [Final|Public] RVA: 0x6771BD4
};

