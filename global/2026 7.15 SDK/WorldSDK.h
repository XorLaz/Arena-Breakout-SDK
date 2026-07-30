#pragma once
// Auto-generated SDKW dump (GWorld)
// Game: °µÇøÍ»Î§
// Base: 0x140000000

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
    WorldSettings* K2_GetWorldSettings();                                                      // [Final|Public] RVA: 0x7C99088
    bool HasValidSceneEV100();                                                                 // [Final|Public] RVA: 0x7C99064
    void HandleTimelineScrubbed();                                                             // [Final|Public] RVA: 0x7C99050
    float GetLastSmoothedSceneEV100();                                                         // [Final|Public] RVA: 0x5E5E874
    float GetLastSceneEV100();                                                                 // [Final|Public] RVA: 0x7C99038
};

// ============================================================
// Inheritance: Object
// Package: /Script/CoreUObject
// ============================================================
class Object {
public:

    // --- Functions ---
    void ExecuteUbergraph(int32 EntryPoint);                                                   // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: Level : Object
// Package: /Script/Engine
// ============================================================
class Level : public Object {
public:
    World* OwningWorld;                                                                        // 0x00B8 (0x08)
    Model* Model;                                                                              // 0x00C0 (0x08)
    TArray<ModelComponent*> ModelComponents;                                                   // 0x00C8 (0x10)
    LevelActorContainer* ActorCluster;                                                         // 0x00D8 (0x08)
    int32 NumTextureStreamingUnbuiltComponents;                                                // 0x00E0 (0x04)
    int32 NumTextureStreamingDirtyResources;                                                   // 0x00E4 (0x04)
    LevelScriptActor* LevelScriptActor;                                                        // 0x00E8 (0x08)
    NavigationObjectBase* NavListStart;                                                        // 0x00F0 (0x08)
    NavigationObjectBase* NavListEnd;                                                          // 0x00F8 (0x08)
    TArray<NavigationDataChunk*> NavDataChunks;                                                // 0x0100 (0x10)
    float LightmapTotalSize;                                                                   // 0x0110 (0x04)
    float ShadowmapTotalSize;                                                                  // 0x0114 (0x04)
    TArray<Vector> StaticNavigableGeometry;                                                    // 0x0118 (0x10)
    TArray<Guid> StreamingTextureGuids;                                                        // 0x0128 (0x10)
    Guid LevelBuildDataId;                                                                     // 0x03A8 (0x10)
    MapBuildDataRegistry* MapBuildData;                                                        // 0x03B8 (0x08)
    IntVector LightBuildLevelOffset;                                                           // 0x03C0 (0x0C)
    bool bIsLightingScenario;                                                                  // 0x03CC (0x01) BitMask: 0x01
    bool bTextureStreamingRotationChanged;                                                     // 0x03CC (0x01) BitMask: 0x08
    bool bStaticComponentsRegisteredInStreamingManager;                                        // 0x03CC (0x01) BitMask: 0x10
    bool bIsVisible;                                                                           // 0x03CC (0x01) BitMask: 0x20
    WorldSettings* WorldSettings;                                                              // 0x0440 (0x08)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0450 (0x10)
    TArray<ReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;              // 0x0470 (0x10)
};

// ============================================================
// Inheritance: Model : Object
// Package: /Script/Engine
// ============================================================
class Model : public Object {
public:
};

// ============================================================
// Inheritance: ModelComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class ModelComponent : public PrimitiveComponent {
public:
    BodySetup* ModelBodySetup;                                                                 // 0x0508 (0x08)
};

// ============================================================
// Inheritance: PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class PrimitiveComponent : public SceneComponent {
public:
    float MinDrawDistance;                                                                     // 0x0278 (0x04)
    float LDMaxDrawDistance;                                                                   // 0x027C (0x04)
    float CachedMaxDrawDistance;                                                               // 0x0280 (0x04)
    uint8 DepthPriorityGroup;                                                                  // 0x0284 (0x01)
    uint8 ViewOwnerDepthPriorityGroup;                                                         // 0x0285 (0x01)
    uint8 IndirectLightingCacheQuality;                                                        // 0x0286 (0x01)
    enum LightmapType;                                                                         // 0x0287 (0x01)
    enum VolumetricLightmapSampleType;                                                         // 0x0288 (0x01)
    enum VolumetricOcclusionMode;                                                              // 0x0289 (0x01)
    bool bUseMaxLODAsImposter;                                                                 // 0x028A (0x01) BitMask: 0x01
    bool bBatchImpostersAsInstances;                                                           // 0x028A (0x01) BitMask: 0x02
    bool bNeverDistanceCull;                                                                   // 0x028A (0x01) BitMask: 0x04
    bool bSkipOcclusionQuery;                                                                  // 0x028A (0x01) BitMask: 0x08
    bool bAlwaysCreatePhysicsState;                                                            // 0x028B (0x01) BitMask: 0x01
    bool bGenerateOverlapEvents;                                                               // 0x028B (0x01) BitMask: 0x02
    VolumeCache* VolumeCache;                                                                  // 0x0290 (0x08)
    float CacheVolumeQuerySphereRadius;                                                        // 0x0298 (0x04)
    int32 DistanceFieldStreamingForceNumMips;                                                  // 0x029C (0x04)
    Vector VisualOffset;                                                                       // 0x02A0 (0x0C)
    bool bForceSweepIgnoreOverlaps;                                                            // 0x02AC (0x01) BitMask: 0x01
    bool bUseVolumeCache;                                                                      // 0x02AC (0x01) BitMask: 0x02
    bool bMultiBodyOverlap;                                                                    // 0x02AC (0x01) BitMask: 0x04
    bool bReturnOverlapShapes;                                                                 // 0x02AC (0x01) BitMask: 0x08
    bool bTraceComplexOnMove;                                                                  // 0x02AC (0x01) BitMask: 0x10
    bool bReturnMaterialOnMove;                                                                // 0x02AC (0x01) BitMask: 0x20
    bool bUseViewOwnerDepthPriorityGroup;                                                      // 0x02AC (0x01) BitMask: 0x40
    bool bAllowCullDistanceVolume;                                                             // 0x02AC (0x01) BitMask: 0x80
    bool bHasMotionBlurVelocityMeshes;                                                         // 0x02AD (0x01) BitMask: 0x01
    bool bVisibleInReflectionCaptures;                                                         // 0x02AD (0x01) BitMask: 0x02
    bool bVisibleInRealTimeSkyCaptures;                                                        // 0x02AD (0x01) BitMask: 0x04
    bool bVisibleInRayTracing;                                                                 // 0x02AD (0x01) BitMask: 0x08
    bool bVisibleInSceneCaptureOnly;                                                           // 0x02AD (0x01) BitMask: 0x10
    bool bHiddenInSceneCapture;                                                                // 0x02AD (0x01) BitMask: 0x20
    bool bRayTracingFarField;                                                                  // 0x02AD (0x01) BitMask: 0x40
    bool bForceVisibleInReceivesSubMeshDecal;                                                  // 0x02AD (0x01) BitMask: 0x80
    bool bRenderInMainPass;                                                                    // 0x02AE (0x01) BitMask: 0x01
    bool bRenderInDepthPass;                                                                   // 0x02AE (0x01) BitMask: 0x02
    bool bReceivesDecals;                                                                      // 0x02AE (0x01) BitMask: 0x04
    bool bForceDynamicWhenReceivesSubMeshDecals;                                               // 0x02AE (0x01) BitMask: 0x08
    bool bRenderInFront;                                                                       // 0x02AE (0x01) BitMask: 0x10
    bool bOwnerNoSee;                                                                          // 0x02AE (0x01) BitMask: 0x20
    bool bOnlyOwnerSee;                                                                        // 0x02AE (0x01) BitMask: 0x40
    bool bOnlyRenderInSpecialScopeView;                                                        // 0x02AE (0x01) BitMask: 0x80
    bool bOnlyRenderOutOfSpecialScopeView;                                                     // 0x02AF (0x01) BitMask: 0x01
    bool bTreatAsBackgroundForOcclusion;                                                       // 0x02AF (0x01) BitMask: 0x02
    bool bUseAsOccluder;                                                                       // 0x02AF (0x01) BitMask: 0x04
    bool bSelectable;                                                                          // 0x02AF (0x01) BitMask: 0x08
    bool bForceMipStreaming;                                                                   // 0x02AF (0x01) BitMask: 0x10
    bool bHasPerInstanceHitProxies;                                                            // 0x02AF (0x01) BitMask: 0x20
    bool CastShadow;                                                                           // 0x02AF (0x01) BitMask: 0x40
    bool bAffectDynamicIndirectLighting;                                                       // 0x02AF (0x01) BitMask: 0x80
    bool bAffectDistanceFieldLighting;                                                         // 0x02B0 (0x01) BitMask: 0x01
    bool bCastDynamicShadow;                                                                   // 0x02B0 (0x01) BitMask: 0x02
    bool bCastDynamicShadowForDirectionalLight;                                                // 0x02B0 (0x01) BitMask: 0x04
    bool bCastDynamicShadowForLocalLight;                                                      // 0x02B0 (0x01) BitMask: 0x08
    bool bCastStaticShadow;                                                                    // 0x02B0 (0x01) BitMask: 0x10
    bool bCastVolumetricTranslucentShadow;                                                     // 0x02B0 (0x01) BitMask: 0x20
    bool bCastContactShadow;                                                                   // 0x02B0 (0x01) BitMask: 0x40
    bool bSelfShadowOnly;                                                                      // 0x02B0 (0x01) BitMask: 0x80
    bool bCastFarShadow;                                                                       // 0x02B1 (0x01) BitMask: 0x01
    bool bCastInsetShadow;                                                                     // 0x02B1 (0x01) BitMask: 0x02
    bool bCastCinematicShadow;                                                                 // 0x02B1 (0x01) BitMask: 0x04
    bool bCastHiddenShadow;                                                                    // 0x02B1 (0x01) BitMask: 0x08
    bool bHiddenShadowOnShadowCapture;                                                         // 0x02B1 (0x01) BitMask: 0x10
    bool bCastShadowAsTwoSided;                                                                // 0x02B1 (0x01) BitMask: 0x20
    bool bCastDFShadow;                                                                        // 0x02B1 (0x01) BitMask: 0x40
    bool bLightAsIfStatic;                                                                     // 0x02B1 (0x01) BitMask: 0x80
    bool bLightAttachmentsAsGroup;                                                             // 0x02B2 (0x01) BitMask: 0x01
    bool bExcludeFromLightAttachmentGroup;                                                     // 0x02B2 (0x01) BitMask: 0x02
    bool bCSMCacheForceEnable;                                                                 // 0x02B2 (0x01) BitMask: 0x04
    bool bCSMCacheEnableRemoveFix;                                                             // 0x02B2 (0x01) BitMask: 0x08
    bool bReceiveMobileCSMShadows;                                                             // 0x02B2 (0x01) BitMask: 0x10
    bool bSingleSampleShadowFromStationaryLights;                                              // 0x02B2 (0x01) BitMask: 0x20
    bool bIgnoreRadialImpulse;                                                                 // 0x02B2 (0x01) BitMask: 0x40
    bool bIgnoreRadialForce;                                                                   // 0x02B2 (0x01) BitMask: 0x80
    bool bApplyImpulseOnDamage;                                                                // 0x02B3 (0x01) BitMask: 0x01
    bool bReplicatePhysicsToAutonomousProxy;                                                   // 0x02B3 (0x01) BitMask: 0x02
    bool bFillCollisionUnderneathForNavmesh;                                                   // 0x02B3 (0x01) BitMask: 0x04
    bool AlwaysLoadOnClient;                                                                   // 0x02B3 (0x01) BitMask: 0x08
    bool AlwaysLoadOnServer;                                                                   // 0x02B3 (0x01) BitMask: 0x10
    bool bUseEditorCompositing;                                                                // 0x02B3 (0x01) BitMask: 0x20
    bool bRenderCustomDepth;                                                                   // 0x02B3 (0x01) BitMask: 0x40
    bool bReMergeInstancing;                                                                   // 0x02B3 (0x01) BitMask: 0x80
    int8 CachedLastLODIndex;                                                                   // 0x02B4 (0x01)
    bool bIsHLOD;                                                                              // 0x02B5 (0x01) BitMask: 0x01
    bool bForcedIntoViewAsFallback;                                                            // 0x02B5 (0x01) BitMask: 0x02
    bool bForceUseSkyReflectionCaptureOnly;                                                    // 0x02B5 (0x01) BitMask: 0x04
    bool bForceDisableShadowReduceSpecularAO;                                                  // 0x02B5 (0x01) BitMask: 0x08
    bool bApplyMaterialTranslucencySortOffset;                                                 // 0x02B5 (0x01) BitMask: 0x10
    bool bEnableBiDirectionTraceForMovement;                                                   // 0x02B6 (0x01) BitMask: 0xFF
    enum CADistanceFieldOptimization;                                                          // 0x02B7 (0x01)
    enum ShadowCaptureLayer;                                                                   // 0x02B8 (0x01)
    enum PlayerPrimitiveType;                                                                  // 0x02B9 (0x01)
    enum BuildingPrimitiveType;                                                                // 0x02BA (0x01)
    uint8 bHasCustomNavigableGeometry;                                                         // 0x02BB (0x01)
    uint8 CanCharacterStepUpOn;                                                                // 0x02BD (0x01)
    LightingChannels LightingChannels;                                                         // 0x02BE (0x01)
    enum CustomDepthStencilWriteMask;                                                          // 0x02BF (0x01)
    bool bSweepFindInitialOverlaps;                                                            // 0x02C0 (0x01) BitMask: 0xFF
    int32 CustomDepthStencilValue;                                                             // 0x02C4 (0x04)
    CustomRenderMatrixComponent* CustomRenderMatrixComponent;                                  // 0x02C8 (0x08)
    CustomPrimitiveData CustomPrimitiveData;                                                   // 0x02D0 (0x10)
    CustomPrimitiveData CustomPrimitiveDataInternal;                                           // 0x02E0 (0x10)
    int32 TranslucencySortPriority;                                                            // 0x02F8 (0x04)
    int32 VisibilityId;                                                                        // 0x02FC (0x04)
    TArray<RuntimeVirtualTexture*> RuntimeVirtualTextures;                                     // 0x0300 (0x10)
    int8 VirtualTextureLodBias;                                                                // 0x0310 (0x01)
    int8 VirtualTextureCullMips;                                                               // 0x0311 (0x01)
    int8 VirtualTextureMinCoverage;                                                            // 0x0312 (0x01)
    enum VirtualTextureRenderPassType;                                                         // 0x0313 (0x01)
    int8 VirtualTextureFlushStreamingLod;                                                      // 0x0314 (0x01)
    float LpvBiasMultiplier;                                                                   // 0x031C (0x04)
    float BoundsScale;                                                                         // 0x0328 (0x04)
    TArray<Actor*> MoveIgnoreActors;                                                           // 0x0338 (0x10)
    TArray<PrimitiveComponent*> MoveIgnoreComponents;                                          // 0x0348 (0x10)
    BodyInstance BodyInstance;                                                                 // 0x0368 (0x150)
    FMulticastDelegate OnComponentHit;                                                         // 0x04B8 (0x01)
    FMulticastDelegate OnComponentBeginOverlap;                                                // 0x04B9 (0x01)
    FMulticastDelegate OnComponentEndOverlap;                                                  // 0x04BA (0x01)
    FMulticastDelegate OnComponentUpdateOverlap;                                               // 0x04BB (0x01)
    FMulticastDelegate OnComponentWake;                                                        // 0x04BC (0x01)
    FMulticastDelegate OnComponentSleep;                                                       // 0x04BD (0x01)
    FMulticastDelegate OnBeginCursorOver;                                                      // 0x04BF (0x01)
    FMulticastDelegate OnEndCursorOver;                                                        // 0x04C0 (0x01)
    FMulticastDelegate OnClicked;                                                              // 0x04C1 (0x01)
    FMulticastDelegate OnReleased;                                                             // 0x04C2 (0x01)
    FMulticastDelegate OnInputTouchBegin;                                                      // 0x04C3 (0x01)
    FMulticastDelegate OnInputTouchEnd;                                                        // 0x04C4 (0x01)
    FMulticastDelegate OnInputTouchEnter;                                                      // 0x04C5 (0x01)
    FMulticastDelegate OnInputTouchLeave;                                                      // 0x04C6 (0x01)
    PrimitiveComponent* LODParentPrimitive;                                                    // 0x04E0 (0x08)
    bool bSupportRayQueryMaterial;                                                             // 0x04E8 (0x01) BitMask: 0x01
    bool bReceiveRayQueryReflection;                                                           // 0x04E8 (0x01) BitMask: 0x02
    bool bCastRayQuerySelectiveSunShadow;                                                      // 0x04E8 (0x01) BitMask: 0x04
    bool bNeverCullByView;                                                                     // 0x04E8 (0x01) BitMask: 0x08
    float CullDistanceScale;                                                                   // 0x04EC (0x04)

    // --- Functions ---
    bool WasRecentlyRendered(float Tolerance);                                                 // [Final|Public] RVA: 0x7C73208
    void WakeRigidBody(FName BoneName);                                                        // [Public] RVA: 0x7C7316C
    void WakeAllRigidBodies();                                                                 // [Public] RVA: 0x1FD65C0
    void SetWalkableSlopeOverride(const out ref WalkableSlopeOverride NewOverride);            // [Public] RVA: 0x7C730BC
    void SetVolumetricOcclusionMode(enum InMode);                                              // [Final|Public] RVA: 0x7C73024
    void SetVolumetricLightmapSampleType(enum InType);                                         // [Final|Public] RVA: 0x7C72F8C
    void SetUseVolumeCache(bool bInCachMoveOverlaps, bool bAddInDetectDynamicList);            // [Final|Public] RVA: 0x7C72E90
    void SetUseCCD(bool InUseCCD, FName BoneName);                                             // [Public] RVA: 0x7C72D90
    void SetTranslucentSortPriority(int32 NewTranslucentSortPriority);                         // [Final|Public] RVA: 0x7C72CF8
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);  // [Final|Public] RVA: 0x7C72C3C
    void SetSimulatePhysics(bool bSimulate);                                                   // [Public] RVA: 0x68AACD4
    void SetRenderInMainPass(bool bValue);                                                     // [Final|Public] RVA: 0x7C72BA0
    void SetRenderInFront(bool bNewRenderInFront);                                             // [Final|Public] RVA: 0x7C72B04
    void SetRenderCustomDepth(bool bValue);                                                    // [Final|Public] RVA: 0x7C72A68
    void SetReceivesDecals(bool bNewReceivesDecals);                                           // [Final|Public] RVA: 0x7C729CC
    void SetPhysMaterialOverride(PhysicalMaterial* NewPhysMaterial);                           // [Public] RVA: 0x7C722AC
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);  // [Final|Public] RVA: 0x7C7288C
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);  // [Final|Public] RVA: 0x7C72744
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);  // [Final|Public] RVA: 0x7C72744
    void SetPhysicsLinearVelocity(Vector NewVel, bool bAddToCurrent, FName BoneName);          // [Public] RVA: 0x7C725F0
    void SetPhysicsAngularVelocityInRadians(Vector NewAngVel, bool bAddToCurrent, FName BoneName);  // [Public] RVA: 0x7C7249C
    void SetPhysicsAngularVelocityInDegrees(Vector NewAngVel, bool bAddToCurrent, FName BoneName);  // [Final|Public] RVA: 0x7C7234C
    void SetPhysicsAngularVelocity(Vector NewAngVel, bool bAddToCurrent, FName BoneName);      // [Final|Public] RVA: 0x7C7234C
    void SetOwnerNoSee(bool bNewOwnerNoSee);                                                   // [Final|Public] RVA: 0x7C721F0
    void SetOnlyRenderOutOfSpecialScopeView(bool bNewOnlyRenderOutOfSpecialScopeView);         // [Final|Public] RVA: 0x7C72154
    void SetOnlyRenderInSpecialScopeView(bool bNewOnlyRenderInSpecialScopeView);               // [Final|Public] RVA: 0x7C720B8
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);                                               // [Final|Public] RVA: 0x7C71FFC
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);                       // [Public] RVA: 0x7C71F5C
    void SetMaterialByName(FName MaterialSlotName, MaterialInterface* Material);               // [Public] RVA: 0x7C71E70
    void SetMaterial(int32 ElementIndex, MaterialInterface* Material);                         // [Public] RVA: 0x7C71D84
    void SetMassScale(FName BoneName, float InMassScale);                                      // [Public] RVA: 0x7C71C98
    void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);              // [Public] RVA: 0x7C71B60
    void SetLinearDamping(float InDamping);                                                    // [Public] RVA: 0x7C71AC0
    void SetLightmapType(enum InType);                                                         // [Final|Public] RVA: 0x7C71A28
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);                  // [Final|Public] RVA: 0x7C718D4
    void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);                          // [Final|Public] RVA: 0x7C71838
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);                              // [Final|Public] RVA: 0x7C7179C
    void SetForceUseSkyReflection(bool NewEnabled);                                            // [Final|Public] RVA: 0x7C71700
    void SetForceDisableShadowReduceSpecularAO(bool NewDisabled);                              // [Final|Public] RVA: 0x7C71664
    void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);          // [Final|Public] RVA: 0x7C715AC
    void SetEnableGravity(bool bGravityEnabled);                                               // [Public] RVA: 0x7C7150C
    void SetDefaultCustomPrimitiveDataVector4(int32 DataIndex, Vector4 Value);                 // [Final|Public] RVA: 0x7C713FC
    void SetDefaultCustomPrimitiveDataVector3(int32 DataIndex, Vector Value);                  // [Final|Public] RVA: 0x7C712F8
    void SetDefaultCustomPrimitiveDataVector2(int32 DataIndex, Vector2D Value);                // [Final|Public] RVA: 0x7C71214
    void SetDefaultCustomPrimitiveDataFloat(int32 DataIndex, float Value);                     // [Final|Public] RVA: 0x7C7112C
    void SetCustomRenderMatrixComponent(CustomRenderMatrixComponent* Target);                  // [Final|Public] RVA: 0x5CA82E8
    void SetCustomPrimitiveDataVector4(int32 DataIndex, Vector4 Value);                        // [Final|Public] RVA: 0x7C7101C
    void SetCustomPrimitiveDataVector3(int32 DataIndex, Vector Value);                         // [Final|Public] RVA: 0x7C70F18
    void SetCustomPrimitiveDataVector2(int32 DataIndex, Vector2D Value);                       // [Final|Public] RVA: 0x7C70E34
    void SetCustomPrimitiveDataFloat(int32 DataIndex, float Value);                            // [Final|Public] RVA: 0x7C70D4C
    void SetCustomDepthStencilWriteMask(enum WriteMaskBit);                                    // [Final|Public] RVA: 0x7C70CB4
    void SetCustomDepthStencilValue(int32 Value);                                              // [Final|Public] RVA: 0x7C70C1C
    void SetCullDistance(float NewCullDistance);                                               // [Final|Public] RVA: 0x7C70B80
    void SetConstraintMode(uint8 ConstraintMode);                                              // [Public] RVA: 0x7C70AE0
    void SetCollisionResponseToChannel(uint8 Channel, uint8 NewResponse);                      // [Public] RVA: 0x7C709F0
    void SetCollisionResponseToAllChannels(uint8 NewResponse);                                 // [Public] RVA: 0x7C70950
    void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);          // [Public] RVA: 0x27C5A54
    void SetCollisionObjectType(uint8 Channel);                                                // [Public] RVA: 0x4EECC7C
    void SetCollisionEnabled(uint8 NewType);                                                   // [Public] RVA: 0x29B0074
    void SetCenterOfMass(Vector CenterOfMassOffset, FName BoneName);                           // [Final|Public] RVA: 0x7C70830
    void SetCastShadow(bool NewCastShadow);                                                    // [Final|Public] RVA: 0x7C70794
    void SetCastInsetShadow(bool bInCastInsetShadow);                                          // [Final|Public] RVA: 0x7C706F8
    void SetCastDynamicShadowForLocalLight(bool NewCastDynamicShadowForLocalLight);            // [Final|Public] RVA: 0x7C7065C
    void SetCastDynamicShadowForDirectionalLight(bool NewCastDynamicShadowForDirectionalLight);  // [Final|Public] RVA: 0x7C705C0
    void SetBoundsScale(float NewBoundsScale);                                                 // [Final|Public] RVA: 0x7C70524
    void SetAngularDamping(float InDamping);                                                   // [Public] RVA: 0x7C70484
    void SetAllUseCCD(bool InUseCCD);                                                          // [Public] RVA: 0x7C703E4
    void SetAllPhysicsLinearVelocity(Vector NewVel, bool bAddToCurrent);                       // [Public] RVA: 0x7C702D4
    void SetAllPhysicsAngularVelocityInRadians(const out ref Vector NewAngVel, bool bAddToCurrent);  // [Public] RVA: 0x7C7019C
    void SetAllPhysicsAngularVelocityInDegrees(const out ref Vector NewAngVel, bool bAddToCurrent);  // [Final|Public] RVA: 0x7C7002C
    void SetAllMassScale(float InMassScale);                                                   // [Public] RVA: 0x7C6FF8C
    Vector ScaleByMomentOfInertia(Vector InputVector, FName BoneName);                         // [Public] RVA: 0x7C6FE68
    void PutRigidBodyToSleep(FName BoneName);                                                  // [Final|Public] RVA: 0x7C6FDD0
    bool K2_SphereTraceComponent(Vector TraceStart, Vector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, out Vector HitLocation, out Vector HitNormal, out FName BoneName, out HitResult OutHit);  // [Final|Public] RVA: 0x7C6F958
    bool K2_SphereOverlapComponent(Vector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, out Vector HitLocation, out Vector HitNormal, out FName BoneName, out HitResult OutHit);  // [Final|Public] RVA: 0x7C6F59C
    bool K2_LineTraceComponent(Vector TraceStart, Vector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, out Vector HitLocation, out Vector HitNormal, out FName BoneName, out HitResult OutHit);  // [Final|Public] RVA: 0x7C6F178
    bool K2_IsQueryCollisionEnabled();                                                         // [Final|Public] RVA: 0x7C6F144
    bool K2_IsPhysicsCollisionEnabled();                                                       // [Final|Public] RVA: 0x7C6F114
    bool K2_IsCollisionEnabled();                                                              // [Final|Public] RVA: 0x7C6F0E8
    bool K2_BoxOverlapComponent(Vector InBoxCentre, const Box InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, out Vector HitLocation, out Vector HitNormal, out FName BoneName, out HitResult OutHit);  // [Final|Public] RVA: 0x7C6ED40
    bool IsVisibleForReceivesSubmeshDecals();                                                  // [Final|Public] RVA: 0x7C6ED1C
    bool IsOverlappingComponent(const PrimitiveComponent* OtherComp);                          // [Final|Public] RVA: 0x7C6EC74
    bool IsOverlappingActor(const Actor* Other);                                               // [Final|Public] RVA: 0x7C6EAE0
    bool IsGravityEnabled();                                                                   // [Public] RVA: 0x7C6EAB8
    bool IsDynamicForReceivesSubmeshDecals();                                                  // [Final|Public] RVA: 0x7C6EA98
    bool IsAnyRigidBodyAwake();                                                                // [Public] RVA: 0x7C6EA70
    void IgnoreComponentWhenMoving(PrimitiveComponent* Component, bool bShouldIgnore);         // [Final|Public] RVA: 0x7C6E91C
    void IgnoreActorWhenMoving(Actor* Actor, bool bShouldIgnore);                              // [Final|Public] RVA: 0x7C6E830
    WalkableSlopeOverride GetWalkableSlopeOverride();                                          // [Final|Public] RVA: 0x7C6E800
    bool GetUseVolumeCache();                                                                  // [Final|Public] RVA: 0x7C6E7E0
    Vector GetPhysicsLinearVelocityAtPoint(Vector Point, FName BoneName);                      // [Final|Public] RVA: 0x7C6E6A8
    Vector GetPhysicsLinearVelocity(FName BoneName);                                           // [Final|Public] RVA: 0x7C6E5F0
    Vector GetPhysicsAngularVelocityInRadians(FName BoneName);                                 // [Final|Public] RVA: 0x7C6E538
    Vector GetPhysicsAngularVelocityInDegrees(FName BoneName);                                 // [Final|Public] RVA: 0x7C6E480
    Vector GetPhysicsAngularVelocity(FName BoneName);                                          // [Final|Public] RVA: 0x7C6E3C4
    void GetOverlappingComponents(out TArray<PrimitiveComponent*> OutOverlappingComponents);   // [Final|Public] RVA: 0x7C6E288
    void GetOverlappingActors(out TArray<Actor*> OverlappingActors, TSubclassOf<Actor> ClassFilter);  // [Final|Public] RVA: 0x7C6E178
    int32 GetNumMaterials();                                                                   // [Public] RVA: 0x7C6E150
    MaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, out int32 SectionIndex);  // [Public] RVA: 0x7C6E04C
    MaterialInterface* GetMaterial(int32 ElementIndex);                                        // [Public] RVA: 0x249D634
    float GetMassScale(FName BoneName);                                                        // [Public] RVA: 0x7C6DF9C
    float GetMass();                                                                           // [Public] RVA: 0x7C6DF70
    float GetLinearDamping();                                                                  // [Public] RVA: 0x7C6DF44
    Vector GetInertiaTensor(FName BoneName);                                                   // [Public] RVA: 0x7C6DE84
    bool GetGenerateOverlapEvents();                                                           // [Final|Public] RVA: 0x7C6DE68
    CustomRenderMatrixComponent* GetCustomRenderMatrixComponent();                             // [Final|Public] RVA: 0x468DF74
    uint8 GetCollisionResponseToChannel(uint8 Channel);                                        // [Public] RVA: 0x7C6DDB8
    FName GetCollisionProfileName();                                                           // [Final|Public] RVA: 0x7C6DD80
    uint8 GetCollisionObjectType();                                                            // [Public] RVA: 0x7C6DD58
    uint8 GetCollisionEnabled();                                                               // [Public] RVA: 0x5D51D04
    float GetClosestPointOnCollision(const out ref Vector Point, out Vector OutPointOnBody, FName BoneName);  // [Final|Public] RVA: 0x7C6DB90
    Vector GetCenterOfMass(FName BoneName);                                                    // [Final|Public] RVA: 0x7C6DAB4
    bool GetBodyBounds(out Box OutBox);                                                        // [Public] RVA: 0x7C6DA04
    float GetAngularDamping();                                                                 // [Public] RVA: 0x7C6D9D8
    MaterialInstanceDynamic* CreateDynamicMaterialInstance(int32 ElementIndex, MaterialInterface* SourceMaterial, FName OptionalName, uint8 DynamicMode);  // [Public] RVA: 0x2685058
    MaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, MaterialInterface* Parent);  // [Public] RVA: 0x7C6D8DC
    MaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32 ElementIndex);          // [Public] RVA: 0x7C6D830
    TArray<PrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();                             // [Final|Public] RVA: 0x7C6D70C
    TArray<Actor*> CopyArrayOfMoveIgnoreActors();                                              // [Final|Public] RVA: 0x7C6D644
    void ClearMoveIgnoreComponents();                                                          // [Final|Public] RVA: 0x7C6D608
    void ClearMoveIgnoreActors();                                                              // [Final|Public] RVA: 0x7C6D5AC
    bool CanCharacterStepUp(Pawn* Pawn);                                                       // [Public] RVA: 0x7C6D4FC
    void AddTorqueInRadians(Vector Torque, FName BoneName, bool bAccelChange);                 // [Public] RVA: 0x7C6D234
    void AddTorqueInDegrees(Vector Torque, FName BoneName, bool bAccelChange);                 // [Final|Public] RVA: 0x7C6D388
    void AddTorque(Vector Torque, FName BoneName, bool bAccelChange);                          // [Final|Public] RVA: 0x7C6D234
    void AddRadialImpulse(Vector Origin, float Radius, float Strength, uint8 Falloff, bool bVelChange);  // [Public] RVA: 0x7C6D044
    void AddRadialForce(Vector Origin, float Radius, float Strength, uint8 Falloff, bool bAccelChange);  // [Public] RVA: 0x7C6CE54
    void AddImpulseAtLocation(Vector Impulse, Vector Location, FName BoneName);                // [Public] RVA: 0x7C6CCF4
    void AddImpulse(Vector Impulse, FName BoneName, bool bVelChange);                          // [Public] RVA: 0x7C6CBA0
    void AddForceAtLocationLocal(Vector Force, Vector Location, FName BoneName);               // [Public] RVA: 0x7C6CA40
    void AddForceAtLocation(Vector Force, Vector Location, FName BoneName);                    // [Public] RVA: 0x7C6C8E0
    void AddForce(Vector Force, FName BoneName, bool bAccelChange);                            // [Public] RVA: 0x7C6C78C
    void AddAngularImpulseInRadians(Vector Impulse, FName BoneName, bool bVelChange);          // [Public] RVA: 0x7C6C638
    void AddAngularImpulseInDegrees(Vector Impulse, FName BoneName, bool bVelChange);          // [Final|Public] RVA: 0x7C6C4E8
    void AddAngularImpulse(Vector Impulse, FName BoneName, bool bVelChange);                   // [Public] RVA: 0x7C6C394
};

// ============================================================
// Inheritance: SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class SceneComponent : public ActorComponent {
public:
    PhysicsVolume* PhysicsVolume;                                                              // 0x0100 (0x08)
    SceneComponent* AttachParent;                                                              // 0x0108 (0x08)
    TArray<SceneComponent*> AttachChildren;                                                    // 0x0110 (0x10)
    TArray<SceneComponent*> ClientAttachedChildren;                                            // 0x0120 (0x10)
    FName AttachSocketName;                                                                    // 0x0130 (0x08)
    Vector RelativeLocation_ACE;                                                               // 0x0170 (0x0C)
    Rotator RelativeRotation;                                                                  // 0x0180 (0x0C)
    Vector RelativeScale3D;                                                                    // 0x018C (0x0C)
    Vector ComponentVelocity;                                                                  // 0x0198 (0x0C)
    bool bComponentToWorldUpdated;                                                             // 0x01A4 (0x01) BitMask: 0x01
    bool bAbsoluteLocation;                                                                    // 0x01A4 (0x01) BitMask: 0x04
    bool bAbsoluteRotation;                                                                    // 0x01A4 (0x01) BitMask: 0x08
    bool bAbsoluteScale;                                                                       // 0x01A4 (0x01) BitMask: 0x10
    bool bVisible;                                                                             // 0x01A4 (0x01) BitMask: 0x20
    bool bShouldBeAttached;                                                                    // 0x01A4 (0x01) BitMask: 0x40
    bool bShouldSnapLocationWhenAttached;                                                      // 0x01A4 (0x01) BitMask: 0x80
    bool bShouldSnapRotationWhenAttached;                                                      // 0x01A5 (0x01) BitMask: 0x01
    bool bShouldUpdatePhysicsVolume;                                                           // 0x01A5 (0x01) BitMask: 0x02
    bool bHiddenInGame;                                                                        // 0x01A5 (0x01) BitMask: 0x04
    bool bBoundsChangeTriggersStreamingDataRebuild;                                            // 0x01A5 (0x01) BitMask: 0x08
    bool bUseAttachParentBound;                                                                // 0x01A5 (0x01) BitMask: 0x10
    uint8 Mobility;                                                                            // 0x01A7 (0x01)
    uint8 DetailMode;                                                                          // 0x01A8 (0x01)
    FMulticastDelegate PhysicsVolumeChangedDelegate;                                           // 0x01A9 (0x01)
    bool bEnableCompDeferUpdateOverlapWhenEndScopeMove;                                        // 0x01AB (0x01) BitMask: 0x04
    Transform ComponentToWorld_ACE;                                                            // 0x0220 (0x30)

    // --- Functions ---
    void ToggleVisibility(bool bPropagateToChildren);                                          // [Final|Public] RVA: 0x7C798C8
    bool SnapTo(SceneComponent* InParent, FName InSocketName);                                 // [Final|Public] RVA: 0x7C797C8
    void SetWorldScale3D(Vector NewScale);                                                     // [Final|Public] RVA: 0x7C79410
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);                        // [Final|Public] RVA: 0x1BA7574
    void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);                      // [Final|Public] RVA: 0x7C792DC
    void SetRelativeScale3D(Vector NewScale3D);                                                // [Final|Public] RVA: 0x2031078
    void SetMobility(uint8 NewMobility);                                                       // [Public] RVA: 0x7C7923C
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);                           // [Final|Public] RVA: 0x2856320
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);  // [Final|Public] RVA: 0x7C79054
    void ResetRelativeTransform();                                                             // [Final|Public] RVA: 0x7C79040
    void OnRep_Visibility(bool OldValue);                                                      // [Final|Private] RVA: 0x7C78CB4
    void OnRep_Transform();                                                                    // [Final|Private] RVA: 0x7C78CA0
    void OnRep_AttachSocketName();                                                             // [Final|Private] RVA: 0x7C78C88
    void OnRep_AttachParent();                                                                 // [Final|Private] RVA: 0x7C78C88
    void OnRep_AttachChildren();                                                               // [Final|Private] RVA: 0x7C78C74
    void K2_SetWorldTransform(const out ref Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C78A44
    void K2_SetWorldRotation(Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x19044F8
    void K2_SetWorldLocationAndRotation(Vector NewLocation, Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C787F8
    void K2_SetWorldLocation(Vector NewLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x19B488C
    void K2_SetRelativeTransform(const out ref Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C785C8
    void K2_SetRelativeRotation(Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C783E0
    void K2_SetRelativeLocationAndRotation(Vector NewLocation, Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x2524C30
    void K2_SetRelativeLocation(Vector NewLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x1E0C84C
    Transform K2_GetComponentToWorld();                                                        // [Final|Public] RVA: 0x7C78208
    Vector K2_GetComponentScale();                                                             // [Final|Public] RVA: 0x7C78038
    Rotator K2_GetComponentRotation();                                                         // [Final|Public] RVA: 0x1A447F4
    Vector K2_GetComponentLocation();                                                          // [Final|Public] RVA: 0x1A6C6A8
    void K2_DetachFromComponent(enum LocationRule, enum RotationRule, enum ScaleRule, bool bCallModify);  // [Final|Public] RVA: 0x7C77EA4
    bool K2_AttachToComponent(SceneComponent* Parent, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x21AFD60
    bool K2_AttachTo(SceneComponent* InParent, FName InSocketName, uint8 AttachType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7C77D0C
    void K2_AddWorldTransformKeepScale(const out ref Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C77ADC
    void K2_AddWorldTransform(const out ref Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C778AC
    void K2_AddWorldRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C776C4
    void K2_AddWorldOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C774DC
    void K2_AddRelativeRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C77300
    void K2_AddRelativeLocation(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C77124
    void K2_AddLocalTransform(const out ref Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C76EF4
    void K2_AddLocalRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x1854BA8
    void K2_AddLocalOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7C76D0C
    bool IsVisible();                                                                          // [Public] RVA: 0x5C5BCD0
    bool IsSimulatingPhysics(FName BoneName);                                                  // [Public] RVA: 0x7C76C5C
    bool IsAnySimulatingPhysics();                                                             // [Public] RVA: 0x29BF0B4
    Vector GetUpVector();                                                                      // [Final|Public] RVA: 0x7C7697C
    Transform GetSocketTransform(FName InSocketName, uint8 TransformSpace);                    // [Public] RVA: 0x7C76858
    Rotator GetSocketRotation(FName InSocketName);                                             // [Public] RVA: 0x7C76798
    Quat GetSocketQuaternion(FName InSocketName);                                              // [Public] RVA: 0x7C766E0
    Vector GetSocketLocation(FName InSocketName);                                              // [Public] RVA: 0x7C76620
    bool GetShouldUpdatePhysicsVolume();                                                       // [Final|Public] RVA: 0x7C76604
    Vector GetRightVector();                                                                   // [Final|Public] RVA: 0x7C765D0
    Transform GetRelativeTransform();                                                          // [Final|Public] RVA: 0x7C76578
    Vector GetRelativeLocation();                                                              // [Final|Public] RVA: 0x7C76544
    PhysicsVolume* GetPhysicsVolume();                                                         // [Final|Public] RVA: 0x7C76520
    void GetParentComponents(out TArray<SceneComponent*> Parents);                             // [Final|Public] RVA: 0x7C763E4
    int32 GetNumChildrenComponents();                                                          // [Final|Public] RVA: 0x537789C
    Vector GetForwardVector();                                                                 // [Final|Public] RVA: 0x1BE7AB8
    Vector GetComponentVelocity();                                                             // [Public] RVA: 0x7C763AC
    void GetChildrenComponents(bool bIncludeAllDescendants, out TArray<SceneComponent*> Children);  // [Final|Public] RVA: 0x7C76210
    SceneComponent* GetChildComponent(int32 ChildIndex);                                       // [Final|Public] RVA: 0x7C76168
    FName GetAttachSocketName();                                                               // [Final|Public] RVA: 0x5D8FEAC
    SceneComponent* GetAttachParent();                                                         // [Final|Public] RVA: 0x5C70554
    TArray<FName> GetAllSocketNames();                                                         // [Final|Public] RVA: 0x7C76044
    bool DoesSocketExist(FName InSocketName);                                                  // [Public] RVA: 0x7C75F94
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);                      // [Public] RVA: 0x7C75E94
};

// ============================================================
// Inheritance: ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class ActorComponent : public Object {
public:
    ActorComponentTickFunction PrimaryComponentTick;                                           // 0x0038 (0x40)
    TArray<FName> ComponentTags;                                                               // 0x0078 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0088 (0x10)
    int32 UCSSerializationIndex;                                                               // 0x0098 (0x04)
    bool bNetAddressable;                                                                      // 0x009C (0x01) BitMask: 0x08
    bool bReplicates;                                                                          // 0x009C (0x01) BitMask: 0x10
    bool bAutoActivate;                                                                        // 0x009D (0x01) BitMask: 0x80
    bool bIsActive;                                                                            // 0x009E (0x01) BitMask: 0x01
    bool bEditableWhenInherited;                                                               // 0x009E (0x01) BitMask: 0x02
    bool bCanEverAffectNavigation;                                                             // 0x009E (0x01) BitMask: 0x08
    bool bIsEditorOnly;                                                                        // 0x009E (0x01) BitMask: 0x20
    enum CreationMethod;                                                                       // 0x00A0 (0x01)
    FMulticastDelegate OnComponentActivated;                                                   // 0x00A1 (0x01)
    FMulticastDelegate OnComponentDeactivated;                                                 // 0x00A2 (0x01)
    float MinTickInterval;                                                                     // 0x00A4 (0x04)
    uint8 bManualReplicates;                                                                   // 0x00A8 (0x01)
    TArray<SimpleMemberReference> UCSModifiedProperties;                                       // 0x00C0 (0x10)
    float TickRateHandlerUseRate;                                                              // 0x00F4 (0x04)

    // --- Functions ---
    void ToggleActive();                                                                       // [Public] RVA: 0x156EE74
    void SetTickGroup(uint8 NewTickGroup);                                                     // [Final|Public] RVA: 0x7BAA58C
    void SetTickableWhenPaused(bool bTickableWhenPaused);                                      // [Final|Public] RVA: 0x7BAA620
    void SetIsReplicated(bool ShouldReplicate);                                                // [Final|Public] RVA: 0x7BAA4F0
    void SetComponentTickIntervalAndCooldown(float TickInterval);                              // [Public] RVA: 0x7BAA450
    void SetComponentTickInterval(float TickInterval);                                         // [Public] RVA: 0x20FFB1C
    void SetComponentTickEnabled(bool bEnabled);                                               // [Public] RVA: 0x7BAA3B0
    void SetAutoActivate(bool bNewAutoActivate);                                               // [Public] RVA: 0x7BA9168
    void SetActive(bool bNewActive, bool bReset);                                              // [Public] RVA: 0x7BAA2B0
    void RemoveTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);               // [Public] RVA: 0x7BAA210
    void RemoveTickPrerequisiteActor(Actor* PrerequisiteActor);                                // [Public] RVA: 0x7BAA170
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x182D6BC
    void ReceiveEndPlay(uint8 EndPlayReason);                                                  // [Public] RVA: 0x182D6BC
    void ReceiveBeginPlay();                                                                   // [Public] RVA: 0x182D6BC
    void OnRep_IsActive();                                                                     // [Public] RVA: 0x1D76C64
    void K2_DestroyComponent(Object* Object);                                                  // [Final|Public] RVA: 0x7BAA038
    bool IsComponentTickEnabled();                                                             // [Public] RVA: 0x7BAA010
    bool IsBeingDestroyed();                                                                   // [Final|Public] RVA: 0x7BA9FF4
    bool IsActive();                                                                           // [Final|Public] RVA: 0x7BA9FD8
    Actor* GetOwner();                                                                         // [Final|Public] RVA: 0x1EB9E64
    float GetComponentTickInterval();                                                          // [Final|Public] RVA: 0x29ADC9C
    void Deactivate();                                                                         // [Public] RVA: 0x1A9DF80
    bool ComponentHasTag(FName Tag);                                                           // [Final|Public] RVA: 0x7BA9D08
    void AddTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);                  // [Public] RVA: 0x7BA9B6C
    void AddTickPrerequisiteActor(Actor* PrerequisiteActor);                                   // [Public] RVA: 0x7BA9ACC
    void ActiveManualReplicate();                                                              // [Final|Public] RVA: 0x7BA20CC
    void Activate(bool bReset);                                                                // [Public] RVA: 0x75C5DB8
};

// ============================================================
// Inheritance: BodySetup : BodySetupCore : Object
// Package: /Script/Engine
// ============================================================
class BodySetup : public BodySetupCore {
public:
    KAggregateGeom AggGeom;                                                                    // 0x0048 (0x58)
    bool bAlwaysFullAnimWeight;                                                                // 0x00A0 (0x01) BitMask: 0x01
    bool bConsiderForBounds;                                                                   // 0x00A0 (0x01) BitMask: 0x02
    bool bMeshCollideAll;                                                                      // 0x00A0 (0x01) BitMask: 0x04
    bool bDoubleSidedGeometry;                                                                 // 0x00A0 (0x01) BitMask: 0x08
    bool bGenerateNonMirroredCollision;                                                        // 0x00A0 (0x01) BitMask: 0x10
    bool bSharedCookedData;                                                                    // 0x00A0 (0x01) BitMask: 0x20
    bool bGenerateMirroredCollision;                                                           // 0x00A0 (0x01) BitMask: 0x40
    bool bSupportUVsAndFaceRemap;                                                              // 0x00A0 (0x01) BitMask: 0x80
    PhysicalMaterial* PhysMaterial;                                                            // 0x00A8 (0x08)
    WalkableSlopeOverride WalkableSlopeOverride;                                               // 0x00B0 (0x10)
    BodyInstance DefaultInstance;                                                              // 0x0128 (0x150)
    Vector BuildScale3D;                                                                       // 0x0280 (0x0C)
    Box AggGeomBound;                                                                          // 0x028C (0x1C)
};

// ============================================================
// Inheritance: BodySetupCore : Object
// Package: /Script/PhysicsCore
// ============================================================
class BodySetupCore : public Object {
public:
    FName BoneName;                                                                            // 0x0028 (0x08)
    uint8 PhysicsType;                                                                         // 0x0030 (0x01)
    uint8 CollisionTraceFlag;                                                                  // 0x0031 (0x01)
    uint8 CollisionReponse;                                                                    // 0x0032 (0x01)
};

// ============================================================
// Inheritance: KAggregateGeom
// Package: /Script/Engine
// ============================================================
struct KAggregateGeom {
public:
    TArray<KSphereElem> SphereElems;                                                           // 0x0000 (0x10)
    TArray<KBoxElem> BoxElems;                                                                 // 0x0010 (0x10)
    TArray<KSphylElem> SphylElems;                                                             // 0x0020 (0x10)
    TArray<KConvexElem> ConvexElems;                                                           // 0x0030 (0x10)
    TArray<KTaperedCapsuleElem> TaperedCapsuleElems;                                           // 0x0040 (0x10)
};

// ============================================================
// Inheritance: KSphereElem : KShapeElem
// Package: /Script/Engine
// ============================================================
struct KSphereElem : public KShapeElem {
public:
    Vector Center;                                                                             // 0x0030 (0x0C)
    float Radius;                                                                              // 0x003C (0x04)
};

// ============================================================
// Inheritance: KShapeElem
// Package: /Script/Engine
// ============================================================
struct KShapeElem {
public:
    float RestOffset;                                                                          // 0x0008 (0x04)
    FName Name;                                                                                // 0x000C (0x08)
    bool bContributeToMass;                                                                    // 0x0018 (0x01) BitMask: 0x01
    uint8 CollisionEnabled;                                                                    // 0x0019 (0x01)
};

// ============================================================
// Inheritance: Vector
// Package: /Script/CoreUObject
// ============================================================
struct Vector {
public:
    float X;                                                                                   // 0x0000 (0x04)
    float Y;                                                                                   // 0x0004 (0x04)
    float Z;                                                                                   // 0x0008 (0x04)
};

// ============================================================
// Inheritance: KBoxElem : KShapeElem
// Package: /Script/Engine
// ============================================================
struct KBoxElem : public KShapeElem {
public:
    Vector Center;                                                                             // 0x0030 (0x0C)
    Rotator Rotation;                                                                          // 0x003C (0x0C)
    float X;                                                                                   // 0x0048 (0x04)
    float Y;                                                                                   // 0x004C (0x04)
    float Z;                                                                                   // 0x0050 (0x04)
};

// ============================================================
// Inheritance: Rotator
// Package: /Script/CoreUObject
// ============================================================
struct Rotator {
public:
    float Pitch;                                                                               // 0x0000 (0x04)
    float Yaw;                                                                                 // 0x0004 (0x04)
    float Roll;                                                                                // 0x0008 (0x04)
};

// ============================================================
// Inheritance: KSphylElem : KShapeElem
// Package: /Script/Engine
// ============================================================
struct KSphylElem : public KShapeElem {
public:
    Vector Center;                                                                             // 0x0030 (0x0C)
    Rotator Rotation;                                                                          // 0x003C (0x0C)
    float Radius;                                                                              // 0x0048 (0x04)
    float Length;                                                                              // 0x004C (0x04)
};

// ============================================================
// Inheritance: KConvexElem : KShapeElem
// Package: /Script/Engine
// ============================================================
struct KConvexElem : public KShapeElem {
public:
    TArray<Vector> VertexData;                                                                 // 0x0030 (0x10)
    TArray<int32> IndexData;                                                                   // 0x0040 (0x10)
    Box ElemBox;                                                                               // 0x0050 (0x1C)
    Transform Transform;                                                                       // 0x0070 (0x30)
};

// ============================================================
// Inheritance: Box
// Package: /Script/CoreUObject
// ============================================================
struct Box {
public:
    Vector Min;                                                                                // 0x0000 (0x0C)
    Vector Max;                                                                                // 0x000C (0x0C)
    uint8 IsValid;                                                                             // 0x0018 (0x01)
};

// ============================================================
// Inheritance: Transform
// Package: /Script/CoreUObject
// ============================================================
struct Transform {
public:
    Quat Rotation;                                                                             // 0x0000 (0x10)
    Vector Translation;                                                                        // 0x0010 (0x0C)
    Vector Scale3D;                                                                            // 0x0020 (0x0C)
};

// ============================================================
// Inheritance: Quat
// Package: /Script/CoreUObject
// ============================================================
struct Quat {
public:
    float X;                                                                                   // 0x0000 (0x04)
    float Y;                                                                                   // 0x0004 (0x04)
    float Z;                                                                                   // 0x0008 (0x04)
    float W;                                                                                   // 0x000C (0x04)
};

// ============================================================
// Inheritance: KTaperedCapsuleElem : KShapeElem
// Package: /Script/Engine
// ============================================================
struct KTaperedCapsuleElem : public KShapeElem {
public:
    Vector Center;                                                                             // 0x0030 (0x0C)
    Rotator Rotation;                                                                          // 0x003C (0x0C)
    float Radius0;                                                                             // 0x0048 (0x04)
    float Radius1;                                                                             // 0x004C (0x04)
    float Length;                                                                              // 0x0050 (0x04)
};

// ============================================================
// Inheritance: PhysicalMaterial : Object
// Package: /Script/PhysicsCore
// ============================================================
class PhysicalMaterial : public Object {
public:
    float Friction;                                                                            // 0x0028 (0x04)
    float StaticFriction;                                                                      // 0x002C (0x04)
    uint8 FrictionCombineMode;                                                                 // 0x0030 (0x01)
    bool bOverrideFrictionCombineMode;                                                         // 0x0031 (0x01) BitMask: 0xFF
    float Restitution;                                                                         // 0x0034 (0x04)
    uint8 RestitutionCombineMode;                                                              // 0x0038 (0x01)
    bool bOverrideRestitutionCombineMode;                                                      // 0x0039 (0x01) BitMask: 0xFF
    float Density;                                                                             // 0x003C (0x04)
    float SleepLinearVelocityThreshold;                                                        // 0x0040 (0x04)
    float SleepAngularVelocityThreshold;                                                       // 0x0044 (0x04)
    int32 SleepCounterThreshold;                                                               // 0x0048 (0x04)
    float RaiseMassToPower;                                                                    // 0x004C (0x04)
    float DestructibleDamageThresholdScale;                                                    // 0x0050 (0x04)
    PhysicalMaterialPropertyBase* PhysicalMaterialProperty;                                    // 0x0058 (0x08)
    uint8 SurfaceType;                                                                         // 0x0060 (0x01)
};

// ============================================================
// Inheritance: PhysicalMaterialPropertyBase : Object
// Package: /Script/PhysicsCore
// ============================================================
class PhysicalMaterialPropertyBase : public Object {
public:
};

// ============================================================
// Inheritance: WalkableSlopeOverride
// Package: /Script/Engine
// ============================================================
struct WalkableSlopeOverride {
public:
    uint8 WalkableSlopeBehavior;                                                               // 0x0000 (0x01)
    float WalkableSlopeAngle;                                                                  // 0x0004 (0x04)
};

// ============================================================
// Inheritance: BodyInstance : BodyInstanceCore
// Package: /Script/Engine
// ============================================================
struct BodyInstance : public BodyInstanceCore {
public:
    uint8 ObjectType;                                                                          // 0x001E (0x01)
    uint8 CollisionEnabled;                                                                    // 0x0050 (0x01)
    enum SleepFamily;                                                                          // 0x0052 (0x01)
    uint8 DOFMode;                                                                             // 0x0053 (0x01)
    bool bUseCCD;                                                                              // 0x0054 (0x01) BitMask: 0x01
    bool bIgnoreAnalyticCollisions;                                                            // 0x0054 (0x01) BitMask: 0x02
    bool bNotifyRigidBodyCollision;                                                            // 0x0054 (0x01) BitMask: 0x04
    bool bLockTranslation;                                                                     // 0x0054 (0x01) BitMask: 0x10
    bool bLockRotation;                                                                        // 0x0054 (0x01) BitMask: 0x20
    bool bLockXTranslation;                                                                    // 0x0054 (0x01) BitMask: 0x40
    bool bLockYTranslation;                                                                    // 0x0054 (0x01) BitMask: 0x80
    bool bLockZTranslation;                                                                    // 0x0055 (0x01) BitMask: 0x01
    bool bLockXRotation;                                                                       // 0x0055 (0x01) BitMask: 0x02
    bool bLockYRotation;                                                                       // 0x0055 (0x01) BitMask: 0x04
    bool bLockZRotation;                                                                       // 0x0055 (0x01) BitMask: 0x08
    bool bOverrideMaxAngularVelocity;                                                          // 0x0055 (0x01) BitMask: 0x10
    bool bOverrideMaxDepenetrationVelocity;                                                    // 0x0055 (0x01) BitMask: 0x80
    bool bOverrideWalkableSlopeOnInstance;                                                     // 0x0056 (0x01) BitMask: 0x01
    bool bInterpolateWhenSubStepping;                                                          // 0x0056 (0x01) BitMask: 0x02
    FName CollisionProfileName;                                                                // 0x0064 (0x08)
    uint8 PositionSolverIterationCount;                                                        // 0x006C (0x01)
    uint8 VelocitySolverIterationCount;                                                        // 0x006D (0x01)
    CollisionResponse CollisionResponses;                                                      // 0x0070 (0x30)
    float MaxDepenetrationVelocity;                                                            // 0x00A0 (0x04)
    float MassInKgOverride;                                                                    // 0x00A4 (0x04)
    float LinearDamping;                                                                       // 0x00B0 (0x04)
    float AngularDamping;                                                                      // 0x00B4 (0x04)
    Vector CustomDOFPlaneNormal;                                                               // 0x00B8 (0x0C)
    Vector COMNudge;                                                                           // 0x00C4 (0x0C)
    float MassScale;                                                                           // 0x00D0 (0x04)
    Vector InertiaTensorScale;                                                                 // 0x00D4 (0x0C)
    WalkableSlopeOverride WalkableSlopeOverride;                                               // 0x00F0 (0x10)
    PhysicalMaterial* PhysMaterialOverride;                                                    // 0x0100 (0x08)
    float MaxAngularVelocity;                                                                  // 0x0108 (0x04)
    float CustomSleepThresholdMultiplier;                                                      // 0x010C (0x04)
    float StabilizationThresholdMultiplier;                                                    // 0x0110 (0x04)
    float PhysicsBlendWeight;                                                                  // 0x0114 (0x04)
};

// ============================================================
// Inheritance: BodyInstanceCore
// Package: /Script/PhysicsCore
// ============================================================
struct BodyInstanceCore {
public:
    bool bSimulatePhysics;                                                                     // 0x0010 (0x01) BitMask: 0x01
    bool bOverrideMass;                                                                        // 0x0010 (0x01) BitMask: 0x02
    bool bEnableGravity;                                                                       // 0x0010 (0x01) BitMask: 0x04
    bool bAutoWeld;                                                                            // 0x0010 (0x01) BitMask: 0x08
    bool bStartAwake;                                                                          // 0x0010 (0x01) BitMask: 0x10
    bool bGenerateWakeEvents;                                                                  // 0x0010 (0x01) BitMask: 0x20
    bool bUpdateMassWhenScaleChanges;                                                          // 0x0010 (0x01) BitMask: 0x40
};

// ============================================================
// Inheritance: CollisionResponse
// Package: /Script/Engine
// ============================================================
struct CollisionResponse {
public:
    CollisionResponseContainer ResponseToChannels;                                             // 0x0000 (0x20)
    TArray<ResponseChannel> ResponseArray;                                                     // 0x0020 (0x10)
};

// ============================================================
// Inheritance: CollisionResponseContainer
// Package: /Script/Engine
// ============================================================
struct CollisionResponseContainer {
public:
    uint8 WorldStatic;                                                                         // 0x0000 (0x01)
    uint8 WorldDynamic;                                                                        // 0x0001 (0x01)
    uint8 Pawn;                                                                                // 0x0002 (0x01)
    uint8 Visibility;                                                                          // 0x0003 (0x01)
    uint8 Camera;                                                                              // 0x0004 (0x01)
    uint8 PhysicsBody;                                                                         // 0x0005 (0x01)
    uint8 Vehicle;                                                                             // 0x0006 (0x01)
    uint8 Destructible;                                                                        // 0x0007 (0x01)
    uint8 EngineTraceChannel1;                                                                 // 0x0008 (0x01)
    uint8 EngineTraceChannel2;                                                                 // 0x0009 (0x01)
    uint8 EngineTraceChannel3;                                                                 // 0x000A (0x01)
    uint8 EngineTraceChannel4;                                                                 // 0x000B (0x01)
    uint8 EngineTraceChannel5;                                                                 // 0x000C (0x01)
    uint8 EngineTraceChannel6;                                                                 // 0x000D (0x01)
    uint8 GameTraceChannel1;                                                                   // 0x000E (0x01)
    uint8 GameTraceChannel2;                                                                   // 0x000F (0x01)
    uint8 GameTraceChannel3;                                                                   // 0x0010 (0x01)
    uint8 GameTraceChannel4;                                                                   // 0x0011 (0x01)
    uint8 GameTraceChannel5;                                                                   // 0x0012 (0x01)
    uint8 GameTraceChannel6;                                                                   // 0x0013 (0x01)
    uint8 GameTraceChannel7;                                                                   // 0x0014 (0x01)
    uint8 GameTraceChannel8;                                                                   // 0x0015 (0x01)
    uint8 GameTraceChannel9;                                                                   // 0x0016 (0x01)
    uint8 GameTraceChannel10;                                                                  // 0x0017 (0x01)
    uint8 GameTraceChannel11;                                                                  // 0x0018 (0x01)
    uint8 GameTraceChannel12;                                                                  // 0x0019 (0x01)
    uint8 GameTraceChannel13;                                                                  // 0x001A (0x01)
    uint8 GameTraceChannel14;                                                                  // 0x001B (0x01)
    uint8 GameTraceChannel15;                                                                  // 0x001C (0x01)
    uint8 GameTraceChannel16;                                                                  // 0x001D (0x01)
    uint8 GameTraceChannel17;                                                                  // 0x001E (0x01)
    uint8 GameTraceChannel18;                                                                  // 0x001F (0x01)
};

// ============================================================
// Inheritance: ResponseChannel
// Package: /Script/Engine
// ============================================================
struct ResponseChannel {
public:
    FName Channel;                                                                             // 0x0000 (0x08)
    uint8 Response;                                                                            // 0x0008 (0x01)
};

// ============================================================
// Inheritance: VolumeCache : Object
// Package: /Script/Engine
// ============================================================
class VolumeCache : public Object {
public:
    PrimitivePhysicsShapes CachedMoveOverlapsShapes;                                           // 0x0038 (0xB0)
};

// ============================================================
// Inheritance: PrimitivePhysicsShapes
// Package: /Script/Engine
// ============================================================
struct PrimitivePhysicsShapes {
public:
    TMap<PrimitiveComponent*, BodyInstancePhysicsShapes> BlockShapes;                          // 0x0000 (0x50)
    TMap<PrimitiveComponent*, BodyInstancePhysicsShapes> TouchShapes;                          // 0x0050 (0x50)
};

// ============================================================
// Inheritance: BodyInstancePhysicsShapes
// Package: /Script/Engine
// ============================================================
struct BodyInstancePhysicsShapes {
public:
};

// ============================================================
// Inheritance: LightingChannels
// Package: /Script/Engine
// ============================================================
struct LightingChannels {
public:
    bool bChannel0;                                                                            // 0x0000 (0x01) BitMask: 0x01
    bool bChannel1;                                                                            // 0x0000 (0x01) BitMask: 0x02
    bool bChannel2;                                                                            // 0x0000 (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: CustomRenderMatrixComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class CustomRenderMatrixComponent : public ActorComponent {
public:
};

// ============================================================
// Inheritance: CustomPrimitiveData
// Package: /Script/Engine
// ============================================================
struct CustomPrimitiveData {
public:
    TArray<float> Data;                                                                        // 0x0000 (0x10)
};

// ============================================================
// Inheritance: RuntimeVirtualTexture : Object
// Package: /Script/Engine
// ============================================================
class RuntimeVirtualTexture : public Object {
public:
    int32 TileCount;                                                                           // 0x0028 (0x04)
    int32 TileSize;                                                                            // 0x002C (0x04)
    int32 TileBorderSize;                                                                      // 0x0030 (0x04)
    int32 TexturePoolSize;                                                                     // 0x0034 (0x04)
    float WorldHeightLayerScale;                                                               // 0x0038 (0x04)
    enum MaterialType;                                                                         // 0x003C (0x01)
    bool bCompressTextures;                                                                    // 0x003D (0x01) BitMask: 0xFF
    bool bClearTextures;                                                                       // 0x003E (0x01) BitMask: 0xFF
    bool bSinglePhysicalSpace;                                                                 // 0x003F (0x01) BitMask: 0xFF
    bool bPrivateSpace;                                                                        // 0x0040 (0x01) BitMask: 0xFF
    bool bAdaptive;                                                                            // 0x0041 (0x01) BitMask: 0xFF
    bool bContinuousUpdate;                                                                    // 0x0042 (0x01) BitMask: 0xFF
    bool bEnableNoFeedbackRequest;                                                             // 0x0043 (0x01) BitMask: 0xFF
    int32 RemoveLowMips;                                                                       // 0x0044 (0x04)
    uint8 LODGroup;                                                                            // 0x0048 (0x01)
    int32 Size;                                                                                // 0x004C (0x04)
    RuntimeVirtualTextureStreamingProxy* StreamingTexture;                                     // 0x0050 (0x08)

    // --- Functions ---
    int32 GetTileSize();                                                                       // [Final|Public] RVA: 0x7C74578
    int32 GetTileCount();                                                                      // [Final|Public] RVA: 0x7C74550
    int32 GetTileBorderSize();                                                                 // [Final|Public] RVA: 0x7C74520
    int32 GetSize();                                                                           // [Final|Public] RVA: 0x7C744FC
    int32 GetPhysicalSpaceTiles();                                                             // [Final|Public] RVA: 0x7C744D8
    int32 GetPageTableSize();                                                                  // [Final|Public] RVA: 0x7C7448C
};

// ============================================================
// Inheritance: RuntimeVirtualTextureStreamingProxy : Texture2D : Texture : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class RuntimeVirtualTextureStreamingProxy : public Texture2D {
public:
};

// ============================================================
// Inheritance: Texture2D : Texture : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class Texture2D : public Texture {
public:
    int32 LevelIndex;                                                                          // 0x00F8 (0x04)
    int32 FirstResourceMemMip;                                                                 // 0x00FC (0x04)
    bool bTemporarilyDisableStreaming;                                                         // 0x0100 (0x01) BitMask: 0x01
    uint8 AddressX;                                                                            // 0x0101 (0x01)
    uint8 AddressY;                                                                            // 0x0102 (0x01)
    IntPoint ImportedSize;                                                                     // 0x0104 (0x08)

    // --- Functions ---
    int32 Blueprint_GetSizeY();                                                                // [Final|Public] RVA: 0x7C951F0
    int32 Blueprint_GetSizeX();                                                                // [Final|Public] RVA: 0x7C951CC
};

// ============================================================
// Inheritance: Texture : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class Texture : public StreamableRenderAsset {
public:
    Guid LightingGuid;                                                                         // 0x0080 (0x10)
    int32 LODBias;                                                                             // 0x0090 (0x04)
    int32 MinMipSize;                                                                          // 0x0094 (0x04)
    uint8 CompressionSettings;                                                                 // 0x0098 (0x01)
    uint8 NormalXYChannels;                                                                    // 0x0099 (0x01)
    uint8 Filter;                                                                              // 0x009A (0x01)
    uint8 GroupLODBiasLevel;                                                                   // 0x009B (0x01)
    enum MipLoadOptions;                                                                       // 0x009C (0x01)
    uint8 LODGroup;                                                                            // 0x009D (0x01)
    PerPlatformFloat Downscale;                                                                // 0x00A0 (0x04)
    enum DownscaleOptions;                                                                     // 0x00A4 (0x01)
    bool SRGB;                                                                                 // 0x00A5 (0x01) BitMask: 0x01
    bool bNoTiling;                                                                            // 0x00A5 (0x01) BitMask: 0x02
    bool VirtualTextureStreaming;                                                              // 0x00A5 (0x01) BitMask: 0x04
    bool CompressionYCoCg;                                                                     // 0x00A5 (0x01) BitMask: 0x08
    bool bNotOfflineProcessed;                                                                 // 0x00A5 (0x01) BitMask: 0x10
    bool bAsyncResourceReleaseHasBeenStarted;                                                  // 0x00A5 (0x01) BitMask: 0x20
    TArray<AssetUserData*> AssetUserData;                                                      // 0x00A8 (0x10)
};

// ============================================================
// Inheritance: StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class StreamableRenderAsset : public Object {
public:
    double ForceMipLevelsToBeResidentTimestamp;                                                // 0x0058 (0x08)
    int32 NumCinematicMipLevels;                                                               // 0x0060 (0x04)
    int32 StreamingIndex;                                                                      // 0x0064 (0x04)
    int32 CachedCombinedLODBias;                                                               // 0x0068 (0x04)
    uint8 CustomVisibleWantedMips;                                                             // 0x006C (0x01)
    bool NeverStream;                                                                          // 0x006D (0x01) BitMask: 0x01
    bool bGlobalForceMipLevelsToBeResident;                                                    // 0x006D (0x01) BitMask: 0x02
    bool bHasStreamingUpdatePending;                                                           // 0x006D (0x01) BitMask: 0x04
    bool bForceMiplevelsToBeResident;                                                          // 0x006D (0x01) BitMask: 0x08
    bool bIgnoreStreamingMipBias;                                                              // 0x006D (0x01) BitMask: 0x10
    bool bIs1P;                                                                                // 0x006D (0x01) BitMask: 0x20
    bool bForceToIgnoreStreamingMipBias;                                                       // 0x006D (0x01) BitMask: 0x40
    bool bUseCinematicMipLevels;                                                               // 0x006D (0x01) BitMask: 0x80
};

// ============================================================
// Inheritance: IntPoint
// Package: /Script/CoreUObject
// ============================================================
struct IntPoint {
public:
    int32 X;                                                                                   // 0x0000 (0x04)
    int32 Y;                                                                                   // 0x0004 (0x04)
};

// ============================================================
// Inheritance: Guid
// Package: /Script/CoreUObject
// ============================================================
struct Guid {
public:
    int32 A;                                                                                   // 0x0000 (0x04)
    int32 B;                                                                                   // 0x0004 (0x04)
    int32 C;                                                                                   // 0x0008 (0x04)
    int32 D;                                                                                   // 0x000C (0x04)
};

// ============================================================
// Inheritance: PerPlatformFloat
// Package: /Script/Engine
// ============================================================
struct PerPlatformFloat {
public:
    float Default;                                                                             // 0x0000 (0x04)
};

// ============================================================
// Inheritance: AssetUserData : Object
// Package: /Script/Engine
// ============================================================
class AssetUserData : public Object {
public:
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
    bool WasRecentlyRendered(float Tolerance);                                                 // [Final|Public] RVA: 0x7BA94F8
    void UserConstructionScript();                                                             // [Public] RVA: 0x182D6BC
    void TearOff();                                                                            // [Public] RVA: 0x53745A8
    void SnapRootComponentTo(Actor* InParentActor, FName InSocketName);                        // [Final|Public] RVA: 0x7BA93D4
    void SetTickGroup(uint8 NewTickGroup);                                                     // [Final|Public] RVA: 0x7BA92A4
    void SetTickableWhenPaused(bool bTickableWhenPaused);                                      // [Final|Public] RVA: 0x7BA9338
    void SetReplicates(bool bInReplicates);                                                    // [Final|Public] RVA: 0x7BA9208
    void SetReplicateMovement(bool bInReplicateMovement);                                      // [Public] RVA: 0x7BA9168
    void SetOwner(Actor* NewOwner);                                                            // [Public] RVA: 0x5D53C84
    void SetNetDormancy(uint8 NewDormancy);                                                    // [Final|Public] RVA: 0x7BA90CC
    void SetLifeSpan(float InLifespan);                                                        // [Public] RVA: 0x7BA902C
    void SetAutoDestroyWhenFinished(bool bVal);                                                // [Final|Public] RVA: 0x7BA8F90
    void SetActorTickInterval(float TickInterval);                                             // [Final|Public] RVA: 0x7BA8EF8
    void SetActorTickEnabled(bool bEnabled);                                                   // [Final|Public] RVA: 0x22A4D40
    void SetActorScale3D(Vector NewScale3D);                                                   // [Final|Public] RVA: 0x7BA8E50
    void SetActorRelativeScale3D(Vector NewRelativeScale);                                     // [Final|Public] RVA: 0x7BA8DA8
    void SetActorHiddenInGame(bool bNewHidden);                                                // [Public] RVA: 0x2213B54
    void SetActorEnableCollision(bool bNewActorEnableCollision);                               // [Final|Public] RVA: 0x2815024
    void RemoveTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);               // [Public] RVA: 0x7BA8D08
    void RemoveTickPrerequisiteActor(Actor* PrerequisiteActor);                                // [Public] RVA: 0x7BA8C68
    void ReceiveTick(float DeltaSeconds);                                                      // [Public] RVA: 0x182D6BC
    void ReceiveRadialDamage(float DamageReceived, const DamageType* DamageType, Vector Origin, const out ref HitResult HitInfo, Controller* InstigatedBy, Actor* DamageCauser);  // [Public] RVA: 0x182D6BC
    void ReceivePointDamage(float Damage, const DamageType* DamageType, Vector HitLocation, Vector HitNormal, PrimitiveComponent* HitComponent, FName BoneName, Vector ShotFromDirection, Controller* InstigatedBy, Actor* DamageCauser, const out ref HitResult HitInfo);  // [Public] RVA: 0x182D6BC
    void ReceiveHit(PrimitiveComponent* MyComp, Actor* Other, PrimitiveComponent* OtherComp, bool bSelfMoved, Vector HitLocation, Vector HitNormal, Vector NormalImpulse, const out ref HitResult Hit);  // [Public] RVA: 0x182D6BC
    void ReceiveEndPlay(uint8 EndPlayReason);                                                  // [Protected] RVA: 0x182D6BC
    void ReceiveDestroyed();                                                                   // [Public] RVA: 0x182D6BC
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x182D6BC
    void ReceiveAnyDamage(float Damage, const DamageType* DamageType, Controller* InstigatedBy, Actor* DamageCauser);  // [Public] RVA: 0x182D6BC
    void ReceiveActorOnReleased(Key ButtonReleased);                                           // [Public] RVA: 0x182D6BC
    void ReceiveActorOnInputTouchLeave(const uint8 FingerIndex);                               // [Public] RVA: 0x182D6BC
    void ReceiveActorOnInputTouchEnter(const uint8 FingerIndex);                               // [Public] RVA: 0x182D6BC
    void ReceiveActorOnInputTouchEnd(const uint8 FingerIndex);                                 // [Public] RVA: 0x182D6BC
    void ReceiveActorOnInputTouchBegin(const uint8 FingerIndex);                               // [Public] RVA: 0x182D6BC
    void ReceiveActorOnClicked(Key ButtonPressed);                                             // [Public] RVA: 0x182D6BC
    void ReceiveActorEndOverlap(Actor* OtherActor);                                            // [Public] RVA: 0x182D6BC
    void ReceiveActorEndCursorOver();                                                          // [Public] RVA: 0x182D6BC
    void ReceiveActorBeginOverlap(Actor* OtherActor);                                          // [Public] RVA: 0x182D6BC
    void ReceiveActorBeginCursorOver();                                                        // [Public] RVA: 0x182D6BC
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);  // [Public] RVA: 0x7BA8B24
    void OnRep_ReplicateMovement();                                                            // [Public] RVA: 0x1D76C64
    void OnRep_ReplicatedMovement();                                                           // [Public] RVA: 0x13AA194
    void OnRep_Owner();                                                                        // [Protected] RVA: 0x156EE74
    void OnRep_Instigator();                                                                   // [Public] RVA: 0x20A82CC
    void OnRep_AttachmentReplication();                                                        // [Public] RVA: 0x1AA6C04
    void MakeNoise(float Loudness, Pawn* NoiseInstigator, Vector NoiseLocation, float MaxRange, FName Tag);  // [Final|Public] RVA: 0x7BA8928
    MaterialInstanceDynamic* MakeMIDForMaterial(MaterialInterface* Parent);                    // [Final|Public] RVA: 0x528F85C
    bool K2_TeleportTo(Vector DestLocation, Rotator DestRotation);                             // [Final|Public] RVA: 0x7BA8804
    bool K2_SetActorTransform(const out ref Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA85C8
    bool K2_SetActorRotation(Rotator NewRotation, bool bTeleportPhysics);                      // [Final|Public] RVA: 0x7BA84C0
    void K2_SetActorRelativeTransform(const out ref Transform NewRelativeTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA8290
    void K2_SetActorRelativeRotation(Rotator NewRelativeRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA80A8
    void K2_SetActorRelativeLocation(Vector NewRelativeLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA7EC0
    bool K2_SetActorLocationAndRotation(Vector NewLocation, Rotator NewRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA7C6C
    bool K2_SetActorLocation(Vector NewLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA7A7C
    void K2_OnReset();                                                                         // [Public] RVA: 0x182D6BC
    void K2_OnEndViewTarget(PlayerController* PC);                                             // [Public] RVA: 0x182D6BC
    void K2_OnBecomeViewTarget(PlayerController* PC);                                          // [Public] RVA: 0x182D6BC
    SceneComponent* K2_GetRootComponent();                                                     // [Final|Public] RVA: 0x7BA7A58
    void K2_GetRefActorLocation(out Vector OutPosition);                                       // [Final|Public] RVA: 0x7BA77B8
    TArray<ActorComponent*> K2_GetComponentsByClass(TSubclassOf<ActorComponent> ComponentClass);  // [Final|Public] RVA: 0x7BA7620
    Rotator K2_GetActorRotation();                                                             // [Final|Public] RVA: 0x7BA73B8
    float K2_GetActorLocationZ();                                                              // [Final|Public] RVA: 0x7BA71C0
    float K2_GetActorLocationY();                                                              // [Final|Public] RVA: 0x7BA6FC0
    float K2_GetActorLocationX();                                                              // [Final|Public] RVA: 0x7BA6DC0
    Vector K2_GetActorLocation();                                                              // [Final|Public] RVA: 0x1B49620
    void K2_DetachFromActor(enum LocationRule, enum RotationRule, enum ScaleRule);             // [Final|Public] RVA: 0x7BA6C6C
    void K2_DestroyComponent(ActorComponent* Component);                                       // [Final|Public] RVA: 0x7BA6BCC
    void K2_DestroyActor();                                                                    // [Public] RVA: 0x1BAFFA0
    void K2_AttachToComponent(SceneComponent* Parent, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7BA697C
    void K2_AttachToActor(Actor* ParentActor, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7BA673C
    void K2_AttachRootComponentToActor(Actor* InParentActor, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7BA6574
    void K2_AttachRootComponentTo(SceneComponent* InParent, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);  // [Final|Public] RVA: 0x7BA63CC
    void K2_AddActorWorldTransformKeepScale(const out ref Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA619C
    void K2_AddActorWorldTransform(const out ref Transform DeltaTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA5F6C
    void K2_AddActorWorldRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA5D84
    void K2_AddActorWorldOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA5B9C
    void K2_AddActorLocalTransform(const out ref Transform NewTransform, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA596C
    void K2_AddActorLocalRotation(Rotator DeltaRotation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA5784
    void K2_AddActorLocalOffset(Vector DeltaLocation, bool bSweep, out HitResult SweepHitResult, bool bTeleport);  // [Final|Public] RVA: 0x7BA559C
    bool IsOverlappingActor(const Actor* Other);                                               // [Final|Public] RVA: 0x7BA54F4
    bool IsChildActor();                                                                       // [Final|Public] RVA: 0x7BA5480
    bool IsActorTickEnabled();                                                                 // [Final|Public] RVA: 0x7BA5468
    bool IsActorBeingDestroyed();                                                              // [Final|Public] RVA: 0x7BA544C
    bool HasAuthority();                                                                       // [Final|Public] RVA: 0x1F76974
    float GetVerticalDistanceTo(const Actor* OtherActor);                                      // [Final|Public] RVA: 0x7BA4FD4
    Vector GetVelocity();                                                                      // [Public] RVA: 0x7BA4F9C
    Transform GetTransform();                                                                  // [Final|Public] RVA: 0x7BA4D40
    bool GetTickableWhenPaused();                                                              // [Final|Public] RVA: 0x7BA4D28
    float GetSquaredDistanceTo(const Actor* OtherActor);                                       // [Final|Public] RVA: 0x7BA4C7C
    uint8 GetRemoteRole();                                                                     // [Final|Public] RVA: 0x4DDDBCC
    ChildActorComponent* GetParentComponent();                                                 // [Final|Public] RVA: 0x7BA4BE8
    Actor* GetParentActor();                                                                   // [Final|Public] RVA: 0x7BA4BC4
    Actor* GetOwner();                                                                         // [Final|Public] RVA: 0x29B536C
    void GetOverlappingComponents(out TArray<PrimitiveComponent*> OverlappingComponents);      // [Final|Public] RVA: 0x7BA4A88
    void GetOverlappingActors(out TArray<Actor*> OverlappingActors, TSubclassOf<Actor> ClassFilter);  // [Final|Public] RVA: 0x7BA4978
    uint8 GetLocalRole();                                                                      // [Final|Public] RVA: 0x231BBA8
    float GetLifeSpan();                                                                       // [Public] RVA: 0x7BA494C
    Controller* GetInstigatorController();                                                     // [Final|Public] RVA: 0x7BA492C
    Pawn* GetInstigator();                                                                     // [Final|Public] RVA: 0x5E026DC
    Vector GetInputVectorAxisValue(const Key InputAxisKey);                                    // [Final|Public] RVA: 0x7BA47D0
    float GetInputAxisValue(const FName InputAxisName);                                        // [Final|Public] RVA: 0x7BA460C
    float GetInputAxisKeyValue(const Key InputAxisKey);                                        // [Final|Public] RVA: 0x7BA44C0
    float GetHorizontalDotProductTo(const Actor* OtherActor);                                  // [Final|Public] RVA: 0x7BA3EE4
    float GetHorizontalDistanceTo(const Actor* OtherActor);                                    // [Final|Public] RVA: 0x7BA3A48
    float GetGameTimeSinceCreation();                                                          // [Final|Public] RVA: 0x7BA3A20
    float GetDotProductTo(const Actor* OtherActor);                                            // [Final|Public] RVA: 0x7BA342C
    float GetDistanceTo(const Actor* OtherActor);                                              // [Final|Public] RVA: 0x7BA3380
    TArray<ActorComponent*> GetComponentsByTag(TSubclassOf<ActorComponent> ComponentClass, FName Tag);  // [Final|Public] RVA: 0x7BA3198
    TArray<ActorComponent*> GetComponentsByInterface(TSubclassOf<Interface> Interface);        // [Final|Public] RVA: 0x7BA3000
    ActorComponent* GetComponentByInterface(TSubclassOf<Interface> Interface);                 // [Final|Public] RVA: 0x7BA2F58
    ActorComponent* GetComponentByClass(TSubclassOf<ActorComponent> ComponentClass);           // [Final|Public] RVA: 0x1B2E680
    FName GetAttachParentSocketName();                                                         // [Final|Public] RVA: 0x7BA2F2C
    Actor* GetAttachParentActor();                                                             // [Final|Public] RVA: 0x7BA2F0C
    void GetAttachedActors(out TArray<Actor*> OutActors, bool bResetArray);                    // [Final|Public] RVA: 0x144C5F8
    void GetAllChildActors(out TArray<Actor*> ChildActors, bool bIncludeDescendants);          // [Final|Public] RVA: 0x7BA2DFC
    Vector GetActorUpVector();                                                                 // [Final|Public] RVA: 0x7BA2D98
    float GetActorTimeDilation();                                                              // [Final|Public] RVA: 0x7BA2D70
    float GetActorTickInterval();                                                              // [Final|Public] RVA: 0x29ADD88
    Vector GetActorScale3D();                                                                  // [Final|Public] RVA: 0x7BA2D3C
    Vector GetActorRightVector();                                                              // [Final|Public] RVA: 0x7BA2CD8
    Vector GetActorRelativeScale3D();                                                          // [Final|Public] RVA: 0x7BA2CA8
    Vector GetActorForwardVector();                                                            // [Final|Public] RVA: 0x7BA2C44
    void GetActorEyesViewPoint(out Vector OutLocation, out Rotator OutRotation);               // [Public] RVA: 0x7BA2B0C
    bool GetActorEnableCollision();                                                            // [Final|Public] RVA: 0x7BA2AF0
    void GetActorBounds(bool bOnlyCollidingComponents, out Vector Origin, out Vector BoxExtent, bool bIncludeFromChildActors);  // [Final|Public] RVA: 0x7BA28DC
    void ForceNetUpdate();                                                                     // [Public] RVA: 0x5E396B0
    void FlushNetDormancy();                                                                   // [Final|Public] RVA: 0x7BA28C8
    void FinishAddComponent(ActorComponent* Component, bool bManualAttachment, const out ref Transform RelativeTransform);  // [Final|Public] RVA: 0x7BA25F8
    void EnableInput(PlayerController* PlayerController);                                      // [Public] RVA: 0x689B378
    void DisableInput(PlayerController* PlayerController);                                     // [Public] RVA: 0x689B638
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);                           // [Final|Public] RVA: 0x7BA255C
    void AddTickPrerequisiteComponent(ActorComponent* PrerequisiteComponent);                  // [Public] RVA: 0x7BA24BC
    void AddTickPrerequisiteActor(Actor* PrerequisiteActor);                                   // [Public] RVA: 0x7BA241C
    ActorComponent* AddComponentByClass(TSubclassOf<ActorComponent> Class, bool bManualAttachment, const out ref Transform RelativeTransform, bool bDeferredFinish);  // [Final|Public] RVA: 0x7BA218C
    ActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const out ref Transform RelativeTransform, const Object* ComponentTemplateContext, bool bDeferredFinish);  // [Final|Public] RVA: 0x1CDA358
    bool ActorHasTag(FName Tag);                                                               // [Final|Public] RVA: 0x7BA20E4
    void ActiveManualReplicate();                                                              // [Final|Public] RVA: 0x7BA20CC
};

// ============================================================
// Inheritance: ActorTickFunction : TickFunction
// Package: /Script/Engine
// ============================================================
struct ActorTickFunction : public TickFunction {
public:
};

// ============================================================
// Inheritance: TickFunction
// Package: /Script/Engine
// ============================================================
struct TickFunction {
public:
    uint8 TickGroup;                                                                           // 0x0008 (0x01)
    uint8 EndTickGroup;                                                                        // 0x0009 (0x01)
    enum TickMode;                                                                             // 0x0014 (0x01)
    bool bTickEvenWhenPaused;                                                                  // 0x0015 (0x01) BitMask: 0x01
    bool bCanEverTick;                                                                         // 0x0015 (0x01) BitMask: 0x02
    bool bEnableTickOpt;                                                                       // 0x0015 (0x01) BitMask: 0x04
    bool bStartWithTickEnabled;                                                                // 0x0015 (0x01) BitMask: 0x08
    bool bAllowTickOnDedicatedServer;                                                          // 0x0015 (0x01) BitMask: 0x10
    float TickInterval;                                                                        // 0x0018 (0x04)
};

// ============================================================
// Inheritance: RepMovement
// Package: /Script/Engine
// ============================================================
struct RepMovement {
public:
    Vector LinearVelocity;                                                                     // 0x0000 (0x0C)
    Vector AngularVelocity;                                                                    // 0x000C (0x0C)
    Vector Location;                                                                           // 0x0018 (0x0C)
    Rotator Rotation;                                                                          // 0x0024 (0x0C)
    bool bSimulatedPhysicSleep;                                                                // 0x0030 (0x01) BitMask: 0x01
    bool bRepPhysics;                                                                          // 0x0030 (0x01) BitMask: 0x02
    enum LocationQuantizationLevel;                                                            // 0x0031 (0x01)
    enum VelocityQuantizationLevel;                                                            // 0x0032 (0x01)
    enum RotationQuantizationLevel;                                                            // 0x0033 (0x01)
    uint32 RepVersionIndex;                                                                    // 0x0034 (0x04)
};

// ============================================================
// Inheritance: RepAttachment
// Package: /Script/Engine
// ============================================================
struct RepAttachment {
public:
    Actor* AttachParent;                                                                       // 0x0000 (0x08)
    Vector_NetQuantize100 LocationOffset;                                                      // 0x0008 (0x0C)
    Vector_NetQuantize100 RelativeScale3D;                                                     // 0x0014 (0x0C)
    Rotator RotationOffset;                                                                    // 0x0020 (0x0C)
    FName AttachSocket;                                                                        // 0x002C (0x08)
    SceneComponent* AttachComponent;                                                           // 0x0038 (0x08)
};

// ============================================================
// Inheritance: Vector_NetQuantize100 : Vector
// Package: /Script/Engine
// ============================================================
struct Vector_NetQuantize100 : public Vector {
public:
};

// ============================================================
// Inheritance: InputComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class InputComponent : public ActorComponent {
public:
    TArray<CachedKeyToActionInfo> CachedKeyToActionInfo;                                       // 0x0168 (0x10)

    // --- Functions ---
    bool WasControllerKeyJustReleased(Key Key);                                                // [Final|Private] RVA: 0x7BF03EC
    bool WasControllerKeyJustPressed(Key Key);                                                 // [Final|Private] RVA: 0x7BF03EC
    bool IsControllerKeyDown(Key Key);                                                         // [Final|Private] RVA: 0x7BF03EC
    void GetTouchState(int32 FingerIndex, out float LocationX, out float LocationY, out bool bIsCurrentlyPressed);  // [Final|Private] RVA: 0x7BEFEE0
    Vector GetControllerVectorKeyState(Key Key);                                               // [Final|Private] RVA: 0x7BEFDE0
    void GetControllerMouseDelta(out float DeltaX, out float DeltaY);                          // [Final|Private] RVA: 0x7BEFD10
    float GetControllerKeyTimeDown(Key Key);                                                   // [Final|Private] RVA: 0x7BEFB00
    void GetControllerAnalogStickState(uint8 WhichStick, out float StickX, out float StickY);  // [Final|Private] RVA: 0x7BEFBF0
    float GetControllerAnalogKeyState(Key Key);                                                // [Final|Private] RVA: 0x7BEFB00
};

// ============================================================
// Inheritance: CachedKeyToActionInfo
// Package: /Script/Engine
// ============================================================
struct CachedKeyToActionInfo {
public:
    PlayerInput* PlayerInput;                                                                  // 0x0000 (0x08)
};

// ============================================================
// Inheritance: PlayerInput : Object
// Package: /Script/Engine
// ============================================================
class PlayerInput : public Object {
public:
    TArray<KeyBind> DebugExecBindings;                                                         // 0x0120 (0x10)
    TArray<FName> InvertedAxis;                                                                // 0x0160 (0x10)

    // --- Functions ---
    void SetMouseSensitivity(const float Sensitivity);                                         // [Final|Public] RVA: 0x7C6BDD4
    void SetBind(FName BindName, FString Command);                                             // [Final|Public] RVA: 0x226E6B0
    void PreviewPinyin();                                                                      // [Final|Public] RVA: 0x1E39048
    void PreviewLanguage(FString InLanguage);                                                  // [Final|Public] RVA: 0x512DD6C
    void PreviewEnglish();                                                                     // [Final|Public] RVA: 0x1E39048
    void PreviewChinese();                                                                     // [Final|Public] RVA: 0x1E39048
    void InvertAxisKey(const Key AxisKey);                                                     // [Final|Public] RVA: 0x7C6B4CC
    void InvertAxis(const FName AxisName);                                                     // [Final|Public] RVA: 0x7C6B434
    void ClearSmoothing();                                                                     // [Final|Public] RVA: 0x7C6AEDC
};

// ============================================================
// Inheritance: KeyBind
// Package: /Script/Engine
// ============================================================
struct KeyBind {
public:
    Key Key;                                                                                   // 0x0000 (0x18)
    FString Command;                                                                           // 0x0018 (0x10)
    bool Control;                                                                              // 0x0028 (0x01) BitMask: 0x01
    bool Shift;                                                                                // 0x0028 (0x01) BitMask: 0x02
    bool Alt;                                                                                  // 0x0028 (0x01) BitMask: 0x04
    bool Cmd;                                                                                  // 0x0028 (0x01) BitMask: 0x08
    bool bIgnoreCtrl;                                                                          // 0x0028 (0x01) BitMask: 0x10
    bool bIgnoreShift;                                                                         // 0x0028 (0x01) BitMask: 0x20
    bool bIgnoreAlt;                                                                           // 0x0028 (0x01) BitMask: 0x40
    bool bIgnoreCmd;                                                                           // 0x0028 (0x01) BitMask: 0x80
    bool bDisabled;                                                                            // 0x0029 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: Key
// Package: /Script/InputCore
// ============================================================
struct Key {
public:
    FName KeyName;                                                                             // 0x0000 (0x08)
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
    void SpawnDefaultController();                                                             // [Public] RVA: 0x5C5EC78
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);                  // [Final|Public] RVA: 0x7C5C4C4
    void ReceiveUnpossessed(Controller* OldController);                                        // [Public] RVA: 0x182D6BC
    void ReceivePossessed(Controller* NewController);                                          // [Public] RVA: 0x182D6BC
    void PawnMakeNoise(float Loudness, Vector NoiseLocation, bool bUseNoiseMakerLocation, Actor* NoiseMaker);  // [Final|Public] RVA: 0x7C5B820
    void OnRep_PlayerState();                                                                  // [Public] RVA: 0x1C6BD38
    void OnRep_Controller();                                                                   // [Public] RVA: 0x5C5E0F4
    void LaunchPawn(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);                 // [Final|Public] RVA: 0x7C5B52C
    Vector K2_GetMovementInputVector();                                                        // [Final|Public] RVA: 0x7C5B390
    bool IsPlayerControlled();                                                                 // [Public] RVA: 0x7BD0624
    bool IsPawnControlled();                                                                   // [Final|Public] RVA: 0x7C5B4DC
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7C5B4B4
    bool IsLocallyControlled();                                                                // [Public] RVA: 0x7C5B48C
    bool IsControlled();                                                                       // [Final|Public] RVA: 0x7C5B434
    bool IsBotControlled();                                                                    // [Public] RVA: 0x5C5E588
    Vector GetPendingMovementInputVector();                                                    // [Final|Public] RVA: 0x7C5B390
    Vector GetNavAgentLocation();                                                              // [Public] RVA: 0x7C5B30C
    PawnMovementComponent* GetMovementComponent();                                             // [Public] RVA: 0x7BD2578
    Actor* GetMovementBaseActor(const Pawn* Pawn);                                             // [Static|Final|Public] RVA: 0x7C5B274
    Vector GetLastMovementInputVector();                                                       // [Final|Public] RVA: 0x7C5B24C
    Rotator GetControlRotation();                                                              // [Final|Public] RVA: 0x7C5B14C
    Controller* GetController();                                                               // [Final|Public] RVA: 0x5E32488
    Rotator GetBaseAimRotation();                                                              // [Public] RVA: 0x7C5AE5C
    void DetachFromControllerPendingDestroy();                                                 // [Public] RVA: 0x5C5F0A8
    Vector ConsumeMovementInputVector();                                                       // [Public] RVA: 0x7C5AE24
    void AddMovementInput(Vector WorldDirection, float ScaleValue, bool bForce);               // [Public] RVA: 0x7C5A880
    void AddControllerYawInput(float Val);                                                     // [Public] RVA: 0x5C5E920
    void AddControllerRollInput(float Val);                                                    // [Public] RVA: 0x5C5EFF0
    void AddControllerPitchInput(float Val);                                                   // [Public] RVA: 0x5C5E880
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
    void UnPossess();                                                                          // [Final|Public] RVA: 0x7BD0AD0
    void StopMovement();                                                                       // [Public] RVA: 0x5D652EC
    void SetInitialLocationAndRotation(const out ref Vector NewLocation, const out ref Rotator NewRotation);  // [Public] RVA: 0x5E4DA8C
    void SetIgnoreMoveInput(bool bNewMoveInput);                                               // [Public] RVA: 0x7BD0A30
    void SetIgnoreLookInput(bool bNewLookInput);                                               // [Public] RVA: 0x7BD0990
    void SetControlRotation(const out ref Rotator NewRotation);                                // [Public] RVA: 0x7BD08F0
    void ResetIgnoreMoveInput();                                                               // [Public] RVA: 0x4787D04
    void ResetIgnoreLookInput();                                                               // [Public] RVA: 0x5E566F0
    void ResetIgnoreInputFlags();                                                              // [Public] RVA: 0x22062A4
    void ReceiveUnPossess(Pawn* UnpossessedPawn);                                              // [Protected] RVA: 0x182D6BC
    void ReceivePossess(Pawn* PossessedPawn);                                                  // [Protected] RVA: 0x182D6BC
    void ReceiveInstigatedAnyDamage(float Damage, const DamageType* DamageType, Actor* DamagedActor, Actor* DamageCauser);  // [Protected] RVA: 0x182D6BC
    void Possess(Pawn* InPawn);                                                                // [Final|Public] RVA: 0x7BD0854
    void OnRep_PlayerState();                                                                  // [Public] RVA: 0xFA0E88
    void OnRep_Pawn();                                                                         // [Public] RVA: 0xFA0E64
    bool LineOfSightTo(const Actor* Other, Vector ViewPoint, bool bAlternateChecks);           // [Public] RVA: 0x7BD06FC
    Pawn* K2_GetPawn();                                                                        // [Final|Public] RVA: 0x29B5CE0
    bool IsPlayerController();                                                                 // [Final|Public] RVA: 0x7BD06E0
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7BD06B8
    bool IsLookInputIgnored();                                                                 // [Public] RVA: 0x7BD0690
    bool IsLocalPlayerController();                                                            // [Final|Public] RVA: 0x7BD064C
    bool IsLocalController();                                                                  // [Public] RVA: 0x7BD0624
    Actor* GetViewTarget();                                                                    // [Public] RVA: 0x226B8AC
    Rotator GetDesiredRotation();                                                              // [Public] RVA: 0x7BD03E4
    Rotator GetControlRotation();                                                              // [Public] RVA: 0x7BD03AC
    void ClientSetRotation(Rotator NewRotation, bool bResetCamera);                            // [Public] RVA: 0x22B85F0
    void ClientSetLocation(Vector NewLocation, Rotator NewRotation);                           // [Public] RVA: 0x7BD0254
    PlayerController* CastToPlayerController();                                                // [Final|Public] RVA: 0x7BD020C
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
    void ReceiveOverrideWith(PlayerState* OldPlayerState);                                     // [Protected] RVA: 0x182D6BC
    void ReceiveCopyProperties(PlayerState* NewPlayerState);                                   // [Protected] RVA: 0x182D6BC
    void OnRep_UniqueId();                                                                     // [Public] RVA: 0x469A868
    void OnRep_Score();                                                                        // [Public] RVA: 0x1C0AB50
    void OnRep_PlayerName();                                                                   // [Public] RVA: 0x1EF4570
    void OnRep_PlayerId();                                                                     // [Public] RVA: 0x231BB90
    void OnRep_bIsInactive();                                                                  // [Public] RVA: 0x4691CF8
    FString GetPlayerName();                                                                   // [Final|Public] RVA: 0x1851044
    uint8 GetCompressedPingStdDev();                                                           // [Final|Public] RVA: 0x29ADE28
    uint8 GetCompressedPingForTwoSeconds();                                                    // [Final|Public] RVA: 0x29AE150
    uint8 GetCompressedPingForHalfSecond();                                                    // [Final|Public] RVA: 0x29AE168
    uint8 GetCompressedPing();                                                                 // [Final|Public] RVA: 0x1D8B54C
};

// ============================================================
// Inheritance: Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class Info : public Actor {
public:
};

// ============================================================
// Inheritance: LocalMessage : Object
// Package: /Script/Engine
// ============================================================
class LocalMessage : public Object {
public:
};

// ============================================================
// Inheritance: UniqueNetIdRepl : UniqueNetIdWrapper
// Package: /Script/Engine
// ============================================================
struct UniqueNetIdRepl : public UniqueNetIdWrapper {
public:
    TArray<uint8> ReplicationBytes;                                                            // 0x0018 (0x10)
};

// ============================================================
// Inheritance: UniqueNetIdWrapper
// Package: /Script/CoreUObject
// ============================================================
struct UniqueNetIdWrapper {
public:
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
    void UnCrouch(bool bClientSimulation);                                                     // [Public] RVA: 0x5CC2324
    void StopJumping();                                                                        // [Public] RVA: 0x5E3955C
    void StopAnimMontage(AnimMontage* AnimMontage);                                            // [Public] RVA: 0x7BCD308
    void ServerMovePacked(const ref CharacterServerMovePackedBits PackedBits);                 // [Public] RVA: 0x7BCCB40
    void ServerMoveOld(float OldTimeStamp, Vector_NetQuantize10 OldAccel, MovementCompressedFlags OldMoveFlags);  // [Public] RVA: 0x7BCC9A8
    void ServerMoveNoBase(float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // [Public] RVA: 0x7BCC68C
    void ServerMoveDualNoBase(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // [Public] RVA: 0x7BCC1D4
    void ServerMoveDualHybridRootMotion(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7BCBC60
    void ServerMoveDual(float TimeStamp0, Vector_NetQuantize10 InAccel0, MovementCompressedFlags PendingFlags, uint32 View0, float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags NewFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7BCB6EC
    void ServerMove(float Timestamp, Vector_NetQuantize10 InAccel, Vector_NetQuantize100 ClientLoc, MovementCompressedFlags CompressedMoveFlags, uint8 ClientRoll, uint32 View, PrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // [Public] RVA: 0x7BCB310
    void RootMotionDebugClientPrintOnScreen(FString inString);                                 // [Public] RVA: 0x7BCB210
    bool PreGetCachedMoveOverlapsShapes(const out ref Transform NewTransform, const out ref Transform OldTransform, bool bRealMove, bool SweepOrLineTrace);  // [Final|Public] RVA: 0x7BCAFD8
    float PlayAnimMontage(AnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);  // [Public] RVA: 0x7BCAE90
    void OnWalkingOffLedge(const out ref Vector PreviousFloorImpactNormal, const out ref Vector PreviousFloorContactNormal, const out ref Vector PreviousLocation, float TimeDelta);  // [Public] RVA: 0x2260104
    void OnRep_RootMotion();                                                                   // [Final|Public] RVA: 0x1BF3CFC
    void OnRep_ReplicatedBasedMovement();                                                      // [Public] RVA: 0x17850A4
    void OnRep_ReplayLastTransformUpdateTimeStamp();                                           // [Final|Public] RVA: 0x19DE27C
    void OnRep_IsCrouched();                                                                   // [Public] RVA: 0x277616C
    void OnLaunched(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);                 // [Public] RVA: 0x182D6BC
    void OnLanded(const out ref HitResult Hit);                                                // [Public] RVA: 0x182D6BC
    void OnJumped();                                                                           // [Public] RVA: 0x7BCAE78
    void LaunchCharacter(Vector LaunchVelocity, bool bXYOverride, bool bZOverride);            // [Public] RVA: 0x7BCAD20
    void K2_UpdateCustomMovement(float DeltaTime);                                             // [Public] RVA: 0x182D6BC
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);               // [Public] RVA: 0x182D6BC
    void K2_OnMovementModeChanged(uint8 PrevMovementMode, uint8 NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // [Public] RVA: 0x182D6BC
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);                 // [Public] RVA: 0x182D6BC
    void Jump();                                                                               // [Public] RVA: 0x7BC8C74
    bool IsPlayingRootMotion();                                                                // [Final|Public] RVA: 0x7BC8C50
    bool IsPlayingNetworkedRootMotionMontage();                                                // [Final|Public] RVA: 0x7BC8C2C
    bool IsJumpProvidingForce();                                                               // [Public] RVA: 0x7BC8C04
    bool HasAnyRootMotion();                                                                   // [Final|Public] RVA: 0x7BC8BCC
    AnimMontage* GetCurrentMontage();                                                          // [Final|Public] RVA: 0x7BC7560
    Vector GetBaseTranslationOffset();                                                         // [Final|Public] RVA: 0x7BC7538
    Rotator GetBaseRotationOffsetRotator();                                                    // [Final|Public] RVA: 0x7BC7504
    float GetAnimRootMotionTranslationScale();                                                 // [Final|Public] RVA: 0x7BC7410
    void Crouch(bool bClientSimulation);                                                       // [Public] RVA: 0x7BC7370
    void ClientVeryShortAdjustPosition(float Timestamp, Vector NewLoc, PrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7BC6E94
    void ClientMoveResponsePacked(const ref CharacterMoveResponsePackedBits PackedBits);       // [Public] RVA: 0x7BC6D38
    void ClientCheatWalk();                                                                    // [Public] RVA: 0x7BC6D20
    void ClientCheatGhost();                                                                   // [Public] RVA: 0x7BC6D08
    void ClientCheatFly();                                                                     // [Public] RVA: 0x7BC6CF0
    void ClientAdjustRootMotionSourcePosition(float Timestamp, RootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, Vector ServerLoc, Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, PrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7BC6808
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, Vector ServerLoc, Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, PrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // [Public] RVA: 0x7BC6440
    void ClientAdjustPosition(float Timestamp, Vector NewLoc, Vector NewVel, PrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, uint8 ServerSprintFailReason);  // [Public] RVA: 0x7BC60D0
    void ClientAckGoodMove(float Timestamp);                                                   // [Public] RVA: 0x7BC602C
    bool CanJumpInternal();                                                                    // [Protected] RVA: 0x7BC6004
    bool CanJump();                                                                            // [Final|Public] RVA: 0x7BC5FA0
    bool CanCrouch();                                                                          // [Public] RVA: 0x279D62C
    void CacheInitialMeshOffset(Vector MeshRelativeLocation, Rotator MeshRelativeRotation);    // [Public] RVA: 0x7BC5E88
};

// ============================================================
// Inheritance: SkeletalMeshComponent : SkinnedMeshComponent : MeshComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class SkeletalMeshComponent : public SkinnedMeshComponent {
public:
    TSubclassOf<Object> AnimBlueprintGeneratedClass;                                           // 0x0768 (0x08)
    TSubclassOf<AnimInstance> AnimClass;                                                       // 0x0770 (0x08)
    AnimInstance* AnimScriptInstance;                                                          // 0x0778 (0x08)
    AnimInstance* PostProcessAnimInstance;                                                     // 0x0780 (0x08)
    SingleAnimationPlayData AnimationData;                                                     // 0x0788 (0x18)
    Vector RootBoneTranslation;                                                                // 0x07B0 (0x0C)
    Vector LineCheckBoundsScale;                                                               // 0x07BC (0x0C)
    TArray<AnimInstance*> LinkedInstances;                                                     // 0x07F8 (0x10)
    TArray<Transform> CachedBoneSpaceTransforms;                                               // 0x0808 (0x10)
    TArray<Transform> CachedComponentSpaceTransforms;                                          // 0x0818 (0x10)
    float GlobalAnimRateScale;                                                                 // 0x0978 (0x04)
    uint8 KinematicBonesUpdateType;                                                            // 0x097C (0x01)
    uint8 PhysicsTransformUpdateMode;                                                          // 0x097D (0x01)
    uint8 AnimationMode;                                                                       // 0x097F (0x01)
    bool bDisablePostProcessBlueprint;                                                         // 0x0981 (0x01) BitMask: 0x01
    bool bUpdateOverlapsOnAnimationFinalize;                                                   // 0x0981 (0x01) BitMask: 0x04
    bool bHasValidBodies;                                                                      // 0x0981 (0x01) BitMask: 0x10
    bool bBlendPhysics;                                                                        // 0x0981 (0x01) BitMask: 0x20
    bool bEnablePhysicsOnDedicatedServer;                                                      // 0x0981 (0x01) BitMask: 0x40
    bool bUpdateMeshWhenKinematic;                                                             // 0x0981 (0x01) BitMask: 0x80
    bool bUpdateJointsFromAnimation;                                                           // 0x0982 (0x01) BitMask: 0x01
    bool bDisableClothSimulation;                                                              // 0x0982 (0x01) BitMask: 0x02
    bool bDisableRigidBodyAnimNode;                                                            // 0x0988 (0x01) BitMask: 0x02
    bool bAllowAnimCurveEvaluation;                                                            // 0x0988 (0x01) BitMask: 0x04
    bool bDisableAnimCurves;                                                                   // 0x0988 (0x01) BitMask: 0x08
    bool bCollideWithEnvironment;                                                              // 0x0988 (0x01) BitMask: 0x80
    bool bCollideWithAttachedChildren;                                                         // 0x0989 (0x01) BitMask: 0x01
    bool bLocalSpaceSimulation;                                                                // 0x0989 (0x01) BitMask: 0x02
    bool bResetAfterTeleport;                                                                  // 0x0989 (0x01) BitMask: 0x04
    bool bDeferKinematicBoneUpdate;                                                            // 0x0989 (0x01) BitMask: 0x10
    bool bNoSkeletonUpdate;                                                                    // 0x0989 (0x01) BitMask: 0x20
    bool bPauseAnims;                                                                          // 0x0989 (0x01) BitMask: 0x40
    bool bUseRefPoseOnInitAnim;                                                                // 0x0989 (0x01) BitMask: 0x80
    bool bEnablePerPolyCollision;                                                              // 0x098A (0x01) BitMask: 0x01
    bool bForceRefpose;                                                                        // 0x098A (0x01) BitMask: 0x02
    bool bOnlyAllowAutonomousTickPose;                                                         // 0x098A (0x01) BitMask: 0x04
    bool bIsAutonomousTickPose;                                                                // 0x098A (0x01) BitMask: 0x08
    bool bOldForceRefPose;                                                                     // 0x098A (0x01) BitMask: 0x10
    bool bShowPrePhysBones;                                                                    // 0x098A (0x01) BitMask: 0x20
    bool bRequiredBonesUpToDate;                                                               // 0x098A (0x01) BitMask: 0x40
    bool bAnimTreeInitialised;                                                                 // 0x098A (0x01) BitMask: 0x80
    bool bIncludeComponentLocationIntoBounds;                                                  // 0x098B (0x01) BitMask: 0x01
    bool bEnableLineCheckWithBounds;                                                           // 0x098B (0x01) BitMask: 0x02
    bool bUseBendingElements;                                                                  // 0x098B (0x01) BitMask: 0x04
    bool bUseTetrahedralConstraints;                                                           // 0x098B (0x01) BitMask: 0x08
    bool bUseThinShellVolumeConstraints;                                                       // 0x098B (0x01) BitMask: 0x10
    bool bUseSelfCollisions;                                                                   // 0x098B (0x01) BitMask: 0x20
    bool bUseContinuousCollisionDetection;                                                     // 0x098B (0x01) BitMask: 0x40
    bool bPropagateCurvesToSlaves;                                                             // 0x098B (0x01) BitMask: 0x80
    bool bSkipKinematicUpdateWhenInterpolating;                                                // 0x098C (0x01) BitMask: 0x01
    bool bSkipBoundsUpdateWhenInterpolating;                                                   // 0x098C (0x01) BitMask: 0x02
    bool bNeedsQueuedAnimEventsDispatched;                                                     // 0x098C (0x01) BitMask: 0x10
    uint16 CachedAnimCurveUidVersion;                                                          // 0x098E (0x02)
    enum MassMode;                                                                             // 0x0990 (0x01)
    float UniformMass;                                                                         // 0x0994 (0x04)
    float TotalMass;                                                                           // 0x0998 (0x04)
    float Density;                                                                             // 0x099C (0x04)
    float MinPerParticleMass;                                                                  // 0x09A0 (0x04)
    float ClothBlendWeight;                                                                    // 0x09A4 (0x04)
    float EdgeStiffness;                                                                       // 0x09A8 (0x04)
    float BendingStiffness;                                                                    // 0x09AC (0x04)
    float AreaStiffness;                                                                       // 0x09B0 (0x04)
    float VolumeStiffness;                                                                     // 0x09B4 (0x04)
    float StrainLimitingStiffness;                                                             // 0x09B8 (0x04)
    float ShapeTargetStiffness;                                                                // 0x09BC (0x04)
    bool bWaitForParallelClothTask;                                                            // 0x09C0 (0x01) BitMask: 0xFF
    TArray<FName> DisallowedAnimCurves;                                                        // 0x09C8 (0x10)
    BodySetup* BodySetup;                                                                      // 0x09D8 (0x08)
    FMulticastDelegate OnConstraintBroken;                                                     // 0x09E8 (0x10)
    TSubclassOf<ClothingSimulationFactory> ClothingSimulationFactory;                          // 0x09F8 (0x08)
    float TeleportDistanceThreShold;                                                           // 0x0AE8 (0x04)
    float TeleportRotationThreShold;                                                           // 0x0AEC (0x04)
    uint32 LastPoseTickFrame;                                                                  // 0x0AF8 (0x04)
    ClothingSimulationInteractor* ClothingInteractor;                                          // 0x0B50 (0x08)
    FMulticastDelegate OnAnimInitialized;                                                      // 0x0C20 (0x10)
    bool bEnablePhysicsConstraintDeferredCreate;                                               // 0x0E80 (0x01) BitMask: 0xFF
    bool bReceiveNotifiesFromMontageInstances;                                                 // 0x0E81 (0x01) BitMask: 0xFF
    bool bEnableUpdateChildTransformsOptimization;                                             // 0x0FD8 (0x01) BitMask: 0x01
    float BoundsChangeThresholdToUpdateChildTransforms;                                        // 0x0FE0 (0x04)
    bool bEnableTickAnimationOnSkeletalMeshInit;                                               // 0x1004 (0x01) BitMask: 0xFF

    // --- Functions ---
    void UnlinkAnimClassLayers(TSubclassOf<AnimInstance> InClass);                             // [Final|Public] RVA: 0x7C83148
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);                     // [Final|Public] RVA: 0x7C830B4
    void ToggleDisablePostProcessBlueprint();                                                  // [Final|Public] RVA: 0x7C83094
    void TermBodiesBelow(FName ParentBoneName);                                                // [Final|Public] RVA: 0x7C82FFC
    void SuspendClothingSimulation();                                                          // [Final|Public] RVA: 0x7C82FE4
    void Stop();                                                                               // [Final|Public] RVA: 0x7C82FD0
    void SnapshotPose(out ref PoseSnapshot Snapshot);                                          // [Final|Public] RVA: 0x7C82DD8
    void SetUpdateClothInEditor(const bool NewUpdateState);                                    // [Final|Public] RVA: 0x4698E20
    void SetUpdateAnimationInEditor(const bool NewUpdateState);                                // [Final|Public] RVA: 0x4698E20
    void SetTeleportRotationThreshold(float Threshold);                                        // [Final|Public] RVA: 0x7C82D28
    void SetTeleportDistanceThreshold(float Threshold);                                        // [Final|Public] RVA: 0x7C82C80
    void SetPosition(float InPos, bool bFireNotifies);                                         // [Final|Public] RVA: 0x7C82B94
    void SetPlayRate(float Rate);                                                              // [Final|Public] RVA: 0x7C82AF8
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);                                      // [Final|Public] RVA: 0x7C82A5C
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);  // [Public] RVA: 0x7C82914
    void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);           // [Final|Public] RVA: 0x7C827D4
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);                                      // [Final|Public] RVA: 0x7C8272C
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);  // [Final|Public] RVA: 0x7C825C8
    void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);                            // [Final|Public] RVA: 0x7C824BC
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);                           // [Final|Public] RVA: 0x7C82420
    void SetDisableAnimCurves(bool bInDisableAnimCurves);                                      // [Final|Public] RVA: 0x7C82388
    void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);               // [Final|Public] RVA: 0x7C822A0
    void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);    // [Final|Public] RVA: 0x7C82160
    void SetClothMaxDistanceScale(float Scale);                                                // [Final|Public] RVA: 0x7C820C4
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);   // [Public] RVA: 0x7C81FC4
    void SetAnimClass(TSubclassOf<Object> NewClass);                                           // [Public] RVA: 0x29AFDCC
    void SetAnimationMode(uint8 InAnimationMode);                                              // [Final|Public] RVA: 0x7C81F28
    void SetAnimation(AnimationAsset* NewAnimToPlay);                                          // [Final|Public] RVA: 0x7C81E8C
    void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);  // [Final|Public] RVA: 0x7C81CF4
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);                           // [Final|Public] RVA: 0x7C81A5C
    void SetAllowedAnimCurvesEvaluation(const out ref TArray<FName> List, bool bAllow);        // [Final|Public] RVA: 0x7C81B58
    void SetAllowAnimCurveEvaluation(bool bInAllow);                                           // [Final|Public] RVA: 0x7C819C4
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);  // [Final|Public] RVA: 0x7C81870
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);  // [Final|Public] RVA: 0x7C8171C
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);  // [Final|Public] RVA: 0x7C81584
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);                                       // [Final|Public] RVA: 0x7C814E8
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);  // [Final|Public] RVA: 0x7C813FC
    void SetAllBodiesBelowSimulatePhysics(const out ref FName InBoneName, bool bNewSimulate, bool bIncludeSelf);  // [Final|Public] RVA: 0x7C81248
    void SetAllBodiesBelowPhysicsBlendWeight(const out ref FName InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);  // [Final|Public] RVA: 0x7C8109C
    void ResumeClothingSimulation();                                                           // [Final|Public] RVA: 0x7C81080
    void ResetClothTeleportMode();                                                             // [Final|Public] RVA: 0x7C81068
    void ResetAnimInstanceDynamics(enum InTeleportType);                                       // [Final|Public] RVA: 0x7C80FD0
    void ResetAllowedAnimCurveEvaluation();                                                    // [Final|Public] RVA: 0x7C80F64
    void ResetAllBodiesSimulatePhysics();                                                      // [Final|Public] RVA: 0x7C80F50
    void PlayAnimation(AnimationAsset* NewAnimToPlay, bool bLooping);                          // [Final|Public] RVA: 0x7C80E64
    void Play(bool bLooping);                                                                  // [Final|Public] RVA: 0x7C80DC8
    void OverrideAnimationData(AnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float position, float PlayRate);  // [Final|Public] RVA: 0x7C80BC8
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<AnimInstance> InClass);                   // [Final|Public] RVA: 0x7C80ACC
    void LinkAnimClassLayers(TSubclassOf<AnimInstance> InClass);                               // [Final|Public] RVA: 0x7C80A30
    bool K2_GetClosestPointOnPhysicsAsset(const out ref Vector WorldPosition, out Vector ClosestWorldPosition, out Vector Normal, out FName BoneName, out float Distance);  // [Final|Public] RVA: 0x7C80794
    bool IsPlaying();                                                                          // [Final|Public] RVA: 0x7C80770
    bool IsClothingSimulationSuspended();                                                      // [Final|Public] RVA: 0x7C80754
    bool IsBodyGravityEnabled(FName BoneName);                                                 // [Final|Public] RVA: 0x7C8069C
    bool HasValidAnimationInstance();                                                          // [Final|Public] RVA: 0x7C8067C
    float GetTeleportRotationThreshold();                                                      // [Final|Public] RVA: 0x6875FBC
    float GetTeleportDistanceThreshold();                                                      // [Final|Public] RVA: 0x6875FBC
    bool GetStringAttribute_Ref(const out ref FName BoneName, const out ref FName AttributeName, out ref FString OutValue, enum LookupType);  // [Final|Public] RVA: 0x7C80428
    bool GetStringAttribute(const out ref FName BoneName, const out ref FName AttributeName, FString DefaultValue, out FString OutValue, enum LookupType);  // [Final|Public] RVA: 0x7C8014C
    SkeletalMesh* GetSkeletalMeshAsset();                                                      // [Final|Public] RVA: 0x4F9C2AC
    Vector GetSkeletalCenterOfMass();                                                          // [Final|Public] RVA: 0x7C80118
    AnimInstance* GetPostProcessInstance();                                                    // [Final|Public] RVA: 0x7C80100
    float GetPosition();                                                                       // [Final|Public] RVA: 0x7C800D8
    float GetPlayRate();                                                                       // [Final|Public] RVA: 0x7C800B0
    float GetMorphTarget(FName MorphTargetName);                                               // [Final|Public] RVA: 0x7C80004
    AnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);                            // [Final|Public] RVA: 0x7C7FF4C
    AnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<AnimInstance> InClass);        // [Final|Public] RVA: 0x7C7FE94
    void GetLinkedAnimGraphInstancesByTag(FName InTag, out TArray<AnimInstance*> OutLinkedInstances);  // [Final|Public] RVA: 0x7C7FD78
    AnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);                                // [Final|Public] RVA: 0x7C7FCD0
    bool GetIntegerAttribute_Ref(const out ref FName BoneName, const out ref FName AttributeName, out ref int32 OutValue, enum LookupType);  // [Final|Public] RVA: 0x7C7FB08
    bool GetIntegerAttribute(const out ref FName BoneName, const out ref FName AttributeName, int32 DefaultValue, out int32 OutValue, enum LookupType);  // [Final|Public] RVA: 0x7C7F8F4
    bool GetFloatAttribute_Ref(const out ref FName BoneName, const out ref FName AttributeName, out ref float OutValue, enum LookupType);  // [Final|Public] RVA: 0x7C7F72C
    bool GetFloatAttribute(const out ref FName BoneName, const out ref FName AttributeName, float DefaultValue, out float OutValue, enum LookupType);  // [Final|Public] RVA: 0x7C7F518
    bool GetDisablePostProcessBlueprint();                                                     // [Final|Public] RVA: 0x7C7F4FC
    bool GetDisableAnimCurves();                                                               // [Final|Public] RVA: 0x7C7F4DC
    void GetCurrentJointAngles(FName InBoneName, out float Swing1Angle, out float TwistAngle, out float Swing2Angle);  // [Final|Public] RVA: 0x7C7F320
    float GetClothMaxDistanceScale();                                                          // [Final|Public] RVA: 0x7C7F2F0
    ClothingSimulationInteractor* GetClothingSimulationInteractor();                           // [Final|Public] RVA: 0x7C7F308
    float GetBoneMass(FName BoneName, bool bScaleMass);                                        // [Final|Public] RVA: 0x7C7F1F4
    AnimInstance* GetAnimInstance();                                                           // [Final|Public] RVA: 0x7C7F1C4
    TSubclassOf<Object> GetAnimClass();                                                        // [Final|Public] RVA: 0x7C7F170
    uint8 GetAnimationMode();                                                                  // [Final|Public] RVA: 0x7C7F1DC
    bool GetAllowRigidBodyAnimNode();                                                          // [Final|Public] RVA: 0x7C7F134
    bool GetAllowedAnimCurveEvaluate();                                                        // [Final|Public] RVA: 0x7C7F154
    void ForceClothNextUpdateTeleportAndReset();                                               // [Final|Public] RVA: 0x7C7F11C
    void ForceClothNextUpdateTeleport();                                                       // [Final|Public] RVA: 0x7C7F104
    FName FindConstraintBoneName(int32 ConstraintIndex);                                       // [Final|Public] RVA: 0x7C7F040
    void ClearMorphTargets();                                                                  // [Final|Public] RVA: 0x7C7F00C
    void BreakConstraint(Vector Impulse, Vector HitLocation, FName InBoneName);                // [Final|Public] RVA: 0x7C7EEB0
    void BindClothToMasterPoseComponent();                                                     // [Final|Public] RVA: 0x7C7EE9C
    void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);                             // [Final|Public] RVA: 0x7C7EDB4
    void AddImpulseToAllBodiesBelow(Vector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);  // [Public] RVA: 0x7C7EC08
    void AddForceToAllBodiesBelow(Vector Force, FName BoneName, bool bAccelChange, bool bIncludeSelf);  // [Public] RVA: 0x7C7EA5C
    void AccumulateAllBodiesBelowPhysicsBlendWeight(const out ref FName InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);  // [Final|Public] RVA: 0x7C7E918
};

// ============================================================
// Inheritance: SkinnedMeshComponent : MeshComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class SkinnedMeshComponent : public MeshComponent {
public:
    SkeletalMesh* SkeletalMesh;                                                                // 0x0528 (0x08)
    SkinnedMeshComponent* MasterPoseComponent;                                                 // 0x0530 (0x08)
    TArray<enum> SkinCacheUsage;                                                               // 0x0538 (0x10)
    TArray<VertexOffsetUsage> VertexOffsetUsage;                                               // 0x0548 (0x10)
    PhysicsAsset* PhysicsAssetOverride;                                                        // 0x0650 (0x08)
    int32 ForcedLodModel;                                                                      // 0x0658 (0x04)
    int32 MinLodModel;                                                                         // 0x065C (0x04)
    float StreamingDistanceMultiplier;                                                         // 0x0668 (0x04)
    TArray<SkelMeshComponentLODInfo> LODInfo;                                                  // 0x0678 (0x10)
    enum VisibilityBasedAnimTickOption;                                                        // 0x06AC (0x01)
    bool bOverrideMinLod;                                                                      // 0x06BA (0x01) BitMask: 0x08
    bool bUseBoundsFromMasterPoseComponent;                                                    // 0x06BA (0x01) BitMask: 0x10
    bool bForceWireframe;                                                                      // 0x06BA (0x01) BitMask: 0x20
    bool bDisplayBones;                                                                        // 0x06BA (0x01) BitMask: 0x40
    bool bDisableMorphTarget;                                                                  // 0x06BA (0x01) BitMask: 0x80
    bool bHideSkin;                                                                            // 0x06BB (0x01) BitMask: 0x01
    bool bPerBoneMotionBlur;                                                                   // 0x06BB (0x01) BitMask: 0x02
    bool bComponentUseFixedSkelBounds;                                                         // 0x06BB (0x01) BitMask: 0x04
    bool bComponentConsiderChildMeshBounds;                                                    // 0x06BB (0x01) BitMask: 0x08
    bool bConsiderAllBodiesForBounds;                                                          // 0x06BB (0x01) BitMask: 0x10
    bool bSyncAttachParentLOD;                                                                 // 0x06BB (0x01) BitMask: 0x20
    bool bCanHighlightSelectedSections;                                                        // 0x06BB (0x01) BitMask: 0x40
    bool bRecentlyRendered;                                                                    // 0x06BB (0x01) BitMask: 0x80
    bool bRecentlyRenderedConsiderChildren;                                                    // 0x06BC (0x01) BitMask: 0x01
    bool bCastCapsuleDirectShadow;                                                             // 0x06BC (0x01) BitMask: 0x02
    bool bCastCapsuleIndirectShadow;                                                           // 0x06BC (0x01) BitMask: 0x04
    bool bCPUSkinning;                                                                         // 0x06BC (0x01) BitMask: 0x08
    bool bEnableUpdateRateOptimizations;                                                       // 0x06BC (0x01) BitMask: 0x10
    bool bDisplayDebugUpdateRateOptimizations;                                                 // 0x06BC (0x01) BitMask: 0x20
    bool bRenderStatic;                                                                        // 0x06BC (0x01) BitMask: 0x40
    bool bIgnoreMasterPoseComponentLOD;                                                        // 0x06BC (0x01) BitMask: 0x80
    bool bCachedLocalBoundsUpToDate;                                                           // 0x06BD (0x01) BitMask: 0x04
    bool bForceMeshObjectUpdate;                                                               // 0x06BD (0x01) BitMask: 0x10
    float CapsuleIndirectShadowMinVisibility;                                                  // 0x06C0 (0x04)
    bool bForceLODDirty;                                                                       // 0x06D8 (0x01) BitMask: 0xFF
    BoxSphereBounds CachedWorldSpaceBounds;                                                    // 0x06DC (0x1C)
    Matrix CachedWorldToLocalTransform;                                                        // 0x0700 (0x40)

    // --- Functions ---
    void UnloadSkinWeightProfile(FName InProfileName);                                         // [Final|Public] RVA: 0x7C86368
    void UnHideBoneByName(FName BoneName);                                                     // [Final|Public] RVA: 0x7C862D0
    void TransformToBoneSpace(FName BoneName, Vector InPosition, Rotator InRotation, out Vector OutPosition, out Rotator OutRotation);  // [Final|Public] RVA: 0x7C86080
    void TransformFromBoneSpace(FName BoneName, Vector InPosition, Rotator InRotation, out Vector OutPosition, out Rotator OutRotation);  // [Final|Public] RVA: 0x7C85E30
    void ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex);  // [Final|Public] RVA: 0x7C85CA0
    void ShowAllMaterialSections(int32 LODIndex);                                              // [Final|Public] RVA: 0x7C85C08
    void SetVertexOffsetUsage(int32 LODIndex, int32 Usage);                                    // [Final|Public] RVA: 0x7C85B20
    void SetVertexColorOverride_LinearColor(int32 LODIndex, const out ref TArray<LinearColor> VertexColors);  // [Final|Public] RVA: 0x7C85A14
    bool SetSkinWeightProfile(FName InProfileName);                                            // [Final|Public] RVA: 0x7C8596C
    void SetSkinWeightOverride(int32 LODIndex, const out ref TArray<SkelMeshSkinWeightInfo> SkinWeights);  // [Final|Public] RVA: 0x7C85860
    void SetSkeletalMesh(SkeletalMesh* NewMesh, bool bReinitPose);                             // [Public] RVA: 0x27C6858
    void SetRenderStatic(bool bNewValue);                                                      // [Final|Public] RVA: 0x7C857C4
    void SetPreSkinningOffsets(int32 LODIndex, TArray<Vector> Offsets);                        // [Final|Public] RVA: 0x7C856A0
    void SetPostSkinningOffsets(int32 LODIndex, TArray<Vector> Offsets);                       // [Final|Public] RVA: 0x7C8557C
    void SetPhysicsAsset(PhysicsAsset* NewPhysicsAsset, bool bForceReInit);                    // [Public] RVA: 0x7C8548C
    void SetMinLOD(int32 InNewMinLOD);                                                         // [Final|Public] RVA: 0x7C853D8
    void SetMasterPoseComponent(SkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);  // [Final|Public] RVA: 0x7C852EC
    void SetForcedLOD(int32 InNewForcedLOD);                                                   // [Final|Public] RVA: 0x7C85254
    void SetCastCapsuleIndirectShadow(bool bNewValue);                                         // [Final|Public] RVA: 0x7C85198
    void SetCastCapsuleDirectShadow(bool bNewValue);                                           // [Final|Public] RVA: 0x7C850E0
    void SetCapsuleIndirectShadowMinVisibility(float NewValue);                                // [Final|Public] RVA: 0x7C85034
    bool IsUsingSkinWeightProfile();                                                           // [Final|Public] RVA: 0x7C85018
    bool IsMaterialSectionShown(int32 MaterialID, int32 LODIndex);                             // [Final|Public] RVA: 0x7C84F20
    bool IsBoneHiddenByName(FName BoneName);                                                   // [Final|Public] RVA: 0x7C84E60
    void HideBoneByName(FName BoneName, uint8 PhysBodyOption);                                 // [Final|Public] RVA: 0x7C84B8C
    int32 GetVertexOffsetUsage(int32 LODIndex);                                                // [Final|Public] RVA: 0x7C84AE4
    bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, out float OutTwistAngle, out float OutSwingAngle);  // [Final|Public] RVA: 0x7C84994
    FName GetSocketBoneName(FName InSocketName);                                               // [Final|Public] RVA: 0x7C84838
    Vector GetRefPosePosition(int32 BoneIndex);                                                // [Final|Public] RVA: 0x7C84780
    int32 GetPredictedLODLevel();                                                              // [Final|Public] RVA: 0x7C84768
    FName GetParentBone(FName BoneName);                                                       // [Final|Public] RVA: 0x7C846C4
    int32 GetNumLODs();                                                                        // [Final|Public] RVA: 0x7C846A4
    int32 GetNumBones();                                                                       // [Final|Public] RVA: 0x7C84684
    int32 GetForcedLOD();                                                                      // [Final|Public] RVA: 0x7C8466C
    Transform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName);                    // [Final|Public] RVA: 0x7C84550
    FName GetCurrentSkinWeightProfileName();                                                   // [Final|Public] RVA: 0x7C84538
    FName GetBoneName(int32 BoneIndex);                                                        // [Final|Public] RVA: 0x7C84498
    int32 GetBoneIndex(FName BoneName);                                                        // [Final|Public] RVA: 0x7C843F0
    FName FindClosestBone_K2(Vector TestLocation, out Vector BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset);  // [Final|Public] RVA: 0x7C841F4
    void ClearVertexColorOverride(int32 LODIndex);                                             // [Final|Public] RVA: 0x7C84120
    void ClearSkinWeightProfile();                                                             // [Final|Public] RVA: 0x7C8410C
    void ClearSkinWeightOverride(int32 LODIndex);                                              // [Final|Public] RVA: 0x7C84038
    bool BoneIsChildOf(FName BoneName, FName ParentBoneName);                                  // [Final|Public] RVA: 0x7C83F40
};

// ============================================================
// Inheritance: MeshComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class MeshComponent : public PrimitiveComponent {
public:
    TArray<MaterialInterface*> OverrideMaterials;                                              // 0x04F0 (0x10)
    MaterialInterface* OverlayMaterial;                                                        // 0x0500 (0x08)
    float OverlayMaterialMaxDrawDistance;                                                      // 0x0508 (0x04)
    bool bEnableMaterialParameterCaching;                                                      // 0x050C (0x01) BitMask: 0x01
    bool bTickComponentEvenHidden;                                                             // 0x050C (0x01) BitMask: 0x04

    // --- Functions ---
    void SetVectorParameterValueOnMaterials(const FName ParameterName, const Vector ParameterValue);  // [Final|Public] RVA: 0x7C54BE0
    void SetVector4ParameterValueOnMaterials(const FName ParameterName, const out ref Vector4 ParameterValue);  // [Final|Public] RVA: 0x22D17C0
    void SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue);  // [Final|Public] RVA: 0x23A2620
    void SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance);                           // [Final|Public] RVA: 0x7C54A58
    void SetOverlayMaterial(MaterialInterface* NewOverlayMaterial);                            // [Final|Public] RVA: 0x7C549BC
    void SetLinearColorParameterValueOnMaterials(const FName ParameterName, const out ref LinearColor ParameterValue);  // [Final|Public] RVA: 0x7C548C4
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups);  // [Public] RVA: 0x7C54780
    bool IsMaterialSlotNameValid(FName MaterialSlotName);                                      // [Public] RVA: 0x7C546D0
    float GetOverlayMaterialMaxDrawDistance();                                                 // [Final|Public] RVA: 0x5D75E5C
    MaterialInterface* GetOverlayMaterial();                                                   // [Final|Public] RVA: 0x7C546B8
    int32 GetOctNormalUVIndex();                                                               // [Public] RVA: 0x7C54690
    TArray<FName> GetMaterialSlotNames();                                                      // [Public] RVA: 0x7C54440
    TArray<MaterialInterface*> GetMaterials();                                                 // [Public] RVA: 0x7C54568
    int32 GetMaterialIndex(FName MaterialSlotName);                                            // [Public] RVA: 0x7C54390
};

// ============================================================
// Inheritance: AnimInstance : Object
// Package: /Script/Engine
// ============================================================
class AnimInstance : public Object {
public:
    Skeleton* CurrentSkeleton;                                                                 // 0x0028 (0x08)
    uint8 RootMotionMode;                                                                      // 0x0030 (0x01)
    bool bUseMultiThreadedAnimationUpdate;                                                     // 0x0031 (0x01) BitMask: 0x01
    bool bUsingCopyPoseFromMesh;                                                               // 0x0031 (0x01) BitMask: 0x02
    bool bReceiveNotifiesFromLinkedInstances;                                                  // 0x0031 (0x01) BitMask: 0x10
    bool bPropagateNotifiesToLinkedInstances;                                                  // 0x0031 (0x01) BitMask: 0x20
    bool bQueueMontageEvents;                                                                  // 0x0031 (0x01) BitMask: 0x40
    FMulticastDelegate OnMontageBlendingOut;                                                   // 0x0038 (0x10)
    FMulticastDelegate OnMontageStarted;                                                       // 0x0048 (0x10)
    FMulticastDelegate OnMontageEnded;                                                         // 0x0058 (0x10)
    FMulticastDelegate OnAllMontageInstancesEnded;                                             // 0x0068 (0x10)
    AnimNotifyQueue NotifyQueue;                                                               // 0x0100 (0x70)
    TArray<AnimNotifyEvent> ActiveAnimNotifyState;                                             // 0x0170 (0x10)

    // --- Functions ---
    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);                          // [Final|Public] RVA: 0x7BAFC20
    void UnlinkAnimClassLayers(TSubclassOf<AnimInstance> InClass);                             // [Final|Public] RVA: 0x7BAFB84
    Pawn* TryGetPawnOwner();                                                                   // [Public] RVA: 0x7BAFB5C
    void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);                          // [Final|Public] RVA: 0x7BAFA74
    void SnapshotPose(out ref PoseSnapshot Snapshot);                                          // [Public] RVA: 0x7BAF878
    void SetRootMotionMode(uint8 Value);                                                       // [Final|Public] RVA: 0x7BA92A4
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);                                     // [Final|Public] RVA: 0x7BAF7D8
    void SetPropagateNotifiesToLinkedInstances(bool bSet);                                     // [Final|Public] RVA: 0x7BAF738
    void SetMorphTarget(FName MorphTargetName, float Value);                                   // [Final|Public] RVA: 0x7BAF63C
    void SavePoseSnapshot(FName SnapshotName);                                                 // [Public] RVA: 0x7BAF5A0
    void ResetDynamics(enum InTeleportType);                                                   // [Final|Public] RVA: 0x7BAF4FC
    AnimMontage* PlaySlotAnimationAsDynamicMontage(AnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);  // [Final|Public] RVA: 0x7BAF1C8
    float PlaySlotAnimation(AnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount);  // [Final|Public] RVA: 0x7BAEF80
    void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);                       // [Final|Public] RVA: 0x7BAEE98
    void Montage_Stop(float InBlendOutTime, const AnimMontage* Montage);                       // [Final|Public] RVA: 0x7BAEDB0
    void Montage_SetPosition(const AnimMontage* Montage, float NewPosition);                   // [Final|Public] RVA: 0x7BAECC8
    void Montage_SetPlayRate(const AnimMontage* Montage, float NewPlayRate);                   // [Final|Public] RVA: 0x7BAEBE0
    void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const AnimMontage* Montage);  // [Final|Public] RVA: 0x7BAEAA0
    void Montage_Resume(const AnimMontage* Montage);                                           // [Final|Public] RVA: 0x7BAE94C
    float Montage_Play(AnimMontage* MontageToPlay, float InPlayRate, enum ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);  // [Final|Public] RVA: 0x7BAE75C
    void Montage_Pause(const AnimMontage* Montage);                                            // [Final|Public] RVA: 0x7BAE6C0
    void Montage_JumpToSectionsEnd(FName SectionName, const AnimMontage* Montage);             // [Final|Public] RVA: 0x7BAE5D8
    void Montage_JumpToSection(FName SectionName, const AnimMontage* Montage);                 // [Final|Public] RVA: 0x7BAE4F0
    bool Montage_IsPlaying(const AnimMontage* Montage);                                        // [Final|Public] RVA: 0x7BAE448
    bool Montage_IsActive(const AnimMontage* Montage);                                         // [Final|Public] RVA: 0x7BAE3A0
    float Montage_GetPosition(const AnimMontage* Montage);                                     // [Final|Public] RVA: 0x7BAE2F4
    float Montage_GetPlayRate(const AnimMontage* Montage);                                     // [Final|Public] RVA: 0x7BAE248
    bool Montage_GetIsStopped(const AnimMontage* Montage);                                     // [Final|Public] RVA: 0x7BAE160
    FName Montage_GetCurrentSection(const AnimMontage* Montage);                               // [Final|Public] RVA: 0x7BAE0BC
    float Montage_GetBlendTime(const AnimMontage* Montage);                                    // [Final|Public] RVA: 0x7BAE010
    void LockAIResources(bool bLockMovement, bool LockAILogic);                                // [Final|Public] RVA: 0x7BADF34
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<AnimInstance> InClass);                   // [Final|Public] RVA: 0x7BADE4C
    void LinkAnimClassLayers(TSubclassOf<AnimInstance> InClass);                               // [Final|Public] RVA: 0x7BADDB0
    bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder);  // [Final|Public] RVA: 0x7BADC18
    bool IsPlayingSlotAnimation(const AnimSequenceBase* Asset, FName SlotNodeName);            // [Final|Public] RVA: 0x7BADB18
    bool IsAnyMontagePlaying();                                                                // [Final|Public] RVA: 0x7BADAFC
    bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName);                         // [Final|Public] RVA: 0x7BADA04
    bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, out float OutMarkerTime);   // [Final|Public] RVA: 0x7BAD8BC
    MarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName);                        // [Final|Public] RVA: 0x7BAD804
    float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);          // [Final|Public] RVA: 0x7BAD70C
    float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);                  // [Final|Public] RVA: 0x7BAD614
    float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);                   // [Final|Public] RVA: 0x7BAD51C
    float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);                           // [Final|Public] RVA: 0x7BAD424
    float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);                         // [Final|Public] RVA: 0x7BAD32C
    bool GetReceiveNotifiesFromLinkedInstances();                                              // [Final|Public] RVA: 0x7BAD310
    bool GetPropagateNotifiesToLinkedInstances();                                              // [Final|Public] RVA: 0x7BAD2F4
    SkeletalMeshComponent* GetOwningComponent();                                               // [Final|Public] RVA: 0x7BAD2DC
    Actor* GetOwningActor();                                                                   // [Final|Public] RVA: 0x1D8A05C
    void GetLinkedAnimLayerInstancesByGroup(FName InGroup, out TArray<AnimInstance*> OutLinkedInstances);  // [Final|Public] RVA: 0x7BAD1D8
    AnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, TSubclassOf<AnimInstance> InClass);  // [Final|Public] RVA: 0x7BAD0E0
    AnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);                            // [Final|Public] RVA: 0x7BAD038
    AnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<AnimInstance> InClass);        // [Final|Public] RVA: 0x7BACF90
    void GetLinkedAnimGraphInstancesByTag(FName InTag, out TArray<AnimInstance*> OutLinkedInstances);  // [Final|Public] RVA: 0x7BACE8C
    AnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);                                // [Final|Public] RVA: 0x7BACDE4
    float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);  // [Final|Public] RVA: 0x7BACCEC
    float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);         // [Final|Public] RVA: 0x7BACBF8
    float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);   // [Final|Public] RVA: 0x7BACB00
    float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);                        // [Final|Public] RVA: 0x7BACA08
    float GetInstanceMachineWeight(int32 MachineIndex);                                        // [Final|Public] RVA: 0x7BAC960
    float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);                              // [Final|Public] RVA: 0x7BAC8B8
    float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);                   // [Final|Public] RVA: 0x7BAC810
    float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);                           // [Final|Public] RVA: 0x7BAC768
    float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);                          // [Final|Public] RVA: 0x7BAC6C0
    float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);                                  // [Final|Public] RVA: 0x7BAC618
    float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);                                // [Final|Public] RVA: 0x7BAC570
    float GetCurveValueImmediately(FName CurveName);                                           // [Final|Public] RVA: 0x7BAC4C4
    float GetCurveValue(FName CurveName);                                                      // [Final|Public] RVA: 0x7BAC418
    FName GetCurrentStateName(int32 MachineIndex);                                             // [Final|Public] RVA: 0x7BAC378
    AnimMontage* GetCurrentActiveMontage();                                                    // [Final|Public] RVA: 0x7BAC354
    void GetAllCurveNames(out TArray<FName> OutNames);                                         // [Final|Public] RVA: 0x7BAC218
    void GetActiveCurveNames(enum CurveType, out TArray<FName> OutNames);                      // [Final|Public] RVA: 0x7BAC080
    void ClearMorphTargets();                                                                  // [Final|Public] RVA: 0x7BAC044
    float CalculateDirection(const out ref Vector Velocity, const out ref Rotator BaseRotation);  // [Final|Public] RVA: 0x7BABF10
    void BlueprintUpdateAnimation(float DeltaTimeX);                                           // [Public] RVA: 0x182D6BC
    void BlueprintPostEvaluateAnimation();                                                     // [Public] RVA: 0x182D6BC
    void BlueprintLinkedAnimationLayersInitialized();                                          // [Public] RVA: 0x182D6BC
    void BlueprintInitializeAnimation();                                                       // [Public] RVA: 0x182D6BC
    void BlueprintBeginPlay();                                                                 // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: Skeleton : Object
// Package: /Script/Engine
// ============================================================
class Skeleton : public Object {
public:
    TArray<BoneNode> BoneTree;                                                                 // 0x0038 (0x10)
    TArray<Transform> RefLocalPoses;                                                           // 0x0048 (0x10)
    Guid VirtualBoneGuid;                                                                      // 0x0170 (0x10)
    TArray<VirtualBone> VirtualBones;                                                          // 0x0180 (0x10)
    TArray<SkeletalMeshSocket*> Sockets;                                                       // 0x0190 (0x10)
    SmartNameContainer SmartNames;                                                             // 0x01F0 (0x50)
    TArray<BlendProfile*> BlendProfiles;                                                       // 0x0270 (0x10)
    TArray<AnimSlotGroup> SlotGroups;                                                          // 0x0280 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0358 (0x10)
};

// ============================================================
// Inheritance: BoneNode
// Package: /Script/Engine
// ============================================================
struct BoneNode {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    int32 ParentIndex;                                                                         // 0x0008 (0x04)
    uint8 TranslationRetargetingMode;                                                          // 0x000C (0x01)
};

// ============================================================
// Inheritance: VirtualBone
// Package: /Script/Engine
// ============================================================
struct VirtualBone {
public:
    FName SourceBoneName;                                                                      // 0x0000 (0x08)
    FName TargetBoneName;                                                                      // 0x0008 (0x08)
    FName VirtualBoneName;                                                                     // 0x0010 (0x08)
};

// ============================================================
// Inheritance: SkeletalMeshSocket : Object
// Package: /Script/Engine
// ============================================================
class SkeletalMeshSocket : public Object {
public:
    FName SocketName;                                                                          // 0x0028 (0x08)
    FName BoneName;                                                                            // 0x0030 (0x08)
    Vector RelativeLocation;                                                                   // 0x0038 (0x0C)
    Rotator RelativeRotation;                                                                  // 0x0044 (0x0C)
    Vector RelativeScale;                                                                      // 0x0050 (0x0C)
    bool bForceAlwaysAnimated;                                                                 // 0x005C (0x01) BitMask: 0xFF

    // --- Functions ---
    void InitializeSocketFromLocation(const SkeletalMeshComponent* SkelComp, Vector WorldLocation, Vector WorldNormal);  // [Final|Public] RVA: 0x7C84C74
    Vector GetSocketLocation(const SkeletalMeshComponent* SkelComp);                           // [Final|Public] RVA: 0x7C848DC
};

// ============================================================
// Inheritance: SmartNameContainer
// Package: /Script/Engine
// ============================================================
struct SmartNameContainer {
public:
};

// ============================================================
// Inheritance: BlendProfile : Object
// Package: /Script/Engine
// ============================================================
class BlendProfile : public Object {
public:
    Skeleton* OwningSkeleton;                                                                  // 0x0030 (0x08)
    TArray<BlendProfileBoneEntry> ProfileEntries;                                              // 0x0038 (0x10)
};

// ============================================================
// Inheritance: BlendProfileBoneEntry
// Package: /Script/Engine
// ============================================================
struct BlendProfileBoneEntry {
public:
    BoneReference BoneReference;                                                               // 0x0000 (0x10)
    float BlendScale;                                                                          // 0x0010 (0x04)
};

// ============================================================
// Inheritance: BoneReference
// Package: /Script/Engine
// ============================================================
struct BoneReference {
public:
    FName BoneName;                                                                            // 0x0000 (0x08)
};

// ============================================================
// Inheritance: AnimSlotGroup
// Package: /Script/Engine
// ============================================================
struct AnimSlotGroup {
public:
    FName GroupName;                                                                           // 0x0000 (0x08)
    TArray<FName> SlotNames;                                                                   // 0x0008 (0x10)
};

// ============================================================
// Inheritance: AnimNotifyQueue
// Package: /Script/Engine
// ============================================================
struct AnimNotifyQueue {
public:
    TArray<AnimNotifyEventReference> AnimNotifies;                                             // 0x0010 (0x10)
    TMap<FName, AnimNotifyArray> UnfilteredMontageAnimNotifies;                                // 0x0020 (0x50)
};

// ============================================================
// Inheritance: AnimNotifyEventReference
// Package: /Script/Engine
// ============================================================
struct AnimNotifyEventReference {
public:
    Object* NotifySource;                                                                      // 0x0008 (0x08)
};

// ============================================================
// Inheritance: AnimNotifyArray
// Package: /Script/Engine
// ============================================================
struct AnimNotifyArray {
public:
    TArray<AnimNotifyEventReference> Notifies;                                                 // 0x0000 (0x10)
};

// ============================================================
// Inheritance: AnimNotifyEvent : AnimLinkableElement
// Package: /Script/Engine
// ============================================================
struct AnimNotifyEvent : public AnimLinkableElement {
public:
    float DisplayTime;                                                                         // 0x0030 (0x04)
    float TriggerTimeOffset;                                                                   // 0x0034 (0x04)
    float EndTriggerTimeOffset;                                                                // 0x0038 (0x04)
    float TriggerWeightThreshold;                                                              // 0x003C (0x04)
    FName NotifyName;                                                                          // 0x0040 (0x08)
    AnimNotify* Notify;                                                                        // 0x0048 (0x08)
    AnimNotifyState* NotifyStateClass;                                                         // 0x0050 (0x08)
    float Duration;                                                                            // 0x0058 (0x04)
    AnimLinkableElement EndLink;                                                               // 0x0060 (0x30)
    bool bConvertedFromBranchingPoint;                                                         // 0x0090 (0x01) BitMask: 0xFF
    uint8 MontageTickType;                                                                     // 0x0091 (0x01)
    float NotifyTriggerChance;                                                                 // 0x0094 (0x04)
    uint8 NotifyFilterType;                                                                    // 0x0098 (0x01)
    int32 NotifyFilterLOD;                                                                     // 0x009C (0x04)
    bool bTriggerOnDedicatedServer;                                                            // 0x00A0 (0x01) BitMask: 0xFF
    bool bTriggerOnFollower;                                                                   // 0x00A1 (0x01) BitMask: 0xFF
    int32 TrackIndex;                                                                          // 0x00A4 (0x04)
};

// ============================================================
// Inheritance: AnimLinkableElement
// Package: /Script/Engine
// ============================================================
struct AnimLinkableElement {
public:
    AnimMontage* LinkedMontage;                                                                // 0x0008 (0x08)
    int32 SlotIndex;                                                                           // 0x0010 (0x04)
    int32 SegmentIndex;                                                                        // 0x0014 (0x04)
    uint8 LinkMethod;                                                                          // 0x0018 (0x01)
    uint8 CachedLinkMethod;                                                                    // 0x0019 (0x01)
    float SegmentBeginTime;                                                                    // 0x001C (0x04)
    float SegmentLength;                                                                       // 0x0020 (0x04)
    float LinkValue;                                                                           // 0x0024 (0x04)
    AnimSequenceBase* LinkedSequence;                                                          // 0x0028 (0x08)
};

// ============================================================
// Inheritance: AnimNotify : Object
// Package: /Script/Engine
// ============================================================
class AnimNotify : public Object {
public:

    // --- Functions ---
    bool Received_Notify(SkeletalMeshComponent* MeshComp, AnimSequenceBase* Animation);        // [Public] RVA: 0x182D6BC
    FString GetNotifyName();                                                                   // [Public] RVA: 0x1C8DA1C
};

// ============================================================
// Inheritance: AnimSequenceBase : AnimationAsset : Object
// Package: /Script/Engine
// ============================================================
class AnimSequenceBase : public AnimationAsset {
public:
    TArray<AnimNotifyEvent> Notifies;                                                          // 0x0080 (0x10)
    float SequenceLength;                                                                      // 0x0090 (0x04)
    float RateScale;                                                                           // 0x0094 (0x04)
    RawCurveTracks RawCurveData;                                                               // 0x0098 (0x10)
};

// ============================================================
// Inheritance: AnimationAsset : Object
// Package: /Script/Engine
// ============================================================
class AnimationAsset : public Object {
public:
    Skeleton* Skeleton;                                                                        // 0x0038 (0x08)
    TArray<AnimMetaData*> MetaData;                                                            // 0x0060 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0070 (0x10)

    // --- Functions ---
    float GetPlayLength();                                                                     // [Public] RVA: 0x7BA9FAC
};

// ============================================================
// Inheritance: RawCurveTracks
// Package: /Script/Engine
// ============================================================
struct RawCurveTracks {
public:
    TArray<FloatCurve> FloatCurves;                                                            // 0x0000 (0x10)
};

// ============================================================
// Inheritance: FloatCurve : AnimCurveBase
// Package: /Script/Engine
// ============================================================
struct FloatCurve : public AnimCurveBase {
public:
    RichCurve FloatCurve;                                                                      // 0x0018 (0x80)
};

// ============================================================
// Inheritance: AnimCurveBase
// Package: /Script/Engine
// ============================================================
struct AnimCurveBase {
public:
    FName LastObservedName;                                                                    // 0x0000 (0x08)
    SmartName Name;                                                                            // 0x0008 (0x0C)
    int32 CurveTypeFlags;                                                                      // 0x0014 (0x04)
};

// ============================================================
// Inheritance: RichCurve : RealCurve : IndexedCurve
// Package: /Script/Engine
// ============================================================
struct RichCurve : public RealCurve {
public:
    TArray<RichCurveKey> Keys;                                                                 // 0x0070 (0x10)
};

// ============================================================
// Inheritance: RealCurve : IndexedCurve
// Package: /Script/Engine
// ============================================================
struct RealCurve : public IndexedCurve {
public:
    float DefaultValue;                                                                        // 0x0068 (0x04)
    uint8 PreInfinityExtrap;                                                                   // 0x006C (0x01)
    uint8 PostInfinityExtrap;                                                                  // 0x006D (0x01)
};

// ============================================================
// Inheritance: IndexedCurve
// Package: /Script/Engine
// ============================================================
struct IndexedCurve {
public:
    KeyHandleMap KeyHandlesToIndices;                                                          // 0x0008 (0x60)
};

// ============================================================
// Inheritance: RichCurveKey
// Package: /Script/Engine
// ============================================================
struct RichCurveKey {
public:
    uint8 InterpMode;                                                                          // 0x0000 (0x01)
    uint8 TangentMode;                                                                         // 0x0001 (0x01)
    uint8 TangentWeightMode;                                                                   // 0x0002 (0x01)
    float Time;                                                                                // 0x0004 (0x04)
    float Value;                                                                               // 0x0008 (0x04)
    float ArriveTangent;                                                                       // 0x000C (0x04)
    float ArriveTangentWeight;                                                                 // 0x0010 (0x04)
    float LeaveTangent;                                                                        // 0x0014 (0x04)
    float LeaveTangentWeight;                                                                  // 0x0018 (0x04)
};

// ============================================================
// Inheritance: KeyHandleMap
// Package: /Script/Engine
// ============================================================
struct KeyHandleMap {
public:
};

// ============================================================
// Inheritance: SmartName
// Package: /Script/Engine
// ============================================================
struct SmartName {
public:
    FName DisplayName;                                                                         // 0x0000 (0x08)
};

// ============================================================
// Inheritance: AnimMetaData : Object
// Package: /Script/Engine
// ============================================================
class AnimMetaData : public Object {
public:
};

// ============================================================
// Inheritance: AnimNotifyState : Object
// Package: /Script/Engine
// ============================================================
class AnimNotifyState : public Object {
public:

    // --- Functions ---
    bool Received_NotifyTick(SkeletalMeshComponent* MeshComp, AnimSequenceBase* Animation, float FrameDeltaTime);  // [Public] RVA: 0x182D6BC
    bool Received_NotifyEnd(SkeletalMeshComponent* MeshComp, AnimSequenceBase* Animation);     // [Public] RVA: 0x182D6BC
    bool Received_NotifyBegin(SkeletalMeshComponent* MeshComp, AnimSequenceBase* Animation, float TotalDuration);  // [Public] RVA: 0x182D6BC
    FString GetNotifyName();                                                                   // [Public] RVA: 0x76AF230
};

// ============================================================
// Inheritance: AnimMontage : AnimCompositeBase : AnimSequenceBase : AnimationAsset : Object
// Package: /Script/Engine
// ============================================================
class AnimMontage : public AnimCompositeBase {
public:
    AlphaBlend BlendIn;                                                                        // 0x00A8 (0x30)
    float BlendInTime;                                                                         // 0x00D8 (0x04)
    AlphaBlend BlendOut;                                                                       // 0x00E0 (0x30)
    float BlendOutTime;                                                                        // 0x0110 (0x04)
    float BlendOutTriggerTime;                                                                 // 0x0114 (0x04)
    FName SyncGroup;                                                                           // 0x0118 (0x08)
    int32 SyncSlotIndex;                                                                       // 0x0120 (0x04)
    MarkerSyncData MarkerData;                                                                 // 0x0128 (0x20)
    TArray<CompositeSection> CompositeSections;                                                // 0x0148 (0x10)
    TArray<SlotAnimationTrack> SlotAnimTracks;                                                 // 0x0158 (0x10)
    TArray<BranchingPoint> BranchingPoints;                                                    // 0x0168 (0x10)
    bool bEnableRootMotionTranslation;                                                         // 0x0178 (0x01) BitMask: 0xFF
    bool bEnableRootMotionRotation;                                                            // 0x0179 (0x01) BitMask: 0xFF
    bool bEnableAutoBlendOut;                                                                  // 0x017A (0x01) BitMask: 0xFF
    uint8 RootMotionRootLock;                                                                  // 0x017B (0x01)
    TArray<BranchingPointMarker> BranchingPointMarkers;                                        // 0x0180 (0x10)
    TArray<int32> BranchingPointStateNotifyIndices;                                            // 0x0190 (0x10)
    TimeStretchCurve TimeStretchCurve;                                                         // 0x01A0 (0x28)
    FName TimeStretchCurveName;                                                                // 0x01C8 (0x08)

    // --- Functions ---
    float GetDefaultBlendOutTime();                                                            // [Final|Public] RVA: 0x76AE854
};

// ============================================================
// Inheritance: AnimCompositeBase : AnimSequenceBase : AnimationAsset : Object
// Package: /Script/Engine
// ============================================================
class AnimCompositeBase : public AnimSequenceBase {
public:
};

// ============================================================
// Inheritance: AlphaBlend
// Package: /Script/Engine
// ============================================================
struct AlphaBlend {
public:
    CurveFloat* CustomCurve;                                                                   // 0x0000 (0x08)
    float BlendTime;                                                                           // 0x0008 (0x04)
    enum BlendOption;                                                                          // 0x0024 (0x01)
};

// ============================================================
// Inheritance: CurveFloat : CurveBase : Object
// Package: /Script/Engine
// ============================================================
class CurveFloat : public CurveBase {
public:
    RichCurve FloatCurve;                                                                      // 0x0030 (0x80)
    bool bIsEventCurve;                                                                        // 0x00B0 (0x01) BitMask: 0xFF

    // --- Functions ---
    float GetFloatValue(float InTime);                                                         // [Final|Public] RVA: 0x1AE9F34
};

// ============================================================
// Inheritance: CurveBase : Object
// Package: /Script/Engine
// ============================================================
class CurveBase : public Object {
public:

    // --- Functions ---
    void GetValueRange(out float MinValue, out float MaxValue);                                // [Final|Public] RVA: 0x7BD0520
    void GetTimeRange(out float MinTime, out float MaxTime);                                   // [Final|Public] RVA: 0x7BD041C
};

// ============================================================
// Inheritance: MarkerSyncData
// Package: /Script/Engine
// ============================================================
struct MarkerSyncData {
public:
    TArray<AnimSyncMarker> AuthoredSyncMarkers;                                                // 0x0000 (0x10)
};

// ============================================================
// Inheritance: AnimSyncMarker
// Package: /Script/Engine
// ============================================================
struct AnimSyncMarker {
public:
    FName MarkerName;                                                                          // 0x0000 (0x08)
    float Time;                                                                                // 0x0008 (0x04)
};

// ============================================================
// Inheritance: CompositeSection : AnimLinkableElement
// Package: /Script/Engine
// ============================================================
struct CompositeSection : public AnimLinkableElement {
public:
    FName SectionName;                                                                         // 0x0030 (0x08)
    float StartTime;                                                                           // 0x0038 (0x04)
    FName NextSectionName;                                                                     // 0x003C (0x08)
    TArray<AnimMetaData*> MetaData;                                                            // 0x0048 (0x10)
};

// ============================================================
// Inheritance: SlotAnimationTrack
// Package: /Script/Engine
// ============================================================
struct SlotAnimationTrack {
public:
    FName SlotName;                                                                            // 0x0000 (0x08)
    AnimTrack AnimTrack;                                                                       // 0x0008 (0x10)
};

// ============================================================
// Inheritance: AnimTrack
// Package: /Script/Engine
// ============================================================
struct AnimTrack {
public:
    TArray<AnimSegment> AnimSegments;                                                          // 0x0000 (0x10)
};

// ============================================================
// Inheritance: AnimSegment
// Package: /Script/Engine
// ============================================================
struct AnimSegment {
public:
    AnimSequenceBase* AnimReference;                                                           // 0x0000 (0x08)
    float StartPos;                                                                            // 0x0008 (0x04)
    float AnimStartTime;                                                                       // 0x000C (0x04)
    float AnimEndTime;                                                                         // 0x0010 (0x04)
    float AnimPlayRate;                                                                        // 0x0014 (0x04)
    int32 LoopingCount;                                                                        // 0x0018 (0x04)
};

// ============================================================
// Inheritance: BranchingPoint : AnimLinkableElement
// Package: /Script/Engine
// ============================================================
struct BranchingPoint : public AnimLinkableElement {
public:
    FName EventName;                                                                           // 0x0030 (0x08)
    float DisplayTime;                                                                         // 0x0038 (0x04)
    float TriggerTimeOffset;                                                                   // 0x003C (0x04)
};

// ============================================================
// Inheritance: BranchingPointMarker
// Package: /Script/Engine
// ============================================================
struct BranchingPointMarker {
public:
    int32 NotifyIndex;                                                                         // 0x0000 (0x04)
    float TriggerTime;                                                                         // 0x0004 (0x04)
    uint8 NotifyEventType;                                                                     // 0x0008 (0x01)
};

// ============================================================
// Inheritance: TimeStretchCurve
// Package: /Script/Engine
// ============================================================
struct TimeStretchCurve {
public:
    float SamplingRate;                                                                        // 0x0000 (0x04)
    float CurveValueMinPrecision;                                                              // 0x0004 (0x04)
    TArray<TimeStretchCurveMarker> Markers;                                                    // 0x0008 (0x10)
    float Sum_dT_i_by_C_i;                                                                     // 0x0018 (0x04)
};

// ============================================================
// Inheritance: TimeStretchCurveMarker
// Package: /Script/Engine
// ============================================================
struct TimeStretchCurveMarker {
public:
    float Time;                                                                                // 0x0000 (0x04)
    float Alpha;                                                                               // 0x000C (0x04)
};

// ============================================================
// Inheritance: PoseSnapshot
// Package: /Script/Engine
// ============================================================
struct PoseSnapshot {
public:
    TArray<Transform> LocalTransforms;                                                         // 0x0000 (0x10)
    TArray<FName> BoneNames;                                                                   // 0x0010 (0x10)
    FName SkeletalMeshName;                                                                    // 0x0020 (0x08)
    FName SnapshotName;                                                                        // 0x0028 (0x08)
    bool bIsValid;                                                                             // 0x0030 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: MarkerSyncAnimPosition
// Package: /Script/Engine
// ============================================================
struct MarkerSyncAnimPosition {
public:
    FName PreviousMarkerName;                                                                  // 0x0000 (0x08)
    FName NextMarkerName;                                                                      // 0x0008 (0x08)
    float PositionBetweenMarkers;                                                              // 0x0010 (0x04)
};

// ============================================================
// Inheritance: SingleAnimationPlayData
// Package: /Script/Engine
// ============================================================
struct SingleAnimationPlayData {
public:
    AnimationAsset* AnimToPlay;                                                                // 0x0000 (0x08)
    bool bSavedLooping;                                                                        // 0x0008 (0x01) BitMask: 0x01
    bool bSavedPlaying;                                                                        // 0x0008 (0x01) BitMask: 0x02
    float SavedPosition;                                                                       // 0x000C (0x04)
    float SavedPlayRate;                                                                       // 0x0010 (0x04)
};

// ============================================================
// Inheritance: ClothingSimulationFactory : Object
// Package: /Script/ClothingSystemRuntimeInterface
// ============================================================
class ClothingSimulationFactory : public Object {
public:
};

// ============================================================
// Inheritance: ClothingSimulationInteractor : Object
// Package: /Script/ClothingSystemRuntimeInterface
// ============================================================
class ClothingSimulationInteractor : public Object {
public:

    // --- Functions ---
    void SetAnimDriveSpringStiffness(float InStiffness);                                       // [Public] RVA: 0x769C6DC
    void PhysicsAssetUpdated();                                                                // [Public] RVA: 0x1D76C64
    float GetSimulationTime();                                                                 // [Public] RVA: 0x769C6B0
    int32 GetNumSubsteps();                                                                    // [Public] RVA: 0x6064280
    int32 GetNumKinematicParticles();                                                          // [Public] RVA: 0x769C688
    int32 GetNumIterations();                                                                  // [Public] RVA: 0x769C660
    int32 GetNumDynamicParticles();                                                            // [Public] RVA: 0x769C638
    int32 GetNumCloths();                                                                      // [Public] RVA: 0x769C610
    void EnableGravityOverride(const out ref Vector InVector);                                 // [Public] RVA: 0x769C540
    void DisableGravityOverride();                                                             // [Public] RVA: 0x4DE6E58
    void ClothConfigUpdated();                                                                 // [Public] RVA: 0x53745A8
};

// ============================================================
// Inheritance: SkeletalMesh : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class SkeletalMesh : public StreamableRenderAsset {
public:
    Skeleton* Skeleton;                                                                        // 0x0098 (0x08)
    BoxSphereBounds ImportedBounds;                                                            // 0x00A0 (0x1C)
    BoxSphereBounds ExtendedBounds;                                                            // 0x00BC (0x1C)
    Vector PositiveBoundsExtension;                                                            // 0x00D8 (0x0C)
    Vector NegativeBoundsExtension;                                                            // 0x00E4 (0x0C)
    TArray<SkeletalMaterial> Materials;                                                        // 0x00F0 (0x10)
    TArray<BoneMirrorInfo> SkelMirrorTable;                                                    // 0x0100 (0x10)
    TArray<SkeletalMeshLODInfo> LODInfo;                                                       // 0x0110 (0x10)
    PerPlatformInt MinLOD;                                                                     // 0x0170 (0x08)
    PerPlatformBool DisableBelowMinLodStripping;                                               // 0x0178 (0x01)
    uint8 SkelMirrorAxis;                                                                      // 0x0179 (0x01)
    uint8 SkelMirrorFlipAxis;                                                                  // 0x017A (0x01)
    bool bUseFullPrecisionUVs;                                                                 // 0x017B (0x01) BitMask: 0x01
    bool bUseHighPrecisionTangentBasis;                                                        // 0x017B (0x01) BitMask: 0x02
    bool bHasBeenSimplified;                                                                   // 0x017B (0x01) BitMask: 0x04
    bool bHasVertexColors;                                                                     // 0x017B (0x01) BitMask: 0x08
    bool bEnablePerPolyCollision;                                                              // 0x017B (0x01) BitMask: 0x20
    BodySetup* BodySetup;                                                                      // 0x0180 (0x08)
    PhysicsAsset* PhysicsAsset;                                                                // 0x0188 (0x08)
    PhysicsAsset* ShadowPhysicsAsset;                                                          // 0x0190 (0x08)
    TArray<NodeMappingContainer*> NodeMappingData;                                             // 0x0198 (0x10)
    bool bForceUseCPUMorphTargets;                                                             // 0x01A8 (0x01) BitMask: 0xFF
    int32 OctNormalUVIndex;                                                                    // 0x01AC (0x04)
    TArray<MorphTarget*> MorphTargets;                                                         // 0x01B0 (0x10)
    TSubclassOf<AnimInstance> PostProcessAnimBlueprint;                                        // 0x0338 (0x08)
    TArray<ClothingAssetBase*> MeshClothingAssets;                                             // 0x0340 (0x10)
    SkeletalMeshSamplingInfo SamplingInfo;                                                     // 0x0350 (0x30)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0380 (0x10)
    TArray<SkeletalMeshSocket*> Sockets;                                                       // 0x0390 (0x10)
    bool DisableLowestDetailLevelShadow;                                                       // 0x03B0 (0x01) BitMask: 0xFF
    TArray<SkinWeightProfileInfo> SkinWeightProfiles;                                          // 0x03B8 (0x10)

    // --- Functions ---
    void SetLODSettings(SkeletalMeshLODSettings* InLODSettings);                               // [Final|Public] RVA: 0x514E094
    void SetDefaultAnimatingRig(Object* InAnimatingRig);                                       // [Final|Public] RVA: 0x7C7DC88
    int32 NumSockets();                                                                        // [Final|Public] RVA: 0x7C7DA4C
    TArray<FString> K2_GetAllMorphTargetNames();                                               // [Final|Public] RVA: 0x7C7DA10
    bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections);          // [Final|Public] RVA: 0x7C7D91C
    SkeletalMeshSocket* GetSocketByIndex(int32 Index);                                         // [Final|Public] RVA: 0x7C7D874
    NodeMappingContainer* GetNodeMappingContainer(Blueprint* SourceAsset);                     // [Final|Public] RVA: 0x7C7D7CC
    BoxSphereBounds GetImportedBounds();                                                       // [Final|Public] RVA: 0x7C7D798
    Object* GetDefaultAnimatingRig();                                                          // [Final|Public] RVA: 0x7C7D648
    BoxSphereBounds GetBounds();                                                               // [Final|Public] RVA: 0x7C7D5D4
    SkeletalMeshSocket* FindSocketInfo(FName InSocketName, out Transform OutTransform, out int32 OutBoneIndex, out int32 OutIndex);  // [Final|Public] RVA: 0x7C7D3CC
    SkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, out int32 OutIndex);            // [Final|Public] RVA: 0x7C7D2CC
    SkeletalMeshSocket* FindSocket(FName InSocketName);                                        // [Final|Public] RVA: 0x7C7D22C
};

// ============================================================
// Inheritance: BoxSphereBounds
// Package: /Script/CoreUObject
// ============================================================
struct BoxSphereBounds {
public:
    Vector Origin;                                                                             // 0x0000 (0x0C)
    Vector BoxExtent;                                                                          // 0x000C (0x0C)
    float SphereRadius;                                                                        // 0x0018 (0x04)
};

// ============================================================
// Inheritance: SkeletalMaterial
// Package: /Script/Engine
// ============================================================
struct SkeletalMaterial {
public:
    MaterialInterface* MaterialInterface;                                                      // 0x0000 (0x08)
    FName MaterialSlotName;                                                                    // 0x0008 (0x08)
    MeshUVChannelInfo UVChannelData;                                                           // 0x0010 (0x14)
};

// ============================================================
// Inheritance: MaterialInterface : Object
// Package: /Script/Engine
// ============================================================
class MaterialInterface : public Object {
public:
    SubsurfaceProfile* SubsurfaceProfile;                                                      // 0x0038 (0x08)
    LightmassMaterialInterfaceSettings LightmassSettings;                                      // 0x0050 (0x10)
    TArray<MaterialTextureInfo> TextureStreamingData;                                          // 0x0060 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0070 (0x10)
    uint8 CurDynamicMode_GameThread;                                                           // 0x0080 (0x01)

    // --- Functions ---
    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse);  // [Public] RVA: 0x7C52C98
    void SetCurDynamicMode(uint8 InDynamicMode, bool bForce);                                  // [Public] RVA: 0x7C52BA8
    PhysicalMaterialMask* GetPhysicalMaterialMask();                                           // [Public] RVA: 0x7C51B80
    PhysicalMaterial* GetPhysicalMaterialFromMap(int32 Index);                                 // [Public] RVA: 0x7C51AD4
    PhysicalMaterial* GetPhysicalMaterial();                                                   // [Public] RVA: 0x7C51AAC
    MaterialParameterInfo GetParameterInfo(uint8 Association, FName ParameterName, MaterialFunctionInterface* LayerFunction);  // [Final|Public] RVA: 0x7C51920
    uint8 GetCurDynamicMode();                                                                 // [Public] RVA: 0x6011778
    Material* GetBaseMaterial();                                                               // [Final|Public] RVA: 0x6853628
};

// ============================================================
// Inheritance: SubsurfaceProfile : Object
// Package: /Script/Engine
// ============================================================
class SubsurfaceProfile : public Object {
public:
    SubsurfaceProfileStruct Settings;                                                          // 0x0028 (0x8C)
};

// ============================================================
// Inheritance: SubsurfaceProfileStruct
// Package: /Script/Engine
// ============================================================
struct SubsurfaceProfileStruct {
public:
    LinearColor SurfaceAlbedo;                                                                 // 0x0000 (0x10)
    LinearColor MeanFreePathColor;                                                             // 0x0010 (0x10)
    float MeanFreePathDistance;                                                                // 0x0020 (0x04)
    float WorldUnitScale;                                                                      // 0x0024 (0x04)
    bool bEnableBurley;                                                                        // 0x0028 (0x01) BitMask: 0xFF
    float ScatterRadius;                                                                       // 0x002C (0x04)
    LinearColor SubsurfaceColor;                                                               // 0x0030 (0x10)
    LinearColor FalloffColor;                                                                  // 0x0040 (0x10)
    LinearColor BoundaryColorBleed;                                                            // 0x0050 (0x10)
    float ExtinctionScale;                                                                     // 0x0060 (0x04)
    float NormalScale;                                                                         // 0x0064 (0x04)
    float ScatteringDistribution;                                                              // 0x0068 (0x04)
    float IOR;                                                                                 // 0x006C (0x04)
    float Roughness0;                                                                          // 0x0070 (0x04)
    float Roughness1;                                                                          // 0x0074 (0x04)
    float LobeMix;                                                                             // 0x0078 (0x04)
    LinearColor TransmissionTintColor;                                                         // 0x007C (0x10)
};

// ============================================================
// Inheritance: LinearColor
// Package: /Script/CoreUObject
// ============================================================
struct LinearColor {
public:
    float R;                                                                                   // 0x0000 (0x04)
    float G;                                                                                   // 0x0004 (0x04)
    float B;                                                                                   // 0x0008 (0x04)
    float A;                                                                                   // 0x000C (0x04)
};

// ============================================================
// Inheritance: LightmassMaterialInterfaceSettings
// Package: /Script/Engine
// ============================================================
struct LightmassMaterialInterfaceSettings {
public:
    float EmissiveBoost;                                                                       // 0x0000 (0x04)
    float DiffuseBoost;                                                                        // 0x0004 (0x04)
    float ExportResolutionScale;                                                               // 0x0008 (0x04)
    bool bCastShadowAsMasked;                                                                  // 0x000C (0x01) BitMask: 0x01
    bool bOverrideCastShadowAsMasked;                                                          // 0x000C (0x01) BitMask: 0x02
    bool bOverrideEmissiveBoost;                                                               // 0x000C (0x01) BitMask: 0x04
    bool bOverrideDiffuseBoost;                                                                // 0x000C (0x01) BitMask: 0x08
    bool bOverrideExportResolutionScale;                                                       // 0x000C (0x01) BitMask: 0x10
    uint8 SpecialMode;                                                                         // 0x000D (0x01)
};

// ============================================================
// Inheritance: MaterialTextureInfo
// Package: /Script/Engine
// ============================================================
struct MaterialTextureInfo {
public:
    float SamplingScale;                                                                       // 0x0000 (0x04)
    int32 UVChannelIndex;                                                                      // 0x0004 (0x04)
    FName TextureName;                                                                         // 0x0008 (0x08)
};

// ============================================================
// Inheritance: PhysicalMaterialMask : Object
// Package: /Script/Engine
// ============================================================
class PhysicalMaterialMask : public Object {
public:
    int32 UVChannelIndex;                                                                      // 0x0028 (0x04)
    uint8 AddressX;                                                                            // 0x002C (0x01)
    uint8 AddressY;                                                                            // 0x002D (0x01)
};

// ============================================================
// Inheritance: MaterialFunctionInterface : Object
// Package: /Script/Engine
// ============================================================
class MaterialFunctionInterface : public Object {
public:
    Guid StateId;                                                                              // 0x0028 (0x10)
    enum MaterialFunctionUsage;                                                                // 0x0038 (0x01)
};

// ============================================================
// Inheritance: MaterialParameterInfo
// Package: /Script/Engine
// ============================================================
struct MaterialParameterInfo {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    uint8 Association;                                                                         // 0x0008 (0x01)
    int32 Index;                                                                               // 0x000C (0x04)
};

// ============================================================
// Inheritance: Material : MaterialInterface : Object
// Package: /Script/Engine
// ============================================================
class Material : public MaterialInterface {
public:
    PhysicalMaterial* PhysMaterial;                                                            // 0x0090 (0x08)
    PhysicalMaterialMask* PhysMaterialMask;                                                    // 0x0098 (0x08)
    PhysicalMaterial* PhysicalMaterialMap;                                                     // 0x00A0 (0x08)
    ScalarMaterialInput Metallic;                                                              // 0x00E0 (0x0C)
    ScalarMaterialInput Specular;                                                              // 0x00F4 (0x0C)
    ScalarMaterialInput Anisotropy;                                                            // 0x0108 (0x0C)
    VectorMaterialInput Normal;                                                                // 0x011C (0x0C)
    VectorMaterialInput Tangent;                                                               // 0x0130 (0x0C)
    ColorMaterialInput EmissiveColor;                                                          // 0x0144 (0x0C)
    uint8 MaterialDomain;                                                                      // 0x0158 (0x01)
    uint8 BlendMode;                                                                           // 0x0159 (0x01)
    uint8 DecalBlendMode;                                                                      // 0x015A (0x01)
    uint8 MaterialDecalResponse;                                                               // 0x015B (0x01)
    uint8 ShadingModel;                                                                        // 0x015C (0x01)
    TArray<uint8> MaterialDynamicModes;                                                        // 0x0160 (0x10)
    bool bCastDynamicShadowAsMasked;                                                           // 0x0170 (0x01) BitMask: 0x01
    MaterialShadingModelField ShadingModels;                                                   // 0x0172 (0x02)
    float OpacityMaskClipValue;                                                                // 0x0174 (0x04)
    uint8 DirLightShadowBiasMethodOverride;                                                    // 0x0178 (0x01)
    float ScreenSpaceVariance;                                                                 // 0x017C (0x04)
    float Threshold;                                                                           // 0x0180 (0x04)
    VectorMaterialInput WorldPositionOffset;                                                   // 0x0184 (0x0C)
    ScalarMaterialInput Refraction;                                                            // 0x0198 (0x0C)
    MaterialAttributesInput MaterialAttributes;                                                // 0x01B0 (0x18)
    ScalarMaterialInput PixelDepthOffset;                                                      // 0x01D0 (0x0C)
    ShadingModelMaterialInput ShadingModelFromMaterialExpression;                              // 0x01E4 (0x0C)
    bool bEnableSeparateTranslucency;                                                          // 0x01F8 (0x01) BitMask: 0x01
    bool bEnableResponsiveAA;                                                                  // 0x01F8 (0x01) BitMask: 0x02
    bool bScreenSpaceReflections;                                                              // 0x01F8 (0x01) BitMask: 0x04
    bool bContactShadows;                                                                      // 0x01F8 (0x01) BitMask: 0x08
    bool TwoSided;                                                                             // 0x01F8 (0x01) BitMask: 0x10
    bool DitheredLODTransition;                                                                // 0x01F8 (0x01) BitMask: 0x20
    bool DitherOpacityMask;                                                                    // 0x01F8 (0x01) BitMask: 0x40
    bool bAllowNegativeEmissiveColor;                                                          // 0x01F8 (0x01) BitMask: 0x80
    uint8 TranslucencyLightingMode;                                                            // 0x01F9 (0x01)
    bool bEnableMobileSeparateTranslucency;                                                    // 0x01FA (0x01) BitMask: 0x01
    int32 NumCustomizedUVs;                                                                    // 0x01FC (0x04)
    int32 NumCustomDataVector;                                                                 // 0x0200 (0x04)
    float TranslucencyDirectionalLightingIntensity;                                            // 0x0204 (0x04)
    float TranslucentShadowDensityScale;                                                       // 0x0208 (0x04)
    float TranslucentSelfShadowDensityScale;                                                   // 0x020C (0x04)
    float TranslucentSelfShadowSecondDensityScale;                                             // 0x0210 (0x04)
    float TranslucentSelfShadowSecondOpacity;                                                  // 0x0214 (0x04)
    float TranslucentBackscatteringExponent;                                                   // 0x0218 (0x04)
    LinearColor TranslucentMultipleScatteringExtinction;                                       // 0x021C (0x10)
    float TranslucentShadowStartOffset;                                                        // 0x022C (0x04)
    int16 TranslucencySortPriorityOffset;                                                      // 0x0230 (0x02)
    int16 MaterialStencilTypeForMpe;                                                           // 0x0232 (0x02)
    bool bDisableDepthTest;                                                                    // 0x0234 (0x01) BitMask: 0x01
    bool bWriteOnlyAlpha;                                                                      // 0x0234 (0x01) BitMask: 0x02
    bool bGenerateSphericalParticleNormals;                                                    // 0x0234 (0x01) BitMask: 0x04
    bool bTangentSpaceNormal;                                                                  // 0x0234 (0x01) BitMask: 0x08
    bool bUseEmissiveForDynamicAreaLighting;                                                   // 0x0234 (0x01) BitMask: 0x10
    bool bBlockGI;                                                                             // 0x0234 (0x01) BitMask: 0x20
    bool bUsedAsSpecialEngineMaterial;                                                         // 0x0234 (0x01) BitMask: 0x40
    bool bUsedWithSkeletalMesh;                                                                // 0x0234 (0x01) BitMask: 0x80
    bool bUsedWithEditorCompositing;                                                           // 0x0235 (0x01) BitMask: 0x01
    bool bUsedWithParticleSprites;                                                             // 0x0235 (0x01) BitMask: 0x02
    bool bUsedWithBeamTrails;                                                                  // 0x0235 (0x01) BitMask: 0x04
    bool bUsedWithMeshParticles;                                                               // 0x0235 (0x01) BitMask: 0x08
    bool bUsedWithNiagaraSprites;                                                              // 0x0235 (0x01) BitMask: 0x10
    bool bUsedWithNiagaraRibbons;                                                              // 0x0235 (0x01) BitMask: 0x20
    bool bUsedWithNiagaraMeshParticles;                                                        // 0x0235 (0x01) BitMask: 0x40
    bool bUsedWithGeometryCache;                                                               // 0x0235 (0x01) BitMask: 0x80
    bool bUsedWithStaticLighting;                                                              // 0x0236 (0x01) BitMask: 0x01
    bool bUsedWithMorphTargets;                                                                // 0x0236 (0x01) BitMask: 0x02
    bool bUsedWithSplineMeshes;                                                                // 0x0236 (0x01) BitMask: 0x04
    bool bUsedWithInstancedStaticMeshes;                                                       // 0x0236 (0x01) BitMask: 0x08
    bool bUsedWithMergedInstancedStaticMeshes;                                                 // 0x0236 (0x01) BitMask: 0x10
    bool bUsedWithGeometryCollections;                                                         // 0x0236 (0x01) BitMask: 0x20
    bool bUsesDistortion;                                                                      // 0x0236 (0x01) BitMask: 0x40
    bool bUsedWithClothing;                                                                    // 0x0236 (0x01) BitMask: 0x80
    bool bUsedWithWater;                                                                       // 0x0238 (0x01) BitMask: 0x01
    bool bUsedWithHairStrands;                                                                 // 0x0238 (0x01) BitMask: 0x02
    bool bUsedWithLidarPointCloud;                                                             // 0x0238 (0x01) BitMask: 0x04
    bool bUsedWithVirtualHeightfieldMesh;                                                      // 0x0238 (0x01) BitMask: 0x08
    bool bUsedWithUI;                                                                          // 0x023C (0x01) BitMask: 0x01
    bool bAutomaticallySetUsageInEditor;                                                       // 0x023C (0x01) BitMask: 0x02
    bool bFullyRough;                                                                          // 0x023C (0x01) BitMask: 0x04
    bool bUseDBuffer;                                                                          // 0x023C (0x01) BitMask: 0x08
    bool bMaterialWiseOutputVelocity;                                                          // 0x023C (0x01) BitMask: 0x10
    bool bForwardShadingVoxelReflection;                                                       // 0x023C (0x01) BitMask: 0x20
    bool bForceDisableILC;                                                                     // 0x023C (0x01) BitMask: 0x40
    bool bForceDisableDynamicLightShadow;                                                      // 0x023C (0x01) BitMask: 0x80
    bool bForceEnableTwoSidedFoliageDBufferInput;                                              // 0x023D (0x01) BitMask: 0x01
    bool bMaterialOnlyBeUsedOutdoor;                                                           // 0x023D (0x01) BitMask: 0x02
    bool bUseVolumetricDistanceMap;                                                            // 0x023D (0x01) BitMask: 0x04
    bool bDisableVRS;                                                                          // 0x023D (0x01) BitMask: 0x08
    bool bDisableBindlessVertexColor;                                                          // 0x023D (0x01) BitMask: 0x10
    bool bDisableBindlessLightmap;                                                             // 0x023D (0x01) BitMask: 0x20
    bool bUseFullPrecision;                                                                    // 0x023D (0x01) BitMask: 0x80
    uint8 FloatPrecisionMode;                                                                  // 0x023E (0x01)
    uint8 FloatPrecisionModeVulkanOverride;                                                    // 0x023F (0x01)
    bool bUseFullPrecisionPreZOnly;                                                            // 0x0240 (0x01) BitMask: 0x01
    bool bUseFullPrecisionSpecular;                                                            // 0x0240 (0x01) BitMask: 0x02
    bool bUseFullPrecisionUniform;                                                             // 0x0240 (0x01) BitMask: 0x04
    bool bUseLightmapDirectionality;                                                           // 0x0240 (0x01) BitMask: 0x08
    bool bUseAlphaToCoverage;                                                                  // 0x0240 (0x01) BitMask: 0x10
    bool bForwardRenderUsePreintegratedGFForSimpleIBL;                                         // 0x0244 (0x01) BitMask: 0x01
    bool bMobilePointLightSSSEnable;                                                           // 0x0248 (0x01) BitMask: 0x01
    Texture2D* MobilePreIntegratedBRDFLUT;                                                     // 0x0250 (0x08)
    bool bRenderInEarlyDepthPass;                                                              // 0x0258 (0x01) BitMask: 0x01
    bool bDisableInstancing;                                                                   // 0x0258 (0x01) BitMask: 0x02
    bool bUseHQForwardReflections;                                                             // 0x0258 (0x01) BitMask: 0x04
    bool bUsePlanarForwardReflections;                                                         // 0x0258 (0x01) BitMask: 0x08
    bool bForceDisableAdditiveReflection;                                                      // 0x0258 (0x01) BitMask: 0x10
    bool bForceDisableLocalTonemapping;                                                        // 0x0258 (0x01) BitMask: 0x20
    bool bNormalCurvatureToRoughness;                                                          // 0x0258 (0x01) BitMask: 0x40
    uint8 D3D11TessellationMode;                                                               // 0x0259 (0x01)
    bool bEnableCrackFreeDisplacement;                                                         // 0x025A (0x01) BitMask: 0x01
    bool bEnableAdaptiveTessellation;                                                          // 0x025A (0x01) BitMask: 0x02
    bool AllowTranslucentCustomDepthWrites;                                                    // 0x025A (0x01) BitMask: 0x04
    bool bDisableTranslucentDepthWrite;                                                        // 0x025A (0x01) BitMask: 0x08
    bool Wireframe;                                                                            // 0x025A (0x01) BitMask: 0x10
    uint8 ShadingRate;                                                                         // 0x025B (0x01)
    uint8 MaxShadingRate;                                                                      // 0x025C (0x01)
    bool bForceDXC;                                                                            // 0x025D (0x01) BitMask: 0x01
    bool bAllowInlineRayTracing;                                                               // 0x025D (0x01) BitMask: 0x02
    bool bCanMaskedBeAssumedOpaque;                                                            // 0x025D (0x01) BitMask: 0x04
    bool bIsMasked;                                                                            // 0x025D (0x01) BitMask: 0x08
    bool bIsPreviewMaterial;                                                                   // 0x025D (0x01) BitMask: 0x10
    bool bIsFunctionPreviewMaterial;                                                           // 0x025D (0x01) BitMask: 0x20
    bool bUseMaterialAttributes;                                                               // 0x025D (0x01) BitMask: 0x40
    bool bCastRayTracedShadows;                                                                // 0x025D (0x01) BitMask: 0x80
    bool bUseTranslucencyVertexFog;                                                            // 0x025E (0x01) BitMask: 0x01
    bool bApplyCloudFogging;                                                                   // 0x025E (0x01) BitMask: 0x02
    bool bMobileHair;                                                                          // 0x025E (0x01) BitMask: 0x04
    bool bIsMainCharForMpe;                                                                    // 0x025E (0x01) BitMask: 0x08
    bool bIsSky;                                                                               // 0x025E (0x01) BitMask: 0x10
    bool bComputeFogPerPixel;                                                                  // 0x025E (0x01) BitMask: 0x20
    bool bOutputTranslucentVelocity;                                                           // 0x025E (0x01) BitMask: 0x40
    bool bAllowDevelopmentShaderCompile;                                                       // 0x025E (0x01) BitMask: 0x80
    bool bIsMaterialEditorStatsMaterial;                                                       // 0x025F (0x01) BitMask: 0x01
    uint8 BlendableLocation;                                                                   // 0x0260 (0x01)
    bool BlendableOutputAlpha;                                                                 // 0x0261 (0x01) BitMask: 0x01
    bool bEnableStencilTest;                                                                   // 0x0261 (0x01) BitMask: 0x02
    uint8 StencilCompare;                                                                      // 0x0262 (0x01)
    uint8 StencilRefValue;                                                                     // 0x0263 (0x01)
    uint8 RefractionMode;                                                                      // 0x0264 (0x01)
    int32 BlendablePriority;                                                                   // 0x0268 (0x04)
    bool bIsBlendable;                                                                         // 0x026C (0x01) BitMask: 0x01
    bool bIsForceIgnoreBlend;                                                                  // 0x026D (0x01) BitMask: 0xFF
    bool bForceResolveDepth;                                                                   // 0x026E (0x01) BitMask: 0x01
    uint8 WriteToInput;                                                                        // 0x026F (0x01)
    uint32 UsageFlagWarnings;                                                                  // 0x0270 (0x04)
    float RefractionDepthBias;                                                                 // 0x0274 (0x04)
    Guid StateId;                                                                              // 0x0278 (0x10)
    float MaxDisplacement;                                                                     // 0x0288 (0x04)
    MaterialCachedExpressionData CachedExpressionData;                                         // 0x02C0 (0x230)
};

// ============================================================
// Inheritance: ScalarMaterialInput : MaterialInput
// Package: /Script/Engine
// ============================================================
struct ScalarMaterialInput : public MaterialInput {
public:
};

// ============================================================
// Inheritance: MaterialInput
// Package: /Script/Engine
// ============================================================
struct MaterialInput {
public:
    int32 OutputIndex;                                                                         // 0x0000 (0x04)
    FName ExpressionName;                                                                      // 0x0004 (0x08)
};

// ============================================================
// Inheritance: VectorMaterialInput : MaterialInput
// Package: /Script/Engine
// ============================================================
struct VectorMaterialInput : public MaterialInput {
public:
};

// ============================================================
// Inheritance: ColorMaterialInput : MaterialInput
// Package: /Script/Engine
// ============================================================
struct ColorMaterialInput : public MaterialInput {
public:
};

// ============================================================
// Inheritance: MaterialShadingModelField
// Package: /Script/Engine
// ============================================================
struct MaterialShadingModelField {
public:
    uint16 ShadingModelField;                                                                  // 0x0000 (0x02)
};

// ============================================================
// Inheritance: MaterialAttributesInput : ExpressionInput
// Package: /Script/Engine
// ============================================================
struct MaterialAttributesInput : public ExpressionInput {
public:
    uint64 PropertyConnectedBitmask;                                                           // 0x0010 (0x08)
};

// ============================================================
// Inheritance: ExpressionInput
// Package: /Script/Engine
// ============================================================
struct ExpressionInput {
public:
    int32 OutputIndex;                                                                         // 0x0000 (0x04)
    FName ExpressionName;                                                                      // 0x0004 (0x08)
};

// ============================================================
// Inheritance: ShadingModelMaterialInput : MaterialInput
// Package: /Script/Engine
// ============================================================
struct ShadingModelMaterialInput : public MaterialInput {
public:
};

// ============================================================
// Inheritance: MaterialCachedExpressionData
// Package: /Script/Engine
// ============================================================
struct MaterialCachedExpressionData {
public:
    MaterialCachedParameters Parameters;                                                       // 0x0000 (0x1A0)
    TArray<Object*> ReferencedTextures;                                                        // 0x01A0 (0x10)
    TArray<MaterialFunctionInfo> FunctionInfos;                                                // 0x01B0 (0x10)
    TArray<MaterialParameterCollectionInfo> ParameterCollectionInfos;                          // 0x01C0 (0x10)
    TArray<MaterialFunctionInterface*> DefaultLayers;                                          // 0x01D0 (0x10)
    TArray<MaterialFunctionInterface*> DefaultLayerBlends;                                     // 0x01E0 (0x10)
    TArray<LandscapeGrassType*> GrassTypes;                                                    // 0x01F0 (0x10)
    TArray<FName> DynamicParameterNames;                                                       // 0x0200 (0x10)
    TArray<bool> QualityLevelsUsed;                                                            // 0x0210 (0x10)
    bool bHasRuntimeVirtualTextureOutput;                                                      // 0x0220 (0x01) BitMask: 0x01
    bool bHasSceneColor;                                                                       // 0x0220 (0x01) BitMask: 0x02
    uint64 MaterialAttributesPropertyConnectedBitmask;                                         // 0x0228 (0x08)
};

// ============================================================
// Inheritance: MaterialCachedParameters
// Package: /Script/Engine
// ============================================================
struct MaterialCachedParameters {
public:
    MaterialCachedParameterEntry RuntimeEntries;                                               // 0x0000 (0x40)
    TArray<float> ScalarValues;                                                                // 0x0140 (0x10)
    TArray<LinearColor> VectorValues;                                                          // 0x0150 (0x10)
    TArray<Texture*> TextureValues;                                                            // 0x0160 (0x10)
    TArray<Font*> FontValues;                                                                  // 0x0170 (0x10)
    TArray<int32> FontPageValues;                                                              // 0x0180 (0x10)
    TArray<RuntimeVirtualTexture*> RuntimeVirtualTextureValues;                                // 0x0190 (0x10)
};

// ============================================================
// Inheritance: MaterialCachedParameterEntry
// Package: /Script/Engine
// ============================================================
struct MaterialCachedParameterEntry {
public:
    TArray<uint64> NameHashes;                                                                 // 0x0000 (0x10)
    TArray<MaterialParameterInfo> ParameterInfos;                                              // 0x0010 (0x10)
    TArray<Guid> ExpressionGuids;                                                              // 0x0020 (0x10)
    TArray<bool> Overrides;                                                                    // 0x0030 (0x10)
};

// ============================================================
// Inheritance: Font : Object
// Package: /Script/Engine
// ============================================================
class Font : public Object {
public:
    enum FontCacheType;                                                                        // 0x0030 (0x01)
    TArray<FontCharacter> Characters;                                                          // 0x0038 (0x10)
    TArray<Texture2D*> Textures;                                                               // 0x0048 (0x10)
    int32 IsRemapped;                                                                          // 0x0058 (0x04)
    float EmScale;                                                                             // 0x005C (0x04)
    float Ascent;                                                                              // 0x0060 (0x04)
    float Descent;                                                                             // 0x0064 (0x04)
    float Leading;                                                                             // 0x0068 (0x04)
    int32 Kerning;                                                                             // 0x006C (0x04)
    FontImportOptionsData ImportOptions;                                                       // 0x0070 (0xB0)
    int32 NumCharacters;                                                                       // 0x0120 (0x04)
    TArray<int32> MaxCharHeight;                                                               // 0x0128 (0x10)
    float ScalingFactor;                                                                       // 0x0138 (0x04)
    int32 LegacyFontSize;                                                                      // 0x013C (0x04)
    FName LegacyFontName;                                                                      // 0x0140 (0x08)
    CompositeFont CompositeFont;                                                               // 0x0148 (0x38)

    // --- Functions ---
    bool InFontLibrary(FString CurString);                                                     // [Final|Public] RVA: 0x7BD8588
};

// ============================================================
// Inheritance: FontCharacter
// Package: /Script/Engine
// ============================================================
struct FontCharacter {
public:
    int32 StartU;                                                                              // 0x0000 (0x04)
    int32 StartV;                                                                              // 0x0004 (0x04)
    int32 USize;                                                                               // 0x0008 (0x04)
    int32 VSize;                                                                               // 0x000C (0x04)
    uint8 TextureIndex;                                                                        // 0x0010 (0x01)
    int32 VerticalOffset;                                                                      // 0x0014 (0x04)
};

// ============================================================
// Inheritance: FontImportOptionsData
// Package: /Script/Engine
// ============================================================
struct FontImportOptionsData {
public:
    FString FontName;                                                                          // 0x0000 (0x10)
    float Height;                                                                              // 0x0010 (0x04)
    bool bEnableAntialiasing;                                                                  // 0x0014 (0x01) BitMask: 0x01
    bool bEnableBold;                                                                          // 0x0014 (0x01) BitMask: 0x02
    bool bEnableItalic;                                                                        // 0x0014 (0x01) BitMask: 0x04
    bool bEnableUnderline;                                                                     // 0x0014 (0x01) BitMask: 0x08
    bool bAlphaOnly;                                                                           // 0x0014 (0x01) BitMask: 0x10
    uint8 CharacterSet;                                                                        // 0x0018 (0x01)
    FString Chars;                                                                             // 0x0020 (0x10)
    FString UnicodeRange;                                                                      // 0x0030 (0x10)
    FString CharsFilePath;                                                                     // 0x0040 (0x10)
    FString CharsFileWildcard;                                                                 // 0x0050 (0x10)
    bool bCreatePrintableOnly;                                                                 // 0x0060 (0x01) BitMask: 0x01
    bool bIncludeASCIIRange;                                                                   // 0x0060 (0x01) BitMask: 0x02
    LinearColor ForegroundColor;                                                               // 0x0064 (0x10)
    bool bEnableDropShadow;                                                                    // 0x0074 (0x01) BitMask: 0x01
    int32 TexturePageWidth;                                                                    // 0x0078 (0x04)
    int32 TexturePageMaxHeight;                                                                // 0x007C (0x04)
    int32 XPadding;                                                                            // 0x0080 (0x04)
    int32 YPadding;                                                                            // 0x0084 (0x04)
    int32 ExtendBoxTop;                                                                        // 0x0088 (0x04)
    int32 ExtendBoxBottom;                                                                     // 0x008C (0x04)
    int32 ExtendBoxRight;                                                                      // 0x0090 (0x04)
    int32 ExtendBoxLeft;                                                                       // 0x0094 (0x04)
    bool bEnableLegacyMode;                                                                    // 0x0098 (0x01) BitMask: 0x01
    int32 Kerning;                                                                             // 0x009C (0x04)
    bool bUseDistanceFieldAlpha;                                                               // 0x00A0 (0x01) BitMask: 0x01
    int32 DistanceFieldScaleFactor;                                                            // 0x00A4 (0x04)
    float DistanceFieldScanRadiusScale;                                                        // 0x00A8 (0x04)
};

// ============================================================
// Inheritance: CompositeFont
// Package: /Script/SlateCore
// ============================================================
struct CompositeFont {
public:
    Typeface DefaultTypeface;                                                                  // 0x0000 (0x10)
    CompositeFallbackFont FallbackTypeface;                                                    // 0x0010 (0x18)
    TArray<CompositeSubFont> SubTypefaces;                                                     // 0x0028 (0x10)
};

// ============================================================
// Inheritance: Typeface
// Package: /Script/SlateCore
// ============================================================
struct Typeface {
public:
    TArray<TypefaceEntry> Fonts;                                                               // 0x0000 (0x10)
};

// ============================================================
// Inheritance: TypefaceEntry
// Package: /Script/SlateCore
// ============================================================
struct TypefaceEntry {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    FontData Font;                                                                             // 0x0008 (0x20)
};

// ============================================================
// Inheritance: FontData
// Package: /Script/SlateCore
// ============================================================
struct FontData {
public:
    FString FontFilename;                                                                      // 0x0000 (0x10)
    enum Hinting;                                                                              // 0x0010 (0x01)
    enum LoadingPolicy;                                                                        // 0x0011 (0x01)
    int32 SubFaceIndex;                                                                        // 0x0014 (0x04)
    Object* FontFaceAsset;                                                                     // 0x0018 (0x08)
};

// ============================================================
// Inheritance: CompositeFallbackFont
// Package: /Script/SlateCore
// ============================================================
struct CompositeFallbackFont {
public:
    Typeface Typeface;                                                                         // 0x0000 (0x10)
    float ScalingFactor;                                                                       // 0x0010 (0x04)
};

// ============================================================
// Inheritance: CompositeSubFont : CompositeFallbackFont
// Package: /Script/SlateCore
// ============================================================
struct CompositeSubFont : public CompositeFallbackFont {
public:
    TArray<Int32Range> CharacterRanges;                                                        // 0x0018 (0x10)
    FString Cultures;                                                                          // 0x0028 (0x10)
};

// ============================================================
// Inheritance: Int32Range
// Package: /Script/CoreUObject
// ============================================================
struct Int32Range {
public:
    Int32RangeBound LowerBound;                                                                // 0x0000 (0x08)
    Int32RangeBound UpperBound;                                                                // 0x0008 (0x08)
};

// ============================================================
// Inheritance: Int32RangeBound
// Package: /Script/CoreUObject
// ============================================================
struct Int32RangeBound {
public:
    uint8 Type;                                                                                // 0x0000 (0x01)
    int32 Value;                                                                               // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MaterialFunctionInfo
// Package: /Script/Engine
// ============================================================
struct MaterialFunctionInfo {
public:
    Guid StateId;                                                                              // 0x0000 (0x10)
    MaterialFunctionInterface* Function;                                                       // 0x0010 (0x08)
};

// ============================================================
// Inheritance: MaterialParameterCollectionInfo
// Package: /Script/Engine
// ============================================================
struct MaterialParameterCollectionInfo {
public:
    Guid StateId;                                                                              // 0x0000 (0x10)
    MaterialParameterCollection* ParameterCollection;                                          // 0x0010 (0x08)
};

// ============================================================
// Inheritance: MaterialParameterCollection : Object
// Package: /Script/Engine
// ============================================================
class MaterialParameterCollection : public Object {
public:
    Guid StateId;                                                                              // 0x0028 (0x10)
    TArray<CollectionScalarParameter> ScalarParameters;                                        // 0x0038 (0x10)
    TArray<CollectionVectorParameter> VectorParameters;                                        // 0x0048 (0x10)
};

// ============================================================
// Inheritance: CollectionScalarParameter : CollectionParameterBase
// Package: /Script/Engine
// ============================================================
struct CollectionScalarParameter : public CollectionParameterBase {
public:
    float DefaultValue;                                                                        // 0x0018 (0x04)
};

// ============================================================
// Inheritance: CollectionParameterBase
// Package: /Script/Engine
// ============================================================
struct CollectionParameterBase {
public:
    FName ParameterName;                                                                       // 0x0000 (0x08)
    Guid ID;                                                                                   // 0x0008 (0x10)
};

// ============================================================
// Inheritance: CollectionVectorParameter : CollectionParameterBase
// Package: /Script/Engine
// ============================================================
struct CollectionVectorParameter : public CollectionParameterBase {
public:
    LinearColor DefaultValue;                                                                  // 0x0018 (0x10)
};

// ============================================================
// Inheritance: LandscapeGrassType : Object
// Package: /Script/Landscape
// ============================================================
class LandscapeGrassType : public Object {
public:
    TArray<GrassVariety> GrassVarieties;                                                       // 0x0028 (0x10)
    Texture* LUT;                                                                              // 0x0038 (0x08)
    bool bEnableDensityScaling;                                                                // 0x0040 (0x01) BitMask: 0x01
    StaticMesh* GrassMesh;                                                                     // 0x0048 (0x08)
    float GrassDensity;                                                                        // 0x0050 (0x04)
    float PlacementJitter;                                                                     // 0x0054 (0x04)
    int32 StartCullDistance;                                                                   // 0x0058 (0x04)
    int32 EndCullDistance;                                                                     // 0x005C (0x04)
    bool RandomRotation;                                                                       // 0x0060 (0x01) BitMask: 0xFF
    bool AlignToSurface;                                                                       // 0x0061 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: GrassVariety
// Package: /Script/Landscape
// ============================================================
struct GrassVariety {
public:
    StaticMesh* GrassMesh;                                                                     // 0x0000 (0x08)
    TArray<MaterialInterface*> OverrideMaterials;                                              // 0x0008 (0x10)
    PerPlatformFloat GrassDensity;                                                             // 0x0018 (0x04)
    PerPlatformFloat MaxOffset;                                                                // 0x001C (0x04)
    PerPlatformFloat MinGrassWeight;                                                           // 0x0020 (0x04)
    FloatInterval SlopeRange;                                                                  // 0x0024 (0x08)
    bool bUseGrid;                                                                             // 0x002C (0x01) BitMask: 0xFF
    float PlacementJitter;                                                                     // 0x0030 (0x04)
    PerPlatformInt StartCullDistance;                                                          // 0x0034 (0x08)
    PerPlatformInt EndCullDistance;                                                            // 0x003C (0x08)
    float FalloffExponent;                                                                     // 0x0044 (0x04)
    FloatInterval OffsetWeight;                                                                // 0x0048 (0x08)
    FloatInterval OffsetRange;                                                                 // 0x0050 (0x08)
    FloatInterval EdgeScaleWeight;                                                             // 0x0058 (0x08)
    FloatInterval EdgeScaleRatio;                                                              // 0x0060 (0x08)
    int32 MinLOD;                                                                              // 0x0068 (0x04)
    enum Scaling;                                                                              // 0x006C (0x01)
    enum GrassPreservePriority;                                                                // 0x0070 (0x04)
    FloatInterval ScaleX;                                                                      // 0x0074 (0x08)
    FloatInterval ScaleY;                                                                      // 0x007C (0x08)
    FloatInterval ScaleZ;                                                                      // 0x0084 (0x08)
    bool RandomRotation;                                                                       // 0x008C (0x01) BitMask: 0xFF
    bool AlignToSurface;                                                                       // 0x008D (0x01) BitMask: 0xFF
    bool bUseLandscapeLightmap;                                                                // 0x008E (0x01) BitMask: 0xFF
    LightingChannels LightingChannels;                                                         // 0x008F (0x01)
    bool bReceivesDecals;                                                                      // 0x0090 (0x01) BitMask: 0xFF
    bool bCastDynamicShadow;                                                                   // 0x0091 (0x01) BitMask: 0xFF
    bool bCastShadow;                                                                          // 0x0092 (0x01) BitMask: 0xFF
    bool bCastContactShadow;                                                                   // 0x0093 (0x01) BitMask: 0xFF
    bool bKeepInstanceBufferCPUCopy;                                                           // 0x0094 (0x01) BitMask: 0xFF
    bool bForceUseSkyLightAsDiffuseGI;                                                         // 0x0095 (0x01) BitMask: 0xFF
    uint8 IndirectLightingCacheQuality;                                                        // 0x0096 (0x01)
    bool bReMergeInstancing;                                                                   // 0x0097 (0x01) BitMask: 0xFF
    bool bHiddenShadowOnShadowCapture;                                                         // 0x0098 (0x01) BitMask: 0xFF
    enum ShadowCaptureLayer;                                                                   // 0x0099 (0x01)
    bool bGenerateShadowProxy;                                                                 // 0x009A (0x01) BitMask: 0xFF
    StaticMesh* ShadowProxyMesh;                                                               // 0x00A0 (0x08)
    Vector ShadowMeshScaleRatio;                                                               // 0x00A8 (0x0C)
    TArray<MaterialInterface*> ShadowProxyOverrideMaterials;                                   // 0x00B8 (0x10)
};

// ============================================================
// Inheritance: StaticMesh : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class StaticMesh : public StreamableRenderAsset {
public:
    PerPlatformInt MinLOD;                                                                     // 0x0098 (0x08)
    uint8 MinLODLowQuality;                                                                    // 0x00A0 (0x01)
    float LpvBiasMultiplier;                                                                   // 0x00A4 (0x04)
    TArray<StaticMaterial> StaticMaterials;                                                    // 0x00A8 (0x10)
    float LightmapUVDensity;                                                                   // 0x00B8 (0x04)
    int32 LightMapResolution;                                                                  // 0x00BC (0x04)
    int32 LightMapCoordinateIndex;                                                             // 0x00C0 (0x04)
    float DistanceFieldSelfShadowBias;                                                         // 0x00C4 (0x04)
    BodySetup* BodySetup;                                                                      // 0x00C8 (0x08)
    int32 LODForCollision;                                                                     // 0x00D0 (0x04)
    bool bCAFuzzyShadow;                                                                       // 0x00D4 (0x01) BitMask: 0x01
    uint8 MinShadowLOD;                                                                        // 0x00D5 (0x01)
    bool bGenerateMeshDistanceField;                                                           // 0x00D6 (0x01) BitMask: 0x01
    bool bStripComplexCollisionForConsole;                                                     // 0x00D6 (0x01) BitMask: 0x02
    bool bHasNavigationData;                                                                   // 0x00D6 (0x01) BitMask: 0x04
    bool bSupportUniformlyDistributedSampling;                                                 // 0x00D6 (0x01) BitMask: 0x08
    bool bSupportPhysicalMaterialMasks;                                                        // 0x00D6 (0x01) BitMask: 0x10
    bool bIsBuiltAtRuntime;                                                                    // 0x00D6 (0x01) BitMask: 0x20
    bool bAllowCPUAccess;                                                                      // 0x00D6 (0x01) BitMask: 0x80
    bool bSupportGpuUniformlyDistributedSampling;                                              // 0x00D7 (0x01) BitMask: 0x01
    enum LODShareLightmapType;                                                                 // 0x00E8 (0x01)
    bool bPriorityOccluder;                                                                    // 0x00E9 (0x01) BitMask: 0xFF
    TArray<StaticMeshSocket*> Sockets;                                                         // 0x0100 (0x10)
    Vector PositiveBoundsExtension;                                                            // 0x0120 (0x0C)
    Vector NegativeBoundsExtension;                                                            // 0x012C (0x0C)
    BoxSphereBounds ExtendedBounds;                                                            // 0x0138 (0x1C)
    int32 DistanceFieldForceNumMips;                                                           // 0x0154 (0x04)
    int32 OctNormalUVIndex;                                                                    // 0x0158 (0x04)
    bool bNoBLASDeferBuild;                                                                    // 0x015C (0x01) BitMask: 0xFF
    int32 ElementToIgnoreForTexFactor;                                                         // 0x0160 (0x04)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x0168 (0x10)
    Object* EditableMesh;                                                                      // 0x0178 (0x08)
    NavCollisionBase* NavCollision;                                                            // 0x0180 (0x08)
    MFGpuDrivenMeshSettings MFGeometrySettings;                                                // 0x0188 (0x01)

    // --- Functions ---
    void SetStaticMaterials(const out ref TArray<StaticMaterial> InStaticMaterials);           // [Final|Public] RVA: 0x7C938F0
    void RemoveSocket(StaticMeshSocket* socket);                                               // [Final|Public] RVA: 0x7C92480
    TArray<StaticMaterial> GetStaticMaterials();                                               // [Final|Public] RVA: 0x7C92408
    int32 GetNumSections(int32 InLod);                                                         // [Final|Public] RVA: 0x7C92280
    int32 GetNumLODs();                                                                        // [Final|Public] RVA: 0x7C92260
    void GetMinimumLODForPlatforms(out TMap<FName, int32> PlatformMinimumLODs);                // [Final|Public] RVA: 0x7C92104
    int32 GetMinimumLODForPlatform(const out ref FName PlatformName);                          // [Final|Public] RVA: 0x7C9207C
    int32 GetMaterialIndex(FName MaterialSlotName);                                            // [Final|Public] RVA: 0x7C91FD4
    MaterialInterface* GetMaterial(int32 MaterialIndex);                                       // [Final|Public] RVA: 0x7C91F2C
    BoxSphereBounds GetBounds();                                                               // [Final|Public] RVA: 0x7C91E40
    Box GetBoundingBox();                                                                      // [Final|Public] RVA: 0x7C91D90
    StaticMeshSocket* FindSocket(FName InSocketName);                                          // [Final|Public] RVA: 0x7C91CD0
    StaticMeshDescription* CreateStaticMeshDescription(Object* Outer);                         // [Static|Final|Public] RVA: 0x7C91C18
    void BuildFromStaticMeshDescriptions(const out ref TArray<StaticMeshDescription*> StaticMeshDescriptions, bool bBuildSimpleCollision);  // [Final|Public] RVA: 0x7C91B0C
    void AddSocket(StaticMeshSocket* socket);                                                  // [Final|Public] RVA: 0x7C91A18
    FName AddMaterial(MaterialInterface* Material);                                            // [Final|Public] RVA: 0x7C9189C
};

// ============================================================
// Inheritance: PerPlatformInt
// Package: /Script/Engine
// ============================================================
struct PerPlatformInt {
public:
    int32 Default;                                                                             // 0x0000 (0x04)
    int32 ScalableBias;                                                                        // 0x0004 (0x04)
};

// ============================================================
// Inheritance: StaticMaterial
// Package: /Script/Engine
// ============================================================
struct StaticMaterial {
public:
    MaterialInterface* MaterialInterface;                                                      // 0x0000 (0x08)
    FName MaterialSlotName;                                                                    // 0x0008 (0x08)
    FName ImportedMaterialSlotName;                                                            // 0x0010 (0x08)
    MeshUVChannelInfo UVChannelData;                                                           // 0x0018 (0x14)
};

// ============================================================
// Inheritance: MeshUVChannelInfo
// Package: /Script/Engine
// ============================================================
struct MeshUVChannelInfo {
public:
    bool bInitialized;                                                                         // 0x0000 (0x01) BitMask: 0xFF
    bool bOverrideDensities;                                                                   // 0x0001 (0x01) BitMask: 0xFF
    float LocalUVDensities;                                                                    // 0x0004 (0x04)
};

// ============================================================
// Inheritance: StaticMeshSocket : Object
// Package: /Script/Engine
// ============================================================
class StaticMeshSocket : public Object {
public:
    FName SocketName;                                                                          // 0x0028 (0x08)
    Vector RelativeLocation;                                                                   // 0x0030 (0x0C)
    Rotator RelativeRotation;                                                                  // 0x003C (0x0C)
    Vector RelativeScale;                                                                      // 0x0048 (0x0C)
    FString Tag;                                                                               // 0x0058 (0x10)
};

// ============================================================
// Inheritance: NavCollisionBase : Object
// Package: /Script/Engine
// ============================================================
class NavCollisionBase : public Object {
public:
    bool bIsDynamicObstacle;                                                                   // 0x0028 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: MFGpuDrivenMeshSettings
// Package: /Script/Engine
// ============================================================
struct MFGpuDrivenMeshSettings {
public:
    enum Type;                                                                                 // 0x0000 (0x01)
};

// ============================================================
// Inheritance: StaticMeshDescription : MeshDescriptionBase : Object
// Package: /Script/StaticMeshDescription
// ============================================================
class StaticMeshDescription : public MeshDescriptionBase {
public:

    // --- Functions ---
    void SetVertexInstanceUV(VertexInstanceID VertexInstanceID, Vector2D UV, int32 UVIndex);   // [Final|Public] RVA: 0x76850D8
    void SetPolygonGroupMaterialSlotName(PolygonGroupID PolygonGroupID, const out ref FName SlotName);  // [Final|Public] RVA: 0x7684FE4
    Vector2D GetVertexInstanceUV(VertexInstanceID VertexInstanceID, int32 UVIndex);            // [Final|Public] RVA: 0x7684EEC
    void CreateCube(Vector Center, Vector HalfExtents, PolygonGroupID PolygonGroup, out PolygonID PolygonID_PlusX, out PolygonID PolygonID_MinusX, out PolygonID PolygonID_PlusY, out PolygonID PolygonID_MinusY, out PolygonID PolygonID_PlusZ, out PolygonID PolygonID_MinusZ);  // [Final|Public] RVA: 0x7684B2C
};

// ============================================================
// Inheritance: MeshDescriptionBase : Object
// Package: /Script/MeshDescription
// ============================================================
class MeshDescriptionBase : public Object {
public:

    // --- Functions ---
    void SetVertexPosition(VertexID VertexID, const out ref Vector position);                  // [Final|Public] RVA: 0x767CA5C
    void SetPolygonVertexInstance(PolygonID PolygonID, int32 PerimeterIndex, VertexInstanceID VertexInstanceID);  // [Final|Public] RVA: 0x767C914
    void SetPolygonPolygonGroup(PolygonID PolygonID, PolygonGroupID PolygonGroupID);           // [Final|Public] RVA: 0x767C824
    void ReversePolygonFacing(PolygonID PolygonID);                                            // [Final|Public] RVA: 0x767C784
    void ReserveNewVertices(int32 NumberOfNewVertices);                                        // [Final|Public] RVA: 0x767C6E4
    void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);                          // [Final|Public] RVA: 0x767C454
    void ReserveNewTriangles(int32 NumberOfNewTriangles);                                      // [Final|Public] RVA: 0x767C640
    void ReserveNewPolygons(const int32 NumberOfNewPolygons);                                  // [Final|Public] RVA: 0x767C59C
    void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);                              // [Final|Public] RVA: 0x767C4F8
    void ReserveNewEdges(int32 NumberOfNewEdges);                                              // [Final|Public] RVA: 0x767C454
    bool IsVertexValid(VertexID VertexID);                                                     // [Final|Public] RVA: 0x767C370
    bool IsVertexOrphaned(VertexID VertexID);                                                  // [Final|Public] RVA: 0x767C2C4
    bool IsVertexInstanceValid(VertexInstanceID VertexInstanceID);                             // [Final|Public] RVA: 0x767C1E0
    bool IsTriangleValid(const TriangleID TriangleID);                                         // [Final|Public] RVA: 0x767C0F8
    bool IsTrianglePartOfNgon(TriangleID TriangleID);                                          // [Final|Public] RVA: 0x767C04C
    bool IsPolygonValid(PolygonID PolygonID);                                                  // [Final|Public] RVA: 0x767BF64
    bool IsPolygonGroupValid(PolygonGroupID PolygonGroupID);                                   // [Final|Public] RVA: 0x767BE7C
    bool IsEmpty();                                                                            // [Final|Public] RVA: 0x767BE34
    bool IsEdgeValid(EdgeID EdgeID);                                                           // [Final|Public] RVA: 0x767BD4C
    bool IsEdgeInternalToPolygon(EdgeID EdgeID, PolygonID PolygonID);                          // [Final|Public] RVA: 0x767BC4C
    bool IsEdgeInternal(EdgeID EdgeID);                                                        // [Final|Public] RVA: 0x767BBA0
    void GetVertexVertexInstances(VertexID VertexID, out TArray<VertexInstanceID> OutVertexInstanceIDs);  // [Final|Public] RVA: 0x767BA00
    Vector GetVertexPosition(VertexID VertexID);                                               // [Final|Public] RVA: 0x767B940
    EdgeID GetVertexPairEdge(VertexID VertexID0, VertexID VertexID1);                          // [Final|Public] RVA: 0x767B844
    VertexID GetVertexInstanceVertex(VertexInstanceID VertexInstanceID);                       // [Final|Public] RVA: 0x767B7A0
    EdgeID GetVertexInstancePairEdge(VertexInstanceID VertexInstanceID0, VertexInstanceID VertexInstanceID1);  // [Final|Public] RVA: 0x767B6A4
    VertexInstanceID GetVertexInstanceForTriangleVertex(TriangleID TriangleID, VertexID VertexID);  // [Final|Public] RVA: 0x767B5A8
    VertexInstanceID GetVertexInstanceForPolygonVertex(PolygonID PolygonID, VertexID VertexID);  // [Final|Public] RVA: 0x767B4AC
    void GetVertexInstanceConnectedTriangles(VertexInstanceID VertexInstanceID, out TArray<TriangleID> OutConnectedTriangleIDs);  // [Final|Public] RVA: 0x767B30C
    void GetVertexInstanceConnectedPolygons(VertexInstanceID VertexInstanceID, out TArray<PolygonID> OutConnectedPolygonIDs);  // [Final|Public] RVA: 0x767B16C
    void GetVertexConnectedTriangles(VertexID VertexID, out TArray<TriangleID> OutConnectedTriangleIDs);  // [Final|Public] RVA: 0x767AFCC
    void GetVertexConnectedPolygons(VertexID VertexID, out TArray<PolygonID> OutConnectedPolygonIDs);  // [Final|Public] RVA: 0x767AE2C
    void GetVertexConnectedEdges(VertexID VertexID, out TArray<EdgeID> OutEdgeIDs);            // [Final|Public] RVA: 0x767AC8C
    void GetVertexAdjacentVertices(VertexID VertexID, out TArray<VertexID> OutAdjacentVertexIDs);  // [Final|Public] RVA: 0x767AAEC
    void GetTriangleVertices(TriangleID TriangleID, out TArray<VertexID> OutVertexIDs);        // [Final|Public] RVA: 0x767A94C
    void GetTriangleVertexInstances(TriangleID TriangleID, out TArray<VertexInstanceID> OutVertexInstanceIDs);  // [Final|Public] RVA: 0x767A7AC
    VertexInstanceID GetTriangleVertexInstance(TriangleID TriangleID, int32 Index);            // [Final|Public] RVA: 0x767A6B8
    PolygonGroupID GetTrianglePolygonGroup(TriangleID TriangleID);                             // [Final|Public] RVA: 0x767A614
    PolygonID GetTrianglePolygon(TriangleID TriangleID);                                       // [Final|Public] RVA: 0x767A570
    void GetTriangleEdges(TriangleID TriangleID, out TArray<EdgeID> OutEdgeIDs);               // [Final|Public] RVA: 0x767A3D0
    void GetTriangleAdjacentTriangles(TriangleID TriangleID, out TArray<TriangleID> OutTriangleIDs);  // [Final|Public] RVA: 0x767A230
    void GetPolygonVertices(PolygonID PolygonID, out TArray<VertexID> OutVertexIDs);           // [Final|Public] RVA: 0x767A090
    void GetPolygonVertexInstances(PolygonID PolygonID, out TArray<VertexInstanceID> OutVertexInstanceIDs);  // [Final|Public] RVA: 0x7679EF0
    void GetPolygonTriangles(PolygonID PolygonID, out TArray<TriangleID> OutTriangleIDs);      // [Final|Public] RVA: 0x7679D50
    PolygonGroupID GetPolygonPolygonGroup(PolygonID PolygonID);                                // [Final|Public] RVA: 0x7679CAC
    void GetPolygonPerimeterEdges(PolygonID PolygonID, out TArray<EdgeID> OutEdgeIDs);         // [Final|Public] RVA: 0x7679B0C
    void GetPolygonInternalEdges(PolygonID PolygonID, out TArray<EdgeID> OutEdgeIDs);          // [Final|Public] RVA: 0x767996C
    void GetPolygonGroupPolygons(PolygonGroupID PolygonGroupID, out TArray<PolygonID> OutPolygonIDs);  // [Final|Public] RVA: 0x76797CC
    void GetPolygonAdjacentPolygons(PolygonID PolygonID, out TArray<PolygonID> OutPolygonIDs);  // [Final|Public] RVA: 0x767962C
    int32 GetNumVertexVertexInstances(VertexID VertexID);                                      // [Final|Public] RVA: 0x7679580
    int32 GetNumVertexInstanceConnectedTriangles(VertexInstanceID VertexInstanceID);           // [Final|Public] RVA: 0x76794D4
    int32 GetNumVertexInstanceConnectedPolygons(VertexInstanceID VertexInstanceID);            // [Final|Public] RVA: 0x7679428
    int32 GetNumVertexConnectedTriangles(VertexID VertexID);                                   // [Final|Public] RVA: 0x767937C
    int32 GetNumVertexConnectedPolygons(VertexID VertexID);                                    // [Final|Public] RVA: 0x76792D0
    int32 GetNumVertexConnectedEdges(VertexID VertexID);                                       // [Final|Public] RVA: 0x7679224
    int32 GetNumPolygonVertices(PolygonID PolygonID);                                          // [Final|Public] RVA: 0x7679178
    int32 GetNumPolygonTriangles(PolygonID PolygonID);                                         // [Final|Public] RVA: 0x76790CC
    int32 GetNumPolygonInternalEdges(PolygonID PolygonID);                                     // [Final|Public] RVA: 0x7679020
    int32 GetNumPolygonGroupPolygons(PolygonGroupID PolygonGroupID);                           // [Final|Public] RVA: 0x7678F74
    int32 GetNumEdgeConnectedTriangles(EdgeID EdgeID);                                         // [Final|Public] RVA: 0x7678EC8
    int32 GetNumEdgeConnectedPolygons(EdgeID EdgeID);                                          // [Final|Public] RVA: 0x7678E1C
    void GetEdgeVertices(const EdgeID EdgeID, out TArray<VertexID> OutVertexIDs);              // [Final|Public] RVA: 0x7678C7C
    VertexID GetEdgeVertex(EdgeID EdgeID, int32 VertexNumber);                                 // [Final|Public] RVA: 0x7678B88
    void GetEdgeConnectedTriangles(EdgeID EdgeID, out TArray<TriangleID> OutConnectedTriangleIDs);  // [Final|Public] RVA: 0x76789E8
    void GetEdgeConnectedPolygons(EdgeID EdgeID, out TArray<PolygonID> OutConnectedPolygonIDs);  // [Final|Public] RVA: 0x7678848
    void Empty();                                                                              // [Final|Public] RVA: 0x7678830
    void DeleteVertexInstance(VertexInstanceID VertexInstanceID, out TArray<VertexID> OrphanedVertices);  // [Final|Public] RVA: 0x767871C
    void DeleteVertex(VertexID VertexID);                                                      // [Final|Public] RVA: 0x767867C
    void DeleteTriangle(TriangleID TriangleID, out TArray<EdgeID> OrphanedEdges, out TArray<VertexInstanceID> OrphanedVertexInstances, out TArray<PolygonGroupID> OrphanedPolygonGroupsPtr);  // [Final|Public] RVA: 0x76782E4
    void DeletePolygonGroup(PolygonGroupID PolygonGroupID);                                    // [Final|Public] RVA: 0x7678244
    void DeletePolygon(PolygonID PolygonID, out TArray<EdgeID> OrphanedEdges, out TArray<VertexInstanceID> OrphanedVertexInstances, out TArray<PolygonGroupID> OrphanedPolygonGroups);  // [Final|Public] RVA: 0x767805C
    void DeleteEdge(EdgeID EdgeID, out TArray<VertexID> OrphanedVertices);                     // [Final|Public] RVA: 0x7677F48
    void CreateVertexWithID(VertexID VertexID);                                                // [Final|Public] RVA: 0x7677EA8
    void CreateVertexInstanceWithID(VertexInstanceID VertexInstanceID, VertexID VertexID);     // [Final|Public] RVA: 0x7677DB8
    VertexInstanceID CreateVertexInstance(VertexID VertexID);                                  // [Final|Public] RVA: 0x7677D14
    VertexID CreateVertex();                                                                   // [Final|Public] RVA: 0x7677CE4
    void CreateTriangleWithID(TriangleID TriangleID, PolygonGroupID PolygonGroupID, const out ref TArray<VertexInstanceID> VertexInstanceIDs, out TArray<EdgeID> NewEdgeIDs);  // [Final|Public] RVA: 0x76779F0
    TriangleID CreateTriangle(PolygonGroupID PolygonGroupID, const out ref TArray<VertexInstanceID> VertexInstanceIDs, out TArray<EdgeID> NewEdgeIDs);  // [Final|Public] RVA: 0x767774C
    void CreatePolygonWithID(PolygonID PolygonID, PolygonGroupID PolygonGroupID, out TArray<VertexInstanceID> VertexInstanceIDs, out TArray<EdgeID> NewEdgeIDs);  // [Final|Public] RVA: 0x7677580
    void CreatePolygonGroupWithID(PolygonGroupID PolygonGroupID);                              // [Final|Public] RVA: 0x76774E0
    PolygonGroupID CreatePolygonGroup();                                                       // [Final|Public] RVA: 0x76774B0
    PolygonID CreatePolygon(PolygonGroupID PolygonGroupID, out TArray<VertexInstanceID> VertexInstanceIDs, out TArray<EdgeID> NewEdgeIDs);  // [Final|Public] RVA: 0x7677324
    void CreateEdgeWithID(EdgeID EdgeID, VertexID VertexID0, VertexID VertexID1);              // [Final|Public] RVA: 0x76771D8
    EdgeID CreateEdge(VertexID VertexID0, VertexID VertexID1);                                 // [Final|Public] RVA: 0x76770DC
    void ComputePolygonTriangulation(PolygonID PolygonID);                                     // [Final|Public] RVA: 0x767703C
};

// ============================================================
// Inheritance: VertexInstanceID : ElementID
// Package: /Script/MeshDescription
// ============================================================
struct VertexInstanceID : public ElementID {
public:
};

// ============================================================
// Inheritance: ElementID
// Package: /Script/MeshDescription
// ============================================================
struct ElementID {
public:
    int32 IDValue;                                                                             // 0x0000 (0x04)
};

// ============================================================
// Inheritance: Vector2D
// Package: /Script/CoreUObject
// ============================================================
struct Vector2D {
public:
    float X;                                                                                   // 0x0000 (0x04)
    float Y;                                                                                   // 0x0004 (0x04)
};

// ============================================================
// Inheritance: PolygonGroupID : ElementID
// Package: /Script/MeshDescription
// ============================================================
struct PolygonGroupID : public ElementID {
public:
};

// ============================================================
// Inheritance: PolygonID : ElementID
// Package: /Script/MeshDescription
// ============================================================
struct PolygonID : public ElementID {
public:
};

// ============================================================
// Inheritance: VertexID : ElementID
// Package: /Script/MeshDescription
// ============================================================
struct VertexID : public ElementID {
public:
};

// ============================================================
// Inheritance: TriangleID : ElementID
// Package: /Script/MeshDescription
// ============================================================
struct TriangleID : public ElementID {
public:
};

// ============================================================
// Inheritance: EdgeID : ElementID
// Package: /Script/MeshDescription
// ============================================================
struct EdgeID : public ElementID {
public:
};

// ============================================================
// Inheritance: FloatInterval
// Package: /Script/CoreUObject
// ============================================================
struct FloatInterval {
public:
    float Min;                                                                                 // 0x0000 (0x04)
    float Max;                                                                                 // 0x0004 (0x04)
};

// ============================================================
// Inheritance: BoneMirrorInfo
// Package: /Script/Engine
// ============================================================
struct BoneMirrorInfo {
public:
    int32 SourceIndex;                                                                         // 0x0000 (0x04)
    uint8 BoneFlipAxis;                                                                        // 0x0004 (0x01)
};

// ============================================================
// Inheritance: SkeletalMeshLODInfo
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshLODInfo {
public:
    PerPlatformFloat ScreenSize;                                                               // 0x0000 (0x04)
    float LODHysteresis;                                                                       // 0x0004 (0x04)
    TArray<int32> LODMaterialMap;                                                              // 0x0008 (0x10)
    SkeletalMeshBuildSettings BuildSettings;                                                   // 0x0018 (0x14)
    SkeletalMeshOptimizationSettings ReductionSettings;                                        // 0x002C (0x3C)
    TArray<BoneReference> BonesToRemove;                                                       // 0x0068 (0x10)
    TArray<BoneReference> BonesToPrioritize;                                                   // 0x0078 (0x10)
    float WeightOfPrioritization;                                                              // 0x0088 (0x04)
    AnimSequence* BakePose;                                                                    // 0x0090 (0x08)
    AnimSequence* BakePoseOverride;                                                            // 0x0098 (0x08)
    FString SourceImportFilename;                                                              // 0x00A0 (0x10)
    enum SkinCacheUsage;                                                                       // 0x00B0 (0x01)
    bool bHasBeenSimplified;                                                                   // 0x00B1 (0x01) BitMask: 0x01
    bool bHasPerLODVertexColors;                                                               // 0x00B1 (0x01) BitMask: 0x02
    bool bAllowCPUAccess;                                                                      // 0x00B1 (0x01) BitMask: 0x04
    bool bSupportUniformlyDistributedSampling;                                                 // 0x00B1 (0x01) BitMask: 0x08
};

// ============================================================
// Inheritance: SkeletalMeshBuildSettings
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshBuildSettings {
public:
    bool bRecomputeNormals;                                                                    // 0x0000 (0x01) BitMask: 0x01
    bool bRecomputeTangents;                                                                   // 0x0000 (0x01) BitMask: 0x02
    bool bUseMikkTSpace;                                                                       // 0x0000 (0x01) BitMask: 0x04
    bool bComputeWeightedNormals;                                                              // 0x0000 (0x01) BitMask: 0x08
    bool bRemoveDegenerates;                                                                   // 0x0000 (0x01) BitMask: 0x10
    bool bUseHighPrecisionTangentBasis;                                                        // 0x0000 (0x01) BitMask: 0x20
    bool bUseFullPrecisionUVs;                                                                 // 0x0000 (0x01) BitMask: 0x40
    bool bBuildAdjacencyBuffer;                                                                // 0x0000 (0x01) BitMask: 0x80
    float ThresholdPosition;                                                                   // 0x0004 (0x04)
    float ThresholdTangentNormal;                                                              // 0x0008 (0x04)
    float ThresholdUV;                                                                         // 0x000C (0x04)
    float MorphThresholdPosition;                                                              // 0x0010 (0x04)
};

// ============================================================
// Inheritance: SkeletalMeshOptimizationSettings
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshOptimizationSettings {
public:
    uint8 TerminationCriterion;                                                                // 0x0000 (0x01)
    float NumOfTrianglesPercentage;                                                            // 0x0004 (0x04)
    float NumOfVertPercentage;                                                                 // 0x0008 (0x04)
    uint32 MaxNumOfTriangles;                                                                  // 0x000C (0x04)
    uint32 MaxNumOfVerts;                                                                      // 0x0010 (0x04)
    float MaxDeviationPercentage;                                                              // 0x0014 (0x04)
    uint8 ReductionMethod;                                                                     // 0x0018 (0x01)
    uint8 SilhouetteImportance;                                                                // 0x0019 (0x01)
    uint8 TextureImportance;                                                                   // 0x001A (0x01)
    uint8 ShadingImportance;                                                                   // 0x001B (0x01)
    uint8 SkinningImportance;                                                                  // 0x001C (0x01)
    bool bRemapMorphTargets;                                                                   // 0x001D (0x01) BitMask: 0x01
    bool bRecalcNormals;                                                                       // 0x001D (0x01) BitMask: 0x02
    float WeldingThreshold;                                                                    // 0x0020 (0x04)
    float NormalsThreshold;                                                                    // 0x0024 (0x04)
    int32 MaxBonesPerVertex;                                                                   // 0x0028 (0x04)
    bool bEnforceBoneBoundaries;                                                               // 0x002C (0x01) BitMask: 0x01
    float VolumeImportance;                                                                    // 0x0030 (0x04)
    bool bLockEdges;                                                                           // 0x0034 (0x01) BitMask: 0x01
    bool bLockColorBounaries;                                                                  // 0x0034 (0x01) BitMask: 0x02
    int32 BaseLOD;                                                                             // 0x0038 (0x04)
};

// ============================================================
// Inheritance: AnimSequence : AnimSequenceBase : AnimationAsset : Object
// Package: /Script/Engine
// ============================================================
class AnimSequence : public AnimSequenceBase {
public:
    int32 NumFrames;                                                                           // 0x00A8 (0x04)
    TArray<TrackToSkeletonMap> TrackToSkeletonMapTable;                                        // 0x00B0 (0x10)
    AnimBoneCompressionSettings* BoneCompressionSettings;                                      // 0x00D0 (0x08)
    AnimCurveCompressionSettings* CurveCompressionSettings;                                    // 0x00D8 (0x08)
    uint8 AdditiveAnimType;                                                                    // 0x0150 (0x01)
    uint8 RefPoseType;                                                                         // 0x0151 (0x01)
    AnimSequence* RefPoseSeq;                                                                  // 0x0158 (0x08)
    int32 RefFrameIndex;                                                                       // 0x0160 (0x04)
    FName RetargetSource;                                                                      // 0x0164 (0x08)
    enum Interpolation;                                                                        // 0x016C (0x01)
    bool bEnableRootMotion;                                                                    // 0x016D (0x01) BitMask: 0xFF
    uint8 RootMotionRootLock;                                                                  // 0x016E (0x01)
    bool bForceRootLock;                                                                       // 0x016F (0x01) BitMask: 0xFF
    bool bUseNormalizedRootMotionScale;                                                        // 0x0170 (0x01) BitMask: 0xFF
    bool bRootMotionSettingsCopiedFromMontage;                                                 // 0x0171 (0x01) BitMask: 0xFF
    TArray<AnimSyncMarker> AuthoredSyncMarkers;                                                // 0x0178 (0x10)
    TArray<BakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData;                   // 0x01A0 (0x10)
};

// ============================================================
// Inheritance: TrackToSkeletonMap
// Package: /Script/Engine
// ============================================================
struct TrackToSkeletonMap {
public:
    int32 BoneTreeIndex;                                                                       // 0x0000 (0x04)
};

// ============================================================
// Inheritance: AnimBoneCompressionSettings : Object
// Package: /Script/Engine
// ============================================================
class AnimBoneCompressionSettings : public Object {
public:
    TArray<AnimBoneCompressionCodec*> Codecs;                                                  // 0x0028 (0x10)
};

// ============================================================
// Inheritance: AnimBoneCompressionCodec : Object
// Package: /Script/Engine
// ============================================================
class AnimBoneCompressionCodec : public Object {
public:
    FString Description;                                                                       // 0x0028 (0x10)
};

// ============================================================
// Inheritance: AnimCurveCompressionSettings : Object
// Package: /Script/Engine
// ============================================================
class AnimCurveCompressionSettings : public Object {
public:
    AnimCurveCompressionCodec* Codec;                                                          // 0x0028 (0x08)
};

// ============================================================
// Inheritance: AnimCurveCompressionCodec : Object
// Package: /Script/Engine
// ============================================================
class AnimCurveCompressionCodec : public Object {
public:
};

// ============================================================
// Inheritance: BakedCustomAttributePerBoneData
// Package: /Script/Engine
// ============================================================
struct BakedCustomAttributePerBoneData {
public:
    int32 BoneTreeIndex;                                                                       // 0x0000 (0x04)
    TArray<BakedStringCustomAttribute> StringAttributes;                                       // 0x0008 (0x10)
    TArray<BakedIntegerCustomAttribute> IntAttributes;                                         // 0x0018 (0x10)
    TArray<BakedFloatCustomAttribute> FloatAttributes;                                         // 0x0028 (0x10)
};

// ============================================================
// Inheritance: BakedStringCustomAttribute
// Package: /Script/Engine
// ============================================================
struct BakedStringCustomAttribute {
public:
    FName AttributeName;                                                                       // 0x0000 (0x08)
    StringCurve StringCurve;                                                                   // 0x0008 (0x88)
};

// ============================================================
// Inheritance: StringCurve : IndexedCurve
// Package: /Script/Engine
// ============================================================
struct StringCurve : public IndexedCurve {
public:
    FString DefaultValue;                                                                      // 0x0068 (0x10)
    TArray<StringCurveKey> Keys;                                                               // 0x0078 (0x10)
};

// ============================================================
// Inheritance: StringCurveKey
// Package: /Script/Engine
// ============================================================
struct StringCurveKey {
public:
    float Time;                                                                                // 0x0000 (0x04)
    FString Value;                                                                             // 0x0008 (0x10)
};

// ============================================================
// Inheritance: BakedIntegerCustomAttribute
// Package: /Script/Engine
// ============================================================
struct BakedIntegerCustomAttribute {
public:
    FName AttributeName;                                                                       // 0x0000 (0x08)
    IntegralCurve IntCurve;                                                                    // 0x0008 (0x80)
};

// ============================================================
// Inheritance: IntegralCurve : IndexedCurve
// Package: /Script/Engine
// ============================================================
struct IntegralCurve : public IndexedCurve {
public:
    TArray<IntegralKey> Keys;                                                                  // 0x0068 (0x10)
    int32 DefaultValue;                                                                        // 0x0078 (0x04)
    bool bUseDefaultValueBeforeFirstKey;                                                       // 0x007C (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: IntegralKey
// Package: /Script/Engine
// ============================================================
struct IntegralKey {
public:
    float Time;                                                                                // 0x0000 (0x04)
    int32 Value;                                                                               // 0x0004 (0x04)
};

// ============================================================
// Inheritance: BakedFloatCustomAttribute
// Package: /Script/Engine
// ============================================================
struct BakedFloatCustomAttribute {
public:
    FName AttributeName;                                                                       // 0x0000 (0x08)
    SimpleCurve FloatCurve;                                                                    // 0x0008 (0x88)
};

// ============================================================
// Inheritance: SimpleCurve : RealCurve : IndexedCurve
// Package: /Script/Engine
// ============================================================
struct SimpleCurve : public RealCurve {
public:
    uint8 InterpMode;                                                                          // 0x0070 (0x01)
    TArray<SimpleCurveKey> Keys;                                                               // 0x0078 (0x10)
};

// ============================================================
// Inheritance: SimpleCurveKey
// Package: /Script/Engine
// ============================================================
struct SimpleCurveKey {
public:
    float Time;                                                                                // 0x0000 (0x04)
    float Value;                                                                               // 0x0004 (0x04)
};

// ============================================================
// Inheritance: PerPlatformBool
// Package: /Script/Engine
// ============================================================
struct PerPlatformBool {
public:
    bool Default;                                                                              // 0x0000 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: PhysicsAsset : Object
// Package: /Script/Engine
// ============================================================
class PhysicsAsset : public Object {
public:
    TArray<int32> BoundsBodies;                                                                // 0x0030 (0x10)
    TArray<SkeletalBodySetup*> SkeletalBodySetups;                                             // 0x0040 (0x10)
    TArray<PhysicsConstraintTemplate*> ConstraintSetup;                                        // 0x0050 (0x10)
    SolverIterations SolverIterations;                                                         // 0x0060 (0x1C)
    bool bNotForDedicatedServer;                                                               // 0x007C (0x01) BitMask: 0x01
    ThumbnailInfo* ThumbnailInfo;                                                              // 0x0120 (0x08)
    TArray<BodySetup*> BodySetup;                                                              // 0x0128 (0x10)
};

// ============================================================
// Inheritance: SkeletalBodySetup : BodySetup : BodySetupCore : Object
// Package: /Script/Engine
// ============================================================
class SkeletalBodySetup : public BodySetup {
public:
    bool bSkipScaleFromAnimation;                                                              // 0x02B0 (0x01) BitMask: 0xFF
    TArray<PhysicalAnimationProfile> PhysicalAnimationData;                                    // 0x02B8 (0x10)
};

// ============================================================
// Inheritance: PhysicalAnimationProfile
// Package: /Script/Engine
// ============================================================
struct PhysicalAnimationProfile {
public:
    FName ProfileName;                                                                         // 0x0000 (0x08)
    PhysicalAnimationData PhysicalAnimationData;                                               // 0x0008 (0x24)
};

// ============================================================
// Inheritance: PhysicalAnimationData
// Package: /Script/Engine
// ============================================================
struct PhysicalAnimationData {
public:
    FName BodyName;                                                                            // 0x0000 (0x08)
    bool bIsLocalSimulation;                                                                   // 0x0008 (0x01) BitMask: 0x01
    float OrientationStrength;                                                                 // 0x000C (0x04)
    float AngularVelocityStrength;                                                             // 0x0010 (0x04)
    float PositionStrength;                                                                    // 0x0014 (0x04)
    float VelocityStrength;                                                                    // 0x0018 (0x04)
    float MaxLinearForce;                                                                      // 0x001C (0x04)
    float MaxAngularForce;                                                                     // 0x0020 (0x04)
};

// ============================================================
// Inheritance: PhysicsConstraintTemplate : Object
// Package: /Script/Engine
// ============================================================
class PhysicsConstraintTemplate : public Object {
public:
    ConstraintInstance DefaultInstance;                                                        // 0x0028 (0x1C0)
    TArray<PhysicsConstraintProfileHandle> ProfileHandles;                                     // 0x01E8 (0x10)
    ConstraintProfileProperties DefaultProfile;                                                // 0x01F8 (0x10C)
};

// ============================================================
// Inheritance: ConstraintInstance : ConstraintInstanceBase
// Package: /Script/Engine
// ============================================================
struct ConstraintInstance : public ConstraintInstanceBase {
public:
    FName JointName;                                                                           // 0x0018 (0x08)
    FName ConstraintBone1;                                                                     // 0x0020 (0x08)
    FName ConstraintBone2;                                                                     // 0x0028 (0x08)
    Vector Pos1;                                                                               // 0x0030 (0x0C)
    Vector PriAxis1;                                                                           // 0x003C (0x0C)
    Vector SecAxis1;                                                                           // 0x0048 (0x0C)
    Vector Pos2;                                                                               // 0x0054 (0x0C)
    Vector PriAxis2;                                                                           // 0x0060 (0x0C)
    Vector SecAxis2;                                                                           // 0x006C (0x0C)
    Rotator AngularRotationOffset;                                                             // 0x0078 (0x0C)
    bool bScaleLinearLimits;                                                                   // 0x0084 (0x01) BitMask: 0x01
    ConstraintProfileProperties ProfileInstance;                                               // 0x008C (0x10C)
};

// ============================================================
// Inheritance: ConstraintInstanceBase
// Package: /Script/Engine
// ============================================================
struct ConstraintInstanceBase {
public:
};

// ============================================================
// Inheritance: ConstraintProfileProperties
// Package: /Script/Engine
// ============================================================
struct ConstraintProfileProperties {
public:
    float ProjectionLinearTolerance;                                                           // 0x0000 (0x04)
    float ProjectionAngularTolerance;                                                          // 0x0004 (0x04)
    float ProjectionLinearAlpha;                                                               // 0x0008 (0x04)
    float ProjectionAngularAlpha;                                                              // 0x000C (0x04)
    float LinearBreakThreshold;                                                                // 0x0010 (0x04)
    float AngularBreakThreshold;                                                               // 0x0014 (0x04)
    LinearConstraint LinearLimit;                                                              // 0x0018 (0x1C)
    ConeConstraint ConeLimit;                                                                  // 0x0034 (0x20)
    TwistConstraint TwistLimit;                                                                // 0x0054 (0x1C)
    LinearDriveConstraint LinearDrive;                                                         // 0x0070 (0x4C)
    AngularDriveConstraint AngularDrive;                                                       // 0x00BC (0x4C)
    bool bDisableCollision;                                                                    // 0x0108 (0x01) BitMask: 0x01
    bool bParentDominates;                                                                     // 0x0108 (0x01) BitMask: 0x02
    bool bEnableProjection;                                                                    // 0x0108 (0x01) BitMask: 0x04
    bool bEnableSoftProjection;                                                                // 0x0108 (0x01) BitMask: 0x08
    bool bAngularBreakable;                                                                    // 0x0108 (0x01) BitMask: 0x10
    bool bLinearBreakable;                                                                     // 0x0108 (0x01) BitMask: 0x20
};

// ============================================================
// Inheritance: LinearConstraint : ConstraintBaseParams
// Package: /Script/Engine
// ============================================================
struct LinearConstraint : public ConstraintBaseParams {
public:
    float Limit;                                                                               // 0x0014 (0x04)
    uint8 XMotion;                                                                             // 0x0018 (0x01)
    uint8 YMotion;                                                                             // 0x0019 (0x01)
    uint8 ZMotion;                                                                             // 0x001A (0x01)
};

// ============================================================
// Inheritance: ConstraintBaseParams
// Package: /Script/Engine
// ============================================================
struct ConstraintBaseParams {
public:
    float Stiffness;                                                                           // 0x0000 (0x04)
    float Damping;                                                                             // 0x0004 (0x04)
    float Restitution;                                                                         // 0x0008 (0x04)
    float ContactDistance;                                                                     // 0x000C (0x04)
    bool bSoftConstraint;                                                                      // 0x0010 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: ConeConstraint : ConstraintBaseParams
// Package: /Script/Engine
// ============================================================
struct ConeConstraint : public ConstraintBaseParams {
public:
    float Swing1LimitDegrees;                                                                  // 0x0014 (0x04)
    float Swing2LimitDegrees;                                                                  // 0x0018 (0x04)
    uint8 Swing1Motion;                                                                        // 0x001C (0x01)
    uint8 Swing2Motion;                                                                        // 0x001D (0x01)
};

// ============================================================
// Inheritance: TwistConstraint : ConstraintBaseParams
// Package: /Script/Engine
// ============================================================
struct TwistConstraint : public ConstraintBaseParams {
public:
    float TwistLimitDegrees;                                                                   // 0x0014 (0x04)
    uint8 TwistMotion;                                                                         // 0x0018 (0x01)
};

// ============================================================
// Inheritance: LinearDriveConstraint
// Package: /Script/Engine
// ============================================================
struct LinearDriveConstraint {
public:
    Vector PositionTarget;                                                                     // 0x0000 (0x0C)
    Vector VelocityTarget;                                                                     // 0x000C (0x0C)
    ConstraintDrive XDrive;                                                                    // 0x0018 (0x10)
    ConstraintDrive YDrive;                                                                    // 0x0028 (0x10)
    ConstraintDrive ZDrive;                                                                    // 0x0038 (0x10)
    bool bEnablePositionDrive;                                                                 // 0x0048 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: ConstraintDrive
// Package: /Script/Engine
// ============================================================
struct ConstraintDrive {
public:
    float Stiffness;                                                                           // 0x0000 (0x04)
    float Damping;                                                                             // 0x0004 (0x04)
    float MaxForce;                                                                            // 0x0008 (0x04)
    bool bEnablePositionDrive;                                                                 // 0x000C (0x01) BitMask: 0x01
    bool bEnableVelocityDrive;                                                                 // 0x000C (0x01) BitMask: 0x02
};

// ============================================================
// Inheritance: AngularDriveConstraint
// Package: /Script/Engine
// ============================================================
struct AngularDriveConstraint {
public:
    ConstraintDrive TwistDrive;                                                                // 0x0000 (0x10)
    ConstraintDrive SwingDrive;                                                                // 0x0010 (0x10)
    ConstraintDrive SlerpDrive;                                                                // 0x0020 (0x10)
    Rotator OrientationTarget;                                                                 // 0x0030 (0x0C)
    Vector AngularVelocityTarget;                                                              // 0x003C (0x0C)
    uint8 AngularDriveMode;                                                                    // 0x0048 (0x01)
};

// ============================================================
// Inheritance: PhysicsConstraintProfileHandle
// Package: /Script/Engine
// ============================================================
struct PhysicsConstraintProfileHandle {
public:
    ConstraintProfileProperties ProfileProperties;                                             // 0x0000 (0x10C)
    FName ProfileName;                                                                         // 0x010C (0x08)
};

// ============================================================
// Inheritance: SolverIterations
// Package: /Script/Engine
// ============================================================
struct SolverIterations {
public:
    float FixedTimeStep;                                                                       // 0x0000 (0x04)
    int32 SolverIterations;                                                                    // 0x0004 (0x04)
    int32 JointIterations;                                                                     // 0x0008 (0x04)
    int32 CollisionIterations;                                                                 // 0x000C (0x04)
    int32 SolverPushOutIterations;                                                             // 0x0010 (0x04)
    int32 JointPushOutIterations;                                                              // 0x0014 (0x04)
    int32 CollisionPushOutIterations;                                                          // 0x0018 (0x04)
};

// ============================================================
// Inheritance: ThumbnailInfo : Object
// Package: /Script/Engine
// ============================================================
class ThumbnailInfo : public Object {
public:
};

// ============================================================
// Inheritance: NodeMappingContainer : Object
// Package: /Script/Engine
// ============================================================
class NodeMappingContainer : public Object {
public:
    TMap<FName, NodeItem> SourceItems;                                                         // 0x0028 (0x50)
    TMap<FName, NodeItem> TargetItems;                                                         // 0x0078 (0x50)
    TMap<FName, FName> SourceToTarget;                                                         // 0x00C8 (0x50)
    Object* SourceAsset;                                                                       // 0x0118 (0x28)
    Object* TargetAsset;                                                                       // 0x0140 (0x28)
};

// ============================================================
// Inheritance: NodeItem
// Package: /Script/Engine
// ============================================================
struct NodeItem {
public:
    FName ParentName;                                                                          // 0x0000 (0x08)
    Transform Transform;                                                                       // 0x0010 (0x30)
};

// ============================================================
// Inheritance: MorphTarget : Object
// Package: /Script/Engine
// ============================================================
class MorphTarget : public Object {
public:
    SkeletalMesh* BaseSkelMesh;                                                                // 0x0028 (0x08)
};

// ============================================================
// Inheritance: ClothingAssetBase : Object
// Package: /Script/ClothingSystemRuntimeInterface
// ============================================================
class ClothingAssetBase : public Object {
public:
    FString ImportedFilePath;                                                                  // 0x0028 (0x10)
    Guid AssetGuid;                                                                            // 0x0038 (0x10)
};

// ============================================================
// Inheritance: SkeletalMeshSamplingInfo
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingInfo {
public:
    TArray<SkeletalMeshSamplingRegion> Regions;                                                // 0x0000 (0x10)
    SkeletalMeshSamplingBuiltData BuiltData;                                                   // 0x0010 (0x20)
};

// ============================================================
// Inheritance: SkeletalMeshSamplingRegion
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingRegion {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    int32 LODIndex;                                                                            // 0x0008 (0x04)
    bool bSupportUniformlyDistributedSampling;                                                 // 0x000C (0x01) BitMask: 0x01
    TArray<SkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                          // 0x0010 (0x10)
    TArray<SkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                  // 0x0020 (0x10)
};

// ============================================================
// Inheritance: SkeletalMeshSamplingRegionMaterialFilter
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingRegionMaterialFilter {
public:
    FName MaterialName;                                                                        // 0x0000 (0x08)
};

// ============================================================
// Inheritance: SkeletalMeshSamplingRegionBoneFilter
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingRegionBoneFilter {
public:
    FName BoneName;                                                                            // 0x0000 (0x08)
    bool bIncludeOrExclude;                                                                    // 0x0008 (0x01) BitMask: 0x01
    bool bApplyToChildren;                                                                     // 0x0008 (0x01) BitMask: 0x02
};

// ============================================================
// Inheritance: SkeletalMeshSamplingBuiltData
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingBuiltData {
public:
    TArray<SkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;                               // 0x0000 (0x10)
    TArray<SkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                               // 0x0010 (0x10)
};

// ============================================================
// Inheritance: SkeletalMeshSamplingLODBuiltData
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingLODBuiltData {
public:
};

// ============================================================
// Inheritance: SkeletalMeshSamplingRegionBuiltData
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshSamplingRegionBuiltData {
public:
};

// ============================================================
// Inheritance: SkinWeightProfileInfo
// Package: /Script/Engine
// ============================================================
struct SkinWeightProfileInfo {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    PerPlatformBool DefaultProfile;                                                            // 0x0008 (0x01)
    PerPlatformInt DefaultProfileFromLODIndex;                                                 // 0x000C (0x08)
};

// ============================================================
// Inheritance: SkeletalMeshLODSettings : DataAsset : Object
// Package: /Script/Engine
// ============================================================
class SkeletalMeshLODSettings : public DataAsset {
public:
    PerPlatformInt MinLOD;                                                                     // 0x0030 (0x08)
    PerPlatformBool DisableBelowMinLodStripping;                                               // 0x0038 (0x01)
    bool bOverrideLODStreamingSettings;                                                        // 0x0039 (0x01) BitMask: 0xFF
    PerPlatformBool bSupportLODStreaming;                                                      // 0x003A (0x01)
    PerPlatformInt MaxNumStreamedLODs;                                                         // 0x003C (0x08)
    PerPlatformInt MaxNumOptionalLODs;                                                         // 0x0044 (0x08)
    TArray<SkeletalMeshLODGroupSettings> LODGroups;                                            // 0x0050 (0x10)
};

// ============================================================
// Inheritance: DataAsset : Object
// Package: /Script/Engine
// ============================================================
class DataAsset : public Object {
public:
    TSubclassOf<DataAsset> NativeClass;                                                        // 0x0028 (0x08)
};

// ============================================================
// Inheritance: SkeletalMeshLODGroupSettings
// Package: /Script/Engine
// ============================================================
struct SkeletalMeshLODGroupSettings {
public:
    PerPlatformFloat ScreenSize;                                                               // 0x0000 (0x04)
    float LODHysteresis;                                                                       // 0x0004 (0x04)
    enum BoneFilterActionOption;                                                               // 0x0008 (0x01)
    TArray<BoneFilter> BoneList;                                                               // 0x0010 (0x10)
    TArray<FName> BonesToPrioritize;                                                           // 0x0020 (0x10)
    float WeightOfPrioritization;                                                              // 0x0030 (0x04)
    AnimSequence* BakePose;                                                                    // 0x0038 (0x08)
    SkeletalMeshOptimizationSettings ReductionSettings;                                        // 0x0040 (0x3C)
};

// ============================================================
// Inheritance: BoneFilter
// Package: /Script/Engine
// ============================================================
struct BoneFilter {
public:
    bool bExcludeSelf;                                                                         // 0x0000 (0x01) BitMask: 0xFF
    FName BoneName;                                                                            // 0x0004 (0x08)
};

// ============================================================
// Inheritance: Blueprint : BlueprintCore : Object
// Package: /Script/Engine
// ============================================================
class Blueprint : public BlueprintCore {
public:
    TSubclassOf<Object> ParentClass;                                                           // 0x0050 (0x08)
    uint8 BlueprintType;                                                                       // 0x0058 (0x01)
    bool bRecompileOnLoad;                                                                     // 0x0059 (0x01) BitMask: 0x01
    bool bHasBeenRegenerated;                                                                  // 0x0059 (0x01) BitMask: 0x02
    bool bIsRegeneratingOnLoad;                                                                // 0x0059 (0x01) BitMask: 0x04
    int32 BlueprintSystemVersion;                                                              // 0x005C (0x04)
    SimpleConstructionScript* SimpleConstructionScript;                                        // 0x0060 (0x08)
    TArray<ActorComponent*> ComponentTemplates;                                                // 0x0068 (0x10)
    TArray<TimelineTemplate*> Timelines;                                                       // 0x0078 (0x10)
    TArray<BPComponentClassOverride> ComponentClassOverrides;                                  // 0x0088 (0x10)
    InheritableComponentHandler* InheritableComponentHandler;                                  // 0x0098 (0x08)
};

// ============================================================
// Inheritance: BlueprintCore : Object
// Package: /Script/Engine
// ============================================================
class BlueprintCore : public Object {
public:
    TSubclassOf<Object> SkeletonGeneratedClass;                                                // 0x0028 (0x08)
    TSubclassOf<Object> GeneratedClass;                                                        // 0x0030 (0x08)
    bool bLegacyNeedToPurgeSkelRefs;                                                           // 0x0038 (0x01) BitMask: 0xFF
    Guid BlueprintGuid;                                                                        // 0x003C (0x10)
};

// ============================================================
// Inheritance: SimpleConstructionScript : Object
// Package: /Script/Engine
// ============================================================
class SimpleConstructionScript : public Object {
public:
    TArray<SCS_Node*> RootNodes;                                                               // 0x0028 (0x10)
    TArray<SCS_Node*> AllNodes;                                                                // 0x0038 (0x10)
    SCS_Node* DefaultSceneRootNode;                                                            // 0x0048 (0x08)
};

// ============================================================
// Inheritance: SCS_Node : Object
// Package: /Script/Engine
// ============================================================
class SCS_Node : public Object {
public:
    TSubclassOf<Object> ComponentClass;                                                        // 0x0028 (0x08)
    ActorComponent* ComponentTemplate;                                                         // 0x0030 (0x08)
    BlueprintCookedComponentInstancingData CookedComponentInstancingData;                      // 0x0038 (0x48)
    FName AttachToName;                                                                        // 0x0080 (0x08)
    FName ParentComponentOrVariableName;                                                       // 0x0088 (0x08)
    FName ParentComponentOwnerClassName;                                                       // 0x0090 (0x08)
    bool bIsParentComponentNative;                                                             // 0x0098 (0x01) BitMask: 0xFF
    TArray<SCS_Node*> ChildNodes;                                                              // 0x00A0 (0x10)
    TArray<BPVariableMetaDataEntry> MetaDataArray;                                             // 0x00B0 (0x10)
    Guid VariableGuid;                                                                         // 0x00C0 (0x10)
    FName InternalVariableName;                                                                // 0x00D0 (0x08)
};

// ============================================================
// Inheritance: BlueprintCookedComponentInstancingData
// Package: /Script/Engine
// ============================================================
struct BlueprintCookedComponentInstancingData {
public:
    TArray<BlueprintComponentChangedPropertyInfo> ChangedPropertyList;                         // 0x0000 (0x10)
    bool bHasValidCookedData;                                                                  // 0x0021 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: BlueprintComponentChangedPropertyInfo
// Package: /Script/Engine
// ============================================================
struct BlueprintComponentChangedPropertyInfo {
public:
    FName PropertyName;                                                                        // 0x0000 (0x08)
    int32 ArrayIndex;                                                                          // 0x0008 (0x04)
    Struct* PropertyScope;                                                                     // 0x0010 (0x08)
};

// ============================================================
// Inheritance: Struct : Field : Object
// Package: /Script/CoreUObject
// ============================================================
class Struct : public Field {
public:
};

// ============================================================
// Inheritance: Field : Object
// Package: /Script/CoreUObject
// ============================================================
class Field : public Object {
public:
};

// ============================================================
// Inheritance: BPVariableMetaDataEntry
// Package: /Script/Engine
// ============================================================
struct BPVariableMetaDataEntry {
public:
    FName DataKey;                                                                             // 0x0000 (0x08)
    FString DataValue;                                                                         // 0x0008 (0x10)
};

// ============================================================
// Inheritance: TimelineTemplate : Object
// Package: /Script/Engine
// ============================================================
class TimelineTemplate : public Object {
public:
    float TimelineLength;                                                                      // 0x0028 (0x04)
    uint8 LengthMode;                                                                          // 0x002C (0x01)
    bool bAutoPlay;                                                                            // 0x002D (0x01) BitMask: 0x01
    bool bLoop;                                                                                // 0x002D (0x01) BitMask: 0x02
    bool bReplicated;                                                                          // 0x002D (0x01) BitMask: 0x04
    bool bIgnoreTimeDilation;                                                                  // 0x002D (0x01) BitMask: 0x08
    TArray<TTEventTrack> EventTracks;                                                          // 0x0030 (0x10)
    TArray<TTFloatTrack> FloatTracks;                                                          // 0x0040 (0x10)
    TArray<TTVectorTrack> VectorTracks;                                                        // 0x0050 (0x10)
    TArray<TTLinearColorTrack> LinearColorTracks;                                              // 0x0060 (0x10)
    TArray<BPVariableMetaDataEntry> MetaDataArray;                                             // 0x0070 (0x10)
    Guid TimelineGuid;                                                                         // 0x0080 (0x10)
    FName VariableName;                                                                        // 0x0090 (0x08)
    FName DirectionPropertyName;                                                               // 0x0098 (0x08)
    FName UpdateFunctionName;                                                                  // 0x00A0 (0x08)
    FName FinishedFunctionName;                                                                // 0x00A8 (0x08)
};

// ============================================================
// Inheritance: TTEventTrack : TTTrackBase
// Package: /Script/Engine
// ============================================================
struct TTEventTrack : public TTTrackBase {
public:
    FName FunctionName;                                                                        // 0x0018 (0x08)
    CurveFloat* CurveKeys;                                                                     // 0x0020 (0x08)
};

// ============================================================
// Inheritance: TTTrackBase
// Package: /Script/Engine
// ============================================================
struct TTTrackBase {
public:
    FName TrackName;                                                                           // 0x0008 (0x08)
    bool bIsExternalCurve;                                                                     // 0x0010 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: TTFloatTrack : TTPropertyTrack : TTTrackBase
// Package: /Script/Engine
// ============================================================
struct TTFloatTrack : public TTPropertyTrack {
public:
    CurveFloat* CurveFloat;                                                                    // 0x0020 (0x08)
};

// ============================================================
// Inheritance: TTPropertyTrack : TTTrackBase
// Package: /Script/Engine
// ============================================================
struct TTPropertyTrack : public TTTrackBase {
public:
    FName PropertyName;                                                                        // 0x0018 (0x08)
};

// ============================================================
// Inheritance: TTVectorTrack : TTPropertyTrack : TTTrackBase
// Package: /Script/Engine
// ============================================================
struct TTVectorTrack : public TTPropertyTrack {
public:
    CurveVector* CurveVector;                                                                  // 0x0020 (0x08)
};

// ============================================================
// Inheritance: CurveVector : CurveBase : Object
// Package: /Script/Engine
// ============================================================
class CurveVector : public CurveBase {
public:
    RichCurve FloatCurves;                                                                     // 0x0030 (0x80)

    // --- Functions ---
    Vector GetVectorValue(float InTime);                                                       // [Final|Public] RVA: 0x7BD32C0
};

// ============================================================
// Inheritance: TTLinearColorTrack : TTPropertyTrack : TTTrackBase
// Package: /Script/Engine
// ============================================================
struct TTLinearColorTrack : public TTPropertyTrack {
public:
    CurveLinearColor* CurveLinearColor;                                                        // 0x0020 (0x08)
};

// ============================================================
// Inheritance: CurveLinearColor : CurveBase : Object
// Package: /Script/Engine
// ============================================================
class CurveLinearColor : public CurveBase {
public:
    RichCurve FloatCurves;                                                                     // 0x0030 (0x80)
    float AdjustHue;                                                                           // 0x0230 (0x04)
    float AdjustSaturation;                                                                    // 0x0234 (0x04)
    float AdjustBrightness;                                                                    // 0x0238 (0x04)
    float AdjustBrightnessCurve;                                                               // 0x023C (0x04)
    float AdjustVibrance;                                                                      // 0x0240 (0x04)
    float AdjustMinAlpha;                                                                      // 0x0244 (0x04)
    float AdjustMaxAlpha;                                                                      // 0x0248 (0x04)

    // --- Functions ---
    LinearColor GetLinearColorValue(float InTime);                                             // [Public] RVA: 0x7BD31F4
    LinearColor GetClampedLinearColorValue(float InTime);                                      // [Public] RVA: 0x7BD2958
};

// ============================================================
// Inheritance: BPComponentClassOverride
// Package: /Script/Engine
// ============================================================
struct BPComponentClassOverride {
public:
    FName ComponentName;                                                                       // 0x0000 (0x08)
    TSubclassOf<Object> ComponentClass;                                                        // 0x0008 (0x08)
};

// ============================================================
// Inheritance: InheritableComponentHandler : Object
// Package: /Script/Engine
// ============================================================
class InheritableComponentHandler : public Object {
public:
    TArray<ComponentOverrideRecord> Records;                                                   // 0x0028 (0x10)
    TArray<ActorComponent*> UnnecessaryComponents;                                             // 0x0038 (0x10)
};

// ============================================================
// Inheritance: ComponentOverrideRecord
// Package: /Script/Engine
// ============================================================
struct ComponentOverrideRecord {
public:
    TSubclassOf<Object> ComponentClass;                                                        // 0x0000 (0x08)
    ActorComponent* ComponentTemplate;                                                         // 0x0008 (0x08)
    ComponentKey ComponentKey;                                                                 // 0x0010 (0x20)
    BlueprintCookedComponentInstancingData CookedComponentInstancingData;                      // 0x0030 (0x48)
};

// ============================================================
// Inheritance: ComponentKey
// Package: /Script/Engine
// ============================================================
struct ComponentKey {
public:
    TSubclassOf<Object> OwnerClass;                                                            // 0x0000 (0x08)
    FName SCSVariableName;                                                                     // 0x0008 (0x08)
    Guid AssociatedGuid;                                                                       // 0x0010 (0x10)
};

// ============================================================
// Inheritance: VertexOffsetUsage
// Package: /Script/Engine
// ============================================================
struct VertexOffsetUsage {
public:
    int32 Usage;                                                                               // 0x0000 (0x04)
};

// ============================================================
// Inheritance: SkelMeshComponentLODInfo
// Package: /Script/Engine
// ============================================================
struct SkelMeshComponentLODInfo {
public:
    TArray<bool> HiddenMaterials;                                                              // 0x0000 (0x10)
};

// ============================================================
// Inheritance: Matrix
// Package: /Script/CoreUObject
// ============================================================
struct Matrix {
public:
    Plane XPlane;                                                                              // 0x0000 (0x10)
    Plane YPlane;                                                                              // 0x0010 (0x10)
    Plane ZPlane;                                                                              // 0x0020 (0x10)
    Plane WPlane;                                                                              // 0x0030 (0x10)
};

// ============================================================
// Inheritance: Plane : Vector
// Package: /Script/CoreUObject
// ============================================================
struct Plane : public Vector {
public:
    float W;                                                                                   // 0x000C (0x04)
};

// ============================================================
// Inheritance: SkelMeshSkinWeightInfo
// Package: /Script/Engine
// ============================================================
struct SkelMeshSkinWeightInfo {
public:
    int32 Bones;                                                                               // 0x0000 (0x04)
    uint8 Weights;                                                                             // 0x0030 (0x01)
};

// ============================================================
// Inheritance: Vector4
// Package: /Script/CoreUObject
// ============================================================
struct Vector4 {
public:
    float X;                                                                                   // 0x0000 (0x04)
    float Y;                                                                                   // 0x0004 (0x04)
    float Z;                                                                                   // 0x0008 (0x04)
    float W;                                                                                   // 0x000C (0x04)
};

// ============================================================
// Inheritance: CharacterMovementComponent : PawnMovementComponent : NavMovementComponent : MovementComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class CharacterMovementComponent : public PawnMovementComponent {
public:
    Character* CharacterOwner;                                                                 // 0x0190 (0x08)
    float GravityScale;                                                                        // 0x0198 (0x04)
    float MaxStepHeight;                                                                       // 0x019C (0x04)
    float MaxStepHeightWithoutConsiderWalkable;                                                // 0x01A0 (0x04)
    float JumpZVelocity;                                                                       // 0x01A4 (0x04)
    float JumpOffJumpZFactor;                                                                  // 0x01A8 (0x04)
    float WalkableFloorAngle;                                                                  // 0x01AC (0x04)
    float WalkableFloorZ;                                                                      // 0x01B0 (0x04)
    uint8 MovementMode;                                                                        // 0x01CC (0x01)
    uint8 CustomMovementMode;                                                                  // 0x01CD (0x01)
    enum NetworkSmoothingMode;                                                                 // 0x01CE (0x01)
    float GroundFriction;                                                                      // 0x01D0 (0x04)
    float MaxWalkSpeed;                                                                        // 0x01FC (0x04)
    float MaxWalkSpeedCrouched;                                                                // 0x0200 (0x04)
    float MaxSwimSpeed;                                                                        // 0x0204 (0x04)
    float MaxFlySpeed;                                                                         // 0x0208 (0x04)
    float MaxCustomMovementSpeed;                                                              // 0x020C (0x04)
    float MaxAcceleration;                                                                     // 0x0210 (0x04)
    float MinAnalogWalkSpeed;                                                                  // 0x0214 (0x04)
    float BrakingFrictionFactor;                                                               // 0x0218 (0x04)
    float BrakingFriction;                                                                     // 0x021C (0x04)
    float BrakingSubStepTime;                                                                  // 0x0220 (0x04)
    float BrakingDecelerationWalking;                                                          // 0x0224 (0x04)
    float BrakingDecelerationFalling;                                                          // 0x0228 (0x04)
    float BrakingDecelerationSwimming;                                                         // 0x022C (0x04)
    float BrakingDecelerationFlying;                                                           // 0x0230 (0x04)
    float AirControl;                                                                          // 0x0234 (0x04)
    float AirControlBoostMultiplier;                                                           // 0x0238 (0x04)
    float AirControlBoostVelocityThreshold;                                                    // 0x023C (0x04)
    float FallingLateralFriction;                                                              // 0x0240 (0x04)
    float CrouchedHalfHeight;                                                                  // 0x0244 (0x04)
    float Buoyancy;                                                                            // 0x0248 (0x04)
    float PerchRadiusThreshold;                                                                // 0x024C (0x04)
    float PerchAdditionalHeight;                                                               // 0x0250 (0x04)
    Rotator RotationRate;                                                                      // 0x0254 (0x0C)
    bool bUseSeparateBrakingFriction;                                                          // 0x0260 (0x01) BitMask: 0x01
    bool bApplyGravityWhileJumping;                                                            // 0x0260 (0x01) BitMask: 0x02
    bool bUseControllerDesiredRotation;                                                        // 0x0260 (0x01) BitMask: 0x04
    bool bOrientRotationToMovement;                                                            // 0x0260 (0x01) BitMask: 0x08
    bool bSweepWhileNavWalking;                                                                // 0x0260 (0x01) BitMask: 0x10
    bool bMovementInProgress;                                                                  // 0x0260 (0x01) BitMask: 0x40
    bool bEnableScopedMovementUpdates;                                                         // 0x0260 (0x01) BitMask: 0x80
    bool bEnableServerDualMoveScopedMovementUpdates;                                           // 0x0261 (0x01) BitMask: 0x01
    bool bForceMaxAccel;                                                                       // 0x0261 (0x01) BitMask: 0x02
    bool bRunPhysicsWithNoController;                                                          // 0x0261 (0x01) BitMask: 0x04
    bool bForceNextFloorCheck;                                                                 // 0x0261 (0x01) BitMask: 0x08
    bool bShrinkProxyCapsule;                                                                  // 0x0261 (0x01) BitMask: 0x10
    bool bCanWalkOffLedges;                                                                    // 0x0261 (0x01) BitMask: 0x20
    bool bCanWalkOffLedgesWhenCrouching;                                                       // 0x0261 (0x01) BitMask: 0x40
    bool bSimulateMovementUseNavData;                                                          // 0x0261 (0x01) BitMask: 0x80
    bool bNetworkSkipProxyPredictionOnNetUpdate;                                               // 0x0262 (0x01) BitMask: 0x04
    bool bNetworkAlwaysReplicateTransformUpdateTimestamp;                                      // 0x0262 (0x01) BitMask: 0x08
    bool bDeferUpdateMoveComponent;                                                            // 0x0262 (0x01) BitMask: 0x10
    bool bEnablePhysicsInteraction;                                                            // 0x0262 (0x01) BitMask: 0x20
    bool bTouchForceScaledToMass;                                                              // 0x0262 (0x01) BitMask: 0x40
    bool bPushForceScaledToMass;                                                               // 0x0262 (0x01) BitMask: 0x80
    bool bPushForceUsingZOffset;                                                               // 0x0263 (0x01) BitMask: 0x01
    bool bScalePushForceToVelocity;                                                            // 0x0263 (0x01) BitMask: 0x02
    SceneComponent* DeferredUpdatedMoveComponent;                                              // 0x0268 (0x08)
    float MaxOutOfWaterStepHeight;                                                             // 0x0270 (0x04)
    float OutofWaterZ;                                                                         // 0x0274 (0x04)
    float Mass;                                                                                // 0x0278 (0x04)
    float StandingDownwardForceScale;                                                          // 0x027C (0x04)
    float InitialPushForceFactor;                                                              // 0x0280 (0x04)
    float PushForceFactor;                                                                     // 0x0284 (0x04)
    float PushForcePointZOffsetFactor;                                                         // 0x0288 (0x04)
    float TouchForceFactor;                                                                    // 0x028C (0x04)
    float MinTouchForce;                                                                       // 0x0290 (0x04)
    float MaxTouchForce;                                                                       // 0x0294 (0x04)
    float RepulsionForce;                                                                      // 0x0298 (0x04)
    Vector Acceleration;                                                                       // 0x029C (0x0C)
    Quat LastUpdateRotation;                                                                   // 0x02B0 (0x10)
    Vector LastUpdateLocation_ACE;                                                             // 0x02C0 (0x0C)
    Vector LastUpdateVelocity;                                                                 // 0x02D0 (0x0C)
    float ServerLastTransformUpdateTimeStamp;                                                  // 0x02DC (0x04)
    float ServerLastClientGoodMoveAckTime;                                                     // 0x02E0 (0x04)
    float ServerLastClientAdjustmentTime;                                                      // 0x02E4 (0x04)
    Vector PendingImpulseToApply;                                                              // 0x02E8 (0x0C)
    Vector PendingForceToApply;                                                                // 0x02F4 (0x0C)
    float AnalogInputModifier;                                                                 // 0x0300 (0x04)
    float MaxSimulationTimeStep;                                                               // 0x0310 (0x04)
    int32 MaxSimulationIterations;                                                             // 0x0314 (0x04)
    int32 MaxJumpApexAttemptsPerSimulation;                                                    // 0x0318 (0x04)
    float MaxDepenetrationWithGeometry;                                                        // 0x031C (0x04)
    float MaxDepenetrationWithGeometryAsProxy;                                                 // 0x0320 (0x04)
    float MaxDepenetrationWithPawn;                                                            // 0x0324 (0x04)
    float MaxDepenetrationWithPawnAsProxy;                                                     // 0x0328 (0x04)
    float NetworkSimulatedSmoothLocationTime;                                                  // 0x032C (0x04)
    float NetworkSimulatedSmoothRotationTime;                                                  // 0x0330 (0x04)
    float ListenServerNetworkSimulatedSmoothLocationTime;                                      // 0x0334 (0x04)
    float ListenServerNetworkSimulatedSmoothRotationTime;                                      // 0x0338 (0x04)
    float NetProxyShrinkRadius;                                                                // 0x033C (0x04)
    float NetProxyShrinkHalfHeight;                                                            // 0x0340 (0x04)
    float NetworkMaxSmoothUpdateDistance;                                                      // 0x0344 (0x04)
    float NetworkNoSmoothUpdateDistance;                                                       // 0x0348 (0x04)
    float NetworkMinTimeBetweenClientAckGoodMoves;                                             // 0x034C (0x04)
    float NetworkMinTimeBetweenClientAdjustments;                                              // 0x0350 (0x04)
    float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;                               // 0x0354 (0x04)
    float NetworkLargeClientCorrectionDistance;                                                // 0x0358 (0x04)
    float LedgeCheckThreshold;                                                                 // 0x035C (0x04)
    float JumpOutOfWaterPitch;                                                                 // 0x0360 (0x04)
    FindFloorResult CurrentFloor;                                                              // 0x0368 (0xA8)
    uint8 DefaultLandMovementMode;                                                             // 0x0410 (0x01)
    uint8 DefaultWaterMovementMode;                                                            // 0x0411 (0x01)
    uint8 GroundMovementMode;                                                                  // 0x0418 (0x01)
    bool bMaintainHorizontalGroundVelocity;                                                    // 0x0419 (0x01) BitMask: 0x01
    bool bImpartBaseVelocityX;                                                                 // 0x0419 (0x01) BitMask: 0x02
    bool bImpartBaseVelocityY;                                                                 // 0x0419 (0x01) BitMask: 0x04
    bool bImpartBaseVelocityZ;                                                                 // 0x0419 (0x01) BitMask: 0x08
    bool bImpartBaseAngularVelocity;                                                           // 0x0419 (0x01) BitMask: 0x10
    bool bJustTeleported;                                                                      // 0x0419 (0x01) BitMask: 0x20
    bool bNetworkUpdateReceived;                                                               // 0x0419 (0x01) BitMask: 0x40
    bool bNetworkMovementModeChanged;                                                          // 0x0419 (0x01) BitMask: 0x80
    bool bIgnoreClientMovementErrorChecksAndCorrection;                                        // 0x041A (0x01) BitMask: 0x01
    bool bServerAcceptClientAuthoritativePosition;                                             // 0x041A (0x01) BitMask: 0x02
    bool bNotifyApex;                                                                          // 0x041A (0x01) BitMask: 0x04
    bool bCheatFlying;                                                                         // 0x041A (0x01) BitMask: 0x08
    bool bWantsToCrouch;                                                                       // 0x041A (0x01) BitMask: 0x10
    bool bCrouchMaintainsBaseLocation;                                                         // 0x041A (0x01) BitMask: 0x20
    bool bIgnoreBaseRotation;                                                                  // 0x041A (0x01) BitMask: 0x40
    bool bFastAttachedMove;                                                                    // 0x041A (0x01) BitMask: 0x80
    bool bAlwaysCheckFloor;                                                                    // 0x041B (0x01) BitMask: 0x01
    bool bUseFlatBaseForFloorChecks;                                                           // 0x041B (0x01) BitMask: 0x02
    bool bPerformingJumpOff;                                                                   // 0x041B (0x01) BitMask: 0x04
    bool bWantsToLeaveNavWalking;                                                              // 0x041B (0x01) BitMask: 0x08
    bool bUseRVOAvoidance;                                                                     // 0x041B (0x01) BitMask: 0x10
    bool bRequestedMoveUseAcceleration;                                                        // 0x041B (0x01) BitMask: 0x20
    bool bWasSimulatingRootMotion;                                                             // 0x041B (0x01) BitMask: 0x80
    bool bAllowPhysicsRotationDuringAnimRootMotion;                                            // 0x041C (0x01) BitMask: 0x01
    bool bHasRequestedVelocity;                                                                // 0x041C (0x01) BitMask: 0x02
    bool bRequestedMoveWithMaxSpeed;                                                           // 0x041C (0x01) BitMask: 0x04
    bool bWasAvoidanceUpdated;                                                                 // 0x041C (0x01) BitMask: 0x08
    bool bProjectNavMeshWalking;                                                               // 0x041C (0x01) BitMask: 0x40
    bool bProjectNavMeshOnBothWorldChannels;                                                   // 0x041C (0x01) BitMask: 0x80
    float AvoidanceConsiderationRadius;                                                        // 0x0430 (0x04)
    Vector RequestedVelocity;                                                                  // 0x0434 (0x0C)
    int32 AvoidanceUID;                                                                        // 0x0440 (0x04)
    NavAvoidanceMask AvoidanceGroup;                                                           // 0x0444 (0x04)
    NavAvoidanceMask GroupsToAvoid;                                                            // 0x0448 (0x04)
    NavAvoidanceMask GroupsToIgnore;                                                           // 0x044C (0x04)
    float AvoidanceWeight;                                                                     // 0x0450 (0x04)
    Vector PendingLaunchVelocity;                                                              // 0x0454 (0x0C)
    float NavMeshProjectionInterval;                                                           // 0x0510 (0x04)
    float NavMeshProjectionTimer;                                                              // 0x0514 (0x04)
    float NavMeshProjectionInterpSpeed;                                                        // 0x0518 (0x04)
    float NavMeshProjectionHeightScaleUp;                                                      // 0x051C (0x04)
    float NavMeshProjectionHeightScaleDown;                                                    // 0x0520 (0x04)
    float NavWalkingFloorDistTolerance;                                                        // 0x0524 (0x04)
    CharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;                 // 0x0528 (0x40)
    float MinTimeBetweenTimeStampResets;                                                       // 0x0590 (0x04)
    RootMotionSourceGroup CurrentRootMotion;                                                   // 0x0A70 (0x38)
    RootMotionSourceGroup ServerCorrectionRootMotion;                                          // 0x0AA8 (0x38)
    RootMotionMovementParams RootMotionParams;                                                 // 0x0B70 (0x40)
    Vector AnimRootMotionVelocity;                                                             // 0x0BB0 (0x0C)
    bool bEnableRootMotionMontageParallelUpdate;                                               // 0x0BBC (0x01) BitMask: 0x01
    bool bEnableLedgeMove;                                                                     // 0x0BBC (0x01) BitMask: 0x02

    // --- Functions ---
    void SetWalkableFloorZ(float InWalkableFloorZ);                                            // [Final|Public] RVA: 0x7BCE2D0
    void SetWalkableFloorAngle(float InWalkableFloorAngle);                                    // [Final|Public] RVA: 0x7BCE234
    void SetMovementMode(uint8 NewMovementMode, uint8 NewCustomMode);                          // [Public] RVA: 0x7BCE148
    void SetGroupsToIgnoreMask(const out ref NavAvoidanceMask GroupMask);                      // [Final|Public] RVA: 0x62B802C
    void SetGroupsToIgnore(int32 GroupFlags);                                                  // [Final|Public] RVA: 0x62B7F90
    void SetGroupsToAvoidMask(const out ref NavAvoidanceMask GroupMask);                       // [Final|Public] RVA: 0x62B7EF0
    void SetGroupsToAvoid(int32 GroupFlags);                                                   // [Final|Public] RVA: 0x62B7E54
    void SetAvoidanceGroupMask(const out ref NavAvoidanceMask GroupMask);                      // [Final|Public] RVA: 0x62B79E0
    void SetAvoidanceGroup(int32 GroupFlags);                                                  // [Final|Public] RVA: 0x62B7944
    void SetAvoidanceEnabled(bool bEnable);                                                    // [Final|Public] RVA: 0x7BCE0AC
    float K2_GetWalkableFloorZ();                                                              // [Final|Public] RVA: 0x7BCE094
    float K2_GetWalkableFloorAngle();                                                          // [Final|Public] RVA: 0x5DCE784
    float K2_GetModifiedMaxAcceleration();                                                     // [Public] RVA: 0x7BCE068
    void K2_FindFloor(Vector CapsuleLocation, out FindFloorResult FloorResult);                // [Public] RVA: 0x7BCDF48
    void K2_ComputeFloorDist(Vector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, out FindFloorResult FloorResult);  // [Public] RVA: 0x7BCDD3C
    bool IsWalking();                                                                          // [Final|Public] RVA: 0x7BCDD14
    bool IsWalkable(const out ref HitResult Hit);                                              // [Public] RVA: 0x7BCDC40
    float GetValidPerchRadius();                                                               // [Final|Public] RVA: 0x7BCDC18
    uint8 GetRemoteRoleForMovement();                                                          // [Final|Public] RVA: 0x7BCDBFC
    float GetPerchRadiusThreshold();                                                           // [Final|Public] RVA: 0x7BCDBD8
    PrimitiveComponent* GetMovementBase();                                                     // [Final|Public] RVA: 0x7BCDBB8
    float GetMinAnalogSpeed();                                                                 // [Public] RVA: 0x7BCDB8C
    float GetMaxJumpHeightWithJumpTime();                                                      // [Public] RVA: 0x7BCDB60
    float GetMaxJumpHeight();                                                                  // [Public] RVA: 0x7BCDB34
    float GetMaxBrakingDeceleration();                                                         // [Public] RVA: 0x7BCDB08
    float GetMaxAcceleration();                                                                // [Public] RVA: 0x7BCDADC
    uint8 GetLocalRoleForMovement();                                                           // [Final|Public] RVA: 0x7BCDABC
    Vector GetLastUpdateVelocity();                                                            // [Final|Public] RVA: 0x7BCDA94
    Rotator GetLastUpdateRotation();                                                           // [Final|Public] RVA: 0x7BCDA54
    Vector GetLastUpdateLocation();                                                            // [Final|Public] RVA: 0x7BCDA20
    Vector GetImpartedMovementBaseVelocity();                                                  // [Public] RVA: 0x7BCD9E8
    Vector GetCurrentAcceleration();                                                           // [Final|Public] RVA: 0x5374360
    Character* GetCharacterOwner();                                                            // [Final|Public] RVA: 0x7BCD9D0
    float GetAnalogInputModifier();                                                            // [Final|Public] RVA: 0x6064B10
    void DisableMovement();                                                                    // [Public] RVA: 0x5C5EB08
    void ClearAccumulatedForces();                                                             // [Public] RVA: 0x1C23DE0
    void CapsuleTouched(PrimitiveComponent* OverlappedComp, Actor* Other, PrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const out ref HitResult SweepResult);  // [Protected] RVA: 0x7BCD768
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);  // [Public] RVA: 0x7BCD5C8
    void AddImpulse(Vector Impulse, bool bVelocityChange);                                     // [Public] RVA: 0x7BCD4B8
    void AddForce(Vector Force);                                                               // [Public] RVA: 0x7BCD40C
};

// ============================================================
// Inheritance: PawnMovementComponent : NavMovementComponent : MovementComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class PawnMovementComponent : public NavMovementComponent {
public:
    Pawn* PawnOwner;                                                                           // 0x0178 (0x08)

    // --- Functions ---
    Vector K2_GetInputVector();                                                                // [Final|Public] RVA: 0x7C5B4F8
    bool IsMoveInputIgnored();                                                                 // [Public] RVA: 0x7BB5374
    Vector GetPendingInputVector();                                                            // [Final|Public] RVA: 0x7C5B360
    Pawn* GetPawnOwner();                                                                      // [Final|Public] RVA: 0x7C5B348
    Vector GetLastInputVector();                                                               // [Final|Public] RVA: 0x7C5B21C
    Vector ConsumeInputVector();                                                               // [Public] RVA: 0x7C5ADEC
    void AddInputVector(Vector WorldVector, bool bForce);                                      // [Public] RVA: 0x7C5A770
};

// ============================================================
// Inheritance: NavMovementComponent : MovementComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class NavMovementComponent : public MovementComponent {
public:
    NavAgentProperties NavAgentProps;                                                          // 0x0138 (0x30)
    float FixedPathBrakingDistance;                                                            // 0x0168 (0x04)
    bool bUpdateNavAgentWithOwnersCollision;                                                   // 0x016C (0x01) BitMask: 0x01
    bool bUseAccelerationForPaths;                                                             // 0x016C (0x01) BitMask: 0x02
    bool bUseFixedBrakingDistanceForPaths;                                                     // 0x016C (0x01) BitMask: 0x04
    MovementProperties MovementState;                                                          // 0x016D (0x01)
    Object* PathFollowingComp;                                                                 // 0x0170 (0x08)

    // --- Functions ---
    void StopMovementKeepPathing();                                                            // [Final|Public] RVA: 0x7C56ED8
    void StopActiveMovement();                                                                 // [Public] RVA: 0x5C5EC00
    bool IsSwimming();                                                                         // [Public] RVA: 0x7C56CD8
    bool IsMovingOnGround();                                                                   // [Public] RVA: 0x7BCDD14
    bool IsFlying();                                                                           // [Public] RVA: 0x68644C4
    bool IsFalling();                                                                          // [Public] RVA: 0x688A634
    bool IsCrouching();                                                                        // [Public] RVA: 0x7C56B6C
};

// ============================================================
// Inheritance: MovementComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class MovementComponent : public ActorComponent {
public:
    SceneComponent* UpdatedComponent;                                                          // 0x00F8 (0x08)
    PrimitiveComponent* UpdatedPrimitive;                                                      // 0x0100 (0x08)
    Vector Velocity;                                                                           // 0x010C (0x0C)
    Vector PlaneConstraintNormal;                                                              // 0x0118 (0x0C)
    Vector PlaneConstraintOrigin;                                                              // 0x0124 (0x0C)
    bool bUpdateOnlyIfRendered;                                                                // 0x0130 (0x01) BitMask: 0x01
    bool bAutoUpdateTickRegistration;                                                          // 0x0130 (0x01) BitMask: 0x02
    bool bTickBeforeOwner;                                                                     // 0x0130 (0x01) BitMask: 0x04
    bool bAutoRegisterUpdatedComponent;                                                        // 0x0130 (0x01) BitMask: 0x08
    bool bConstrainToPlane;                                                                    // 0x0130 (0x01) BitMask: 0x10
    bool bSnapToPlaneAtStart;                                                                  // 0x0130 (0x01) BitMask: 0x20
    bool bAutoRegisterPhysicsVolumeUpdates;                                                    // 0x0130 (0x01) BitMask: 0x40
    bool bComponentShouldUpdatePhysicsVolume;                                                  // 0x0130 (0x01) BitMask: 0x80
    enum PlaneConstraintAxisSetting;                                                           // 0x0133 (0x01)

    // --- Functions ---
    void StopMovementImmediately();                                                            // [Public] RVA: 0x1BEE720
    void SnapUpdatedComponentToPlane();                                                        // [Public] RVA: 0x5C5EC30
    void SetUpdatedComponent(SceneComponent* NewUpdatedComponent);                             // [Public] RVA: 0x5CB347C
    void SetPlaneConstraintOrigin(Vector PlaneOrigin);                                         // [Public] RVA: 0x7C562C0
    void SetPlaneConstraintNormal(Vector PlaneNormal);                                         // [Public] RVA: 0x7C56214
    void SetPlaneConstraintFromVectors(Vector Forward, Vector Up);                             // [Public] RVA: 0x7C560FC
    void SetPlaneConstraintEnabled(bool bEnabled);                                             // [Public] RVA: 0x5D50E60
    void SetPlaneConstraintAxisSetting(enum NewAxisSetting);                                   // [Public] RVA: 0x5CAB54C
    void PhysicsVolumeChanged(PhysicsVolume* NewVolume);                                       // [Public] RVA: 0x2246FAC
    bool K2_MoveUpdatedComponent(Vector Delta, Rotator NewRotation, out HitResult OutHit, bool bSweep, bool bTeleport);  // [Final|Public] RVA: 0x7C55594
    float K2_GetModifiedMaxSpeed();                                                            // [Public] RVA: 0x5CB6ED8
    float K2_GetMaxSpeedModifier();                                                            // [Public] RVA: 0x5C5BB84
    bool IsExceedingMaxSpeed(float MaxSpeed);                                                  // [Public] RVA: 0x5CDBAC8
    Vector GetPlaneConstraintOrigin();                                                         // [Final|Public] RVA: 0x7C5556C
    Vector GetPlaneConstraintNormal();                                                         // [Final|Public] RVA: 0x7C55544
    enum GetPlaneConstraintAxisSetting();                                                      // [Final|Public] RVA: 0x7C5552C
    PhysicsVolume* GetPhysicsVolume();                                                         // [Public] RVA: 0x5CA98EC
    float GetMaxSpeed();                                                                       // [Public] RVA: 0x5CD1B3C
    float GetGravityZ();                                                                       // [Public] RVA: 0x5C5BB58
    Vector ConstrainNormalToPlane(Vector Normal);                                              // [Public] RVA: 0x7C5545C
    Vector ConstrainLocationToPlane(Vector Location);                                          // [Public] RVA: 0x7C5538C
    Vector ConstrainDirectionToPlane(Vector Direction);                                        // [Public] RVA: 0x7C552BC
};

// ============================================================
// Inheritance: FindFloorResult
// Package: /Script/Engine
// ============================================================
struct FindFloorResult {
public:
    bool bBlockingHit;                                                                         // 0x0000 (0x01) BitMask: 0x01
    bool bWalkableFloor;                                                                       // 0x0000 (0x01) BitMask: 0x02
    bool bLineTrace;                                                                           // 0x0000 (0x01) BitMask: 0x04
    float FloorDist;                                                                           // 0x0004 (0x04)
    float LineDist;                                                                            // 0x0008 (0x04)
    HitResult HitResult;                                                                       // 0x0010 (0x98)
};

// ============================================================
// Inheritance: HitResult
// Package: /Script/Engine
// ============================================================
struct HitResult {
public:
    bool bBlockingHit;                                                                         // 0x0000 (0x01) BitMask: 0x01
    bool bStartPenetrating;                                                                    // 0x0000 (0x01) BitMask: 0x02
    int32 FaceIndex;                                                                           // 0x0004 (0x04)
    float Time;                                                                                // 0x0008 (0x04)
    float Distance;                                                                            // 0x000C (0x04)
    Vector_NetQuantize Location;                                                               // 0x0010 (0x0C)
    Vector_NetQuantize ImpactPoint;                                                            // 0x001C (0x0C)
    Vector_NetQuantizeNormal Normal;                                                           // 0x0028 (0x0C)
    Vector_NetQuantizeNormal ImpactNormal;                                                     // 0x0034 (0x0C)
    Vector_NetQuantize TraceStart;                                                             // 0x0040 (0x0C)
    Vector_NetQuantize TraceEnd;                                                               // 0x004C (0x0C)
    float PenetrationDepth;                                                                    // 0x0058 (0x04)
    int32 item;                                                                                // 0x005C (0x04)
    uint8 ElementIndex;                                                                        // 0x0060 (0x01)
    PhysicalMaterial* PhysMaterial;                                                            // 0x0064 (0x08)
    Actor* Actor;                                                                              // 0x006C (0x08)
    PrimitiveComponent* Component;                                                             // 0x0074 (0x08)
    FName BoneName;                                                                            // 0x007C (0x08)
    FName MyBoneName;                                                                          // 0x0084 (0x08)
};

// ============================================================
// Inheritance: Vector_NetQuantize : Vector
// Package: /Script/Engine
// ============================================================
struct Vector_NetQuantize : public Vector {
public:
};

// ============================================================
// Inheritance: Vector_NetQuantizeNormal : Vector
// Package: /Script/Engine
// ============================================================
struct Vector_NetQuantizeNormal : public Vector {
public:
};

// ============================================================
// Inheritance: NavAvoidanceMask
// Package: /Script/Engine
// ============================================================
struct NavAvoidanceMask {
public:
    bool bGroup0;                                                                              // 0x0000 (0x01) BitMask: 0x01
    bool bGroup1;                                                                              // 0x0000 (0x01) BitMask: 0x02
    bool bGroup2;                                                                              // 0x0000 (0x01) BitMask: 0x04
    bool bGroup3;                                                                              // 0x0000 (0x01) BitMask: 0x08
    bool bGroup4;                                                                              // 0x0000 (0x01) BitMask: 0x10
    bool bGroup5;                                                                              // 0x0000 (0x01) BitMask: 0x20
    bool bGroup6;                                                                              // 0x0000 (0x01) BitMask: 0x40
    bool bGroup7;                                                                              // 0x0000 (0x01) BitMask: 0x80
    bool bGroup8;                                                                              // 0x0001 (0x01) BitMask: 0x01
    bool bGroup9;                                                                              // 0x0001 (0x01) BitMask: 0x02
    bool bGroup10;                                                                             // 0x0001 (0x01) BitMask: 0x04
    bool bGroup11;                                                                             // 0x0001 (0x01) BitMask: 0x08
    bool bGroup12;                                                                             // 0x0001 (0x01) BitMask: 0x10
    bool bGroup13;                                                                             // 0x0001 (0x01) BitMask: 0x20
    bool bGroup14;                                                                             // 0x0001 (0x01) BitMask: 0x40
    bool bGroup15;                                                                             // 0x0001 (0x01) BitMask: 0x80
    bool bGroup16;                                                                             // 0x0002 (0x01) BitMask: 0x01
    bool bGroup17;                                                                             // 0x0002 (0x01) BitMask: 0x02
    bool bGroup18;                                                                             // 0x0002 (0x01) BitMask: 0x04
    bool bGroup19;                                                                             // 0x0002 (0x01) BitMask: 0x08
    bool bGroup20;                                                                             // 0x0002 (0x01) BitMask: 0x10
    bool bGroup21;                                                                             // 0x0002 (0x01) BitMask: 0x20
    bool bGroup22;                                                                             // 0x0002 (0x01) BitMask: 0x40
    bool bGroup23;                                                                             // 0x0002 (0x01) BitMask: 0x80
    bool bGroup24;                                                                             // 0x0003 (0x01) BitMask: 0x01
    bool bGroup25;                                                                             // 0x0003 (0x01) BitMask: 0x02
    bool bGroup26;                                                                             // 0x0003 (0x01) BitMask: 0x04
    bool bGroup27;                                                                             // 0x0003 (0x01) BitMask: 0x08
    bool bGroup28;                                                                             // 0x0003 (0x01) BitMask: 0x10
    bool bGroup29;                                                                             // 0x0003 (0x01) BitMask: 0x20
    bool bGroup30;                                                                             // 0x0003 (0x01) BitMask: 0x40
    bool bGroup31;                                                                             // 0x0003 (0x01) BitMask: 0x80
};

// ============================================================
// Inheritance: CharacterMovementComponentPostPhysicsTickFunction : TickFunction
// Package: /Script/Engine
// ============================================================
struct CharacterMovementComponentPostPhysicsTickFunction : public TickFunction {
public:
};

// ============================================================
// Inheritance: RootMotionSourceGroup
// Package: /Script/Engine
// ============================================================
struct RootMotionSourceGroup {
public:
    bool bHasAdditiveSources;                                                                  // 0x0028 (0x01) BitMask: 0x01
    bool bHasOverrideSources;                                                                  // 0x0028 (0x01) BitMask: 0x02
    bool bHasOverrideSourcesWithIgnoreZAccumulate;                                             // 0x0028 (0x01) BitMask: 0x04
    bool bIsAdditiveVelocityApplied;                                                           // 0x0028 (0x01) BitMask: 0x08
    RootMotionSourceSettings LastAccumulatedSettings;                                          // 0x0029 (0x01)
    Vector_NetQuantize10 LastPreAdditiveVelocity;                                              // 0x002C (0x0C)
};

// ============================================================
// Inheritance: RootMotionSourceSettings
// Package: /Script/Engine
// ============================================================
struct RootMotionSourceSettings {
public:
    uint8 Flags;                                                                               // 0x0000 (0x01)
};

// ============================================================
// Inheritance: Vector_NetQuantize10 : Vector
// Package: /Script/Engine
// ============================================================
struct Vector_NetQuantize10 : public Vector {
public:
};

// ============================================================
// Inheritance: RootMotionMovementParams
// Package: /Script/Engine
// ============================================================
struct RootMotionMovementParams {
public:
    bool bHasRootMotion;                                                                       // 0x0000 (0x01) BitMask: 0xFF
    float BlendWeight;                                                                         // 0x0004 (0x04)
    Transform RootMotionTransform;                                                             // 0x0010 (0x30)
};

// ============================================================
// Inheritance: NavAgentProperties : MovementProperties
// Package: /Script/Engine
// ============================================================
struct NavAgentProperties : public MovementProperties {
public:
    float AgentRadius;                                                                         // 0x0004 (0x04)
    float AgentHeight;                                                                         // 0x0008 (0x04)
    float AgentStepHeight;                                                                     // 0x000C (0x04)
    float NavWalkingSearchHeightScale;                                                         // 0x0010 (0x04)
    SoftClassPath PreferredNavData;                                                            // 0x0018 (0x18)
};

// ============================================================
// Inheritance: MovementProperties
// Package: /Script/Engine
// ============================================================
struct MovementProperties {
public:
    bool bCanCrouch;                                                                           // 0x0000 (0x01) BitMask: 0x01
    bool bCanJump;                                                                             // 0x0000 (0x01) BitMask: 0x02
    bool bCanWalk;                                                                             // 0x0000 (0x01) BitMask: 0x04
    bool bCanSwim;                                                                             // 0x0000 (0x01) BitMask: 0x08
    bool bCanFly;                                                                              // 0x0000 (0x01) BitMask: 0x10
};

// ============================================================
// Inheritance: SoftClassPath : SoftObjectPath
// Package: /Script/CoreUObject
// ============================================================
struct SoftClassPath : public SoftObjectPath {
public:
};

// ============================================================
// Inheritance: SoftObjectPath
// Package: /Script/CoreUObject
// ============================================================
struct SoftObjectPath {
public:
    FName AssetPathName;                                                                       // 0x0000 (0x08)
    FString SubPathString;                                                                     // 0x0008 (0x10)
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
// Inheritance: Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class Volume : public Brush {
public:
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
// Inheritance: Color
// Package: /Script/CoreUObject
// ============================================================
struct Color {
public:
    uint8 B;                                                                                   // 0x0000 (0x01)
    uint8 G;                                                                                   // 0x0001 (0x01)
    uint8 R;                                                                                   // 0x0002 (0x01)
    uint8 A;                                                                                   // 0x0003 (0x01)
};

// ============================================================
// Inheritance: BrushComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class BrushComponent : public PrimitiveComponent {
public:
    Model* Brush;                                                                              // 0x04F0 (0x08)
    BodySetup* BrushBodySetup;                                                                 // 0x04F8 (0x08)
};

// ============================================================
// Inheritance: GeomSelection
// Package: /Script/Engine
// ============================================================
struct GeomSelection {
public:
    int32 Type;                                                                                // 0x0000 (0x04)
    int32 Index;                                                                               // 0x0004 (0x04)
    int32 SelectionIndex;                                                                      // 0x0008 (0x04)
};

// ============================================================
// Inheritance: CapsuleComponent : ShapeComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class CapsuleComponent : public ShapeComponent {
public:
    float CapsuleHalfHeight;                                                                   // 0x0508 (0x04)
    float CapsuleRadius;                                                                       // 0x050C (0x04)

    // --- Functions ---
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);             // [Final|Public] RVA: 0x7BCCE84
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);                                 // [Final|Public] RVA: 0x7BCCD90
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);                         // [Final|Public] RVA: 0x7BCCC9C
    void GetUnscaledCapsuleSize_WithoutHemisphere(out float OutRadius, out float OutHalfHeightWithoutHemisphere);  // [Final|Public] RVA: 0x7BC8AB8
    void GetUnscaledCapsuleSize(out float OutRadius, out float OutHalfHeight);                 // [Final|Public] RVA: 0x7BC89B0
    float GetUnscaledCapsuleRadius();                                                          // [Final|Public] RVA: 0x5D75DBC
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();                                    // [Final|Public] RVA: 0x7BC898C
    float GetUnscaledCapsuleHalfHeight();                                                      // [Final|Public] RVA: 0x5D75E5C
    float GetShapeScale();                                                                     // [Final|Public] RVA: 0x7BC869C
    void GetScaledCapsuleSize_WithoutHemisphere(out float OutRadius, out float OutHalfHeightWithoutHemisphere);  // [Final|Public] RVA: 0x7BC80A8
    void GetScaledCapsuleSize(out float OutRadius, out float OutHalfHeight);                   // [Final|Public] RVA: 0x7BC7C8C
    float GetScaledCapsuleRadius();                                                            // [Final|Public] RVA: 0x7BC7AC0
    float GetScaledCapsuleHalfHeight_WithoutHemisphere();                                      // [Final|Public] RVA: 0x7BC774C
    float GetScaledCapsuleHalfHeight();                                                        // [Final|Public] RVA: 0x7BC7584
};

// ============================================================
// Inheritance: ShapeComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class ShapeComponent : public PrimitiveComponent {
public:
    BodySetup* ShapeBodySetup;                                                                 // 0x04F0 (0x08)
    TSubclassOf<NavAreaBase> AreaClass;                                                        // 0x04F8 (0x08)
    Color ShapeColor;                                                                          // 0x0500 (0x04)
    bool bDrawOnlyIfSelected;                                                                  // 0x0504 (0x01) BitMask: 0x01
    bool bShouldCollideWhenPlacing;                                                            // 0x0504 (0x01) BitMask: 0x02
    bool bDynamicObstacle;                                                                     // 0x0504 (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: NavAreaBase : Object
// Package: /Script/Engine
// ============================================================
class NavAreaBase : public Object {
public:
};

// ============================================================
// Inheritance: BasedMovementInfo
// Package: /Script/Engine
// ============================================================
struct BasedMovementInfo {
public:
    PrimitiveComponent* MovementBase;                                                          // 0x0000 (0x08)
    FName BoneName;                                                                            // 0x0008 (0x08)
    Vector_NetQuantize100 Location;                                                            // 0x0010 (0x0C)
    Rotator Rotation;                                                                          // 0x001C (0x0C)
    bool bServerHasBaseComponent;                                                              // 0x0028 (0x01) BitMask: 0xFF
    bool bRelativeRotation;                                                                    // 0x0029 (0x01) BitMask: 0xFF
    bool bServerHasVelocity;                                                                   // 0x002A (0x01) BitMask: 0xFF
    PhysicalMaterial* PhysMaterial;                                                            // 0x0030 (0x08)
};

// ============================================================
// Inheritance: SimulatedRootMotionReplicatedMove
// Package: /Script/Engine
// ============================================================
struct SimulatedRootMotionReplicatedMove {
public:
    float Time;                                                                                // 0x0000 (0x04)
    RepRootMotionMontage RootMotion;                                                           // 0x0008 (0x98)
};

// ============================================================
// Inheritance: RepRootMotionMontage
// Package: /Script/Engine
// ============================================================
struct RepRootMotionMontage {
public:
    bool bIsActive;                                                                            // 0x0000 (0x01) BitMask: 0xFF
    AnimMontage* AnimMontage;                                                                  // 0x0008 (0x08)
    float position;                                                                            // 0x0010 (0x04)
    Vector_NetQuantize100 Location;                                                            // 0x0014 (0x0C)
    Rotator Rotation;                                                                          // 0x0020 (0x0C)
    PrimitiveComponent* MovementBase;                                                          // 0x0030 (0x08)
    FName MovementBaseBoneName;                                                                // 0x0038 (0x08)
    bool bRelativePosition;                                                                    // 0x0040 (0x01) BitMask: 0xFF
    bool bRelativeRotation;                                                                    // 0x0041 (0x01) BitMask: 0xFF
    RootMotionSourceGroup AuthoritativeRootMotion;                                             // 0x0048 (0x38)
    Vector_NetQuantize10 Acceleration;                                                         // 0x0080 (0x0C)
    Vector_NetQuantize10 LinearVelocity;                                                       // 0x008C (0x0C)
};

// ============================================================
// Inheritance: CharacterServerMovePackedBits : CharacterNetworkSerializationPackedBits
// Package: /Script/Engine
// ============================================================
struct CharacterServerMovePackedBits : public CharacterNetworkSerializationPackedBits {
public:
};

// ============================================================
// Inheritance: CharacterNetworkSerializationPackedBits
// Package: /Script/Engine
// ============================================================
struct CharacterNetworkSerializationPackedBits {
public:
};

// ============================================================
// Inheritance: MovementCompressedFlags
// Package: /Script/Engine
// ============================================================
struct MovementCompressedFlags {
public:
};

// ============================================================
// Inheritance: CharacterMoveResponsePackedBits : CharacterNetworkSerializationPackedBits
// Package: /Script/Engine
// ============================================================
struct CharacterMoveResponsePackedBits : public CharacterNetworkSerializationPackedBits {
public:
};

// ============================================================
// Inheritance: DamageType : Object
// Package: /Script/Engine
// ============================================================
class DamageType : public Object {
public:
    bool bCausedByWorld;                                                                       // 0x0028 (0x01) BitMask: 0x01
    bool bScaleMomentumByMass;                                                                 // 0x0028 (0x01) BitMask: 0x02
    bool bRadialDamageVelChange;                                                               // 0x0028 (0x01) BitMask: 0x04
    float DamageImpulse;                                                                       // 0x002C (0x04)
    float DestructibleImpulse;                                                                 // 0x0030 (0x04)
    float DestructibleDamageSpreadScale;                                                       // 0x0034 (0x04)
    float DamageFalloff;                                                                       // 0x0038 (0x04)
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
    bool WasInputKeyJustReleased(Key Key);                                                     // [Final|Public] RVA: 0x7C6931C
    bool WasInputKeyJustPressed(Key Key);                                                      // [Final|Public] RVA: 0x7C691D8
    void ToggleSpeaking(bool bInSpeaking);                                                     // [Public] RVA: 0x7C69138
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);       // [Final|Private] RVA: 0x6882898
    void SwitchLevel(FString URL);                                                             // [Public] RVA: 0x7C69064
    void StopHapticEffect(enum Hand);                                                          // [Final|Public] RVA: 0x7C68FB0
    void StartFire(uint8 FireModeNum);                                                         // [Public] RVA: 0x7C68448
    void SetVirtualJoystickVisibility(bool bVisible);                                          // [Public] RVA: 0x7C67DBC
    void SetViewTargetWithBlend(Actor* NewViewTarget, float BlendTime, uint8 BlendFunc, float BlendExp, bool bLockOutgoing);  // [Public] RVA: 0x7C67BD8
    void SetName(FString S);                                                                   // [Public] RVA: 0x7C67AD8
    void SetMouseLocation(const int32 X, const int32 Y);                                       // [Final|Public] RVA: 0x7C679F0
    void SetMouseCursorWidget(uint8 Cursor, UserWidget* CursorWidget);                         // [Final|Public] RVA: 0x7C6780C
    void SetHapticsByValue(const float Frequency, const float Amplitude, enum Hand);           // [Final|Public] RVA: 0x7C67580
    void SetDisableHaptics(bool bNewDisabled);                                                 // [Public] RVA: 0x5E3E5A0
    void SetControllerLightColor(Color Color);                                                 // [Final|Public] RVA: 0x7C674A4
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // [Public] RVA: 0x7C67298
    void SetAudioListenerOverride(SceneComponent* AttachToComponent, Vector Location, Rotator Rotation);  // [Final|Public] RVA: 0x7C67098
    void SetAudioListenerAttenuationOverride(SceneComponent* AttachToComponent, Vector AttenuationLocationOVerride);  // [Final|Public] RVA: 0x7C66F10
    void ServerViewSelf(ViewTargetTransitionParams TransitionParams);                          // [Public] RVA: 0x7C66E34
    void ServerViewPrevPlayer();                                                               // [Public] RVA: 0x7C66DE8
    void ServerViewNextPlayer();                                                               // [Public] RVA: 0x7C66D9C
    void ServerVerifyViewTarget();                                                             // [Public] RVA: 0x7C66D50
    void ServerUpdateMultipleLevelsVisibility(const ref TArray<UpdateLevelVisibilityLevelInfo> LevelVisibilities);  // [Final|Public] RVA: 0x7C66C54
    void ServerUpdateLevelVisibility(const ref UpdateLevelVisibilityLevelInfo LevelVisibility);  // [Final|Public] RVA: 0x14E1F78
    void ServerUpdateCamera(Vector_NetQuantize CamLoc, int32 CamPitchAndYaw);                  // [Public] RVA: 0x7C66B1C
    void ServerUnmutePlayer(UniqueNetIdRepl PlayerId);                                         // [Public] RVA: 0x7C66A1C
    void ServerToggleAILogging();                                                              // [Public] RVA: 0x7C669D0
    void ServerShortTimeout();                                                                 // [Public] RVA: 0x251EAD8
    void ServerSetSpectatorWaiting(bool bWaiting);                                             // [Public] RVA: 0x7C66908
    void ServerSetSpectatorLocation(Vector NewLoc, Rotator NewRot);                            // [Public] RVA: 0x7C667B0
    void ServerRestartPlayer();                                                                // [Public] RVA: 0x7C66764
    void ServerPause();                                                                        // [Public] RVA: 0x7C66718
    void ServerNotifyLoadedWorld(FName WorldPackageName);                                      // [Final|Public] RVA: 0x7C66644
    void ServerMutePlayer(UniqueNetIdRepl PlayerId);                                           // [Public] RVA: 0x7C66544
    void ServerExecRPC(FString Msg);                                                           // [Public] RVA: 0x7C6644C
    void ServerExec(FString Msg);                                                              // [Final|Public] RVA: 0x512DD6C
    void ServerCheckClientPossessionReliable();                                                // [Public] RVA: 0x7C66400
    void ServerCheckClientPossession();                                                        // [Public] RVA: 0x7C663B4
    void ServerChangeName(FString S);                                                          // [Public] RVA: 0x7C66290
    void ServerCamera(FName NewMode);                                                          // [Public] RVA: 0x7C661D4
    void ServerAcknowledgePossession(Pawn* P);                                                 // [Public] RVA: 0x1AF473C
    void SendToConsole(FString Command);                                                       // [Public] RVA: 0x7C66100
    void RestartLevel();                                                                       // [Public] RVA: 0x7C660E8
    void ResetControllerLightColor();                                                          // [Final|Public] RVA: 0x7C6608C
    bool ProjectWorldLocationToScreen(Vector WorldLocation, out Vector2D ScreenLocation, bool bPlayerViewportRelative);  // [Final|Public] RVA: 0x7C65E54
    void PlayHapticEffect(HapticFeedbackEffect_Base* HapticEffect, enum Hand, float Scale, bool bLoop);  // [Final|Public] RVA: 0x7C65870
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, uint8 Action, LatentActionInfo LatentInfo);  // [Final|Private] RVA: 0x7C65544
    void Pause();                                                                              // [Public] RVA: 0x7C64F60
    void OnServerStartedVisualLogger(bool bIsLogging);                                         // [Public] RVA: 0x7C64EC0
    void LocalTravel(FString URL);                                                             // [Public] RVA: 0x7C64DC0
    void K2_ClientPlayForceFeedback(ForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);  // [Final|Public] RVA: 0x7C64BA4
    bool IsInputKeyDown(Key Key);                                                              // [Final|Public] RVA: 0x7C64A60
    void GetViewportSize(out int32 SizeX, out int32 SizeY);                                    // [Final|Public] RVA: 0x7C64960
    SpectatorPawn* GetSpectatorPawn();                                                         // [Final|Public] RVA: 0x7C64948
    bool GetMousePosition(out float LocationX, out float LocationY);                           // [Final|Public] RVA: 0x7C6481C
    Vector GetInputVectorKeyState(Key Key);                                                    // [Final|Public] RVA: 0x7C64710
    void GetInputTouchState(uint8 FingerIndex, out float LocationX, out float LocationY, out bool bIsCurrentlyPressed);  // [Final|Public] RVA: 0x7C64554
    void GetInputMouseDelta(out float DeltaX, out float DeltaY);                               // [Final|Public] RVA: 0x7C64450
    void GetInputMotionState(out Vector Tilt, out Vector RotationRate, out Vector Gravity, out Vector Acceleration);  // [Final|Public] RVA: 0x7C641DC
    float GetInputKeyTimeDown(Key Key);                                                        // [Final|Public] RVA: 0x7C64090
    void GetInputAnalogStickState(uint8 WhichStick, out float StickX, out float StickY);       // [Final|Public] RVA: 0x7C63F44
    float GetInputAnalogKeyState(Key Key);                                                     // [Final|Public] RVA: 0x7C63DF8
    HUD* GetHUD();                                                                             // [Final|Public] RVA: 0x7C633E8
    bool GetHitResultUnderFingerForObjects(uint8 FingerIndex, const out ref TArray<uint8> ObjectTypes, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C63C0C
    bool GetHitResultUnderFingerByChannel(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C63A4C
    bool GetHitResultUnderFinger(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C6388C
    bool GetHitResultUnderCursorForObjects(const out ref TArray<uint8> ObjectTypes, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C636F0
    bool GetHitResultUnderCursorByChannel(uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C63578
    bool GetHitResultUnderCursor(uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C63400
    Vector GetFocalLocation();                                                                 // [Public] RVA: 0x7C633B0
    float GetDeprecatedInputYawScale();                                                        // [Final|Public] RVA: 0x4FAA254
    float GetDeprecatedInputRollScale();                                                       // [Final|Public] RVA: 0x7C63398
    float GetDeprecatedInputPitchScale();                                                      // [Final|Public] RVA: 0x50A1FE0
    void FOV(float NewFOV);                                                                    // [Public] RVA: 0x7C631D8
    void EnableCheats();                                                                       // [Public] RVA: 0x7C631C0
    bool DoLineTraceAtScreenPosition(const Vector2D ScreenPosition, const uint8 TraceChannel, bool bTraceComplex, out HitResult HitResult);  // [Final|Public] RVA: 0x7C63004
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, out Vector WorldLocation, out Vector WorldDirection);  // [Final|Public] RVA: 0x7C62DF8
    bool DeprojectMousePositionToWorld(out Vector WorldLocation, out Vector WorldDirection);   // [Final|Public] RVA: 0x7C62C84
    void ConsoleKey(Key Key);                                                                  // [Public] RVA: 0x7C62B94
    void ClientWasKicked(const ref FText KickReason);                                          // [Public] RVA: 0x7C62AD4
    void ClientVoiceHandshakeComplete();                                                       // [Public] RVA: 0x27A5B70
    void ClientUpdateMultipleLevelsStreamingStatus(const ref TArray<UpdateLevelStreamingLevelStatus> LevelStatuses);  // [Public] RVA: 0x7C629D4
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);  // [Public] RVA: 0x7C627CC
    void ClientUnmutePlayer(UniqueNetIdRepl PlayerId);                                         // [Public] RVA: 0x7C626FC
    void ClientTravelInternal(FString URL, uint8 TravelType, bool bSeamless, Guid MapPackageGuid);  // [Public] RVA: 0x7C6250C
    void ClientTravel(FString URL, uint8 TravelType, bool bSeamless, Guid MapPackageGuid);     // [Final|Public] RVA: 0x7C62358
    void ClientTeamMessage(PlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);  // [Public] RVA: 0x7C621C0
    void ClientStopForceFeedback(ForceFeedbackEffect* ForceFeedbackEffect, FName Tag);         // [Public] RVA: 0x7C620D4
    void ClientStopCameraShakesFromSource(CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Final|Public] RVA: 0x7C61FD4
    void ClientStopCameraShake(TSubclassOf<CameraShakeBase> Shake, bool bImmediately);         // [Public] RVA: 0x7C61EE4
    void ClientStopCameraAnim(CameraAnim* AnimToStop);                                         // [Public] RVA: 0x7C61E44
    void ClientStartOnlineSession();                                                           // [Public] RVA: 0x7C61E2C
    void ClientStartCameraShakeFromSource(TSubclassOf<CameraShakeBase> Shake, CameraShakeSourceComponent* SourceComponent);  // [Final|Public] RVA: 0x7C61D00
    void ClientStartCameraShake(TSubclassOf<CameraShakeBase> Shake, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7C61B68
    void ClientSpawnCameraLensEffect(TSubclassOf<EmitterCameraLensEffectBase> LensEffectEmitterClass);  // [Public] RVA: 0x49AB1CC
    void ClientSetViewTarget(Actor* A, ViewTargetTransitionParams TransitionParams);           // [Public] RVA: 0x7C61A54
    void ClientSetSpectatorWaiting(bool bWaiting);                                             // [Public] RVA: 0x7C619B4
    void ClientSetHUD(TSubclassOf<HUD> NewHUDClass);                                           // [Public] RVA: 0x2235B28
    void ClientSetForceMipLevelsToBeResident(MaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);  // [Public] RVA: 0x7C61880
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);  // [Public] RVA: 0x7C616CC
    void ClientSetCameraMode(FName NewCamMode);                                                // [Public] RVA: 0x7C61630
    void ClientSetCameraFade(bool bEnableFading, Color FadeColor, Vector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);  // [Public] RVA: 0x7C613F0
    void ClientSetBlockOnAsyncLoading();                                                       // [Public] RVA: 0x5E40678
    void ClientReturnToMainMenuWithTextReason(const ref FText ReturnReason);                   // [Public] RVA: 0x7C61330
    void ClientReturnToMainMenu(FString ReturnReason);                                         // [Public] RVA: 0x7C61230
    void ClientRetryClientRestart(Pawn* NewPawn);                                              // [Public] RVA: 0x7C61190
    void ClientRestart(Pawn* NewPawn);                                                         // [Public] RVA: 0xFA05F4
    void ClientReset();                                                                        // [Public] RVA: 0x7C58A3C
    void ClientRepObjRef(Object* Object);                                                      // [Public] RVA: 0x7C610F0
    void ClientReceiveLocalizedMessage(TSubclassOf<LocalMessage> Message, int32 Switch, PlayerState* RelatedPlayerState, PlayerState* RelatedPlayerState, Object* OptionalObject);  // [Public] RVA: 0x19AA5BC
    void ClientPrestreamTextures(Actor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);  // [Public] RVA: 0x7C60F54
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);                     // [Public] RVA: 0x7C60E0C
    void ClientPlaySoundAtLocation(SoundBase* Sound, Vector Location, float VolumeMultiplier, float PitchMultiplier);  // [Public] RVA: 0x7C60C74
    void ClientPlaySound(SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);     // [Public] RVA: 0x7C60B40
    void ClientPlayForceFeedback_Internal(ForceFeedbackEffect* ForceFeedbackEffect, ForceFeedbackParameters Params);  // [Final|Private] RVA: 0x7C60A38
    void ClientPlayCameraAnim(CameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, enum Space, Rotator CustomPlaySpace);  // [Public] RVA: 0x7C606E0
    void ClientMutePlayer(UniqueNetIdRepl PlayerId);                                           // [Public] RVA: 0x7C60610
    void ClientMessage(FString S, FName Type, float MsgLifeTime);                              // [Public] RVA: 0x7C604C0
    void ClientIgnoreMoveInput(bool bIgnore);                                                  // [Public] RVA: 0x7C60420
    void ClientIgnoreLookInput(bool bIgnore);                                                  // [Public] RVA: 0x5CC3020
    void ClientGotoState(FName NewState);                                                      // [Public] RVA: 0x231E6C8
    void ClientGameEnded(Actor* EndGameFocus, bool bIsWinner);                                 // [Public] RVA: 0x7C60330
    void ClientForceGarbageCollection();                                                       // [Public] RVA: 0x5CC3290
    void ClientFlushLevelStreaming();                                                          // [Final|Public] RVA: 0x7C602B8
    void ClientEndOnlineSession();                                                             // [Public] RVA: 0x7C602A0
    void ClientEnableNetworkVoice(bool bEnable);                                               // [Public] RVA: 0x1538DF4
    void ClientCommitMapChange();                                                              // [Public] RVA: 0x5CC32A8
    void ClientClearCameraLensEffects();                                                       // [Public] RVA: 0x7C60288
    void ClientCapBandwidth(int32 Cap);                                                        // [Public] RVA: 0x23065E8
    void ClientCancelPendingMapChange();                                                       // [Public] RVA: 0x7C60270
    void ClientAddTextureStreamingLoc(Vector InLoc, float Duration, bool bOverrideLocation);   // [Final|Public] RVA: 0x7C60138
    void ClearAudioListenerOverride();                                                         // [Final|Public] RVA: 0x7C6010C
    void ClearAudioListenerAttenuationOverride();                                              // [Final|Public] RVA: 0x7C600E0
    bool CanRestartPlayer();                                                                   // [Public] RVA: 0x7C600B8
    void Camera(FName NewMode);                                                                // [Public] RVA: 0x7C6001C
    void AddYawInput(float Val);                                                               // [Public] RVA: 0x7C5FF7C
    void AddRollInput(float Val);                                                              // [Public] RVA: 0x7C5FEDC
    void AddPitchInput(float Val);                                                             // [Public] RVA: 0x7C5FE3C
    void ActivateTouchInterface(TouchInterface* NewTouchInterface);                            // [Public] RVA: 0x7C5FC3C
};

// ============================================================
// Inheritance: Player : Object
// Package: /Script/Engine
// ============================================================
class Player : public Object {
public:
    PlayerController* PlayerController;                                                        // 0x0030 (0x08)
    int32 CurrentNetSpeed;                                                                     // 0x0038 (0x04)
    int32 ConfiguredInternetSpeed;                                                             // 0x003C (0x04)
    int32 ConfiguredLanSpeed;                                                                  // 0x0040 (0x04)
};

// ============================================================
// Inheritance: InterpTrackInstDirector : InterpTrackInst : Object
// Package: /Script/Engine
// ============================================================
class InterpTrackInstDirector : public InterpTrackInst {
public:
    Actor* OldViewTarget;                                                                      // 0x0028 (0x08)
};

// ============================================================
// Inheritance: InterpTrackInst : Object
// Package: /Script/Engine
// ============================================================
class InterpTrackInst : public Object {
public:
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
    void ShowHUD();                                                                            // [Public] RVA: 0x1C0AB50
    void ShowDebugToggleSubCategory(FName Category);                                           // [Final|Public] RVA: 0x7BEE7F4
    void ShowDebugForReticleTargetToggle(TSubclassOf<Actor> DesiredClass);                     // [Final|Public] RVA: 0x7BEE754
    void ShowDebug(FName DebugType);                                                           // [Public] RVA: 0x7BEE6B8
    void RemoveDebugText(Actor* SrcActor, bool bLeaveDurationText);                            // [Final|Public] RVA: 0x7BEE3E8
    void RemoveAllDebugStrings();                                                              // [Final|Public] RVA: 0x7BEE3CC
    void ReceiveHitBoxRelease(const FName BoxName);                                            // [Public] RVA: 0x182D6BC
    void ReceiveHitBoxEndCursorOver(const FName BoxName);                                      // [Public] RVA: 0x182D6BC
    void ReceiveHitBoxClick(const FName BoxName);                                              // [Public] RVA: 0x182D6BC
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);                                    // [Public] RVA: 0x182D6BC
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);                                             // [Public] RVA: 0x182D6BC
    Vector Project(Vector Location);                                                           // [Final|Public] RVA: 0x7BEE304
    void PreviousDebugTarget();                                                                // [Public] RVA: 0x5C5E570
    void NextDebugTarget();                                                                    // [Public] RVA: 0x2319BB8
    void GetTextSize(FString Text, out float OutWidth, out float OutHeight, Font* Font, float Scale);  // [Final|Public] RVA: 0x7BEDF90
    PlayerController* GetOwningPlayerController();                                             // [Final|Public] RVA: 0x4FAA1C8
    Pawn* GetOwningPawn();                                                                     // [Final|Public] RVA: 0x7BEDF70
    void GetActorsInSelectionRectangle(TSubclassOf<Actor> ClassFilter, const out ref Vector2D FirstPoint, const out ref Vector2D SecondPoint, out TArray<Actor*> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);  // [Final|Public] RVA: 0x7BEDC98
    void DrawTextureSimple(Texture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7BEDA08
    void DrawTexture(Texture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, LinearColor TintColor, uint8 BlendMode, float Scale, bool bScalePosition, float Rotation, Vector2D RotPivot);  // [Final|Public] RVA: 0x7BED334
    void DrawText(FString Text, LinearColor TextColor, float ScreenX, float ScreenY, Font* Font, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7BED080
    void DrawRect(LinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);  // [Final|Public] RVA: 0x7BECE88
    void DrawMaterialTriangle(MaterialInterface* Material, Vector2D V0_Pos, Vector2D V1_Pos, Vector2D V2_Pos, Vector2D V0_UV, Vector2D V1_UV, Vector2D V2_UV, LinearColor V0_Color, LinearColor V1_Color, LinearColor V2_Color);  // [Final|Public] RVA: 0x7BEC9F0
    void DrawMaterialSimple(MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);  // [Final|Public] RVA: 0x7BEC688
    void DrawMaterial(MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, Vector2D RotPivot);  // [Final|Public] RVA: 0x7BEC050
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, LinearColor LineColor, float LineThickness);  // [Final|Public] RVA: 0x7BEBE04
    void Deproject(float ScreenX, float ScreenY, out Vector WorldPosition, out Vector WorldDirection);  // [Final|Public] RVA: 0x7BEBC04
    void AddHitBox(Vector2D position, Vector2D Size, FName InName, bool bConsumesInput, int32 Priority);  // [Final|Public] RVA: 0x7BEBA20
    void AddDebugText(FString DebugText, Actor* SrcActor, float Duration, Vector Offset, Vector DesiredOffset, Color TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, Font* InFont, float FontScale, bool bDrawShadow);  // [Final|Public] RVA: 0x7BEB598
};

// ============================================================
// Inheritance: Canvas : Object
// Package: /Script/Engine
// ============================================================
class Canvas : public Object {
public:
    float OrgX;                                                                                // 0x0028 (0x04)
    float OrgY;                                                                                // 0x002C (0x04)
    float ClipX;                                                                               // 0x0030 (0x04)
    float ClipY;                                                                               // 0x0034 (0x04)
    Color DrawColor;                                                                           // 0x0038 (0x04)
    bool bCenterX;                                                                             // 0x003C (0x01) BitMask: 0x01
    bool bCenterY;                                                                             // 0x003C (0x01) BitMask: 0x02
    bool bNoSmooth;                                                                            // 0x003C (0x01) BitMask: 0x04
    int32 SizeX;                                                                               // 0x0040 (0x04)
    int32 SizeY;                                                                               // 0x0044 (0x04)
    Plane ColorModulate;                                                                       // 0x0050 (0x10)
    Texture2D* DefaultTexture;                                                                 // 0x0060 (0x08)
    Texture2D* GradientTexture0;                                                               // 0x0068 (0x08)
    ReporterGraph* ReporterGraph;                                                              // 0x0070 (0x08)

    // --- Functions ---
    Vector2D K2_TextSize(Font* RenderFont, FString RenderText, Vector2D Scale);                // [Final|Public] RVA: 0x7BCABA0
    Vector2D K2_StrLen(Font* RenderFont, FString RenderText);                                  // [Final|Public] RVA: 0x7BCAA74
    Vector K2_Project(Vector WorldLocation);                                                   // [Final|Public] RVA: 0x7BCA9A8
    void K2_DrawTriangle(Texture* RenderTexture, TArray<CanvasUVTri> Triangles);               // [Final|Public] RVA: 0x7BCA884
    void K2_DrawTexture(Texture* RenderTexture, Vector2D ScreenPosition, Vector2D ScreenSize, Vector2D CoordinatePosition, Vector2D CoordinateSize, LinearColor RenderColor, uint8 BlendMode, float Rotation, Vector2D PivotPoint);  // [Final|Public] RVA: 0x7BCA540
    void K2_DrawText(Font* RenderFont, FString RenderText, Vector2D ScreenPosition, Vector2D Scale, LinearColor RenderColor, float Kerning, LinearColor ShadowColor, Vector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, LinearColor OutlineColor);  // [Final|Public] RVA: 0x7BC9FE4
    void K2_DrawPolygon(Texture* RenderTexture, Vector2D ScreenPosition, Vector2D Radius, int32 NumberOfSides, LinearColor RenderColor);  // [Final|Public] RVA: 0x7BC9D8C
    void K2_DrawMaterialTriangle(MaterialInterface* RenderMaterial, TArray<CanvasUVTri> Triangles);  // [Final|Public] RVA: 0x7BC9C68
    void K2_DrawMaterial(MaterialInterface* RenderMaterial, Vector2D ScreenPosition, Vector2D ScreenSize, Vector2D CoordinatePosition, Vector2D CoordinateSize, float Rotation, Vector2D PivotPoint);  // [Final|Public] RVA: 0x7BC989C
    void K2_DrawLine(Vector2D ScreenPositionA, Vector2D ScreenPositionB, float Thickness, LinearColor RenderColor);  // [Final|Public] RVA: 0x7BC9704
    void K2_DrawBox(Vector2D ScreenPosition, Vector2D ScreenSize, float Thickness, LinearColor RenderColor);  // [Final|Public] RVA: 0x7BC956C
    void K2_DrawBorder(Texture* BorderTexture, Texture* BackgroundTexture, Texture* LeftBorderTexture, Texture* RightBorderTexture, Texture* TopBorderTexture, Texture* BottomBorderTexture, Vector2D ScreenPosition, Vector2D ScreenSize, Vector2D CoordinatePosition, Vector2D CoordinateSize, LinearColor RenderColor, Vector2D BorderScale, Vector2D BackgroundScale, float Rotation, Vector2D PivotPoint, Vector2D CornerSize);  // [Final|Public] RVA: 0x7BC8E48
    void K2_Deproject(Vector2D ScreenPosition, out Vector WorldOrigin, out Vector WorldDirection);  // [Final|Public] RVA: 0x7BC8C8C
};

// ============================================================
// Inheritance: ReporterGraph : ReporterBase : Object
// Package: /Script/Engine
// ============================================================
class ReporterGraph : public ReporterBase {
public:
};

// ============================================================
// Inheritance: ReporterBase : Object
// Package: /Script/Engine
// ============================================================
class ReporterBase : public Object {
public:
};

// ============================================================
// Inheritance: CanvasUVTri
// Package: /Script/Engine
// ============================================================
struct CanvasUVTri {
public:
    Vector2D V0_Pos;                                                                           // 0x0000 (0x08)
    Vector2D V0_UV;                                                                            // 0x0008 (0x08)
    LinearColor V0_Color;                                                                      // 0x0010 (0x10)
    Vector2D V1_Pos;                                                                           // 0x0020 (0x08)
    Vector2D V1_UV;                                                                            // 0x0028 (0x08)
    LinearColor V1_Color;                                                                      // 0x0030 (0x10)
    Vector2D V2_Pos;                                                                           // 0x0040 (0x08)
    Vector2D V2_UV;                                                                            // 0x0048 (0x08)
    LinearColor V2_Color;                                                                      // 0x0050 (0x10)
};

// ============================================================
// Inheritance: DebugTextInfo
// Package: /Script/Engine
// ============================================================
struct DebugTextInfo {
public:
    Actor* SrcActor;                                                                           // 0x0000 (0x08)
    Vector SrcActorOffset;                                                                     // 0x0008 (0x0C)
    Vector SrcActorDesiredOffset;                                                              // 0x0014 (0x0C)
    FString DebugText;                                                                         // 0x0020 (0x10)
    float TimeRemaining;                                                                       // 0x0030 (0x04)
    float Duration;                                                                            // 0x0034 (0x04)
    Color TextColor;                                                                           // 0x0038 (0x04)
    bool bAbsoluteLocation;                                                                    // 0x003C (0x01) BitMask: 0x01
    bool bKeepAttachedToActor;                                                                 // 0x003C (0x01) BitMask: 0x02
    bool bDrawShadow;                                                                          // 0x003C (0x01) BitMask: 0x04
    Vector OrigActorLocation;                                                                  // 0x0040 (0x0C)
    Font* Font;                                                                                // 0x0050 (0x08)
    float FontScale;                                                                           // 0x0058 (0x04)
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
    void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();                              // [Final|Protected] RVA: 0x7C69050
    void StopCameraShake(CameraShakeBase* ShakeInstance, bool bImmediately);                   // [Public] RVA: 0x7C68EC0
    void StopCameraFade();                                                                     // [Public] RVA: 0x1B0243C
    void StopCameraAnimInst(CameraAnimInst* AnimInst, bool bImmediate);                        // [Public] RVA: 0x7C68DD0
    void StopAllInstancesOfCameraShakeFromSource(TSubclassOf<CameraShakeBase> Shake, CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Public] RVA: 0x7C68C98
    void StopAllInstancesOfCameraShake(TSubclassOf<CameraShakeBase> Shake, bool bImmediately);  // [Public] RVA: 0x7C68BA8
    void StopAllInstancesOfCameraAnim(CameraAnim* Anim, bool bImmediate);                      // [Public] RVA: 0x7C68AB8
    void StopAllCameraShakesFromSource(CameraShakeSourceComponent* SourceComponent, bool bImmediately);  // [Public] RVA: 0x7C689C8
    void StopAllCameraShakes(bool bImmediately);                                               // [Public] RVA: 0x7C68928
    void StopAllCameraAnims(bool bImmediate);                                                  // [Public] RVA: 0x7C68888
    MatineeCameraShake* StartMatineeCameraShakeFromSource(TSubclassOf<MatineeCameraShake> ShakeClass, CameraShakeSourceComponent* SourceComponent, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7C6868C
    MatineeCameraShake* StartMatineeCameraShake(TSubclassOf<MatineeCameraShake> ShakeClass, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7C684E4
    CameraShakeBase* StartCameraShakeFromSource(TSubclassOf<CameraShakeBase> ShakeClass, CameraShakeSourceComponent* SourceComponent, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7C68254
    CameraShakeBase* StartCameraShake(TSubclassOf<CameraShakeBase> ShakeClass, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7C680A8
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, LinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);  // [Public] RVA: 0x7C67E5C
    void SetManualCameraFade(float InFadeAmount, LinearColor Color, bool bInFadeAudio);        // [Public] RVA: 0x7C676C0
    void SetGameCameraCutThisFrame();                                                          // [Final|Public] RVA: 0x7C67568
    bool RemoveCameraModifier(CameraModifier* ModifierToRemove);                               // [Public] RVA: 0x686161C
    void RemoveCameraLensEffect(EmitterCameraLensEffectBase* Emitter);                         // [Public] RVA: 0x7C65FEC
    CameraAnimInst* PlayCameraAnim(CameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Public] RVA: 0x7C65180
    void PhotographyCameraModify(const Vector NewCameraLocation, const Vector PreviousCameraLocation, const Vector OriginalCameraLocation, out Vector ResultCameraLocation);  // [Public] RVA: 0x7C64F78
    void OnPhotographySessionStart();                                                          // [Public] RVA: 0x231BB90
    void OnPhotographySessionEnd();                                                            // [Public] RVA: 0x4691CF8
    void OnPhotographyMultiPartCaptureStart();                                                 // [Public] RVA: 0x1EF4570
    void OnPhotographyMultiPartCaptureEnd();                                                   // [Public] RVA: 0x1C0AB50
    PlayerController* GetOwningPlayerController();                                             // [Public] RVA: 0x7C64920
    float GetFOVAngle();                                                                       // [Public] RVA: 0x7BCE068
    Rotator GetCameraRotation();                                                               // [Public] RVA: 0x7C63360
    Vector GetCameraLocation();                                                                // [Public] RVA: 0x7C63328
    CameraModifier* FindCameraModifierByClass(TSubclassOf<CameraModifier> ModifierClass);      // [Public] RVA: 0x7C63278
    void ClearCameraLensEffects();                                                             // [Public] RVA: 0x277616C
    bool BlueprintUpdateCamera(Actor* CameraTarget, out Vector NewCameraLocation, out Rotator NewCameraRotation, out float NewCameraFOV);  // [Public] RVA: 0x182D6BC
    CameraModifier* AddNewCameraModifier(TSubclassOf<CameraModifier> ModifierClass);           // [Public] RVA: 0x7C5FD8C
    EmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<EmitterCameraLensEffectBase> LensEffectEmitterClass);  // [Public] RVA: 0x7C5FCDC
};

// ============================================================
// Inheritance: CameraCacheEntry
// Package: /Script/Engine
// ============================================================
struct CameraCacheEntry {
public:
    float Timestamp;                                                                           // 0x0000 (0x04)
    MinimalViewInfo POV;                                                                       // 0x0010 (0x730)
};

// ============================================================
// Inheritance: MinimalViewInfo
// Package: /Script/Engine
// ============================================================
struct MinimalViewInfo {
public:
    Vector Location;                                                                           // 0x0000 (0x0C)
    Rotator Rotation;                                                                          // 0x000C (0x0C)
    float FOV;                                                                                 // 0x0018 (0x04)
    float ShadowFOV;                                                                           // 0x001C (0x04)
    float DesiredFOV;                                                                          // 0x0020 (0x04)
    float OrthoWidth;                                                                          // 0x0024 (0x04)
    float OrthoNearClipPlane;                                                                  // 0x0028 (0x04)
    float OrthoFarClipPlane;                                                                   // 0x002C (0x04)
    float AspectRatio;                                                                         // 0x0030 (0x04)
    bool bConstrainAspectRatio;                                                                // 0x0034 (0x01) BitMask: 0x01
    bool bUseFieldOfViewForLOD;                                                                // 0x0034 (0x01) BitMask: 0x02
    uint8 ProjectionMode;                                                                      // 0x0038 (0x01)
    float PostProcessBlendWeight;                                                              // 0x003C (0x04)
    PostProcessSettings PostProcessSettings;                                                   // 0x0040 (0x6A0)
    Vector2D OffCenterProjectionOffset;                                                        // 0x06E0 (0x08)
    uint8 FOVMode;                                                                             // 0x06E8 (0x01)
};

// ============================================================
// Inheritance: PostProcessSettings
// Package: /Script/Engine
// ============================================================
struct PostProcessSettings {
public:
    bool bOverride_WhiteTemp;                                                                  // 0x0000 (0x01) BitMask: 0x01
    bool bOverride_WhiteTint;                                                                  // 0x0000 (0x01) BitMask: 0x02
    bool bOverride_ColorSaturation;                                                            // 0x0000 (0x01) BitMask: 0x04
    bool bOverride_ColorContrast;                                                              // 0x0000 (0x01) BitMask: 0x08
    bool bOverride_ColorGamma;                                                                 // 0x0000 (0x01) BitMask: 0x10
    bool bOverride_ColorGain;                                                                  // 0x0000 (0x01) BitMask: 0x20
    bool bOverride_ColorOffset;                                                                // 0x0000 (0x01) BitMask: 0x40
    bool bOverride_MobileLDRColorSaturation;                                                   // 0x0001 (0x01) BitMask: 0x01
    bool bOverride_MobileLDRColorOffset;                                                       // 0x0001 (0x01) BitMask: 0x02
    bool bOverride_MobileLDRColorGain;                                                         // 0x0001 (0x01) BitMask: 0x04
    bool bOverride_ColorSaturationShadows;                                                     // 0x0001 (0x01) BitMask: 0x08
    bool bOverride_ColorContrastShadows;                                                       // 0x0001 (0x01) BitMask: 0x10
    bool bOverride_ColorGammaShadows;                                                          // 0x0001 (0x01) BitMask: 0x20
    bool bOverride_ColorGainShadows;                                                           // 0x0001 (0x01) BitMask: 0x40
    bool bOverride_ColorOffsetShadows;                                                         // 0x0001 (0x01) BitMask: 0x80
    bool bOverride_ColorSaturationMidtones;                                                    // 0x0002 (0x01) BitMask: 0x01
    bool bOverride_ColorContrastMidtones;                                                      // 0x0002 (0x01) BitMask: 0x02
    bool bOverride_ColorGammaMidtones;                                                         // 0x0002 (0x01) BitMask: 0x04
    bool bOverride_ColorGainMidtones;                                                          // 0x0002 (0x01) BitMask: 0x08
    bool bOverride_ColorOffsetMidtones;                                                        // 0x0002 (0x01) BitMask: 0x10
    bool bOverride_ColorSaturationHighlights;                                                  // 0x0002 (0x01) BitMask: 0x20
    bool bOverride_ColorContrastHighlights;                                                    // 0x0002 (0x01) BitMask: 0x40
    bool bOverride_ColorGammaHighlights;                                                       // 0x0002 (0x01) BitMask: 0x80
    bool bOverride_ColorGainHighlights;                                                        // 0x0003 (0x01) BitMask: 0x01
    bool bOverride_ColorOffsetHighlights;                                                      // 0x0003 (0x01) BitMask: 0x02
    bool bOverride_ColorCorrectionShadowsMax;                                                  // 0x0003 (0x01) BitMask: 0x04
    bool bOverride_ColorCorrectionHighlightsMin;                                               // 0x0003 (0x01) BitMask: 0x08
    bool bOverride_BlueCorrection;                                                             // 0x0003 (0x01) BitMask: 0x10
    bool bOverride_ExpandGamut;                                                                // 0x0003 (0x01) BitMask: 0x20
    bool bOverride_ToneCurveAmount;                                                            // 0x0003 (0x01) BitMask: 0x40
    bool bOverride_FilmWhitePoint;                                                             // 0x0003 (0x01) BitMask: 0x80
    bool bOverride_FilmSaturation;                                                             // 0x0004 (0x01) BitMask: 0x01
    bool bOverride_FilmChannelMixerRed;                                                        // 0x0004 (0x01) BitMask: 0x02
    bool bOverride_FilmChannelMixerGreen;                                                      // 0x0004 (0x01) BitMask: 0x04
    bool bOverride_FilmChannelMixerBlue;                                                       // 0x0004 (0x01) BitMask: 0x08
    bool bOverride_FilmContrast;                                                               // 0x0004 (0x01) BitMask: 0x10
    bool bOverride_FilmDynamicRange;                                                           // 0x0004 (0x01) BitMask: 0x20
    bool bOverride_FilmHealAmount;                                                             // 0x0004 (0x01) BitMask: 0x40
    bool bOverride_FilmToeAmount;                                                              // 0x0004 (0x01) BitMask: 0x80
    bool bOverride_FilmShadowTint;                                                             // 0x0005 (0x01) BitMask: 0x01
    bool bOverride_FilmShadowTintBlend;                                                        // 0x0005 (0x01) BitMask: 0x02
    bool bOverride_FilmShadowTintAmount;                                                       // 0x0005 (0x01) BitMask: 0x04
    bool bOverride_FilmSlope;                                                                  // 0x0005 (0x01) BitMask: 0x08
    bool bOverride_FilmToe;                                                                    // 0x0005 (0x01) BitMask: 0x10
    bool bOverride_FilmShoulder;                                                               // 0x0005 (0x01) BitMask: 0x20
    bool bOverride_FilmBlackClip;                                                              // 0x0005 (0x01) BitMask: 0x40
    bool bOverride_FilmWhiteClip;                                                              // 0x0005 (0x01) BitMask: 0x80
    bool bOverride_SceneColorTint;                                                             // 0x0006 (0x01) BitMask: 0x01
    bool bOverride_SceneFringeIntensity;                                                       // 0x0006 (0x01) BitMask: 0x02
    bool bOverride_ChromaticAberrationStartOffset;                                             // 0x0006 (0x01) BitMask: 0x04
    bool bOverride_AmbientCubemapTint;                                                         // 0x0006 (0x01) BitMask: 0x08
    bool bOverride_AmbientCubemapIntensity;                                                    // 0x0006 (0x01) BitMask: 0x10
    bool bOverride_BloomMethod;                                                                // 0x0006 (0x01) BitMask: 0x20
    bool bOverride_BloomIntensity;                                                             // 0x0006 (0x01) BitMask: 0x40
    bool bOverride_BloomThreshold;                                                             // 0x0006 (0x01) BitMask: 0x80
    bool bOverride_Bloom1Tint;                                                                 // 0x0007 (0x01) BitMask: 0x01
    bool bOverride_Bloom1Size;                                                                 // 0x0007 (0x01) BitMask: 0x02
    bool bOverride_Bloom2Size;                                                                 // 0x0007 (0x01) BitMask: 0x04
    bool bOverride_Bloom2Tint;                                                                 // 0x0007 (0x01) BitMask: 0x08
    bool bOverride_Bloom3Tint;                                                                 // 0x0007 (0x01) BitMask: 0x10
    bool bOverride_Bloom3Size;                                                                 // 0x0007 (0x01) BitMask: 0x20
    bool bOverride_Bloom4Tint;                                                                 // 0x0007 (0x01) BitMask: 0x40
    bool bOverride_Bloom4Size;                                                                 // 0x0007 (0x01) BitMask: 0x80
    bool bOverride_Bloom5Tint;                                                                 // 0x0008 (0x01) BitMask: 0x01
    bool bOverride_Bloom5Size;                                                                 // 0x0008 (0x01) BitMask: 0x02
    bool bOverride_Bloom6Tint;                                                                 // 0x0008 (0x01) BitMask: 0x04
    bool bOverride_Bloom6Size;                                                                 // 0x0008 (0x01) BitMask: 0x08
    bool bOverride_BloomSizeScale;                                                             // 0x0008 (0x01) BitMask: 0x10
    bool bOverride_BloomConvolutionTexture;                                                    // 0x0008 (0x01) BitMask: 0x20
    bool bOverride_BloomConvolutionSize;                                                       // 0x0008 (0x01) BitMask: 0x40
    bool bOverride_BloomConvolutionCenterUV;                                                   // 0x0008 (0x01) BitMask: 0x80
    bool bOverride_BloomConvolutionPreFilter;                                                  // 0x0009 (0x01) BitMask: 0x01
    bool bOverride_BloomConvolutionPreFilterMin;                                               // 0x0009 (0x01) BitMask: 0x02
    bool bOverride_BloomConvolutionPreFilterMax;                                               // 0x0009 (0x01) BitMask: 0x04
    bool bOverride_BloomConvolutionPreFilterMult;                                              // 0x0009 (0x01) BitMask: 0x08
    bool bOverride_BloomConvolutionBufferScale;                                                // 0x0009 (0x01) BitMask: 0x10
    bool bOverride_BloomDirtMaskIntensity;                                                     // 0x0009 (0x01) BitMask: 0x20
    bool bOverride_BloomDirtMaskTint;                                                          // 0x0009 (0x01) BitMask: 0x40
    bool bOverride_BloomDirtMask;                                                              // 0x0009 (0x01) BitMask: 0x80
    bool bOverride_CameraShutterSpeed;                                                         // 0x000A (0x01) BitMask: 0x01
    bool bOverride_CameraISO;                                                                  // 0x000A (0x01) BitMask: 0x02
    bool bOverride_AutoExposureMethod;                                                         // 0x000A (0x01) BitMask: 0x04
    bool bOverride_AutoExposureLowPercent;                                                     // 0x000A (0x01) BitMask: 0x08
    bool bOverride_AutoExposureHighPercent;                                                    // 0x000A (0x01) BitMask: 0x10
    bool bOverride_AutoExposureMinBrightness;                                                  // 0x000A (0x01) BitMask: 0x20
    bool bOverride_AutoExposureMaxBrightness;                                                  // 0x000A (0x01) BitMask: 0x40
    bool bOverride_AutoExposureCalibrationConstant;                                            // 0x000A (0x01) BitMask: 0x80
    bool bOverride_AutoExposureSpeedUp;                                                        // 0x000B (0x01) BitMask: 0x01
    bool bOverride_AutoExposureSpeedDown;                                                      // 0x000B (0x01) BitMask: 0x02
    bool bOverride_AutoExposureBias;                                                           // 0x000B (0x01) BitMask: 0x04
    bool bOverride_AutoExposureBiasCurve;                                                      // 0x000B (0x01) BitMask: 0x08
    bool bOverride_CompensateCurveBaseEV;                                                      // 0x000B (0x01) BitMask: 0x10
    bool bOverride_FXExposureCompensationOffset;                                               // 0x000B (0x01) BitMask: 0x20
    bool bOverride_FXExposureCompensationSlope;                                                // 0x000B (0x01) BitMask: 0x40
    bool bOverride_FXExposureCompensationSecondSlope;                                          // 0x000B (0x01) BitMask: 0x80
    bool bOverride_AutoExposureMeterMask;                                                      // 0x000C (0x01) BitMask: 0x01
    bool bOverride_AutoExposureMeterMaskWeight;                                                // 0x000C (0x01) BitMask: 0x02
    bool bOverride_AutoExposureApplyPhysicalCameraExposure;                                    // 0x000C (0x01) BitMask: 0x04
    bool bOverride_HistogramLogMin;                                                            // 0x000C (0x01) BitMask: 0x08
    bool bOverride_HistogramLogMax;                                                            // 0x000C (0x01) BitMask: 0x10
    bool bOverride_AutoExposureMeterMaskWeightAdjustmentMin;                                   // 0x000C (0x01) BitMask: 0x20
    bool bOverride_AutoExposureMeterMaskWeightAdjustmentMax;                                   // 0x000C (0x01) BitMask: 0x40
    bool bOverride_AutoExposureMeterMaskWeightAdjustmentPower;                                 // 0x000C (0x01) BitMask: 0x80
    bool bOverride_LocalExposureContrastScale;                                                 // 0x000D (0x01) BitMask: 0x01
    bool bOverride_LocalExposureHighlightContrastScale;                                        // 0x000D (0x01) BitMask: 0x02
    bool bOverride_LocalExposureShadowContrastScale;                                           // 0x000D (0x01) BitMask: 0x04
    bool bOverride_LocalExposureDetailStrength;                                                // 0x000D (0x01) BitMask: 0x08
    bool bOverride_LocalExposureBlurredLuminanceBlend;                                         // 0x000D (0x01) BitMask: 0x10
    bool bOverride_LocalExposureBlurredLuminanceKernelSizePercent;                             // 0x000D (0x01) BitMask: 0x20
    bool bOverride_LocalExposureMiddleGreyBias;                                                // 0x000D (0x01) BitMask: 0x40
    bool bOverride_LensFlareIntensity;                                                         // 0x000D (0x01) BitMask: 0x80
    bool bOverride_LensFlareTint;                                                              // 0x000E (0x01) BitMask: 0x01
    bool bOverride_LensFlareTints;                                                             // 0x000E (0x01) BitMask: 0x02
    bool bOverride_LensFlareBokehSize;                                                         // 0x000E (0x01) BitMask: 0x04
    bool bOverride_LensFlareBokehShape;                                                        // 0x000E (0x01) BitMask: 0x08
    bool bOverride_LensFlareThreshold;                                                         // 0x000E (0x01) BitMask: 0x10
    bool bOverride_VignetteIntensity;                                                          // 0x000E (0x01) BitMask: 0x20
    bool bOverride_GrainIntensity;                                                             // 0x000E (0x01) BitMask: 0x40
    bool bOverride_GrainJitter;                                                                // 0x000E (0x01) BitMask: 0x80
    bool bOverride_AmbientOcclusionIntensity;                                                  // 0x000F (0x01) BitMask: 0x01
    bool bOverride_AmbientOcclusionIntensityFoliage;                                           // 0x000F (0x01) BitMask: 0x02
    bool bOverride_AmbientOcclusionStaticFraction;                                             // 0x000F (0x01) BitMask: 0x04
    bool bOverride_AmbientOcclusionRadius;                                                     // 0x000F (0x01) BitMask: 0x08
    bool bOverride_AmbientOcclusionFarRadius;                                                  // 0x000F (0x01) BitMask: 0x10
    bool bOverride_AmbientOcclusionFadeDistance;                                               // 0x000F (0x01) BitMask: 0x20
    bool bOverride_AmbientOcclusionFadeRadius;                                                 // 0x000F (0x01) BitMask: 0x40
    bool bOverride_AmbientOcclusionDistance;                                                   // 0x000F (0x01) BitMask: 0x80
    bool bOverride_AmbientOcclusionRadiusInWS;                                                 // 0x0010 (0x01) BitMask: 0x01
    bool bOverride_AmbientOcclusionPower;                                                      // 0x0010 (0x01) BitMask: 0x02
    bool bOverride_AmbientOcclusionBias;                                                       // 0x0010 (0x01) BitMask: 0x04
    bool bOverride_AmbientOcclusionQuality;                                                    // 0x0010 (0x01) BitMask: 0x08
    bool bOverride_AmbientOcclusionMipBlend;                                                   // 0x0010 (0x01) BitMask: 0x10
    bool bOverride_AmbientOcclusionMipScale;                                                   // 0x0010 (0x01) BitMask: 0x20
    bool bOverride_AmbientOcclusionMipThreshold;                                               // 0x0010 (0x01) BitMask: 0x40
    bool bOverride_AmbientOcclusionTemporalBlendWeight;                                        // 0x0010 (0x01) BitMask: 0x80
    bool bOverride_RayTracingAO;                                                               // 0x0014 (0x01) BitMask: 0x01
    bool bOverride_RayTracingAOSamplesPerPixel;                                                // 0x0014 (0x01) BitMask: 0x02
    bool bOverride_RayTracingAOIntensity;                                                      // 0x0014 (0x01) BitMask: 0x04
    bool bOverride_RayTracingAORadius;                                                         // 0x0014 (0x01) BitMask: 0x08
    bool bOverride_XeGTAOEnabled;                                                              // 0x0014 (0x01) BitMask: 0x10
    bool bOverride_XeGTAOIntensity;                                                            // 0x0014 (0x01) BitMask: 0x20
    bool bOverride_XeGTAORadius;                                                               // 0x0014 (0x01) BitMask: 0x40
    bool bOverride_XeGTAORadius1P;                                                             // 0x0014 (0x01) BitMask: 0x80
    bool bOverride_AOIntensityOnLightmap;                                                      // 0x0015 (0x01) BitMask: 0x01
    bool bOverride_LPVIntensity;                                                               // 0x0018 (0x01) BitMask: 0x01
    bool bOverride_LPVDirectionalOcclusionIntensity;                                           // 0x0018 (0x01) BitMask: 0x02
    bool bOverride_LPVDirectionalOcclusionRadius;                                              // 0x0018 (0x01) BitMask: 0x04
    bool bOverride_LPVDiffuseOcclusionExponent;                                                // 0x0018 (0x01) BitMask: 0x08
    bool bOverride_LPVSpecularOcclusionExponent;                                               // 0x0018 (0x01) BitMask: 0x10
    bool bOverride_LPVDiffuseOcclusionIntensity;                                               // 0x0018 (0x01) BitMask: 0x20
    bool bOverride_LPVSpecularOcclusionIntensity;                                              // 0x0018 (0x01) BitMask: 0x40
    bool bOverride_LPVSize;                                                                    // 0x0018 (0x01) BitMask: 0x80
    bool bOverride_LPVSecondaryOcclusionIntensity;                                             // 0x0019 (0x01) BitMask: 0x01
    bool bOverride_LPVSecondaryBounceIntensity;                                                // 0x0019 (0x01) BitMask: 0x02
    bool bOverride_LPVGeometryVolumeBias;                                                      // 0x0019 (0x01) BitMask: 0x04
    bool bOverride_LPVVplInjectionBias;                                                        // 0x0019 (0x01) BitMask: 0x08
    bool bOverride_LPVEmissiveInjectionIntensity;                                              // 0x0019 (0x01) BitMask: 0x10
    bool bOverride_LPVFadeRange;                                                               // 0x0019 (0x01) BitMask: 0x20
    bool bOverride_LPVDirectionalOcclusionFadeRange;                                           // 0x0019 (0x01) BitMask: 0x40
    bool bOverride_IndirectLightingColor;                                                      // 0x0019 (0x01) BitMask: 0x80
    bool bOverride_IndirectLightingIntensity;                                                  // 0x001A (0x01) BitMask: 0x01
    bool bOverride_SkyVisibilityScale;                                                         // 0x001A (0x01) BitMask: 0x02
    bool bOverride_TODGIAndSkyVisibilityScaleChangeSpeed;                                      // 0x001A (0x01) BitMask: 0x04
    bool bOverride_ShadowReduceSpecularAOIntensity;                                            // 0x001A (0x01) BitMask: 0x08
    bool bOverride_MinimalIndirectLightingLuminance;                                           // 0x001A (0x01) BitMask: 0x10
    bool bOverride_LocalTonemappingBrighterAreaIntensity;                                      // 0x001A (0x01) BitMask: 0x20
    bool bOverride_LocalTonemappingBrighterAreaEVDiffThreshold;                                // 0x001A (0x01) BitMask: 0x40
    bool bOverride_LocalTonemappingDarkerAreaIntensity;                                        // 0x001A (0x01) BitMask: 0x80
    bool bOverride_LocalTonemappingDarkerAreaEVDiffThreshold;                                  // 0x001B (0x01) BitMask: 0x01
    bool bOverride_LocalTonemappingSceneEVOffset;                                              // 0x001B (0x01) BitMask: 0x02
    bool bOverride_LocalTonemappingMinSkyVisibility;                                           // 0x001B (0x01) BitMask: 0x04
    bool bOverride_ColorGradingIntensity;                                                      // 0x001B (0x01) BitMask: 0x08
    bool bOverride_ColorGradingLUT;                                                            // 0x001B (0x01) BitMask: 0x10
    bool bOverride_DepthOfFieldFocalDistance;                                                  // 0x001B (0x01) BitMask: 0x20
    bool bOverride_EnableForegroundOnlyDOF;                                                    // 0x001B (0x01) BitMask: 0x40
    bool bOverride_DepthOfFieldCustomFOVForegroundOnly;                                        // 0x001B (0x01) BitMask: 0x80
    bool bOverride_DepthOfFieldMaxBackgroundRadius;                                            // 0x001C (0x01) BitMask: 0x01
    bool bOverride_DepthOfFieldFstop;                                                          // 0x001C (0x01) BitMask: 0x02
    bool bOverride_DepthOfFieldMinFstop;                                                       // 0x001C (0x01) BitMask: 0x04
    bool bOverride_DepthOfFieldBladeCount;                                                     // 0x001C (0x01) BitMask: 0x08
    bool bOverride_DepthOfFieldSensorWidth;                                                    // 0x001C (0x01) BitMask: 0x10
    bool bOverride_DepthOfFieldDepthBlurRadius;                                                // 0x001C (0x01) BitMask: 0x20
    bool bOverride_DepthOfFieldDepthBlurAmount;                                                // 0x001C (0x01) BitMask: 0x40
    bool bOverride_DepthOfFieldFocalRegion;                                                    // 0x001C (0x01) BitMask: 0x80
    bool bOverride_DepthOfFieldNearTransitionRegion;                                           // 0x001D (0x01) BitMask: 0x01
    bool bOverride_DepthOfFieldFarTransitionRegion;                                            // 0x001D (0x01) BitMask: 0x02
    bool bOverride_DepthOfFieldScale;                                                          // 0x001D (0x01) BitMask: 0x04
    bool bOverride_DepthOfFieldNearBlurSize;                                                   // 0x001D (0x01) BitMask: 0x08
    bool bOverride_DepthOfFieldFarBlurSize;                                                    // 0x001D (0x01) BitMask: 0x10
    bool bOverride_MobileHQGaussian;                                                           // 0x001D (0x01) BitMask: 0x20
    bool bOverride_DepthOfFieldOcclusion;                                                      // 0x001D (0x01) BitMask: 0x40
    bool bOverride_DepthOfFieldSkyFocusDistance;                                               // 0x001D (0x01) BitMask: 0x80
    bool bOverride_DepthOfFieldVignetteSize;                                                   // 0x001E (0x01) BitMask: 0x01
    bool bOverride_UABlurScopeRadius;                                                          // 0x001E (0x01) BitMask: 0x02
    bool bOverride_UABlurScopeThreshold;                                                       // 0x001E (0x01) BitMask: 0x04
    bool bOverride_UABlurCircle;                                                               // 0x001E (0x01) BitMask: 0x08
    bool bOverride_UABlurOptimal;                                                              // 0x001E (0x01) BitMask: 0x10
    bool bOverride_MotionBlurAmount;                                                           // 0x001E (0x01) BitMask: 0x20
    bool bOverride_MotionBlurMax;                                                              // 0x001E (0x01) BitMask: 0x40
    bool bOverride_MotionBlurTargetFPS;                                                        // 0x001E (0x01) BitMask: 0x80
    bool bOverride_MotionBlurPerObjectSize;                                                    // 0x001F (0x01) BitMask: 0x01
    bool bOverride_ScreenPercentage;                                                           // 0x001F (0x01) BitMask: 0x02
    bool bOverride_ScreenSpaceReflectionIntensity;                                             // 0x001F (0x01) BitMask: 0x04
    bool bOverride_ScreenSpaceReflectionQuality;                                               // 0x001F (0x01) BitMask: 0x08
    bool bOverride_ScreenSpaceReflectionMaxRoughness;                                          // 0x001F (0x01) BitMask: 0x10
    bool bOverride_ScreenSpaceReflectionRoughnessScale;                                        // 0x001F (0x01) BitMask: 0x20
    bool bOverride_ScreenSpaceReflectionStochastic;                                            // 0x001F (0x01) BitMask: 0x40
    bool bOverride_ReflectionsType;                                                            // 0x0020 (0x01) BitMask: 0x01
    bool bOverride_DisableSLWRTR;                                                              // 0x0020 (0x01) BitMask: 0x02
    bool bOverride_ShadowsType;                                                                // 0x0020 (0x01) BitMask: 0x04
    bool bOverride_RayTracingReflectionsMaxRoughness;                                          // 0x0020 (0x01) BitMask: 0x08
    bool bOverride_RayTracingReflectionsMaxBounces;                                            // 0x0020 (0x01) BitMask: 0x10
    bool bOverride_RayTracingReflectionsSamplesPerPixel;                                       // 0x0020 (0x01) BitMask: 0x20
    bool bOverride_RayTracingReflectionsShadows;                                               // 0x0020 (0x01) BitMask: 0x40
    bool bOverride_RayTracingReflectionsTranslucency;                                          // 0x0020 (0x01) BitMask: 0x80
    bool bOverride_TranslucencyType;                                                           // 0x0021 (0x01) BitMask: 0x01
    bool bOverride_RayTracingTranslucencyMaxRoughness;                                         // 0x0021 (0x01) BitMask: 0x02
    bool bOverride_RayTracingTranslucencyRefractionRays;                                       // 0x0021 (0x01) BitMask: 0x04
    bool bOverride_RayTracingTranslucencySamplesPerPixel;                                      // 0x0021 (0x01) BitMask: 0x08
    bool bOverride_RayTracingTranslucencyShadows;                                              // 0x0021 (0x01) BitMask: 0x10
    bool bOverride_RayTracingTranslucencyRefraction;                                           // 0x0021 (0x01) BitMask: 0x20
    bool bOverride_LightmapMixingTypeOverride;                                                 // 0x0021 (0x01) BitMask: 0x40
    bool bOverride_LumenSceneDetail;                                                           // 0x0021 (0x01) BitMask: 0x80
    bool bOverride_LumenSceneLightingUpdateSpeed;                                              // 0x0022 (0x01) BitMask: 0x01
    bool bOverride_LumenFinalGatherQuality;                                                    // 0x0022 (0x01) BitMask: 0x02
    bool bOverride_LumenSkylightLeaking;                                                       // 0x0022 (0x01) BitMask: 0x04
    bool bOverride_LumenTraceMeshSDFs;                                                         // 0x0024 (0x01) BitMask: 0x01
    bool bOverride_RayTracingGI;                                                               // 0x0028 (0x01) BitMask: 0x01
    bool bOverride_RayTracingGIMaxBounces;                                                     // 0x0028 (0x01) BitMask: 0x02
    bool bOverride_RayTracingGISamplesPerPixel;                                                // 0x0028 (0x01) BitMask: 0x04
    bool bOverride_PathTracingMaxBounces;                                                      // 0x0028 (0x01) BitMask: 0x08
    bool bOverride_PathTracingSamplesPerPixel;                                                 // 0x0028 (0x01) BitMask: 0x10
    bool bMobileHQGaussian;                                                                    // 0x002C (0x01) BitMask: 0x01
    uint8 BloomMethod;                                                                         // 0x002D (0x01)
    uint8 AutoExposureMethod;                                                                  // 0x002E (0x01)
    float WhiteTemp;                                                                           // 0x0030 (0x04)
    float WhiteTint;                                                                           // 0x0034 (0x04)
    Vector4 ColorSaturation;                                                                   // 0x0040 (0x10)
    Vector4 ColorContrast;                                                                     // 0x0050 (0x10)
    Vector4 ColorGamma;                                                                        // 0x0060 (0x10)
    Vector4 ColorGain;                                                                         // 0x0070 (0x10)
    Vector4 ColorOffset;                                                                       // 0x0080 (0x10)
    float ColorVibrance;                                                                       // 0x0090 (0x04)
    Vector4 MobileLDRColorSaturation;                                                          // 0x00A0 (0x10)
    Vector4 MobileLDRColorGain;                                                                // 0x00B0 (0x10)
    Vector4 MobileLDRColorOffset;                                                              // 0x00C0 (0x10)
    Vector4 ColorSaturationShadows;                                                            // 0x00D0 (0x10)
    Vector4 ColorContrastShadows;                                                              // 0x00E0 (0x10)
    Vector4 ColorGammaShadows;                                                                 // 0x00F0 (0x10)
    Vector4 ColorGainShadows;                                                                  // 0x0100 (0x10)
    Vector4 ColorOffsetShadows;                                                                // 0x0110 (0x10)
    Vector4 ColorSaturationMidtones;                                                           // 0x0120 (0x10)
    Vector4 ColorContrastMidtones;                                                             // 0x0130 (0x10)
    Vector4 ColorGammaMidtones;                                                                // 0x0140 (0x10)
    Vector4 ColorGainMidtones;                                                                 // 0x0150 (0x10)
    Vector4 ColorOffsetMidtones;                                                               // 0x0160 (0x10)
    Vector4 ColorSaturationHighlights;                                                         // 0x0170 (0x10)
    Vector4 ColorContrastHighlights;                                                           // 0x0180 (0x10)
    Vector4 ColorGammaHighlights;                                                              // 0x0190 (0x10)
    Vector4 ColorGainHighlights;                                                               // 0x01A0 (0x10)
    Vector4 ColorOffsetHighlights;                                                             // 0x01B0 (0x10)
    float ColorCorrectionHighlightsMin;                                                        // 0x01C0 (0x04)
    float ColorCorrectionShadowsMax;                                                           // 0x01C4 (0x04)
    float BlueCorrection;                                                                      // 0x01C8 (0x04)
    float ExpandGamut;                                                                         // 0x01CC (0x04)
    float ToneCurveAmount;                                                                     // 0x01D0 (0x04)
    float FilmSlope;                                                                           // 0x01D4 (0x04)
    float FilmToe;                                                                             // 0x01D8 (0x04)
    float FilmShoulder;                                                                        // 0x01DC (0x04)
    float FilmBlackClip;                                                                       // 0x01E0 (0x04)
    float FilmWhiteClip;                                                                       // 0x01E4 (0x04)
    LinearColor FilmWhitePoint;                                                                // 0x01E8 (0x10)
    LinearColor FilmShadowTint;                                                                // 0x01F8 (0x10)
    float FilmShadowTintBlend;                                                                 // 0x0208 (0x04)
    float FilmShadowTintAmount;                                                                // 0x020C (0x04)
    float FilmSaturation;                                                                      // 0x0210 (0x04)
    LinearColor FilmChannelMixerRed;                                                           // 0x0214 (0x10)
    LinearColor FilmChannelMixerGreen;                                                         // 0x0224 (0x10)
    LinearColor FilmChannelMixerBlue;                                                          // 0x0234 (0x10)
    float FilmContrast;                                                                        // 0x0244 (0x04)
    float FilmToeAmount;                                                                       // 0x0248 (0x04)
    float FilmHealAmount;                                                                      // 0x024C (0x04)
    float FilmDynamicRange;                                                                    // 0x0250 (0x04)
    LinearColor SceneColorTint;                                                                // 0x0254 (0x10)
    float SceneFringeIntensity;                                                                // 0x0264 (0x04)
    float ChromaticAberrationStartOffset;                                                      // 0x0268 (0x04)
    float BloomIntensity;                                                                      // 0x026C (0x04)
    float BloomThreshold;                                                                      // 0x0270 (0x04)
    float BloomSizeScale;                                                                      // 0x0274 (0x04)
    float Bloom1Size;                                                                          // 0x0278 (0x04)
    float Bloom2Size;                                                                          // 0x027C (0x04)
    float Bloom3Size;                                                                          // 0x0280 (0x04)
    float Bloom4Size;                                                                          // 0x0284 (0x04)
    float Bloom5Size;                                                                          // 0x0288 (0x04)
    float Bloom6Size;                                                                          // 0x028C (0x04)
    LinearColor Bloom1Tint;                                                                    // 0x0290 (0x10)
    LinearColor Bloom2Tint;                                                                    // 0x02A0 (0x10)
    LinearColor Bloom3Tint;                                                                    // 0x02B0 (0x10)
    LinearColor Bloom4Tint;                                                                    // 0x02C0 (0x10)
    LinearColor Bloom5Tint;                                                                    // 0x02D0 (0x10)
    LinearColor Bloom6Tint;                                                                    // 0x02E0 (0x10)
    float BloomConvolutionSize;                                                                // 0x02F0 (0x04)
    Texture2D* BloomConvolutionTexture;                                                        // 0x02F8 (0x08)
    Vector2D BloomConvolutionCenterUV;                                                         // 0x0300 (0x08)
    float BloomConvolutionPreFilterMin;                                                        // 0x0308 (0x04)
    float BloomConvolutionPreFilterMax;                                                        // 0x030C (0x04)
    float BloomConvolutionPreFilterMult;                                                       // 0x0310 (0x04)
    float BloomConvolutionBufferScale;                                                         // 0x0314 (0x04)
    Texture* BloomDirtMask;                                                                    // 0x0318 (0x08)
    float BloomDirtMaskIntensity;                                                              // 0x0320 (0x04)
    LinearColor BloomDirtMaskTint;                                                             // 0x0324 (0x10)
    LinearColor AmbientCubemapTint;                                                            // 0x0334 (0x10)
    float AmbientCubemapIntensity;                                                             // 0x0344 (0x04)
    TextureCube* AmbientCubemap;                                                               // 0x0348 (0x08)
    float CameraShutterSpeed;                                                                  // 0x0350 (0x04)
    float CameraISO;                                                                           // 0x0354 (0x04)
    float DepthOfFieldFstop;                                                                   // 0x0358 (0x04)
    float DepthOfFieldMinFstop;                                                                // 0x035C (0x04)
    int32 DepthOfFieldBladeCount;                                                              // 0x0360 (0x04)
    float AutoExposureBias;                                                                    // 0x0364 (0x04)
    float AutoExposureBiasBackup;                                                              // 0x0368 (0x04)
    bool bOverride_AutoExposureBiasBackup;                                                     // 0x036C (0x01) BitMask: 0x01
    bool AutoExposureApplyPhysicalCameraExposure;                                              // 0x0370 (0x01) BitMask: 0x01
    CurveFloat* AutoExposureBiasCurve;                                                         // 0x0378 (0x08)
    float CompensateCurveBaseEV;                                                               // 0x0380 (0x04)
    Texture* AutoExposureMeterMask;                                                            // 0x0388 (0x08)
    float AutoExposureMeterMaskWeightAdjustmentMin;                                            // 0x0390 (0x04)
    float AutoExposureMeterMaskWeightAdjustmentMax;                                            // 0x0394 (0x04)
    float AutoExposureMeterMaskWeightAdjustmentPower;                                          // 0x0398 (0x04)
    float AutoExposureMeterMaskWeight;                                                         // 0x039C (0x04)
    float AutoExposureLowPercent;                                                              // 0x03A0 (0x04)
    float AutoExposureHighPercent;                                                             // 0x03A4 (0x04)
    float AutoExposureMinBrightness;                                                           // 0x03A8 (0x04)
    float AutoExposureMaxBrightness;                                                           // 0x03AC (0x04)
    float AutoExposureSpeedUp;                                                                 // 0x03B0 (0x04)
    float AutoExposureSpeedDown;                                                               // 0x03B4 (0x04)
    float FXExposureCompensationOffset;                                                        // 0x03B8 (0x04)
    float FXExposureCompensationSlope;                                                         // 0x03BC (0x04)
    float FXExposureCompensationSecondSlope;                                                   // 0x03C0 (0x04)
    float HistogramLogMin;                                                                     // 0x03C4 (0x04)
    float HistogramLogMax;                                                                     // 0x03C8 (0x04)
    float AutoExposureCalibrationConstant;                                                     // 0x03CC (0x04)
    float LocalExposureContrastScale;                                                          // 0x03D0 (0x04)
    float LocalExposureHighlightContrastScale;                                                 // 0x03D4 (0x04)
    float LocalExposureShadowContrastScale;                                                    // 0x03D8 (0x04)
    float LocalExposureDetailStrength;                                                         // 0x03DC (0x04)
    float LocalExposureBlurredLuminanceBlend;                                                  // 0x03E0 (0x04)
    float LocalExposureBlurredLuminanceKernelSizePercent;                                      // 0x03E4 (0x04)
    float LocalExposureMiddleGreyBias;                                                         // 0x03E8 (0x04)
    float LensFlareIntensity;                                                                  // 0x03EC (0x04)
    LinearColor LensFlareTint;                                                                 // 0x03F0 (0x10)
    float LensFlareBokehSize;                                                                  // 0x0400 (0x04)
    float LensFlareThreshold;                                                                  // 0x0404 (0x04)
    Texture* LensFlareBokehShape;                                                              // 0x0408 (0x08)
    TArray<LinearColor> LensFlareTints;                                                        // 0x0410 (0x10)
    float VignetteIntensity;                                                                   // 0x0420 (0x04)
    float GrainJitter;                                                                         // 0x0424 (0x04)
    float GrainIntensity;                                                                      // 0x0428 (0x04)
    float AmbientOcclusionIntensity;                                                           // 0x042C (0x04)
    float AmbientOcclusionFarIntensity;                                                        // 0x0430 (0x04)
    float AmbientOcclusionFadeOutRadius;                                                       // 0x0434 (0x04)
    float AmbientOcclusionFadeOutDistance;                                                     // 0x0438 (0x04)
    float AmbientOcclusionStaticFraction;                                                      // 0x043C (0x04)
    float AmbientOcclusionRadius;                                                              // 0x0440 (0x04)
    float AmbientOcclusionFarRadius;                                                           // 0x0444 (0x04)
    bool AmbientOcclusionRadiusInWS;                                                           // 0x0448 (0x01) BitMask: 0x01
    float AmbientOcclusionFadeDistance;                                                        // 0x044C (0x04)
    float AmbientOcclusionFadeRadius;                                                          // 0x0450 (0x04)
    float AmbientOcclusionDistance;                                                            // 0x0454 (0x04)
    float AmbientOcclusionPower;                                                               // 0x0458 (0x04)
    float AmbientOcclusionBias;                                                                // 0x045C (0x04)
    float AmbientOcclusionQuality;                                                             // 0x0460 (0x04)
    float AmbientOcclusionMipBlend;                                                            // 0x0464 (0x04)
    float AmbientOcclusionMipScale;                                                            // 0x0468 (0x04)
    float AmbientOcclusionMipThreshold;                                                        // 0x046C (0x04)
    float AmbientOcclusionTemporalBlendWeight;                                                 // 0x0470 (0x04)
    bool RayTracingAO;                                                                         // 0x0474 (0x01) BitMask: 0x01
    int32 RayTracingAOSamplesPerPixel;                                                         // 0x0478 (0x04)
    float RayTracingAOIntensity;                                                               // 0x047C (0x04)
    float RayTracingAORadius;                                                                  // 0x0480 (0x04)
    bool XeGTAOEnabled;                                                                        // 0x0484 (0x01) BitMask: 0x01
    float XeGTAOIntensity;                                                                     // 0x0488 (0x04)
    float XeGTAORadius;                                                                        // 0x048C (0x04)
    float XeGTAORadius1P;                                                                      // 0x0490 (0x04)
    float AOIntensityOnLightmap;                                                               // 0x0494 (0x04)
    LinearColor IndirectLightingColor;                                                         // 0x0498 (0x10)
    float IndirectLightingIntensity;                                                           // 0x04A8 (0x04)
    float LumenSceneDetail;                                                                    // 0x04AC (0x04)
    float LumenSceneLightingUpdateSpeed;                                                       // 0x04B0 (0x04)
    float LumenFinalGatherQuality;                                                             // 0x04B4 (0x04)
    float LumenSkylightLeaking;                                                                // 0x04B8 (0x04)
    bool LumenTraceMeshSDFs;                                                                   // 0x04BC (0x01) BitMask: 0x01
    float SkyVisibilityScale;                                                                  // 0x04C0 (0x04)
    float TODGIAndSkyVisibilityScaleChangeSpeed;                                               // 0x04C4 (0x04)
    float ShadowReduceSpecularAOIntensity;                                                     // 0x04C8 (0x04)
    float MinimalIndirectLightingLuminance;                                                    // 0x04CC (0x04)
    float LocalTonemappingBrighterAreaIntensity;                                               // 0x04D0 (0x04)
    float LocalTonemappingBrighterAreaEVDiffThreshold;                                         // 0x04D4 (0x04)
    float LocalTonemappingDarkerAreaIntensity;                                                 // 0x04D8 (0x04)
    float LocalTonemappingDarkerAreaEVDiffThreshold;                                           // 0x04DC (0x04)
    float LocalTonemappingSceneEVOffset;                                                       // 0x04E0 (0x04)
    float LocalTonemappingMinSkyVisibility;                                                    // 0x04E4 (0x04)
    float ColorGainMultiplier;                                                                 // 0x04E8 (0x04)
    float ColorSaturationMultiplier;                                                           // 0x04EC (0x04)
    float ColorContrastMultiplier;                                                             // 0x04F0 (0x04)
    Vector ColorGammaMultiplier;                                                               // 0x04F4 (0x0C)
    enum RayTracingGIType;                                                                     // 0x0500 (0x01)
    int32 RayTracingGIMaxBounces;                                                              // 0x0504 (0x04)
    int32 RayTracingGISamplesPerPixel;                                                         // 0x0508 (0x04)
    float ColorGradingIntensity;                                                               // 0x050C (0x04)
    Texture* ColorGradingLUT;                                                                  // 0x0510 (0x08)
    float DepthOfFieldSensorWidth;                                                             // 0x0518 (0x04)
    float DepthOfFieldFocalDistance;                                                           // 0x051C (0x04)
    bool EnableForegroundOnlyDOF;                                                              // 0x0520 (0x01) BitMask: 0x01
    float DepthOfFieldCustomFOVForegroundOnly;                                                 // 0x0524 (0x04)
    float DepthOfFieldMaxBackgroundRadius;                                                     // 0x0528 (0x04)
    float DepthOfFieldDepthBlurAmount;                                                         // 0x052C (0x04)
    float DepthOfFieldDepthBlurRadius;                                                         // 0x0530 (0x04)
    float DepthOfFieldFocalRegion;                                                             // 0x0534 (0x04)
    float DepthOfFieldNearTransitionRegion;                                                    // 0x0538 (0x04)
    float DepthOfFieldFarTransitionRegion;                                                     // 0x053C (0x04)
    float DepthOfFieldScale;                                                                   // 0x0540 (0x04)
    float DepthOfFieldNearBlurSize;                                                            // 0x0544 (0x04)
    float DepthOfFieldFarBlurSize;                                                             // 0x0548 (0x04)
    float DepthOfFieldOcclusion;                                                               // 0x054C (0x04)
    float DepthOfFieldSkyFocusDistance;                                                        // 0x0550 (0x04)
    float DepthOfFieldVignetteSize;                                                            // 0x0554 (0x04)
    float UABlurScopeRadius;                                                                   // 0x0558 (0x04)
    float UABlurScopeThreshold;                                                                // 0x055C (0x04)
    bool bUABlurCircle;                                                                        // 0x0560 (0x01) BitMask: 0x01
    bool bUABlurOptimal;                                                                       // 0x0560 (0x01) BitMask: 0x02
    float MotionBlurAmount;                                                                    // 0x0564 (0x04)
    float MotionBlurMax;                                                                       // 0x0568 (0x04)
    int32 MotionBlurTargetFPS;                                                                 // 0x056C (0x04)
    float MotionBlurPerObjectSize;                                                             // 0x0570 (0x04)
    float LPVIntensity;                                                                        // 0x0574 (0x04)
    float LPVVplInjectionBias;                                                                 // 0x0578 (0x04)
    float LPVSize;                                                                             // 0x057C (0x04)
    float LPVSecondaryOcclusionIntensity;                                                      // 0x0580 (0x04)
    float LPVSecondaryBounceIntensity;                                                         // 0x0584 (0x04)
    float LPVGeometryVolumeBias;                                                               // 0x0588 (0x04)
    float LPVEmissiveInjectionIntensity;                                                       // 0x058C (0x04)
    float LPVDirectionalOcclusionIntensity;                                                    // 0x0590 (0x04)
    float LPVDirectionalOcclusionRadius;                                                       // 0x0594 (0x04)
    float LPVDiffuseOcclusionExponent;                                                         // 0x0598 (0x04)
    float LPVSpecularOcclusionExponent;                                                        // 0x059C (0x04)
    float LPVDiffuseOcclusionIntensity;                                                        // 0x05A0 (0x04)
    float LPVSpecularOcclusionIntensity;                                                       // 0x05A4 (0x04)
    enum ReflectionsType;                                                                      // 0x05A8 (0x01)
    bool DisableSLWRTR;                                                                        // 0x05A9 (0x01) BitMask: 0x01
    enum ShadowsType;                                                                          // 0x05AA (0x01)
    float ScreenSpaceReflectionIntensity;                                                      // 0x05AC (0x04)
    float ScreenSpaceReflectionQuality;                                                        // 0x05B0 (0x04)
    float ScreenSpaceReflectionMaxRoughness;                                                   // 0x05B4 (0x04)
    bool ScreenSpaceReflectionStochastic;                                                      // 0x05B8 (0x01) BitMask: 0x01
    float RayTracingReflectionsMaxRoughness;                                                   // 0x05BC (0x04)
    int32 RayTracingReflectionsMaxBounces;                                                     // 0x05C0 (0x04)
    int32 RayTracingReflectionsSamplesPerPixel;                                                // 0x05C4 (0x04)
    enum RayTracingReflectionsShadows;                                                         // 0x05C8 (0x01)
    bool RayTracingReflectionsTranslucency;                                                    // 0x05C9 (0x01) BitMask: 0x01
    enum TranslucencyType;                                                                     // 0x05CA (0x01)
    float RayTracingTranslucencyMaxRoughness;                                                  // 0x05CC (0x04)
    int32 RayTracingTranslucencyRefractionRays;                                                // 0x05D0 (0x04)
    int32 RayTracingTranslucencySamplesPerPixel;                                               // 0x05D4 (0x04)
    enum RayTracingTranslucencyShadows;                                                        // 0x05D8 (0x01)
    bool RayTracingTranslucencyRefraction;                                                     // 0x05D9 (0x01) BitMask: 0x01
    enum LightmapMixingTypeOverride;                                                           // 0x05DA (0x01)
    int32 PathTracingMaxBounces;                                                               // 0x05DC (0x04)
    int32 PathTracingSamplesPerPixel;                                                          // 0x05E0 (0x04)
    float LPVFadeRange;                                                                        // 0x05E4 (0x04)
    float LPVDirectionalOcclusionFadeRange;                                                    // 0x05E8 (0x04)
    float ScreenPercentage;                                                                    // 0x05EC (0x04)
    bool bOverride_HeightFogReductionIndoorDepth;                                              // 0x05F0 (0x01) BitMask: 0x01
    bool bOverride_HeightFogReductionBegin;                                                    // 0x05F0 (0x01) BitMask: 0x02
    bool bOverride_HeightFogReductionEnd;                                                      // 0x05F0 (0x01) BitMask: 0x04
    bool bOverride_HeightFogReductionSkyIrradianceFactor;                                      // 0x05F0 (0x01) BitMask: 0x08
    bool bOverride_VolumetricFogReduction;                                                     // 0x05F0 (0x01) BitMask: 0x10
    float HeightFogReductionIndoorDepth;                                                       // 0x05F4 (0x04)
    float HeightFogReductionBegin;                                                             // 0x05F8 (0x04)
    float HeightFogReductionEnd;                                                               // 0x05FC (0x04)
    float HeightFogReductionSkyIrradianceFactor;                                               // 0x0600 (0x04)
    float VolumetricFogReduction;                                                              // 0x0604 (0x04)
    bool bOverride_IndoorMaskTraceDistance;                                                    // 0x0608 (0x01) BitMask: 0x01
    float IndoorMaskTraceDistance;                                                             // 0x060C (0x04)
    bool bOverride_CASSharpness;                                                               // 0x0610 (0x01) BitMask: 0x01
    float CASSharpness;                                                                        // 0x0614 (0x04)
    bool bOverride_ShouldRenderDynamicDirectionalLights;                                       // 0x0618 (0x01) BitMask: 0x01
    float ShouldRenderDynamicDirectionalLights;                                                // 0x061C (0x04)
    bool bOverride_VolumetricFogStaticLightingScatteringScale;                                 // 0x0620 (0x01) BitMask: 0x01
    float VolumetricFogStaticLightingScatteringScale;                                          // 0x0624 (0x04)
    bool bOverride_AmbientGIBounceIntensity;                                                   // 0x0628 (0x01) BitMask: 0x01
    bool bOverride_AmbientGIBounceFalloffDistance;                                             // 0x0628 (0x01) BitMask: 0x02
    bool bOverride_AmbientGISkyOcclusionMin;                                                   // 0x0628 (0x01) BitMask: 0x04
    bool bOverride_AmbientGISkyOcclusionMax;                                                   // 0x0628 (0x01) BitMask: 0x08
    bool bOverride_AmbientGIFoliageSkyOcclusionMin;                                            // 0x0628 (0x01) BitMask: 0x10
    bool bOverride_AmbientGIFoliageSkyOcclusionMax;                                            // 0x0628 (0x01) BitMask: 0x20
    float AmbientGIBounceIntensity;                                                            // 0x062C (0x04)
    float AmbientGIBounceFalloffDistance;                                                      // 0x0630 (0x04)
    float AmbientGISkyOcclusionMin;                                                            // 0x0634 (0x04)
    float AmbientGISkyOcclusionMax;                                                            // 0x0638 (0x04)
    float AmbientGIFoliageSkyOcclusionMin;                                                     // 0x063C (0x04)
    float AmbientGIFoliageSkyOcclusionMax;                                                     // 0x0640 (0x04)
    bool bOverride_AmbientGIReSTIROverallIntensity;                                            // 0x0644 (0x01) BitMask: 0x01
    bool bOverride_AmbientGIReSTIRBounceIntensity;                                             // 0x0644 (0x01) BitMask: 0x02
    bool bOverride_AmbientGIReSTIRFoliageIntensity;                                            // 0x0644 (0x01) BitMask: 0x04
    bool bOverride_AmbientGIReSTIRBounceFalloffDistance;                                       // 0x0644 (0x01) BitMask: 0x08
    bool bOverride_AmbientGIReSTIRSkylightRoughness;                                           // 0x0644 (0x01) BitMask: 0x10
    bool bOverride_AmbientGIReSTIRSkyOcclusionMin;                                             // 0x0644 (0x01) BitMask: 0x20
    bool bOverride_AmbientGIReSTIRSkyOcclusionMax;                                             // 0x0644 (0x01) BitMask: 0x40
    bool bOverride_AmbientGIReSTIRCoverageBasedSkylightLeakingOpaque;                          // 0x0644 (0x01) BitMask: 0x80
    bool bOverride_AmbientGIReSTIRCoverageBasedSkylightLeakingFoliage;                         // 0x0645 (0x01) BitMask: 0x01
    bool bOverride_AmbientGIReSTIRFoliageSkyOcclusionMin;                                      // 0x0645 (0x01) BitMask: 0x02
    bool bOverride_AmbientGIReSTIRFoliageSkyOcclusionMax;                                      // 0x0645 (0x01) BitMask: 0x04
    bool bOverride_AmbientGIReSTIRSurfaceBiasScale;                                            // 0x0645 (0x01) BitMask: 0x08
    float AmbientGIReSTIROverallIntensity;                                                     // 0x0648 (0x04)
    float AmbientGIReSTIRBounceIntensity;                                                      // 0x064C (0x04)
    float AmbientGIReSTIRFoliageIntensity;                                                     // 0x0650 (0x04)
    float AmbientGIReSTIRBounceFalloffDistance;                                                // 0x0654 (0x04)
    float AmbientGIReSTIRSkylightRoughness;                                                    // 0x0658 (0x04)
    float AmbientGIReSTIRSkyOcclusionMin;                                                      // 0x065C (0x04)
    float AmbientGIReSTIRSkyOcclusionMax;                                                      // 0x0660 (0x04)
    float AmbientGIReSTIRCoverageBasedSkylightLeakingOpaque;                                   // 0x0664 (0x04)
    float AmbientGIReSTIRCoverageBasedSkylightLeakingFoliage;                                  // 0x0668 (0x04)
    float AmbientGIReSTIRFoliageSkyOcclusionMin;                                               // 0x066C (0x04)
    float AmbientGIReSTIRFoliageSkyOcclusionMax;                                               // 0x0670 (0x04)
    float AmbientGIReSTIRSurfaceBiasScale;                                                     // 0x0674 (0x04)
    bool bOverride_CACharacterIndirectMinLuminanceIndoor;                                      // 0x0678 (0x01) BitMask: 0x01
    bool bOverride_CACharacterIndirectMinLuminanceOutdoor;                                     // 0x0678 (0x01) BitMask: 0x02
    bool bOverride_CACharacterIndirectCompensationLuminance;                                   // 0x0678 (0x01) BitMask: 0x04
    float CACharacterIndirectMinLuminanceIndoor;                                               // 0x067C (0x04)
    float CACharacterIndirectMinLuminanceOutdoor;                                              // 0x0680 (0x04)
    float CACharacterIndirectCompensationLuminance;                                            // 0x0684 (0x04)
    bool bOverride_FSR3CreateReactiveMask;                                                     // 0x0688 (0x01) BitMask: 0x01
    bool FSR3CreateReactiveMask;                                                               // 0x0688 (0x01) BitMask: 0x02
    WeightedBlendables WeightedBlendables;                                                     // 0x0690 (0x10)
};

// ============================================================
// Inheritance: TextureCube : Texture : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class TextureCube : public Texture {
public:
};

// ============================================================
// Inheritance: WeightedBlendables
// Package: /Script/Engine
// ============================================================
struct WeightedBlendables {
public:
    TArray<WeightedBlendable> Array;                                                           // 0x0000 (0x10)
};

// ============================================================
// Inheritance: WeightedBlendable
// Package: /Script/Engine
// ============================================================
struct WeightedBlendable {
public:
    float Weight;                                                                              // 0x0000 (0x04)
    Object* Object;                                                                            // 0x0008 (0x08)
};

// ============================================================
// Inheritance: TViewTarget
// Package: /Script/Engine
// ============================================================
struct TViewTarget {
public:
    Actor* Target;                                                                             // 0x0000 (0x08)
    MinimalViewInfo POV;                                                                       // 0x0010 (0x730)
    PlayerState* PlayerState;                                                                  // 0x0740 (0x08)
};

// ============================================================
// Inheritance: CameraModifier : Object
// Package: /Script/Engine
// ============================================================
class CameraModifier : public Object {
public:
    bool bDebug;                                                                               // 0x0028 (0x01) BitMask: 0x01
    bool bExclusive;                                                                           // 0x0028 (0x01) BitMask: 0x02
    uint8 Priority;                                                                            // 0x002C (0x01)
    PlayerCameraManager* CameraOwner;                                                          // 0x0030 (0x08)
    float AlphaInTime;                                                                         // 0x0038 (0x04)
    float AlphaOutTime;                                                                        // 0x003C (0x04)
    float Alpha;                                                                               // 0x0040 (0x04)

    // --- Functions ---
    bool IsDisabled();                                                                         // [Public] RVA: 0x7241ECC
    Actor* GetViewTarget();                                                                    // [Public] RVA: 0x5130594
    void EnableModifier();                                                                     // [Public] RVA: 0x512FDA4
    void DisableModifier(bool bImmediate);                                                     // [Public] RVA: 0x7BC3890
    void BlueprintModifyPostProcess(float DeltaTime, out float PostProcessBlendWeight, out PostProcessSettings PostProcessSettings);  // [Public] RVA: 0x182D6BC
    void BlueprintModifyCamera(float DeltaTime, Vector ViewLocation, Rotator ViewRotation, float FOV, out Vector NewViewLocation, out Rotator NewViewRotation, out float NewFOV);  // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: EmitterCameraLensEffectBase : Emitter : Actor : Object
// Package: /Script/Engine
// ============================================================
class EmitterCameraLensEffectBase : public Emitter {
public:
    ParticleSystem* PS_CameraEffect;                                                           // 0x0368 (0x08)
    ParticleSystem* PS_CameraEffectNonExtremeContent;                                          // 0x0370 (0x08)
    PlayerCameraManager* BaseCamera;                                                           // 0x0378 (0x08)
    Transform RelativeTransform;                                                               // 0x0380 (0x30)
    float BaseFov;                                                                             // 0x03B0 (0x04)
    bool bAllowMultipleInstances;                                                              // 0x03B4 (0x01) BitMask: 0x01
    bool bResetWhenRetriggered;                                                                // 0x03B4 (0x01) BitMask: 0x02
    TArray<TSubclassOf<EmitterCameraLensEffectBase>> EmittersToTreatAsSame;                    // 0x03B8 (0x10)
    float DistFromCamera;                                                                      // 0x03C8 (0x04)
};

// ============================================================
// Inheritance: Emitter : Actor : Object
// Package: /Script/Engine
// ============================================================
class Emitter : public Actor {
public:
    ParticleSystemComponent* ParticleSystemComponent;                                          // 0x0318 (0x08)
    bool bDestroyOnSystemFinish;                                                               // 0x0320 (0x01) BitMask: 0x01
    bool bPostUpdateTickGroup;                                                                 // 0x0320 (0x01) BitMask: 0x02
    bool bCurrentlyActive;                                                                     // 0x0320 (0x01) BitMask: 0x04
    FMulticastDelegate OnParticleSpawn;                                                        // 0x0328 (0x10)
    FMulticastDelegate OnParticleBurst;                                                        // 0x0338 (0x10)
    FMulticastDelegate OnParticleDeath;                                                        // 0x0348 (0x10)
    FMulticastDelegate OnParticleCollide;                                                      // 0x0358 (0x10)

    // --- Functions ---
    void ToggleActive();                                                                       // [Final|Public] RVA: 0x7BD63A8
    void SetVectorParameter(FName ParameterName, Vector Param);                                // [Final|Public] RVA: 0x7BD6298
    void SetTemplate(ParticleSystem* NewTemplate);                                             // [Public] RVA: 0x46F6190
    void SetMaterialParameter(FName ParameterName, MaterialInterface* Param);                  // [Final|Public] RVA: 0x7BD619C
    void SetFloatParameter(FName ParameterName, float Param);                                  // [Final|Public] RVA: 0x7BD609C
    void SetColorParameter(FName ParameterName, LinearColor Param);                            // [Final|Public] RVA: 0x7BD5F98
    void SetActorParameter(FName ParameterName, Actor* Param);                                 // [Final|Public] RVA: 0x7BD5E98
    void OnRep_bCurrentlyActive();                                                             // [Public] RVA: 0x1EF4570
    void OnParticleSystemFinished(ParticleSystemComponent* FinishedComponent);                 // [Public] RVA: 0x5D882E4
    bool IsActive();                                                                           // [Final|Public] RVA: 0x7BD5E78
    void Deactivate();                                                                         // [Final|Public] RVA: 0x7BD5E2C
    void Activate();                                                                           // [Final|Public] RVA: 0x7BD5DF0
};

// ============================================================
// Inheritance: ParticleSystem : FXSystemAsset : Object
// Package: /Script/Engine
// ============================================================
class ParticleSystem : public FXSystemAsset {
public:
    float UpdateTime_FPS;                                                                      // 0x0030 (0x04)
    float UpdateTime_Delta;                                                                    // 0x0034 (0x04)
    float WarmupTime;                                                                          // 0x0038 (0x04)
    float WarmupTickRate;                                                                      // 0x003C (0x04)
    TArray<ParticleEmitter*> Emitters;                                                         // 0x0040 (0x10)
    ParticleSystemComponent* PreviewComponent;                                                 // 0x0050 (0x08)
    InterpCurveEdSetup* CurveEdSetup;                                                          // 0x0058 (0x08)
    float LODDistanceCheckTime;                                                                // 0x0060 (0x04)
    float MacroUVRadius;                                                                       // 0x0064 (0x04)
    TArray<float> LODDistances;                                                                // 0x0068 (0x10)
    TArray<ParticleSystemLOD> LODSettings;                                                     // 0x0078 (0x10)
    Box FixedRelativeBoundingBox;                                                              // 0x0088 (0x1C)
    float SecondsBeforeInactive;                                                               // 0x00A4 (0x04)
    float Delay;                                                                               // 0x00A8 (0x04)
    float DelayLow;                                                                            // 0x00AC (0x04)
    bool bOrientZAxisTowardCamera;                                                             // 0x00B0 (0x01) BitMask: 0x01
    bool bUseFixedRelativeBoundingBox;                                                         // 0x00B0 (0x01) BitMask: 0x02
    bool bShouldResetPeakCounts;                                                               // 0x00B0 (0x01) BitMask: 0x04
    bool bHasPhysics;                                                                          // 0x00B0 (0x01) BitMask: 0x08
    bool bUseRealtimeThumbnail;                                                                // 0x00B0 (0x01) BitMask: 0x10
    bool ThumbnailImageOutOfDate;                                                              // 0x00B0 (0x01) BitMask: 0x20
    bool bUseDelayRange;                                                                       // 0x00B1 (0x01) BitMask: 0x01
    bool bAllowManagedTicking;                                                                 // 0x00B1 (0x01) BitMask: 0x02
    bool bAutoDeactivate;                                                                      // 0x00B1 (0x01) BitMask: 0x04
    bool bRegenerateLODDuplicate;                                                              // 0x00B1 (0x01) BitMask: 0x08
    uint8 SystemUpdateMode;                                                                    // 0x00B2 (0x01)
    uint8 LODMethod;                                                                           // 0x00B3 (0x01)
    enum InsignificantReaction;                                                                // 0x00B4 (0x01)
    uint8 OcclusionBoundsMethod;                                                               // 0x00B5 (0x01)
    enum MaxSignificanceLevel;                                                                 // 0x00B7 (0x01)
    uint32 MinTimeBetweenTicks;                                                                // 0x00B8 (0x04)
    float InsignificanceDelay;                                                                 // 0x00BC (0x04)
    Vector MacroUVPosition;                                                                    // 0x00C0 (0x0C)
    Box CustomOcclusionBounds;                                                                 // 0x00CC (0x1C)
    TArray<LODSoloTrack> SoloTracking;                                                         // 0x00E8 (0x10)
    TArray<NamedEmitterMaterial> NamedMaterialSlots;                                           // 0x00F8 (0x10)
    bool bOnlyOverrideOneLOD;                                                                  // 0x0108 (0x01) BitMask: 0xFF

    // --- Functions ---
    bool ContainsEmitterType(TSubclassOf<Object> TypeData);                                    // [Final|Public] RVA: 0x7C57B58
};

// ============================================================
// Inheritance: FXSystemAsset : Object
// Package: /Script/Engine
// ============================================================
class FXSystemAsset : public Object {
public:
    uint32 MaxPoolSize;                                                                        // 0x0028 (0x04)
    uint32 PoolPrimeSize;                                                                      // 0x002C (0x04)
};

// ============================================================
// Inheritance: ParticleEmitter : Object
// Package: /Script/Engine
// ============================================================
class ParticleEmitter : public Object {
public:
    FName EmitterName;                                                                         // 0x0028 (0x08)
    int32 SubUVDataOffset;                                                                     // 0x0030 (0x04)
    uint8 EmitterRenderMode;                                                                   // 0x0034 (0x01)
    enum SignificanceLevel;                                                                    // 0x0035 (0x01)
    bool bUseLegacySpawningBehavior;                                                           // 0x0037 (0x01) BitMask: 0x01
    bool ConvertedModules;                                                                     // 0x0037 (0x01) BitMask: 0x10
    bool bIsSoloing;                                                                           // 0x0037 (0x01) BitMask: 0x20
    bool bCookedOut;                                                                           // 0x0037 (0x01) BitMask: 0x40
    bool bDisabledLODsKeepEmitterAlive;                                                        // 0x0037 (0x01) BitMask: 0x80
    bool bDisableWhenInsignficant;                                                             // 0x0038 (0x01) BitMask: 0x01
    TArray<ParticleLODLevel*> LODLevels;                                                       // 0x0040 (0x10)
    int32 PeakActiveParticles;                                                                 // 0x0050 (0x04)
    int32 InitialAllocationCount;                                                              // 0x0054 (0x04)
    float QualityLevelSpawnRateScale;                                                          // 0x0058 (0x04)
    uint32 DetailModeBitmask;                                                                  // 0x005C (0x04)
};

// ============================================================
// Inheritance: ParticleLODLevel : Object
// Package: /Script/Engine
// ============================================================
class ParticleLODLevel : public Object {
public:
    int32 Level;                                                                               // 0x0028 (0x04)
    bool bEnabled;                                                                             // 0x002C (0x01) BitMask: 0x01
    ParticleModuleRequired* RequiredModule;                                                    // 0x0030 (0x08)
    TArray<ParticleModule*> Modules;                                                           // 0x0038 (0x10)
    ParticleModuleTypeDataBase* TypeDataModule;                                                // 0x0048 (0x08)
    ParticleModuleSpawn* SpawnModule;                                                          // 0x0050 (0x08)
    ParticleModuleEventGenerator* EventGenerator;                                              // 0x0058 (0x08)
    TArray<ParticleModuleSpawnBase*> SpawningModules;                                          // 0x0060 (0x10)
    TArray<ParticleModule*> SpawnModules;                                                      // 0x0070 (0x10)
    TArray<ParticleModule*> UpdateModules;                                                     // 0x0080 (0x10)
    TArray<ParticleModuleOrbit*> OrbitModules;                                                 // 0x0090 (0x10)
    TArray<ParticleModuleEventReceiverBase*> EventReceiverModules;                             // 0x00A0 (0x10)
    bool ConvertedModules;                                                                     // 0x00B0 (0x01) BitMask: 0x01
    int32 PeakActiveParticles;                                                                 // 0x00B4 (0x04)
};

// ============================================================
// Inheritance: ParticleModuleRequired : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleRequired : public ParticleModule {
public:
    MaterialInterface* Material;                                                               // 0x0030 (0x08)
    float MinFacingCameraBlendDistance;                                                        // 0x0038 (0x04)
    float MaxFacingCameraBlendDistance;                                                        // 0x003C (0x04)
    Vector EmitterOrigin;                                                                      // 0x0040 (0x0C)
    Rotator EmitterRotation;                                                                   // 0x004C (0x0C)
    uint8 ScreenAlignment;                                                                     // 0x0058 (0x01)
    bool bUseLocalSpace;                                                                       // 0x0059 (0x01) BitMask: 0x01
    bool bKillOnDeactivate;                                                                    // 0x0059 (0x01) BitMask: 0x02
    bool bKillOnCompleted;                                                                     // 0x0059 (0x01) BitMask: 0x04
    uint8 SortMode;                                                                            // 0x005A (0x01)
    bool bUseLegacyEmitterTime;                                                                // 0x005B (0x01) BitMask: 0x01
    bool bRemoveHMDRoll;                                                                       // 0x005B (0x01) BitMask: 0x02
    bool bEmitterDurationUseRange;                                                             // 0x005B (0x01) BitMask: 0x04
    float EmitterDuration;                                                                     // 0x005C (0x04)
    RawDistributionFloat SpawnRate;                                                            // 0x0060 (0x30)
    TArray<ParticleBurst> BurstList;                                                           // 0x0090 (0x10)
    float EmitterDelay;                                                                        // 0x00A0 (0x04)
    float EmitterDelayLow;                                                                     // 0x00A4 (0x04)
    bool bDelayFirstLoopOnly;                                                                  // 0x00A8 (0x01) BitMask: 0x01
    uint8 InterpolationMethod;                                                                 // 0x00A9 (0x01)
    bool bScaleUV;                                                                             // 0x00AA (0x01) BitMask: 0x01
    bool bEmitterDelayUseRange;                                                                // 0x00AA (0x01) BitMask: 0x02
    uint8 ParticleBurstMethod;                                                                 // 0x00AB (0x01)
    bool bOverrideSystemMacroUV;                                                               // 0x00AC (0x01) BitMask: 0x01
    bool bUseMaxDrawCount;                                                                     // 0x00AC (0x01) BitMask: 0x02
    uint8 OpacitySourceMode;                                                                   // 0x00AD (0x01)
    uint8 EmitterNormalsMode;                                                                  // 0x00AE (0x01)
    bool bOrbitModuleAffectsVelocityAlignment;                                                 // 0x00AF (0x01) BitMask: 0x01
    int32 SubImages_Horizontal;                                                                // 0x00B0 (0x04)
    int32 SubImages_Vertical;                                                                  // 0x00B4 (0x04)
    float RandomImageTime;                                                                     // 0x00B8 (0x04)
    int32 RandomImageChanges;                                                                  // 0x00BC (0x04)
    Vector MacroUVPosition;                                                                    // 0x00C0 (0x0C)
    float MacroUVRadius;                                                                       // 0x00CC (0x04)
    enum UVFlippingMode;                                                                       // 0x00D0 (0x01)
    uint8 BoundingMode;                                                                        // 0x00D1 (0x01)
    bool bDurationRecalcEachLoop;                                                              // 0x00D2 (0x01) BitMask: 0x01
    Vector NormalsSphereCenter;                                                                // 0x00D4 (0x0C)
    float AlphaThreshold;                                                                      // 0x00E0 (0x04)
    int32 EmitterLoops;                                                                        // 0x00E4 (0x04)
    Texture2D* CutoutTexture;                                                                  // 0x00E8 (0x08)
    int32 MaxDrawCount;                                                                        // 0x00F0 (0x04)
    float EmitterDurationLow;                                                                  // 0x00F4 (0x04)
    Vector NormalsCylinderDirection;                                                           // 0x00F8 (0x0C)
    TArray<FName> NamedMaterialOverrides;                                                      // 0x0108 (0x10)
};

// ============================================================
// Inheritance: ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModule : public Object {
public:
    bool bSpawnModule;                                                                         // 0x0028 (0x01) BitMask: 0x01
    bool bUpdateModule;                                                                        // 0x0028 (0x01) BitMask: 0x02
    bool bFinalUpdateModule;                                                                   // 0x0028 (0x01) BitMask: 0x04
    bool bUpdateForGPUEmitter;                                                                 // 0x0028 (0x01) BitMask: 0x08
    bool bCurvesAsColor;                                                                       // 0x0028 (0x01) BitMask: 0x10
    bool b3DDrawMode;                                                                          // 0x0028 (0x01) BitMask: 0x20
    bool bSupported3DDrawMode;                                                                 // 0x0028 (0x01) BitMask: 0x40
    bool bEnabled;                                                                             // 0x0028 (0x01) BitMask: 0x80
    bool bEditable;                                                                            // 0x0029 (0x01) BitMask: 0x01
    bool LODDuplicate;                                                                         // 0x0029 (0x01) BitMask: 0x02
    bool bSupportsRandomSeed;                                                                  // 0x0029 (0x01) BitMask: 0x04
    bool bRequiresLoopingNotification;                                                         // 0x0029 (0x01) BitMask: 0x08
    uint8 LODValidity;                                                                         // 0x002A (0x01)
};

// ============================================================
// Inheritance: RawDistributionFloat : RawDistribution
// Package: /Script/Engine
// ============================================================
struct RawDistributionFloat : public RawDistribution {
public:
    float MinValue;                                                                            // 0x0020 (0x04)
    float MaxValue;                                                                            // 0x0024 (0x04)
    DistributionFloat* Distribution;                                                           // 0x0028 (0x08)
};

// ============================================================
// Inheritance: RawDistribution
// Package: /Script/Engine
// ============================================================
struct RawDistribution {
public:
    DistributionLookupTable Table;                                                             // 0x0000 (0x20)
};

// ============================================================
// Inheritance: DistributionFloat : Distribution : Object
// Package: /Script/Engine
// ============================================================
class DistributionFloat : public Distribution {
public:
    bool bCanBeBaked;                                                                          // 0x0030 (0x01) BitMask: 0x01
    bool bBakedDataSuccesfully;                                                                // 0x0030 (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: Distribution : Object
// Package: /Script/Engine
// ============================================================
class Distribution : public Object {
public:
};

// ============================================================
// Inheritance: DistributionLookupTable
// Package: /Script/Engine
// ============================================================
struct DistributionLookupTable {
public:
    float TimeScale;                                                                           // 0x0000 (0x04)
    float TimeBias;                                                                            // 0x0004 (0x04)
    TArray<float> Values;                                                                      // 0x0008 (0x10)
    uint8 Op;                                                                                  // 0x0018 (0x01)
    uint8 EntryCount;                                                                          // 0x0019 (0x01)
    uint8 EntryStride;                                                                         // 0x001A (0x01)
    uint8 SubEntryStride;                                                                      // 0x001B (0x01)
    uint8 LockFlag;                                                                            // 0x001C (0x01)
};

// ============================================================
// Inheritance: ParticleBurst
// Package: /Script/Engine
// ============================================================
struct ParticleBurst {
public:
    int32 Count;                                                                               // 0x0000 (0x04)
    int32 CountLow;                                                                            // 0x0004 (0x04)
    float Time;                                                                                // 0x0008 (0x04)
};

// ============================================================
// Inheritance: ParticleModuleTypeDataBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleTypeDataBase : public ParticleModule {
public:
};

// ============================================================
// Inheritance: ParticleModuleSpawn : ParticleModuleSpawnBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleSpawn : public ParticleModuleSpawnBase {
public:
    RawDistributionFloat Rate;                                                                 // 0x0038 (0x30)
    RawDistributionFloat RateScale;                                                            // 0x0068 (0x30)
    uint8 ParticleBurstMethod;                                                                 // 0x0098 (0x01)
    TArray<ParticleBurst> BurstList;                                                           // 0x00A0 (0x10)
    RawDistributionFloat BurstScale;                                                           // 0x00B0 (0x30)
    bool bApplyGlobalSpawnRateScale;                                                           // 0x00E0 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: ParticleModuleSpawnBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleSpawnBase : public ParticleModule {
public:
    bool bProcessSpawnRate;                                                                    // 0x0030 (0x01) BitMask: 0x01
    bool bProcessBurstList;                                                                    // 0x0030 (0x01) BitMask: 0x02
};

// ============================================================
// Inheritance: ParticleModuleEventGenerator : ParticleModuleEventBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleEventGenerator : public ParticleModuleEventBase {
public:
    TArray<ParticleEvent_GenerateInfo> Events;                                                 // 0x0030 (0x10)
};

// ============================================================
// Inheritance: ParticleModuleEventBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleEventBase : public ParticleModule {
public:
};

// ============================================================
// Inheritance: ParticleEvent_GenerateInfo
// Package: /Script/Engine
// ============================================================
struct ParticleEvent_GenerateInfo {
public:
    uint8 Type;                                                                                // 0x0000 (0x01)
    int32 Frequency;                                                                           // 0x0004 (0x04)
    int32 ParticleFrequency;                                                                   // 0x0008 (0x04)
    bool FirstTimeOnly;                                                                        // 0x000C (0x01) BitMask: 0x01
    bool LastTimeOnly;                                                                         // 0x000C (0x01) BitMask: 0x02
    bool UseReflectedImpactVector;                                                             // 0x000C (0x01) BitMask: 0x04
    bool bUseOrbitOffset;                                                                      // 0x000C (0x01) BitMask: 0x08
    FName CustomName;                                                                          // 0x0010 (0x08)
    TArray<ParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;                   // 0x0018 (0x10)
};

// ============================================================
// Inheritance: ParticleModuleEventSendToGame : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleEventSendToGame : public Object {
public:
};

// ============================================================
// Inheritance: ParticleModuleOrbit : ParticleModuleOrbitBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleOrbit : public ParticleModuleOrbitBase {
public:
    uint8 ChainMode;                                                                           // 0x0038 (0x01)
    RawDistributionVector OffsetAmount;                                                        // 0x0040 (0x48)
    OrbitOptions OffsetOptions;                                                                // 0x0088 (0x04)
    RawDistributionVector RotationAmount;                                                      // 0x0090 (0x48)
    OrbitOptions RotationOptions;                                                              // 0x00D8 (0x04)
    RawDistributionVector RotationRateAmount;                                                  // 0x00E0 (0x48)
    OrbitOptions RotationRateOptions;                                                          // 0x0128 (0x04)
};

// ============================================================
// Inheritance: ParticleModuleOrbitBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleOrbitBase : public ParticleModule {
public:
    bool bUseEmitterTime;                                                                      // 0x0030 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: RawDistributionVector : RawDistribution
// Package: /Script/Engine
// ============================================================
struct RawDistributionVector : public RawDistribution {
public:
    float MinValue;                                                                            // 0x0020 (0x04)
    float MaxValue;                                                                            // 0x0024 (0x04)
    Vector MinValueVec;                                                                        // 0x0028 (0x0C)
    Vector MaxValueVec;                                                                        // 0x0034 (0x0C)
    DistributionVector* Distribution;                                                          // 0x0040 (0x08)
};

// ============================================================
// Inheritance: DistributionVector : Distribution : Object
// Package: /Script/Engine
// ============================================================
class DistributionVector : public Distribution {
public:
    bool bCanBeBaked;                                                                          // 0x0030 (0x01) BitMask: 0x01
    bool bIsDirty;                                                                             // 0x0030 (0x01) BitMask: 0x02
    bool bBakedDataSuccesfully;                                                                // 0x0030 (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: OrbitOptions
// Package: /Script/Engine
// ============================================================
struct OrbitOptions {
public:
    bool bProcessDuringSpawn;                                                                  // 0x0000 (0x01) BitMask: 0x01
    bool bProcessDuringUpdate;                                                                 // 0x0000 (0x01) BitMask: 0x02
    bool bUseEmitterTime;                                                                      // 0x0000 (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: ParticleModuleEventReceiverBase : ParticleModuleEventBase : ParticleModule : Object
// Package: /Script/Engine
// ============================================================
class ParticleModuleEventReceiverBase : public ParticleModuleEventBase {
public:
    uint8 EventGeneratorType;                                                                  // 0x0030 (0x01)
    FName EventName;                                                                           // 0x0034 (0x08)
};

// ============================================================
// Inheritance: ParticleSystemComponent : FXSystemComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class ParticleSystemComponent : public FXSystemComponent {
public:
    ParticleSystem* Template;                                                                  // 0x04F0 (0x08)
    TArray<MaterialInterface*> EmitterMaterials;                                               // 0x04F8 (0x10)
    TArray<SkeletalMeshComponent*> SkelMeshComponents;                                         // 0x0508 (0x10)
    bool bResetOnDetach;                                                                       // 0x0519 (0x01) BitMask: 0x01
    bool bUpdateOnDedicatedServer;                                                             // 0x0519 (0x01) BitMask: 0x02
    bool bAllowRecycling;                                                                      // 0x0519 (0x01) BitMask: 0x10
    bool bAutoManageAttachment;                                                                // 0x0519 (0x01) BitMask: 0x20
    bool bAutoAttachWeldSimulatedBodies;                                                       // 0x0519 (0x01) BitMask: 0x40
    bool bWarmingUp;                                                                           // 0x051A (0x01) BitMask: 0x02
    bool bOverrideLODMethod;                                                                   // 0x051A (0x01) BitMask: 0x04
    bool bSkipUpdateDynamicDataDuringTick;                                                     // 0x051A (0x01) BitMask: 0x08
    uint8 LODMethod;                                                                           // 0x0525 (0x01)
    enum RequiredSignificance;                                                                 // 0x0526 (0x01)
    TArray<ParticleSysParam> InstanceParameters;                                               // 0x0528 (0x10)
    FMulticastDelegate OnParticleSpawn;                                                        // 0x0538 (0x10)
    FMulticastDelegate OnParticleBurst;                                                        // 0x0548 (0x10)
    FMulticastDelegate OnParticleDeath;                                                        // 0x0558 (0x10)
    FMulticastDelegate OnParticleCollide;                                                      // 0x0568 (0x10)
    bool bOldPositionValid;                                                                    // 0x0578 (0x01) BitMask: 0xFF
    Vector OldPosition;                                                                        // 0x057C (0x0C)
    Vector PartSysVelocity;                                                                    // 0x0588 (0x0C)
    float WarmupTime;                                                                          // 0x0594 (0x04)
    float WarmupTickRate;                                                                      // 0x0598 (0x04)
    float SecondsBeforeInactive;                                                               // 0x05A0 (0x04)
    float MaxTimeBeforeForceUpdateTransform;                                                   // 0x05A8 (0x04)
    TArray<ParticleSystemReplay*> ReplayClips;                                                 // 0x05C8 (0x10)
    float CustomTimeDilation;                                                                  // 0x05E0 (0x04)
    SceneComponent* AutoAttachParent;                                                          // 0x0638 (0x08)
    FName AutoAttachSocketName;                                                                // 0x0640 (0x08)
    enum AutoAttachLocationRule;                                                               // 0x0648 (0x01)
    enum AutoAttachRotationRule;                                                               // 0x0649 (0x01)
    enum AutoAttachScaleRule;                                                                  // 0x064A (0x01)
    FMulticastDelegate OnSystemFinished;                                                       // 0x0678 (0x10)

    // --- Functions ---
    void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, uint8 InWidthMode, float InWidth);  // [Final|Public] RVA: 0x7C59DFC
    void SetTemplate(ParticleSystem* NewTemplate);                                             // [Final|Public] RVA: 0x7C59D60
    void SetMaterialParameter(FName ParameterName, MaterialInterface* Param);                  // [Final|Public] RVA: 0x7C59C78
    void SetBeamTargetTangent(int32 EmitterIndex, Vector NewTangentPoint, int32 TargetIndex);  // [Public] RVA: 0x7C5967C
    void SetBeamTargetStrength(int32 EmitterIndex, float NewTargetStrength, int32 TargetIndex);  // [Public] RVA: 0x7C5954C
    void SetBeamTargetPoint(int32 EmitterIndex, Vector NewTargetPoint, int32 TargetIndex);     // [Public] RVA: 0x7C59400
    void SetBeamSourceTangent(int32 EmitterIndex, Vector NewTangentPoint, int32 SourceIndex);  // [Public] RVA: 0x7C592B4
    void SetBeamSourceStrength(int32 EmitterIndex, float NewSourceStrength, int32 SourceIndex);  // [Public] RVA: 0x7C59184
    void SetBeamSourcePoint(int32 EmitterIndex, Vector NewSourcePoint, int32 SourceIndex);     // [Public] RVA: 0x7C59038
    void SetBeamEndPoint(int32 EmitterIndex, Vector NewEndPoint);                              // [Public] RVA: 0x7C58F30
    void SetAutoAttachParams(SceneComponent* Parent, FName SocketName, uint8 LocationType);    // [Final|Public] RVA: 0x7C58B40
    int32 GetNumActiveParticles();                                                             // [Final|Public] RVA: 0x7C58A18
    MaterialInterface* GetNamedMaterial(FName InName);                                         // [Public] RVA: 0x7C58968
    bool GetBeamTargetTangent(int32 EmitterIndex, int32 TargetIndex, out Vector OutTangentPoint);  // [Public] RVA: 0x7C587BC
    bool GetBeamTargetStrength(int32 EmitterIndex, int32 TargetIndex, out float OutTargetStrength);  // [Public] RVA: 0x7C58674
    bool GetBeamTargetPoint(int32 EmitterIndex, int32 TargetIndex, out Vector OutTargetPoint);  // [Public] RVA: 0x7C584F0
    bool GetBeamSourceTangent(int32 EmitterIndex, int32 SourceIndex, out Vector OutTangentPoint);  // [Public] RVA: 0x7C5836C
    bool GetBeamSourceStrength(int32 EmitterIndex, int32 SourceIndex, out float OutSourceStrength);  // [Public] RVA: 0x7C58224
    bool GetBeamSourcePoint(int32 EmitterIndex, int32 SourceIndex, out Vector OutSourcePoint);  // [Public] RVA: 0x7C580A0
    bool GetBeamEndPoint(int32 EmitterIndex, out Vector OutEndPoint);                          // [Public] RVA: 0x7C57F70
    void GenerateParticleEvent(const FName InEventName, const float InEmitterTime, const Vector InLocation, const Vector InDirection, const Vector InVelocity);  // [Final|Public] RVA: 0x7C57D70
    void EndTrails();                                                                          // [Final|Public] RVA: 0x7C57CFC
    MaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, MaterialInterface* SourceMaterial);  // [Public] RVA: 0x7C57C00
    void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, uint8 InWidthMode, float InWidth);  // [Final|Public] RVA: 0x7C579C0
};

// ============================================================
// Inheritance: FXSystemComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class FXSystemComponent : public PrimitiveComponent {
public:

    // --- Functions ---
    void SetVectorParameter(FName ParameterName, Vector Param);                                // [Public] RVA: 0x7C5A034
    void SetUseAutoManageAttachment(bool bAutoManage);                                         // [Public] RVA: 0x7C59F94
    void SetIntParameter(FName ParameterName, int32 Param);                                    // [Public] RVA: 0x7C59B8C
    void SetFloatParameter(FName ParameterName, float Param);                                  // [Public] RVA: 0x7C59AA0
    void SetEmitterEnable(FName EmitterName, bool bNewEnableState);                            // [Public] RVA: 0x7C599B4
    void SetColorParameter(FName ParameterName, LinearColor Param);                            // [Public] RVA: 0x7C598B4
    void SetBoolParameter(FName ParameterName, bool Param);                                    // [Public] RVA: 0x7C597C8
    void SetAutoAttachmentParameters(SceneComponent* Parent, FName SocketName, enum LocationRule, enum RotationRule, enum ScaleRule);  // [Public] RVA: 0x7C58D54
    void SetActorParameter(FName ParameterName, Actor* Param);                                 // [Public] RVA: 0x7C58A54
    void ReleaseToPool();                                                                      // [Public] RVA: 0x7C58A3C
    FXSystemAsset* GetFXSystemAsset();                                                         // [Public] RVA: 0x7C58940
};

// ============================================================
// Inheritance: ParticleSysParam
// Package: /Script/Engine
// ============================================================
struct ParticleSysParam {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    uint8 ParamType;                                                                           // 0x0008 (0x01)
    float Scalar;                                                                              // 0x000C (0x04)
    float Scalar_Low;                                                                          // 0x0010 (0x04)
    Vector Vector;                                                                             // 0x0014 (0x0C)
    Vector Vector_Low;                                                                         // 0x0020 (0x0C)
    Color Color;                                                                               // 0x002C (0x04)
    Actor* Actor;                                                                              // 0x0030 (0x08)
    MaterialInterface* Material;                                                               // 0x0038 (0x08)
};

// ============================================================
// Inheritance: ParticleSystemReplay : Object
// Package: /Script/Engine
// ============================================================
class ParticleSystemReplay : public Object {
public:
    int32 ClipIDNumber;                                                                        // 0x0028 (0x04)
};

// ============================================================
// Inheritance: MaterialInstanceDynamic : MaterialInstance : MaterialInterface : Object
// Package: /Script/Engine
// ============================================================
class MaterialInstanceDynamic : public MaterialInstance {
public:

    // --- Functions ---
    void SetVectorParameterValueByInfo(const out ref MaterialParameterInfo ParameterInfo, LinearColor Value);  // [Final|Public] RVA: 0x7C53178
    void SetVectorParameterValue(FName ParameterName, LinearColor Value);                      // [Final|Public] RVA: 0x1320168
    void SetTextureParameterValueByInfo(const out ref MaterialParameterInfo ParameterInfo, Texture* Value);  // [Final|Public] RVA: 0x7C53074
    void SetTextureParameterValue(FName ParameterName, Texture* Value);                        // [Final|Public] RVA: 0x7C52F8C
    void SetScalarParameterValueByInfo(const out ref MaterialParameterInfo ParameterInfo, float Value);  // [Final|Public] RVA: 0x7C52E88
    void SetScalarParameterValue(FName ParameterName, float Value);                            // [Final|Public] RVA: 0x13216FC
    void K2_InterpolateMaterialInstanceParams(MaterialInstance* SourceA, MaterialInstance* SourceB, float Alpha);  // [Final|Public] RVA: 0x7C5222C
    LinearColor K2_GetVectorParameterValueByInfo(const out ref MaterialParameterInfo ParameterInfo);  // [Final|Public] RVA: 0x7C52138
    LinearColor K2_GetVectorParameterValue(FName ParameterName);                               // [Final|Public] RVA: 0x12B932C
    Texture* K2_GetTextureParameterValueByInfo(const out ref MaterialParameterInfo ParameterInfo);  // [Final|Public] RVA: 0x7C51F74
    Texture* K2_GetTextureParameterValue(FName ParameterName);                                 // [Final|Public] RVA: 0x7C51ECC
    float K2_GetScalarParameterValueByInfo(const out ref MaterialParameterInfo ParameterInfo);  // [Final|Public] RVA: 0x7C51D50
    float K2_GetScalarParameterValue(FName ParameterName);                                     // [Final|Public] RVA: 0x7C51CA4
    void K2_CopyMaterialInstanceParameters(MaterialInterface* Source, bool bQuickParametersOnly);  // [Final|Public] RVA: 0x7C51BA8
    void CopyParameterOverrides(MaterialInstance* MaterialInstance);                           // [Final|Public] RVA: 0x7C51884
    void CopyInterpParameters(MaterialInstance* Source);                                       // [Final|Public] RVA: 0x7C51698
};

// ============================================================
// Inheritance: MaterialInstance : MaterialInterface : Object
// Package: /Script/Engine
// ============================================================
class MaterialInstance : public MaterialInterface {
public:
    PhysicalMaterial* PhysMaterial;                                                            // 0x0090 (0x08)
    PhysicalMaterial* PhysicalMaterialMap;                                                     // 0x0098 (0x08)
    MaterialInterface* Parent;                                                                 // 0x00D8 (0x08)
    bool bHasStaticPermutationResource;                                                        // 0x00E0 (0x01) BitMask: 0x01
    bool bOverrideSubsurfaceProfile;                                                           // 0x00E0 (0x01) BitMask: 0x02
    TArray<ScalarParameterValue> ScalarParameterValues;                                        // 0x0100 (0x10)
    TArray<VectorParameterValue> VectorParameterValues;                                        // 0x0110 (0x10)
    TArray<TextureParameterValue> TextureParameterValues;                                      // 0x0120 (0x10)
    TArray<RuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;          // 0x0130 (0x10)
    TArray<FontParameterValue> FontParameterValues;                                            // 0x0140 (0x10)
    MaterialInstanceBasePropertyOverrides BasePropertyOverrides;                               // 0x0150 (0x28)
    StaticParameterSet StaticParameters;                                                       // 0x0188 (0x40)
    MaterialCachedParameters CachedLayerParameters;                                            // 0x01C8 (0x1A0)
    TArray<Object*> CachedReferencedTextures;                                                  // 0x0368 (0x10)
};

// ============================================================
// Inheritance: ScalarParameterValue
// Package: /Script/Engine
// ============================================================
struct ScalarParameterValue {
public:
    MaterialParameterInfo ParameterInfo;                                                       // 0x0000 (0x10)
    float ParameterValue;                                                                      // 0x0010 (0x04)
    Guid ExpressionGUID;                                                                       // 0x0014 (0x10)
};

// ============================================================
// Inheritance: VectorParameterValue
// Package: /Script/Engine
// ============================================================
struct VectorParameterValue {
public:
    MaterialParameterInfo ParameterInfo;                                                       // 0x0000 (0x10)
    LinearColor ParameterValue;                                                                // 0x0010 (0x10)
    Guid ExpressionGUID;                                                                       // 0x0020 (0x10)
};

// ============================================================
// Inheritance: TextureParameterValue
// Package: /Script/Engine
// ============================================================
struct TextureParameterValue {
public:
    MaterialParameterInfo ParameterInfo;                                                       // 0x0000 (0x10)
    Texture* ParameterValue;                                                                   // 0x0010 (0x08)
    Guid ExpressionGUID;                                                                       // 0x0018 (0x10)
};

// ============================================================
// Inheritance: RuntimeVirtualTextureParameterValue
// Package: /Script/Engine
// ============================================================
struct RuntimeVirtualTextureParameterValue {
public:
    MaterialParameterInfo ParameterInfo;                                                       // 0x0000 (0x10)
    RuntimeVirtualTexture* ParameterValue;                                                     // 0x0010 (0x08)
    Guid ExpressionGUID;                                                                       // 0x0018 (0x10)
};

// ============================================================
// Inheritance: FontParameterValue
// Package: /Script/Engine
// ============================================================
struct FontParameterValue {
public:
    MaterialParameterInfo ParameterInfo;                                                       // 0x0000 (0x10)
    Font* FontValue;                                                                           // 0x0010 (0x08)
    int32 FontPage;                                                                            // 0x0018 (0x04)
    Guid ExpressionGUID;                                                                       // 0x001C (0x10)
};

// ============================================================
// Inheritance: MaterialInstanceBasePropertyOverrides
// Package: /Script/Engine
// ============================================================
struct MaterialInstanceBasePropertyOverrides {
public:
    bool bOverride_OpacityMaskClipValue;                                                       // 0x0000 (0x01) BitMask: 0x01
    bool bOverride_ScreenSpaceVariance;                                                        // 0x0000 (0x01) BitMask: 0x02
    bool bOverride_Threshold;                                                                  // 0x0000 (0x01) BitMask: 0x04
    bool bOverride_TranslucencySortPriorityOffset;                                             // 0x0000 (0x01) BitMask: 0x08
    bool bOverride_MaterialStencilTypeForMpe;                                                  // 0x0000 (0x01) BitMask: 0x10
    bool bOverride_RenderInEarlyDepthPass;                                                     // 0x0000 (0x01) BitMask: 0x20
    bool bOverride_MaterialFloatPrecisionMode;                                                 // 0x0000 (0x01) BitMask: 0x40
    bool bOverride_MaterialFloatPrecisionModeVulkanOverride;                                   // 0x0000 (0x01) BitMask: 0x80
    bool bOverride_ForceDisableDynamicLightShadow;                                             // 0x0001 (0x01) BitMask: 0x01
    bool bOverride_ForceEnableTwoSidedFoliageDBufferInput;                                     // 0x0001 (0x01) BitMask: 0x02
    bool bOverride_NormalCurvatureToRoughness;                                                 // 0x0001 (0x01) BitMask: 0x04
    bool bOverride_DisableBindlessVertexColor;                                                 // 0x0001 (0x01) BitMask: 0x08
    bool bDisableBindlessVertexColor;                                                          // 0x0002 (0x01) BitMask: 0xFF
    bool bOverride_DisableBindlessLightmap;                                                    // 0x0003 (0x01) BitMask: 0x01
    bool bDisableBindlessLightmap;                                                             // 0x0004 (0x01) BitMask: 0xFF
    bool bOverride_AllowInlineRayTracing;                                                      // 0x0005 (0x01) BitMask: 0x01
    bool bOverride_BlendMode;                                                                  // 0x0005 (0x01) BitMask: 0x02
    bool bOverride_ShadingModel;                                                               // 0x0005 (0x01) BitMask: 0x04
    bool bOverride_DitheredLODTransition;                                                      // 0x0005 (0x01) BitMask: 0x08
    bool bOverride_CastDynamicShadowAsMasked;                                                  // 0x0005 (0x01) BitMask: 0x10
    bool bOverride_TwoSided;                                                                   // 0x0005 (0x01) BitMask: 0x20
    bool TwoSided;                                                                             // 0x0005 (0x01) BitMask: 0x40
    bool DitheredLODTransition;                                                                // 0x0005 (0x01) BitMask: 0x80
    bool bCastDynamicShadowAsMasked;                                                           // 0x0006 (0x01) BitMask: 0x01
    uint8 BlendMode;                                                                           // 0x0007 (0x01)
    uint8 ShadingModel;                                                                        // 0x0008 (0x01)
    float OpacityMaskClipValue;                                                                // 0x000C (0x04)
    float ScreenSpaceVariance;                                                                 // 0x0010 (0x04)
    float Threshold;                                                                           // 0x0014 (0x04)
    bool bOverride_ShadowCacheMode;                                                            // 0x0018 (0x01) BitMask: 0x01
    enum ShadowCacheMode;                                                                      // 0x0019 (0x01)
    int16 TranslucencySortPriorityOffset;                                                      // 0x001A (0x02)
    int16 MaterialStencilTypeForMpe;                                                           // 0x001C (0x02)
    bool bRenderInEarlyDepthPass;                                                              // 0x001E (0x01) BitMask: 0xFF
    uint8 FloatPrecisionMode;                                                                  // 0x001F (0x01)
    uint8 FloatPrecisionModeVulkanOverride;                                                    // 0x0020 (0x01)
    bool bForceDisableDynamicLightShadow;                                                      // 0x0021 (0x01) BitMask: 0xFF
    bool bForceEnableTwoSidedFoliageDBufferInput;                                              // 0x0022 (0x01) BitMask: 0xFF
    bool bNormalCurvatureToRoughness;                                                          // 0x0023 (0x01) BitMask: 0xFF
    bool bAllowInlineRayTracing;                                                               // 0x0024 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: StaticParameterSet
// Package: /Script/Engine
// ============================================================
struct StaticParameterSet {
public:
    TArray<StaticSwitchParameter> StaticSwitchParameters;                                      // 0x0000 (0x10)
    TArray<StaticComponentMaskParameter> StaticComponentMaskParameters;                        // 0x0010 (0x10)
    TArray<StaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;                    // 0x0020 (0x10)
    TArray<StaticMaterialLayersParameter> MaterialLayersParameters;                            // 0x0030 (0x10)
};

// ============================================================
// Inheritance: StaticSwitchParameter : StaticParameterBase
// Package: /Script/Engine
// ============================================================
struct StaticSwitchParameter : public StaticParameterBase {
public:
    bool Value;                                                                                // 0x0024 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: StaticParameterBase
// Package: /Script/Engine
// ============================================================
struct StaticParameterBase {
public:
    MaterialParameterInfo ParameterInfo;                                                       // 0x0000 (0x10)
    bool bOverride;                                                                            // 0x0010 (0x01) BitMask: 0xFF
    Guid ExpressionGUID;                                                                       // 0x0014 (0x10)
};

// ============================================================
// Inheritance: StaticComponentMaskParameter : StaticParameterBase
// Package: /Script/Engine
// ============================================================
struct StaticComponentMaskParameter : public StaticParameterBase {
public:
    bool R;                                                                                    // 0x0024 (0x01) BitMask: 0xFF
    bool G;                                                                                    // 0x0025 (0x01) BitMask: 0xFF
    bool B;                                                                                    // 0x0026 (0x01) BitMask: 0xFF
    bool A;                                                                                    // 0x0027 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: StaticTerrainLayerWeightParameter : StaticParameterBase
// Package: /Script/Engine
// ============================================================
struct StaticTerrainLayerWeightParameter : public StaticParameterBase {
public:
    int32 WeightmapIndex;                                                                      // 0x0024 (0x04)
    bool bWeightBasedBlend;                                                                    // 0x0028 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: StaticMaterialLayersParameter : StaticParameterBase
// Package: /Script/Engine
// ============================================================
struct StaticMaterialLayersParameter : public StaticParameterBase {
public:
    MaterialLayersFunctions Value;                                                             // 0x0028 (0x40)
};

// ============================================================
// Inheritance: MaterialLayersFunctions
// Package: /Script/Engine
// ============================================================
struct MaterialLayersFunctions {
public:
    TArray<MaterialFunctionInterface*> Layers;                                                 // 0x0000 (0x10)
    TArray<MaterialFunctionInterface*> Blends;                                                 // 0x0010 (0x10)
    TArray<bool> LayerStates;                                                                  // 0x0020 (0x10)
    FString KeyString;                                                                         // 0x0030 (0x10)
};

// ============================================================
// Inheritance: InterpCurveEdSetup : Object
// Package: /Script/Engine
// ============================================================
class InterpCurveEdSetup : public Object {
public:
    TArray<CurveEdTab> Tabs;                                                                   // 0x0028 (0x10)
    int32 ActiveTab;                                                                           // 0x0038 (0x04)
};

// ============================================================
// Inheritance: CurveEdTab
// Package: /Script/Engine
// ============================================================
struct CurveEdTab {
public:
    FString TabName;                                                                           // 0x0000 (0x10)
    TArray<CurveEdEntry> Curves;                                                               // 0x0010 (0x10)
    float ViewStartInput;                                                                      // 0x0020 (0x04)
    float ViewEndInput;                                                                        // 0x0024 (0x04)
    float ViewStartOutput;                                                                     // 0x0028 (0x04)
    float ViewEndOutput;                                                                       // 0x002C (0x04)
};

// ============================================================
// Inheritance: CurveEdEntry
// Package: /Script/Engine
// ============================================================
struct CurveEdEntry {
public:
    Object* CurveObject;                                                                       // 0x0000 (0x08)
    Color CurveColor;                                                                          // 0x0008 (0x04)
    FString CurveName;                                                                         // 0x0010 (0x10)
    int32 bHideCurve;                                                                          // 0x0020 (0x04)
    int32 bColorCurve;                                                                         // 0x0024 (0x04)
    int32 bFloatingPointColorCurve;                                                            // 0x0028 (0x04)
    int32 bClamp;                                                                              // 0x002C (0x04)
    float ClampLow;                                                                            // 0x0030 (0x04)
    float ClampHigh;                                                                           // 0x0034 (0x04)
};

// ============================================================
// Inheritance: ParticleSystemLOD
// Package: /Script/Engine
// ============================================================
struct ParticleSystemLOD {
public:
};

// ============================================================
// Inheritance: LODSoloTrack
// Package: /Script/Engine
// ============================================================
struct LODSoloTrack {
public:
    TArray<uint8> SoloEnableSetting;                                                           // 0x0000 (0x10)
};

// ============================================================
// Inheritance: NamedEmitterMaterial
// Package: /Script/Engine
// ============================================================
struct NamedEmitterMaterial {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    MaterialInterface* Material;                                                               // 0x0008 (0x08)
};

// ============================================================
// Inheritance: CameraModifier_CameraShake : CameraModifier : Object
// Package: /Script/Engine
// ============================================================
class CameraModifier_CameraShake : public CameraModifier {
public:
    TArray<ActiveCameraShakeInfo> ActiveShakes;                                                // 0x0048 (0x10)
    TMap<TSubclassOf<CameraShakeBase>, PooledCameraShakes> ExpiredPooledShakesMap;             // 0x0058 (0x50)
    float SplitScreenShakeScale;                                                               // 0x00A8 (0x04)
};

// ============================================================
// Inheritance: ActiveCameraShakeInfo
// Package: /Script/Engine
// ============================================================
struct ActiveCameraShakeInfo {
public:
    CameraShakeBase* ShakeInstance;                                                            // 0x0000 (0x08)
    CameraShakeSourceComponent* ShakeSource;                                                   // 0x0008 (0x08)
};

// ============================================================
// Inheritance: CameraShakeBase : Object
// Package: /Script/Engine
// ============================================================
class CameraShakeBase : public Object {
public:
    bool bSingleInstance;                                                                      // 0x0028 (0x01) BitMask: 0xFF
    float ShakeScale;                                                                          // 0x002C (0x04)
    PlayerCameraManager* CameraManager;                                                        // 0x0030 (0x08)
};

// ============================================================
// Inheritance: CameraShakeSourceComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class CameraShakeSourceComponent : public SceneComponent {
public:
    enum Attenuation;                                                                          // 0x0270 (0x01)
    float InnerAttenuationRadius;                                                              // 0x0274 (0x04)
    float OuterAttenuationRadius;                                                              // 0x0278 (0x04)
    TSubclassOf<CameraShakeBase> CameraShake;                                                  // 0x0280 (0x08)
    bool bAutoStart;                                                                           // 0x0288 (0x01) BitMask: 0xFF

    // --- Functions ---
    void StopAllCameraShakesOfType(TSubclassOf<CameraShakeBase> InCameraShake, bool bImmediately);  // [Final|Public] RVA: 0x7BCD21C
    void StopAllCameraShakes(bool bImmediately);                                               // [Final|Public] RVA: 0x7BCD180
    void StartCameraShake(TSubclassOf<CameraShakeBase> InCameraShake, float Scale, enum PlaySpace, Rotator UserPlaySpaceRot);  // [Final|Public] RVA: 0x7BCCFDC
    void Start();                                                                              // [Final|Public] RVA: 0x7BCCFC8
    float GetAttenuationFactor(const out ref Vector Location);                                 // [Final|Public] RVA: 0x7BC7428
};

// ============================================================
// Inheritance: PooledCameraShakes
// Package: /Script/Engine
// ============================================================
struct PooledCameraShakes {
public:
    TArray<CameraShakeBase*> PooledShakes;                                                     // 0x0000 (0x10)
};

// ============================================================
// Inheritance: CameraAnimInst : Object
// Package: /Script/Engine
// ============================================================
class CameraAnimInst : public Object {
public:
    CameraAnim* CamAnim;                                                                       // 0x0028 (0x08)
    InterpGroupInst* InterpGroupInst;                                                          // 0x0030 (0x08)
    float PlayRate;                                                                            // 0x0050 (0x04)
    InterpTrackMove* MoveTrack;                                                                // 0x0068 (0x08)
    InterpTrackInstMove* MoveInst;                                                             // 0x0070 (0x08)
    enum PlaySpace;                                                                            // 0x0078 (0x01)

    // --- Functions ---
    void Stop(bool bImmediate);                                                                // [Final|Public] RVA: 0x7BC421C
    void SetScale(float NewDuration);                                                          // [Final|Public] RVA: 0x7BC40DC
    void SetDuration(float NewDuration);                                                       // [Final|Public] RVA: 0x7BC3D3C
};

// ============================================================
// Inheritance: CameraAnim : Object
// Package: /Script/Engine
// ============================================================
class CameraAnim : public Object {
public:
    InterpGroup* CameraInterpGroup;                                                            // 0x0028 (0x08)
    float AnimLength;                                                                          // 0x0030 (0x04)
    Box BoundingBox;                                                                           // 0x0034 (0x1C)
    bool bRelativeToInitialTransform;                                                          // 0x0050 (0x01) BitMask: 0x01
    bool bRelativeToInitialFOV;                                                                // 0x0050 (0x01) BitMask: 0x02
    float BaseFov;                                                                             // 0x0054 (0x04)
    PostProcessSettings BasePostProcessSettings;                                               // 0x0060 (0x6A0)
    float BasePostProcessBlendWeight;                                                          // 0x0700 (0x04)
};

// ============================================================
// Inheritance: InterpGroup : Object
// Package: /Script/Engine
// ============================================================
class InterpGroup : public Object {
public:
    TArray<InterpTrack*> InterpTracks;                                                         // 0x0030 (0x10)
    FName GroupName;                                                                           // 0x0040 (0x08)
    Color GroupColor;                                                                          // 0x0048 (0x04)
    bool bCollapsed;                                                                           // 0x004C (0x01) BitMask: 0x01
    bool bVisible;                                                                             // 0x004C (0x01) BitMask: 0x02
    bool bIsFolder;                                                                            // 0x004C (0x01) BitMask: 0x04
    bool bIsParented;                                                                          // 0x004C (0x01) BitMask: 0x08
    bool bIsSelected;                                                                          // 0x004C (0x01) BitMask: 0x10
};

// ============================================================
// Inheritance: InterpTrack : Object
// Package: /Script/Engine
// ============================================================
class InterpTrack : public Object {
public:
    TArray<InterpTrack*> SubTracks;                                                            // 0x0038 (0x10)
    TSubclassOf<InterpTrackInst> TrackInstClass;                                               // 0x0048 (0x08)
    uint8 ActiveCondition;                                                                     // 0x0050 (0x01)
    FString TrackTitle;                                                                        // 0x0058 (0x10)
    bool bOnePerGroup;                                                                         // 0x0068 (0x01) BitMask: 0x01
    bool bDirGroupOnly;                                                                        // 0x0068 (0x01) BitMask: 0x02
    bool bDisableTrack;                                                                        // 0x0068 (0x01) BitMask: 0x04
    bool bIsSelected;                                                                          // 0x0068 (0x01) BitMask: 0x08
    bool bIsAnimControlTrack;                                                                  // 0x0068 (0x01) BitMask: 0x10
    bool bSubTrackOnly;                                                                        // 0x0068 (0x01) BitMask: 0x20
    bool bVisible;                                                                             // 0x0068 (0x01) BitMask: 0x40
    bool bIsRecording;                                                                         // 0x0068 (0x01) BitMask: 0x80
};

// ============================================================
// Inheritance: InterpGroupInst : Object
// Package: /Script/Engine
// ============================================================
class InterpGroupInst : public Object {
public:
    InterpGroup* Group;                                                                        // 0x0028 (0x08)
    Actor* GroupActor;                                                                         // 0x0030 (0x08)
    TArray<InterpTrackInst*> TrackInst;                                                        // 0x0038 (0x10)
};

// ============================================================
// Inheritance: InterpTrackMove : InterpTrack : Object
// Package: /Script/Engine
// ============================================================
class InterpTrackMove : public InterpTrack {
public:
    InterpCurveVector PosTrack;                                                                // 0x0070 (0x18)
    InterpCurveVector EulerTrack;                                                              // 0x0088 (0x18)
    InterpLookupTrack LookupTrack;                                                             // 0x00A0 (0x10)
    FName LookAtGroupName;                                                                     // 0x00B0 (0x08)
    float LinCurveTension;                                                                     // 0x00B8 (0x04)
    float AngCurveTension;                                                                     // 0x00BC (0x04)
    bool bUseQuatInterpolation;                                                                // 0x00C0 (0x01) BitMask: 0x01
    bool bShowArrowAtKeys;                                                                     // 0x00C0 (0x01) BitMask: 0x02
    bool bDisableMovement;                                                                     // 0x00C0 (0x01) BitMask: 0x04
    bool bShowTranslationOnCurveEd;                                                            // 0x00C0 (0x01) BitMask: 0x08
    bool bShowRotationOnCurveEd;                                                               // 0x00C0 (0x01) BitMask: 0x10
    bool bHide3DTrack;                                                                         // 0x00C0 (0x01) BitMask: 0x20
    uint8 RotMode;                                                                             // 0x00C4 (0x01)
};

// ============================================================
// Inheritance: InterpCurveVector
// Package: /Script/CoreUObject
// ============================================================
struct InterpCurveVector {
public:
    TArray<InterpCurvePointVector> Points;                                                     // 0x0000 (0x10)
    bool bIsLooped;                                                                            // 0x0010 (0x01) BitMask: 0xFF
    float LoopKeyOffset;                                                                       // 0x0014 (0x04)
};

// ============================================================
// Inheritance: InterpCurvePointVector
// Package: /Script/CoreUObject
// ============================================================
struct InterpCurvePointVector {
public:
    float InVal;                                                                               // 0x0000 (0x04)
    Vector OutVal;                                                                             // 0x0004 (0x0C)
    Vector ArriveTangent;                                                                      // 0x0010 (0x0C)
    Vector LeaveTangent;                                                                       // 0x001C (0x0C)
    uint8 InterpMode;                                                                          // 0x0028 (0x01)
};

// ============================================================
// Inheritance: InterpLookupTrack
// Package: /Script/Engine
// ============================================================
struct InterpLookupTrack {
public:
    TArray<InterpLookupPoint> Points;                                                          // 0x0000 (0x10)
};

// ============================================================
// Inheritance: InterpLookupPoint
// Package: /Script/Engine
// ============================================================
struct InterpLookupPoint {
public:
    FName GroupName;                                                                           // 0x0000 (0x08)
    float Time;                                                                                // 0x0008 (0x04)
};

// ============================================================
// Inheritance: InterpTrackInstMove : InterpTrackInst : Object
// Package: /Script/Engine
// ============================================================
class InterpTrackInstMove : public InterpTrackInst {
public:
    Vector ResetLocation;                                                                      // 0x0028 (0x0C)
    Rotator ResetRotation;                                                                     // 0x0034 (0x0C)
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
    int32 GetAutoActivatePlayerIndex();                                                        // [Final|Public] RVA: 0x7BC3930
};

// ============================================================
// Inheritance: CameraComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class CameraComponent : public SceneComponent {
public:
    float FieldOfView;                                                                         // 0x0270 (0x04)
    float OrthoWidth;                                                                          // 0x0274 (0x04)
    float OrthoNearClipPlane;                                                                  // 0x0278 (0x04)
    float OrthoFarClipPlane;                                                                   // 0x027C (0x04)
    float AspectRatio;                                                                         // 0x0280 (0x04)
    bool bConstrainAspectRatio;                                                                // 0x0284 (0x01) BitMask: 0x01
    bool bUseFieldOfViewForLOD;                                                                // 0x0284 (0x01) BitMask: 0x02
    bool bLockToHmd;                                                                           // 0x0284 (0x01) BitMask: 0x04
    bool bUsePawnControlRotation;                                                              // 0x0284 (0x01) BitMask: 0x08
    uint8 ProjectionMode;                                                                      // 0x0285 (0x01)
    float PostProcessBlendWeight;                                                              // 0x02C0 (0x04)
    PostProcessSettings PostProcessSettings;                                                   // 0x02F0 (0x6A0)

    // --- Functions ---
    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);                                // [Final|Public] RVA: 0x7BC4174
    void SetProjectionMode(uint8 InProjectionMode);                                            // [Final|Public] RVA: 0x7BC4048
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);                            // [Final|Public] RVA: 0x7BC3FAC
    void SetOrthoWidth(float InOrthoWidth);                                                    // [Final|Public] RVA: 0x7BC3F10
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);                                    // [Final|Public] RVA: 0x7BC3E74
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);                                      // [Final|Public] RVA: 0x7BC3DD8
    void SetFieldOfView(float InFieldOfView);                                                  // [Public] RVA: 0x4EF0088
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);                               // [Final|Public] RVA: 0x7BC3C98
    void SetAspectRatio(float InAspectRatio);                                                  // [Final|Public] RVA: 0x7BC3BFC
    void RemoveBlendable(TScriptInterface<lengthErrorString> InBlendableObject);               // [Final|Public] RVA: 0x7BC3A80
    void OnCameraMeshHiddenChanged();                                                          // [Final|Protected] RVA: 0x1E39048
    void GetCameraView(float DeltaTime, out MinimalViewInfo DesiredView);                      // [Public] RVA: 0x7BC3950
    void AddOrUpdateBlendable(TScriptInterface<lengthErrorString> InBlendableObject, float InWeight);  // [Final|Public] RVA: 0x7BC36B0
};

// ============================================================
// Inheritance: lengthErrorString : lengthErrorString : None
// Package: None
// ============================================================
class lengthErrorString : public lengthErrorString {
public:
    None lengthErrorString;                                                                    // 0x8B4DF745 (0x5D8B4C09)
    None None;                                                                                 // 0x0000 (0x00)
};

// ============================================================
// Inheritance: lengthErrorString : None
// Package: None
// ============================================================
class lengthErrorString : public None {
public:
    None None;                                                                                 // 0x0000 (0x00)
};

// ============================================================
// Inheritance: MatineeCameraShake : CameraShakeBase : Object
// Package: /Script/Engine
// ============================================================
class MatineeCameraShake : public CameraShakeBase {
public:
    float OscillationDuration;                                                                 // 0x0098 (0x04)
    float OscillationBlendInTime;                                                              // 0x009C (0x04)
    float OscillationBlendOutTime;                                                             // 0x00A0 (0x04)
    ROscillator RotOscillation;                                                                // 0x00A4 (0x24)
    VOscillator LocOscillation;                                                                // 0x00C8 (0x24)
    FOscillator FOVOscillation;                                                                // 0x00EC (0x0C)
    float AnimPlayRate;                                                                        // 0x00F8 (0x04)
    float AnimScale;                                                                           // 0x00FC (0x04)
    float AnimBlendInTime;                                                                     // 0x0100 (0x04)
    float AnimBlendOutTime;                                                                    // 0x0104 (0x04)
    float RandomAnimSegmentDuration;                                                           // 0x0108 (0x04)
    CameraAnim* Anim;                                                                          // 0x0110 (0x08)
    bool bRandomAnimSegment;                                                                   // 0x0118 (0x01) BitMask: 0x01
    float OscillatorTimeRemaining;                                                             // 0x011C (0x04)
    CameraAnimInst* AnimInst;                                                                  // 0x0120 (0x08)

    // --- Functions ---
    void ReceiveStopShake(bool bImmediately);                                                  // [Public] RVA: 0x182D6BC
    void ReceivePlayShake(float Scale);                                                        // [Public] RVA: 0x182D6BC
    bool ReceiveIsFinished();                                                                  // [Public] RVA: 0x60103D4
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const out ref MinimalViewInfo POV, out MinimalViewInfo ModifiedPOV);  // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: ROscillator
// Package: /Script/Engine
// ============================================================
struct ROscillator {
public:
    FOscillator Pitch;                                                                         // 0x0000 (0x0C)
    FOscillator Yaw;                                                                           // 0x000C (0x0C)
    FOscillator Roll;                                                                          // 0x0018 (0x0C)
};

// ============================================================
// Inheritance: FOscillator
// Package: /Script/Engine
// ============================================================
struct FOscillator {
public:
    float Amplitude;                                                                           // 0x0000 (0x04)
    float Frequency;                                                                           // 0x0004 (0x04)
    uint8 InitialOffset;                                                                       // 0x0008 (0x01)
    enum Waveform;                                                                             // 0x0009 (0x01)
};

// ============================================================
// Inheritance: VOscillator
// Package: /Script/Engine
// ============================================================
struct VOscillator {
public:
    FOscillator X;                                                                             // 0x0000 (0x0C)
    FOscillator Y;                                                                             // 0x000C (0x0C)
    FOscillator Z;                                                                             // 0x0018 (0x0C)
};

// ============================================================
// Inheritance: CheatManager : Object
// Package: /Script/Engine
// ============================================================
class CheatManager : public Object {
public:
    DebugCameraController* DebugCameraControllerRef;                                           // 0x0028 (0x08)
    TSubclassOf<DebugCameraController> DebugCameraControllerClass;                             // 0x0030 (0x08)

    // --- Functions ---
    void Walk();                                                                               // [Public] RVA: 0x1AA6C04
    void ViewSelf();                                                                           // [Public] RVA: 0x7BCFD78
    void ViewPlayer(FString S);                                                                // [Public] RVA: 0x7BCFC78
    void ViewClass(TSubclassOf<Actor> DesiredClass);                                           // [Public] RVA: 0x75CE874
    void ViewActor(FName ActorName);                                                           // [Public] RVA: 0x7BCFBDC
    void UpdateSafeArea();                                                                     // [Final|Public] RVA: 0x7BCFBC0
    void ToggleServerStatReplicatorUpdateStatNet();                                            // [Final|Public] RVA: 0x7BCFB90
    void ToggleServerStatReplicatorClientOverwrite();                                          // [Final|Public] RVA: 0x7BCFB60
    void ToggleDebugCamera();                                                                  // [Public] RVA: 0x7BCFB48
    void ToggleAILogging();                                                                    // [Public] RVA: 0x7BCFB30
    void TestCollisionDistance();                                                              // [Public] RVA: 0x7BCFB18
    void Teleport();                                                                           // [Public] RVA: 0x51312B8
    void Summon(FString ClassName);                                                            // [Public] RVA: 0x7BCFA18
    void StreamLevelOut(FName PackageName);                                                    // [Public] RVA: 0x7BCF97C
    void StreamLevelIn(FName PackageName);                                                     // [Public] RVA: 0x7BCF8E0
    void SpawnServerStatReplicator();                                                          // [Final|Public] RVA: 0x7BCF8B0
    void Slomo(float NewTimeDilation);                                                         // [Public] RVA: 0x7BCF810
    void SetWorldOrigin();                                                                     // [Final|Public] RVA: 0x7BCF7FC
    void SetMouseSensitivityToDefault();                                                       // [Public] RVA: 0x7BCF7E4
    void ServerToggleAILogging();                                                              // [Public] RVA: 0x7BCF6FC
    void ReceiveInitCheatManager();                                                            // [Public] RVA: 0x182D6BC
    void ReceiveEndPlay();                                                                     // [Public] RVA: 0x182D6BC
    void PlayersOnly();                                                                        // [Public] RVA: 0x5148B0C
    void OnlyLoadLevel(FName PackageName);                                                     // [Public] RVA: 0x7BCF660
    void LogLoc();                                                                             // [Public] RVA: 0x60B2C74
    void InvertMouse();                                                                        // [Public] RVA: 0x47992C4
    void God();                                                                                // [Public] RVA: 0x1D62C3C
    void Ghost();                                                                              // [Public] RVA: 0x512FDA4
    void FreezeFrame(float Delay);                                                             // [Public] RVA: 0x60663C4
    void Fly();                                                                                // [Public] RVA: 0x4DE6E58
    void FlushLog();                                                                           // [Public] RVA: 0x7BCF648
    void EnableDebugCamera();                                                                  // [Protected] RVA: 0x4798A58
    void DumpVoiceMutingState();                                                               // [Public] RVA: 0x5EA438C
    void DumpPartyState();                                                                     // [Public] RVA: 0x7BCF630
    void DumpOnlineSessionState();                                                             // [Public] RVA: 0x7BCF618
    void DumpChatState();                                                                      // [Public] RVA: 0x7BCF600
    void DisableDebugCamera();                                                                 // [Protected] RVA: 0x7BCF5E8
    void DestroyTarget();                                                                      // [Public] RVA: 0x2273B00
    void DestroyServerStatReplicator();                                                        // [Final|Public] RVA: 0x7BCF5D4
    void DestroyPawns(TSubclassOf<Pawn> aClass);                                               // [Public] RVA: 0x5D6EAA4
    void DestroyAllPawnsExceptTarget();                                                        // [Public] RVA: 0x7BCF5BC
    void DestroyAll(TSubclassOf<Actor> aClass);                                                // [Public] RVA: 0x5C400B4
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);                                // [Public] RVA: 0x7BCF4D0
    void DebugCapsuleSweepPawn();                                                              // [Public] RVA: 0x7BCF4B8
    void DebugCapsuleSweepComplex(bool bTraceComplex);                                         // [Public] RVA: 0x7BCF418
    void DebugCapsuleSweepClear();                                                             // [Public] RVA: 0x5EA6FC4
    void DebugCapsuleSweepChannel(uint8 Channel);                                              // [Public] RVA: 0x7BCF378
    void DebugCapsuleSweepCapture();                                                           // [Public] RVA: 0x7BCF360
    void DebugCapsuleSweep();                                                                  // [Public] RVA: 0x7BCF348
    void DamageTarget(float DamageAmount);                                                     // [Public] RVA: 0x7BCF2A8
    void CheatScript(FString ScriptName);                                                      // [Final|Public] RVA: 0x7BCF180
    void ChangeSize(float F);                                                                  // [Public] RVA: 0x7BCF0E0
    void BugItStringCreator(Vector ViewLocation, Rotator ViewRotation, out FString GoString, out FString LocString);  // [Public] RVA: 0x7BCEE30
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);               // [Public] RVA: 0x7BCEBF4
    void BugIt(FString ScreenShotDescription);                                                 // [Public] RVA: 0x7BCEAF4
};

// ============================================================
// Inheritance: DebugCameraController : PlayerController : Controller : Actor : Object
// Package: /Script/Engine
// ============================================================
class DebugCameraController : public PlayerController {
public:
    bool bShowSelectedInfo;                                                                    // 0x0678 (0x01) BitMask: 0x01
    bool bIsFrozenRendering;                                                                   // 0x0678 (0x01) BitMask: 0x02
    bool bIsOrbitingSelectedActor;                                                             // 0x0678 (0x01) BitMask: 0x04
    bool bOrbitPivotUseCenter;                                                                 // 0x0678 (0x01) BitMask: 0x08
    bool bEnableBufferVisualization;                                                           // 0x0678 (0x01) BitMask: 0x10
    bool bEnableBufferVisualizationFullMode;                                                   // 0x0678 (0x01) BitMask: 0x20
    bool bIsBufferVisualizationInputSetup;                                                     // 0x0678 (0x01) BitMask: 0x40
    bool bLastDisplayEnabled;                                                                  // 0x0678 (0x01) BitMask: 0x80
    DrawFrustumComponent* DrawFrustum;                                                         // 0x0680 (0x08)
    Actor* SelectedActor;                                                                      // 0x0688 (0x08)
    PrimitiveComponent* SelectedComponent;                                                     // 0x0690 (0x08)
    HitResult SelectedHitPoint;                                                                // 0x0698 (0x98)
    PlayerController* OriginalControllerRef;                                                   // 0x0730 (0x08)
    Player* OriginalPlayer;                                                                    // 0x0738 (0x08)
    float SpeedScale;                                                                          // 0x0740 (0x04)
    float InitialMaxSpeed;                                                                     // 0x0744 (0x04)
    float InitialAccel;                                                                        // 0x0748 (0x04)
    float InitialDecel;                                                                        // 0x074C (0x04)

    // --- Functions ---
    void ToggleDisplay();                                                                      // [Final|Public] RVA: 0x7BD34DC
    void ShowDebugSelectedInfo();                                                              // [Public] RVA: 0x7BD34C4
    void SetPawnMovementSpeedScale(float NewSpeedScale);                                       // [Final|Public] RVA: 0x7BD341C
    void ReceiveOnDeactivate(PlayerController* RestoredPC);                                    // [Public] RVA: 0x182D6BC
    void ReceiveOnActorSelected(Actor* NewSelectedActor, const out ref Vector SelectHitLocation, const out ref Vector SelectHitNormal, const out ref HitResult Hit);  // [Protected] RVA: 0x182D6BC
    void ReceiveOnActivate(PlayerController* OriginalPC);                                      // [Public] RVA: 0x182D6BC
    Actor* GetSelectedActor();                                                                 // [Final|Public] RVA: 0x7BD32A8
};

// ============================================================
// Inheritance: DrawFrustumComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class DrawFrustumComponent : public PrimitiveComponent {
public:
    Color FrustumColor;                                                                        // 0x04F0 (0x04)
    float FrustumAngle;                                                                        // 0x04F4 (0x04)
    float FrustumAspectRatio;                                                                  // 0x04F8 (0x04)
    float FrustumStartDist;                                                                    // 0x04FC (0x04)
    float FrustumEndDist;                                                                      // 0x0500 (0x04)
    Texture* Texture;                                                                          // 0x0508 (0x08)
};

// ============================================================
// Inheritance: ActiveForceFeedbackEffect
// Package: /Script/Engine
// ============================================================
struct ActiveForceFeedbackEffect {
public:
    ForceFeedbackEffect* ForceFeedbackEffect;                                                  // 0x0000 (0x08)
};

// ============================================================
// Inheritance: ForceFeedbackEffect : Object
// Package: /Script/Engine
// ============================================================
class ForceFeedbackEffect : public Object {
public:
    TArray<ForceFeedbackChannelDetails> ChannelDetails;                                        // 0x0028 (0x10)
    float Duration;                                                                            // 0x0038 (0x04)
};

// ============================================================
// Inheritance: ForceFeedbackChannelDetails
// Package: /Script/Engine
// ============================================================
struct ForceFeedbackChannelDetails {
public:
    bool bAffectsLeftLarge;                                                                    // 0x0000 (0x01) BitMask: 0x01
    bool bAffectsLeftSmall;                                                                    // 0x0000 (0x01) BitMask: 0x02
    bool bAffectsRightLarge;                                                                   // 0x0000 (0x01) BitMask: 0x04
    bool bAffectsRightSmall;                                                                   // 0x0000 (0x01) BitMask: 0x08
    RuntimeFloatCurve Curve;                                                                   // 0x0008 (0x88)
};

// ============================================================
// Inheritance: RuntimeFloatCurve
// Package: /Script/Engine
// ============================================================
struct RuntimeFloatCurve {
public:
    RichCurve EditorCurveData;                                                                 // 0x0000 (0x80)
    CurveFloat* ExternalCurve;                                                                 // 0x0080 (0x08)
};

// ============================================================
// Inheritance: NetConnection : Player : Object
// Package: /Script/Engine
// ============================================================
class NetConnection : public Player {
public:
    TArray<ChildConnection*> Children;                                                         // 0x0048 (0x10)
    NetDriver* Driver;                                                                         // 0x0058 (0x08)
    TSubclassOf<PackageMap> PackageMapClass;                                                   // 0x0060 (0x08)
    PackageMap* PackageMap;                                                                    // 0x0068 (0x08)
    TArray<Channel*> OpenChannels;                                                             // 0x0070 (0x10)
    TArray<Actor*> SentTemporaries;                                                            // 0x0080 (0x10)
    Actor* ViewTarget;                                                                         // 0x0090 (0x08)
    Actor* OwningActor;                                                                        // 0x0098 (0x08)
    int32 MaxPacket;                                                                           // 0x00A0 (0x04)
    bool bClientNotSendClose;                                                                  // 0x00A4 (0x01) BitMask: 0xFF
    bool InternalAck;                                                                          // 0x00A8 (0x01) BitMask: 0x01
    UniqueNetIdRepl PlayerId;                                                                  // 0x0188 (0x28)
    double LastReceiveTime;                                                                    // 0x01F8 (0x08)
    TMap<FString, ActorChannel*> HasSentDormantDestructionInfoChannelsMap;                     // 0x1408 (0x50)
    TArray<Channel*> ChannelsToTick;                                                           // 0x15A0 (0x10)
    TArray<RPCMonitorStruct> RPCMonitorArray;                                                  // 0x1B80 (0x10)
    int32 MonitorSecondsPerStruct;                                                             // 0x1B98 (0x04)

    // --- Functions ---
    void PrintMonitorData();                                                                   // [Final|Public] RVA: 0x7C56EC4
    void AddRPCMonitor(Object* Object, Function* Function);                                    // [Final|Public] RVA: 0x7C56940
};

// ============================================================
// Inheritance: ChildConnection : NetConnection : Player : Object
// Package: /Script/Engine
// ============================================================
class ChildConnection : public NetConnection {
public:
    NetConnection* Parent;                                                                     // 0x1BA8 (0x08)
};

// ============================================================
// Inheritance: NetDriver : Object
// Package: /Script/Engine
// ============================================================
class NetDriver : public Object {
public:
    FString NetConnectionClassName;                                                            // 0x0030 (0x10)
    FString ReplicationDriverClassName;                                                        // 0x0040 (0x10)
    int32 MaxDownloadSize;                                                                     // 0x0050 (0x04)
    bool bClampListenServerTickRate;                                                           // 0x0054 (0x01) BitMask: 0x01
    int32 NetServerMaxTickRate;                                                                // 0x0058 (0x04)
    int32 MaxNetTickRate;                                                                      // 0x005C (0x04)
    int32 MaxInternetClientRate;                                                               // 0x0060 (0x04)
    int32 MaxClientRate;                                                                       // 0x0064 (0x04)
    float ServerTravelPause;                                                                   // 0x0068 (0x04)
    float SpawnPrioritySeconds;                                                                // 0x006C (0x04)
    float RelevantTimeout;                                                                     // 0x0070 (0x04)
    float KeepAliveTime;                                                                       // 0x0074 (0x04)
    float InitialConnectTimeout;                                                               // 0x0078 (0x04)
    float ConnectionTimeout;                                                                   // 0x007C (0x04)
    float TimeoutMultiplierForUnoptimizedBuilds;                                               // 0x0080 (0x04)
    bool bNoTimeouts;                                                                          // 0x0084 (0x01) BitMask: 0xFF
    bool bNeverApplyNetworkEmulationSettings;                                                  // 0x0085 (0x01) BitMask: 0xFF
    NetConnection* ServerConnection;                                                           // 0x0088 (0x08)
    TArray<NetConnection*> ClientConnections;                                                  // 0x0090 (0x10)
    NetConnection* ReplayConnection;                                                           // 0x00A0 (0x08)
    int32 RecentlyDisconnectedTrackingTime;                                                    // 0x0108 (0x04)
    World* World;                                                                              // 0x0148 (0x08)
    Package* WorldPackage;                                                                     // 0x0150 (0x08)
    TSubclassOf<Object> NetConnectionClass;                                                    // 0x0178 (0x08)
    TSubclassOf<Object> ReplicationDriverClass;                                                // 0x0180 (0x08)
    FName NetDriverName;                                                                       // 0x0198 (0x08)
    TArray<ChannelDefinition> ChannelDefinitions;                                              // 0x01A0 (0x10)
    TMap<FName, ChannelDefinition> ChannelDefinitionMap;                                       // 0x01B0 (0x50)
    TArray<Channel*> ActorChannelPool;                                                         // 0x0200 (0x10)
    float Time;                                                                                // 0x0218 (0x04)
    ReplicationDriver* ReplicationDriver;                                                      // 0x0700 (0x08)
};

// ============================================================
// Inheritance: Package : Object
// Package: /Script/CoreUObject
// ============================================================
class Package : public Object {
public:
};

// ============================================================
// Inheritance: ChannelDefinition
// Package: /Script/Engine
// ============================================================
struct ChannelDefinition {
public:
    FName ChannelName;                                                                         // 0x0000 (0x08)
    FName ClassName;                                                                           // 0x0008 (0x08)
    TSubclassOf<Object> ChannelClass;                                                          // 0x0010 (0x08)
    int32 StaticChannelIndex;                                                                  // 0x0018 (0x04)
    bool bTickOnCreate;                                                                        // 0x001C (0x01) BitMask: 0xFF
    bool bServerOpen;                                                                          // 0x001D (0x01) BitMask: 0xFF
    bool bClientOpen;                                                                          // 0x001E (0x01) BitMask: 0xFF
    bool bInitialServer;                                                                       // 0x001F (0x01) BitMask: 0xFF
    bool bInitialClient;                                                                       // 0x0020 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: Channel : Object
// Package: /Script/Engine
// ============================================================
class Channel : public Object {
public:
    NetConnection* Connection;                                                                 // 0x0028 (0x08)
};

// ============================================================
// Inheritance: ReplicationDriver : Object
// Package: /Script/Engine
// ============================================================
class ReplicationDriver : public Object {
public:
};

// ============================================================
// Inheritance: PackageMap : Object
// Package: /Script/CoreUObject
// ============================================================
class PackageMap : public Object {
public:
};

// ============================================================
// Inheritance: ActorChannel : Channel : Object
// Package: /Script/Engine
// ============================================================
class ActorChannel : public Channel {
public:
    Actor* Actor;                                                                              // 0x0070 (0x08)
    TArray<Object*> CreateSubObjects;                                                          // 0x0198 (0x10)
};

// ============================================================
// Inheritance: RPCMonitorStruct
// Package: /Script/Engine
// ============================================================
struct RPCMonitorStruct {
public:
    double BeginTime;                                                                          // 0x0000 (0x08)
    TArray<Object*> Objs;                                                                      // 0x0008 (0x10)
    int32 RPCNum;                                                                              // 0x0018 (0x04)
    TMap<FName, int32> RPCMap;                                                                 // 0x0020 (0x50)
};

// ============================================================
// Inheritance: Function : Struct : Field : Object
// Package: /Script/CoreUObject
// ============================================================
class Function : public Struct {
public:
};

// ============================================================
// Inheritance: TouchInterface : Object
// Package: /Script/Engine
// ============================================================
class TouchInterface : public Object {
public:
    TArray<TouchInputControl> Controls;                                                        // 0x0028 (0x10)
    float ActiveOpacity;                                                                       // 0x0038 (0x04)
    float InactiveOpacity;                                                                     // 0x003C (0x04)
    float TimeUntilDeactive;                                                                   // 0x0040 (0x04)
    float TimeUntilReset;                                                                      // 0x0044 (0x04)
    float ActivationDelay;                                                                     // 0x0048 (0x04)
    bool bPreventRecenter;                                                                     // 0x004C (0x01) BitMask: 0xFF
    float StartupDelay;                                                                        // 0x0050 (0x04)
};

// ============================================================
// Inheritance: TouchInputControl
// Package: /Script/Engine
// ============================================================
struct TouchInputControl {
public:
    Texture2D* Image1;                                                                         // 0x0000 (0x08)
    Texture2D* Image2;                                                                         // 0x0008 (0x08)
    Vector2D Center;                                                                           // 0x0010 (0x08)
    Vector2D VisualSize;                                                                       // 0x0018 (0x08)
    Vector2D ThumbSize;                                                                        // 0x0020 (0x08)
    Vector2D InteractionSize;                                                                  // 0x0028 (0x08)
    Vector2D InputScale;                                                                       // 0x0030 (0x08)
    Key MainInputKey;                                                                          // 0x0038 (0x18)
    Key AltInputKey;                                                                           // 0x0050 (0x18)
};

// ============================================================
// Inheritance: SpectatorPawn : Character : Pawn : Actor : Object
// Package: /Script/Engine
// ============================================================
class SpectatorPawn : public Character {
public:
};

// ============================================================
// Inheritance: UserWidget : Widget : Visual : Object
// Package: /Script/UMG
// ============================================================
class UserWidget : public Widget {
public:
    bool disableAnimForceLast;                                                                 // 0x0138 (0x01) BitMask: 0xFF
    LinearColor ColorAndOpacity;                                                               // 0x013C (0x10)
    FDelegate ColorAndOpacityDelegate;                                                         // 0x014C (0x10)
    SlateColor ForegroundColor;                                                                // 0x0160 (0x28)
    FDelegate ForegroundColorDelegate;                                                         // 0x0188 (0x10)
    FMulticastDelegate OnVisibilityChanged;                                                    // 0x0198 (0x10)
    Margin Padding;                                                                            // 0x01C0 (0x10)
    TArray<UMGSequencePlayer*> ActiveSequencePlayers;                                          // 0x01D0 (0x10)
    UMGSequenceTickManager* AnimationTickManager;                                              // 0x01E0 (0x08)
    TArray<UMGSequencePlayer*> StoppedSequencePlayers;                                         // 0x01E8 (0x10)
    TArray<NamedSlotBinding> NamedSlotBindings;                                                // 0x01F8 (0x10)
    WidgetTree* WidgetTree;                                                                    // 0x0208 (0x08)
    int32 Priority;                                                                            // 0x0210 (0x04)
    bool bSupportsKeyboardFocus;                                                               // 0x0214 (0x01) BitMask: 0x01
    bool bIsFocusable;                                                                         // 0x0214 (0x01) BitMask: 0x02
    bool bStopAction;                                                                          // 0x0214 (0x01) BitMask: 0x04
    bool bHasScriptImplementedTick;                                                            // 0x0214 (0x01) BitMask: 0x08
    bool bHasScriptImplementedPaint;                                                           // 0x0214 (0x01) BitMask: 0x10
    bool bLazyLoad;                                                                            // 0x0214 (0x01) BitMask: 0x20
    enum TickFrequency;                                                                        // 0x0220 (0x01)
    bool BlueprintTickEnable;                                                                  // 0x0221 (0x01) BitMask: 0xFF
    InputComponent* InputComponent;                                                            // 0x0228 (0x08)
    TArray<AnimationEventBinding> AnimationCallbacks;                                          // 0x0230 (0x10)

    // --- Functions ---
    void UnregisterInputComponent();                                                           // [Final|Protected] RVA: 0x75C48BC
    void UnbindFromAnimationStarted(WidgetAnimation* Animation, FDelegate Delegate);           // [Final|Public] RVA: 0x75C47AC
    void UnbindFromAnimationFinished(WidgetAnimation* Animation, FDelegate Delegate);          // [Final|Public] RVA: 0x223F790
    void UnbindAllFromAnimationStarted(WidgetAnimation* Animation);                            // [Final|Public] RVA: 0x75C4704
    void UnbindAllFromAnimationFinished(WidgetAnimation* Animation);                           // [Final|Public] RVA: 0x2631C70
    void Tick(Geometry MyGeometry, float InDeltaTime);                                         // [Public] RVA: 0x182D6BC
    void StopListeningForInputAction(FName ActionName, uint8 EventType);                       // [Final|Protected] RVA: 0x75C461C
    void StopListeningForAllInputActions();                                                    // [Final|Protected] RVA: 0x1CC4838
    void StopAnimationsAndLatentActions();                                                     // [Final|Public] RVA: 0x75C45F4
    void StopAnimation(const WidgetAnimation* InAnimation);                                    // [Final|Public] RVA: 0x1E56934
    void StopAllAnimations();                                                                  // [Final|Public] RVA: 0x1747848
    void StartDebug();                                                                         // [Final|Public] RVA: 0x75C45C4
    void SetPositionInViewport(Vector2D position, bool bRemoveDPIScale);                       // [Final|Public] RVA: 0x16A38F0
    void SetPlaybackSpeed(const WidgetAnimation* InAnimation, float PlaybackSpeed);            // [Final|Public] RVA: 0x75C422C
    void SetPadding(Margin InPadding);                                                         // [Final|Public] RVA: 0x75C4184
    void SetOwningPlayer(PlayerController* LocalPlayerController);                             // [Final|Public] RVA: 0x75C40D0
    void SetNumLoopsToPlay(const WidgetAnimation* InAnimation, int32 NumLoopsToPlay);          // [Final|Public] RVA: 0x75C3EE8
    void SetInputActionPriority(int32 NewPriority);                                            // [Final|Protected] RVA: 0x75C3B70
    void SetInputActionBlocking(bool bShouldBlock);                                            // [Final|Protected] RVA: 0x75C3AB0
    void SetForegroundColor(SlateColor InForegroundColor);                                     // [Final|Public] RVA: 0x75C393C
    void SetDesiredSizeInViewport(Vector2D Size);                                              // [Final|Public] RVA: 0x75C3718
    void SetColorAndOpacity(LinearColor InColorAndOpacity);                                    // [Final|Public] RVA: 0x18B0374
    void SetBlueprintTickEnable(bool bTickEnable);                                             // [Final|Public] RVA: 0x2698EFC
    void SetAnimationForceLastEnable(bool enable);                                             // [Final|Public] RVA: 0x75C35EC
    void SetAnimationCurrentTime(const WidgetAnimation* InAnimation, float InTime);            // [Final|Public] RVA: 0x23A45FC
    void SetAnchorsInViewport(Anchors Anchors);                                                // [Final|Public] RVA: 0x75C32D8
    void SetAlignmentInViewport(Vector2D Alignment);                                           // [Final|Public] RVA: 0x75C321C
    void ReverseAnimation(const WidgetAnimation* InAnimation);                                 // [Final|Public] RVA: 0x75C314C
    void RemoveFromViewport();                                                                 // [Final|Public] RVA: 0x1AA6C04
    void RegisterInputComponent();                                                             // [Final|Protected] RVA: 0x75C3104
    void PreConstruct(bool IsDesignTime);                                                      // [Public] RVA: 0x182D6BC
    void PlaySound(SoundBase* SoundToPlay);                                                    // [Final|Public] RVA: 0x75C3050
    UMGSequencePlayer* PlayAnimationTimeRange(WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, uint8 PlayMode, float PlaybackSpeed, bool bRestoreState);  // [Final|Public] RVA: 0x193AEB4
    UMGSequencePlayer* PlayAnimationReverse(WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);  // [Final|Public] RVA: 0x75C2F0C
    UMGSequencePlayer* PlayAnimationForward(WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);  // [Final|Public] RVA: 0x227A090
    UMGSequencePlayer* PlayAnimation(WidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, uint8 PlayMode, float PlaybackSpeed, bool bRestoreState);  // [Final|Public] RVA: 0x193ABB4
    float PauseAnimation(const WidgetAnimation* InAnimation);                                  // [Final|Public] RVA: 0x75C2DFC
    EventReply OnTouchStarted(Geometry MyGeometry, const out ref PointerEvent InTouchEvent);   // [Public] RVA: 0x182D6BC
    EventReply OnTouchMoved(Geometry MyGeometry, const out ref PointerEvent InTouchEvent);     // [Public] RVA: 0x182D6BC
    EventReply OnTouchGesture(Geometry MyGeometry, const out ref PointerEvent GestureEvent);   // [Public] RVA: 0x182D6BC
    EventReply OnTouchForceChanged(Geometry MyGeometry, const out ref PointerEvent InTouchEvent);  // [Public] RVA: 0x182D6BC
    EventReply OnTouchEnded(Geometry MyGeometry, const out ref PointerEvent InTouchEvent);     // [Public] RVA: 0x182D6BC
    void OnRemovedFromFocusPath(FocusEvent InFocusEvent);                                      // [Public] RVA: 0x182D6BC
    EventReply OnPreviewMouseButtonDown(Geometry MyGeometry, const out ref PointerEvent MouseEvent);  // [Public] RVA: 0x182D6BC
    EventReply OnPreviewKeyDown(Geometry MyGeometry, KeyEvent InKeyEvent);                     // [Public] RVA: 0x182D6BC
    void OnPaint(out ref PaintContext Context);                                                // [Public] RVA: 0x182D6BC
    EventReply OnMouseWheel(Geometry MyGeometry, const out ref PointerEvent MouseEvent);       // [Public] RVA: 0x182D6BC
    EventReply OnMouseMove(Geometry MyGeometry, const out ref PointerEvent MouseEvent);        // [Public] RVA: 0x182D6BC
    void OnMouseLeave(const out ref PointerEvent MouseEvent);                                  // [Public] RVA: 0x182D6BC
    void OnMouseEnter(Geometry MyGeometry, const out ref PointerEvent MouseEvent);             // [Public] RVA: 0x182D6BC
    void OnMouseCaptureLost();                                                                 // [Public] RVA: 0x182D6BC
    EventReply OnMouseButtonUp(Geometry MyGeometry, const out ref PointerEvent MouseEvent);    // [Public] RVA: 0x182D6BC
    EventReply OnMouseButtonDown(Geometry MyGeometry, const out ref PointerEvent MouseEvent);  // [Public] RVA: 0x182D6BC
    EventReply OnMouseButtonDoubleClick(Geometry InMyGeometry, const out ref PointerEvent InMouseEvent);  // [Public] RVA: 0x182D6BC
    EventReply OnMotionDetected(Geometry MyGeometry, MotionEvent InMotionEvent);               // [Public] RVA: 0x182D6BC
    EventReply OnKeyUp(Geometry MyGeometry, KeyEvent InKeyEvent);                              // [Public] RVA: 0x182D6BC
    EventReply OnKeyDown(Geometry MyGeometry, KeyEvent InKeyEvent);                            // [Public] RVA: 0x182D6BC
    EventReply OnKeyChar(Geometry MyGeometry, CharacterEvent InCharacterEvent);                // [Public] RVA: 0x182D6BC
    void OnInitialized();                                                                      // [Public] RVA: 0x182D6BC
    EventReply OnFocusReceived(Geometry MyGeometry, FocusEvent InFocusEvent);                  // [Public] RVA: 0x182D6BC
    void OnFocusLost(FocusEvent InFocusEvent);                                                 // [Public] RVA: 0x182D6BC
    bool OnDrop(Geometry MyGeometry, PointerEvent PointerEvent, DragDropOperation* Operation);  // [Public] RVA: 0x182D6BC
    bool OnDragOver(Geometry MyGeometry, PointerEvent PointerEvent, DragDropOperation* Operation);  // [Public] RVA: 0x182D6BC
    void OnDragLeave(PointerEvent PointerEvent, DragDropOperation* Operation);                 // [Public] RVA: 0x182D6BC
    void OnDragEnter(Geometry MyGeometry, PointerEvent PointerEvent, DragDropOperation* Operation);  // [Public] RVA: 0x182D6BC
    void OnDragDetected(Geometry MyGeometry, const out ref PointerEvent PointerEvent, out DragDropOperation* Operation);  // [Public] RVA: 0x182D6BC
    void OnDragCancelled(const out ref PointerEvent PointerEvent, DragDropOperation* Operation);  // [Public] RVA: 0x182D6BC
    void OnAnimationStarted(const WidgetAnimation* Animation);                                 // [Protected] RVA: 0x1FA4278
    void OnAnimationFinished(const WidgetAnimation* Animation);                                // [Protected] RVA: 0x1FDDB08
    EventReply OnAnalogValueChanged(Geometry MyGeometry, AnalogInputEvent InAnalogInputEvent);  // [Public] RVA: 0x182D6BC
    void OnAddedToFocusPath(FocusEvent InFocusEvent);                                          // [Public] RVA: 0x182D6BC
    void ListenForInputAction(FName ActionName, uint8 EventType, bool bConsume, FDelegate Callback);  // [Final|Protected] RVA: 0x1CC4068
    bool IsPlayingAnimation();                                                                 // [Final|Public] RVA: 0x20FD1E8
    bool IsListeningForInputAction(FName ActionName);                                          // [Final|Protected] RVA: 0x75C2D54
    bool IsInViewport();                                                                       // [Final|Public] RVA: 0x2630434
    bool IsInteractable();                                                                     // [Public] RVA: 0x182D6BC
    bool IsBlueprintTickEnable();                                                              // [Final|Public] RVA: 0x75C2C84
    bool IsAnyAnimationPlaying();                                                              // [Final|Public] RVA: 0x20FD1E8
    bool IsAnimationPlayingForward(const WidgetAnimation* InAnimation);                        // [Final|Public] RVA: 0x75C2BA0
    bool IsAnimationPlaying(const WidgetAnimation* InAnimation);                               // [Final|Public] RVA: 0x75C2AB0
    void InvalidateParent();                                                                   // [Final|Public] RVA: 0x75C2A9C
    Pawn* GetOwningPlayerPawn();                                                               // [Final|Public] RVA: 0x75C2A44
    PlayerCameraManager* GetOwningPlayerCameraManager();                                       // [Final|Public] RVA: 0x75C2A04
    Widget* GetOrCreateLazyChild(FString Name);                                                // [Final|Public] RVA: 0x75C2940
    bool GetIsVisible();                                                                       // [Final|Public] RVA: 0x75C290C
    float GetAnimationCurrentTime(const WidgetAnimation* InAnimation);                         // [Final|Public] RVA: 0x75C27A0
    Anchors GetAnchorsInViewport();                                                            // [Final|Public] RVA: 0x75C2784
    Vector2D GetAlignmentInViewport();                                                         // [Final|Public] RVA: 0x75C275C
    void FlushAnimations();                                                                    // [Final|Public] RVA: 0x75C2738
    void FinishAnimation(const WidgetAnimation* InAnimation, bool isForceLastFrame);           // [Final|Public] RVA: 0x1747694
    void Destruct();                                                                           // [Public] RVA: 0x182D6BC
    void Construct();                                                                          // [Public] RVA: 0x182D6BC
    void CancelLatentActions();                                                                // [Final|Public] RVA: 0x75C2650
    void BindToAnimationStarted(WidgetAnimation* Animation, FDelegate Delegate);               // [Final|Public] RVA: 0x171FBA4
    void BindToAnimationFinished(WidgetAnimation* Animation, FDelegate Delegate);              // [Final|Public] RVA: 0x171FFD8
    void BindToAnimationEvent(WidgetAnimation* Animation, FDelegate Delegate, enum AnimationEvent, FName UserTag);  // [Final|Public] RVA: 0x75C24A8
    void AddToViewport(int32 ZOrder);                                                          // [Final|Public] RVA: 0x21926BC
    bool AddToPlayerScreen(int32 ZOrder);                                                      // [Final|Public] RVA: 0x75C2400
};

// ============================================================
// Inheritance: Widget : Visual : Object
// Package: /Script/UMG
// ============================================================
class Widget : public Visual {
public:
    PanelSlot* Slot;                                                                           // 0x0028 (0x08)
    FDelegate bIsEnabledDelegate;                                                              // 0x0030 (0x10)
    FText ToolTipText;                                                                         // 0x0040 (0x18)
    FDelegate ToolTipTextDelegate;                                                             // 0x0058 (0x10)
    Widget* ToolTipWidget;                                                                     // 0x0068 (0x08)
    FDelegate ToolTipWidgetDelegate;                                                           // 0x0070 (0x10)
    enum MaskGeometryType;                                                                     // 0x0080 (0x01)
    Vector2D MaskGeometryMargin;                                                               // 0x0084 (0x08)
    FDelegate VisibilityDelegate;                                                              // 0x008C (0x10)
    WidgetTransform RenderTransform;                                                           // 0x009C (0x24)
    Vector2D RenderTransformPivot;                                                             // 0x00C0 (0x08)
    bool bIsVariable;                                                                          // 0x00C8 (0x01) BitMask: 0x01
    bool bCreatedByConstructionScript;                                                         // 0x00C8 (0x01) BitMask: 0x02
    bool bIsEnabled;                                                                           // 0x00C8 (0x01) BitMask: 0x04
    bool bOverride_Cursor;                                                                     // 0x00C8 (0x01) BitMask: 0x08
    SlateAccessibleWidgetData* AccessibleWidgetData;                                           // 0x00D0 (0x08)
    bool bIsVolatile;                                                                          // 0x00D8 (0x01) BitMask: 0x01
    uint8 Cursor;                                                                              // 0x00DA (0x01)
    enum Clipping;                                                                             // 0x00DB (0x01)
    enum Visibility;                                                                           // 0x00DC (0x01)
    float RenderOpacity;                                                                       // 0x00E0 (0x04)
    WidgetNavigation* Navigation;                                                              // 0x00E8 (0x08)
    enum FlowDirectionPreference;                                                              // 0x00F0 (0x01)
    TArray<PropertyBinding*> NativeBindings;                                                   // 0x0118 (0x10)
    int32 PaintOffsetFlag;                                                                     // 0x0128 (0x04)

    // --- Functions ---
    void SetVisibility(enum InVisibility);                                                     // [Public] RVA: 0xDD5F44
    void SetUserFocus(PlayerController* PlayerController);                                     // [Final|Public] RVA: 0x75C69EC
    void SetToolTipText(const out ref FText InToolTipText);                                    // [Final|Public] RVA: 0x75C6928
    void SetToolTip(Widget* Widget);                                                           // [Final|Public] RVA: 0x75C688C
    void SetRenderTranslationXY(float X, float Y);                                             // [Final|Public] RVA: 0x75C66F4
    void SetRenderTranslation(Vector2D Translation);                                           // [Final|Public] RVA: 0x1C43BA4
    void SetRenderTransformPivot(Vector2D Pivot);                                              // [Final|Public] RVA: 0x75C6660
    void SetRenderTransformAngle(float Angle);                                                 // [Final|Public] RVA: 0x1CB65E4
    void SetRenderTransform(WidgetTransform InTransform);                                      // [Final|Public] RVA: 0x200417C
    void SetRenderShear(Vector2D Shear);                                                       // [Final|Public] RVA: 0x75C65C0
    void SetRenderScaleXY(float X, float Y);                                                   // [Final|Public] RVA: 0x18911C4
    void SetRenderScale(Vector2D Scale);                                                       // [Final|Public] RVA: 0x18910F4
    void SetRenderOpacity(float InOpacity);                                                    // [Public] RVA: 0x1C2C07C
    void SetPaintOffsetFlag(int32 InPaintOffset);                                              // [Public] RVA: 0x75C6524
    void SetNavigationRuleExplicit(enum Direction, Widget* InWidget);                          // [Final|Public] RVA: 0x75C6344
    void SetNavigationRuleCustomBoundary(enum Direction, FDelegate InCustomDelegate);          // [Final|Public] RVA: 0x75C622C
    void SetNavigationRuleCustom(enum Direction, FDelegate InCustomDelegate);                  // [Final|Public] RVA: 0x75C6114
    void SetNavigationRuleBase(enum Direction, enum Rule);                                     // [Final|Public] RVA: 0x75C5FD4
    void SetNavigationRule(enum Direction, enum Rule, FName WidgetToFocus);                    // [Final|Public] RVA: 0x75C5E6C
    void SetKeyboardFocus();                                                                   // [Final|Public] RVA: 0x75C5E58
    void SetIsEnabled(bool bInIsEnabled);                                                      // [Public] RVA: 0x75C5DB8
    void SetFocus();                                                                           // [Final|Public] RVA: 0x75C5CF0
    void SetCursor(uint8 InCursor);                                                            // [Final|Public] RVA: 0x75C5C54
    void SetClipping(enum InClipping);                                                         // [Final|Public] RVA: 0x75C5BBC
    void SetAllNavigationRules(enum Rule, FName WidgetToFocus);                                // [Final|Public] RVA: 0x75C5AD4
    void ResetCursor();                                                                        // [Final|Public] RVA: 0x75C59E8
    void RemoveFromParent();                                                                   // [Public] RVA: 0x1AA6C04
    bool RecursiveIsVisible();                                                                 // [Final|Public] RVA: 0x75C59C4
    EventReply OnReply__DelegateSignature();                                                   // [Public] RVA: 0x182D6BC
    EventReply OnPointerEvent__DelegateSignature(Geometry MyGeometry, const out ref PointerEvent MouseEvent);  // [Public] RVA: 0x182D6BC
    bool IsVisible();                                                                          // [Final|Public] RVA: 0x75C59A0
    bool IsHovered();                                                                          // [Public] RVA: 0x726076C
    void InvalidateLayoutAndVolatility();                                                      // [Final|Public] RVA: 0x75C598C
    bool HasUserFocusedDescendants(PlayerController* PlayerController);                        // [Final|Public] RVA: 0x75C57C0
    bool HasUserFocus(PlayerController* PlayerController);                                     // [Final|Public] RVA: 0x75C55E0
    bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex);                           // [Final|Public] RVA: 0x75C5494
    bool HasMouseCapture();                                                                    // [Final|Public] RVA: 0x75C540C
    bool HasKeyboardFocus();                                                                   // [Final|Public] RVA: 0x75C5380
    bool HasFocusedDescendants();                                                              // [Final|Public] RVA: 0x75C52F8
    bool HasAnyUserFocus();                                                                    // [Final|Public] RVA: 0x75C525C
    Widget* GetWidget__DelegateSignature();                                                    // [Public] RVA: 0x182D6BC
    enum GetVisibility();                                                                      // [Final|Public] RVA: 0x1C1BF78
    Geometry GetTickSpaceGeometry();                                                           // [Final|Public] RVA: 0x75C4FB8
    FText GetText__DelegateSignature();                                                        // [Public] RVA: 0x182D6BC
    enum GetSlateVisibility__DelegateSignature();                                              // [Public] RVA: 0x182D6BC
    SlateColor GetSlateColor__DelegateSignature();                                             // [Public] RVA: 0x182D6BC
    SlateBrush GetSlateBrush__DelegateSignature();                                             // [Public] RVA: 0x182D6BC
    float GetRenderTransformAngle();                                                           // [Final|Public] RVA: 0x75C50C0
    float GetRenderOpacity();                                                                  // [Final|Public] RVA: 0x123FBBC
    PanelWidget* GetParent();                                                                  // [Final|Public] RVA: 0x227C894
    Geometry GetPaintSpaceGeometry();                                                          // [Final|Public] RVA: 0x75C5094
    PlayerController* GetOwningPlayer();                                                       // [Public] RVA: 0x6852B24
    LocalPlayer* GetOwningLocalPlayer();                                                       // [Public] RVA: 0x68536CC
    uint8 GetMouseCursor__DelegateSignature();                                                 // [Public] RVA: 0x182D6BC
    LinearColor GetLinearColor__DelegateSignature();                                           // [Public] RVA: 0x182D6BC
    bool GetIsEnabled();                                                                       // [Final|Public] RVA: 0x75C5070
    int32 GetInt32__DelegateSignature();                                                       // [Public] RVA: 0x182D6BC
    GameInstance* GetGameInstance();                                                           // [Final|Public] RVA: 0x279D7E8
    float GetFloat__DelegateSignature();                                                       // [Public] RVA: 0x182D6BC
    Vector2D GetDesiredSize();                                                                 // [Final|Public] RVA: 0xCC74D8
    enum GetClipping();                                                                        // [Final|Public] RVA: 0x75C4FE4
    enum GetCheckBoxState__DelegateSignature();                                                // [Public] RVA: 0x182D6BC
    Geometry GetCachedGeometry();                                                              // [Final|Public] RVA: 0x75C4FB8
    bool GetBool__DelegateSignature();                                                         // [Public] RVA: 0x182D6BC
    FText GetAccessibleText();                                                                 // [Final|Public] RVA: 0x75C4EB8
    FText GetAccessibleSummaryText();                                                          // [Final|Public] RVA: 0x75C4E08
    Widget* GenerateWidgetForString__DelegateSignature(FString item);                          // [Public] RVA: 0x182D6BC
    Widget* GenerateWidgetForObject__DelegateSignature(Object* item);                          // [Public] RVA: 0x182D6BC
    void ForceVolatile(bool bForce);                                                           // [Final|Public] RVA: 0x75C4D1C
    void ForceLayoutPrepass();                                                                 // [Final|Public] RVA: 0x75C4D08
};

// ============================================================
// Inheritance: Visual : Object
// Package: /Script/UMG
// ============================================================
class Visual : public Object {
public:
};

// ============================================================
// Inheritance: SlateColor
// Package: /Script/SlateCore
// ============================================================
struct SlateColor {
public:
    LinearColor SpecifiedColor;                                                                // 0x0000 (0x10)
    uint8 ColorUseRule;                                                                        // 0x0010 (0x01)
};

// ============================================================
// Inheritance: Margin
// Package: /Script/SlateCore
// ============================================================
struct Margin {
public:
    float Left;                                                                                // 0x0000 (0x04)
    float Top;                                                                                 // 0x0004 (0x04)
    float Right;                                                                               // 0x0008 (0x04)
    float Bottom;                                                                              // 0x000C (0x04)
};

// ============================================================
// Inheritance: UMGSequencePlayer : Object
// Package: /Script/UMG
// ============================================================
class UMGSequencePlayer : public Object {
public:
    WidgetAnimation* Animation;                                                                // 0x0418 (0x08)
    MovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                             // 0x0428 (0xE8)

    // --- Functions ---
    void SetUserTag(FName InUserTag);                                                          // [Final|Public] RVA: 0x75C4494
    FName GetUserTag();                                                                        // [Final|Public] RVA: 0x75C2A84
};

// ============================================================
// Inheritance: WidgetAnimation : MovieSceneSequence : MovieSceneSignedObject : Object
// Package: /Script/UMG
// ============================================================
class WidgetAnimation : public MovieSceneSequence {
public:
    MovieScene* MovieScene;                                                                    // 0x0060 (0x08)
    TArray<WidgetAnimationBinding> AnimationBindings;                                          // 0x0068 (0x10)
    bool bLegacyFinishOnStop;                                                                  // 0x0078 (0x01) BitMask: 0xFF
    FString DisplayLabel;                                                                      // 0x0080 (0x10)

    // --- Functions ---
    void UnbindFromAnimationStarted(UserWidget* Widget, FDelegate Delegate);                   // [Final|Public] RVA: 0x75CBF48
    void UnbindFromAnimationFinished(UserWidget* Widget, FDelegate Delegate);                  // [Final|Public] RVA: 0x75CBE2C
    void UnbindAllFromAnimationStarted(UserWidget* Widget);                                    // [Final|Public] RVA: 0x75CBD88
    void UnbindAllFromAnimationFinished(UserWidget* Widget);                                   // [Final|Public] RVA: 0x75CBCE4
    float GetStartTime();                                                                      // [Final|Public] RVA: 0x75CA298
    float GetEndTime();                                                                        // [Final|Public] RVA: 0x20CFAE8
    void BindToAnimationStarted(UserWidget* Widget, FDelegate Delegate);                       // [Final|Public] RVA: 0x75C7218
    void BindToAnimationFinished(UserWidget* Widget, FDelegate Delegate);                      // [Final|Public] RVA: 0x75C710C
};

// ============================================================
// Inheritance: MovieSceneSequence : MovieSceneSignedObject : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneSequence : public MovieSceneSignedObject {
public:
    MovieSceneCompiledData* CompiledData;                                                      // 0x0050 (0x08)
    enum DefaultCompletionMode;                                                                // 0x0058 (0x01)
    bool bParentContextsAreSignificant;                                                        // 0x0059 (0x01) BitMask: 0xFF
    bool bPlayableDirectly;                                                                    // 0x005A (0x01) BitMask: 0xFF
    enum SequenceFlags;                                                                        // 0x005B (0x01)

    // --- Functions ---
    TArray<MovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);                  // [Final|Public] RVA: 0x7499BA8
    MovieSceneObjectBindingID FindBindingByTag(FName InBindingName);                           // [Final|Public] RVA: 0x7499AE8
};

// ============================================================
// Inheritance: MovieSceneSignedObject : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneSignedObject : public Object {
public:
    Guid Signature;                                                                            // 0x0028 (0x10)
};

// ============================================================
// Inheritance: MovieScene : MovieSceneSignedObject : Object
// Package: /Script/MovieScene
// ============================================================
class MovieScene : public MovieSceneSignedObject {
public:
    TArray<MovieSceneSpawnable> Spawnables;                                                    // 0x0050 (0x10)
    TArray<MovieScenePossessable> Possessables;                                                // 0x0060 (0x10)
    TArray<MovieSceneBinding> ObjectBindings;                                                  // 0x0070 (0x10)
    TMap<FName, MovieSceneObjectBindingIDs> BindingGroups;                                     // 0x0080 (0x50)
    TArray<MovieSceneTrack*> MasterTracks;                                                     // 0x00D0 (0x10)
    MovieSceneTrack* CameraCutTrack;                                                           // 0x00E0 (0x08)
    MovieSceneFrameRange SelectionRange;                                                       // 0x00E8 (0x10)
    MovieSceneFrameRange PlaybackRange;                                                        // 0x00F8 (0x10)
    FrameRate TickResolution;                                                                  // 0x0108 (0x08)
    FrameRate DisplayRate;                                                                     // 0x0110 (0x08)
    enum EvaluationType;                                                                       // 0x0118 (0x01)
    enum ClockSource;                                                                          // 0x0119 (0x01)
    SoftObjectPath CustomClockSourcePath;                                                      // 0x0120 (0x18)
    TArray<MovieSceneMarkedFrame> MarkedFrames;                                                // 0x0138 (0x10)
};

// ============================================================
// Inheritance: MovieSceneSpawnable
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSpawnable {
public:
    Transform SpawnTransform;                                                                  // 0x0000 (0x30)
    TArray<FName> Tags;                                                                        // 0x0030 (0x10)
    bool bContinuouslyRespawn;                                                                 // 0x0040 (0x01) BitMask: 0xFF
    bool bEvaluateTracksWhenNotSpawned;                                                        // 0x0041 (0x01) BitMask: 0xFF
    Guid Guid;                                                                                 // 0x0044 (0x10)
    FString Name;                                                                              // 0x0058 (0x10)
    Object* ObjectTemplate;                                                                    // 0x0068 (0x08)
    TArray<Guid> ChildPossessables;                                                            // 0x0070 (0x10)
    enum Ownership;                                                                            // 0x0080 (0x01)
    FName LevelName;                                                                           // 0x0084 (0x08)
};

// ============================================================
// Inheritance: MovieScenePossessable
// Package: /Script/MovieScene
// ============================================================
struct MovieScenePossessable {
public:
    TArray<FName> Tags;                                                                        // 0x0000 (0x10)
    Guid Guid;                                                                                 // 0x0010 (0x10)
    FString Name;                                                                              // 0x0020 (0x10)
    TSubclassOf<Object> PossessedObjectClass;                                                  // 0x0030 (0x08)
    Guid ParentGuid;                                                                           // 0x0038 (0x10)
};

// ============================================================
// Inheritance: MovieSceneBinding
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneBinding {
public:
    Guid ObjectGuid;                                                                           // 0x0000 (0x10)
    FString BindingName;                                                                       // 0x0010 (0x10)
    TArray<MovieSceneTrack*> Tracks;                                                           // 0x0020 (0x10)
};

// ============================================================
// Inheritance: MovieSceneTrack : MovieSceneSignedObject : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneTrack : public MovieSceneSignedObject {
public:
    MovieSceneTrackEvalOptions EvalOptions;                                                    // 0x0050 (0x04)
    bool bIsEvalDisabled;                                                                      // 0x0055 (0x01) BitMask: 0xFF
    Guid EvaluationFieldGuid;                                                                  // 0x0058 (0x10)
    MovieSceneTrackEvaluationField EvaluationField;                                            // 0x0068 (0x10)
};

// ============================================================
// Inheritance: MovieSceneTrackEvalOptions
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTrackEvalOptions {
public:
    bool bCanEvaluateNearestSection;                                                           // 0x0000 (0x01) BitMask: 0x01
    bool bEvalNearestSection;                                                                  // 0x0000 (0x01) BitMask: 0x02
    bool bEvaluateInPreroll;                                                                   // 0x0000 (0x01) BitMask: 0x04
    bool bEvaluateInPostroll;                                                                  // 0x0000 (0x01) BitMask: 0x08
    bool bEvaluateNearestSection;                                                              // 0x0000 (0x01) BitMask: 0x10
};

// ============================================================
// Inheritance: MovieSceneTrackEvaluationField
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTrackEvaluationField {
public:
    TArray<MovieSceneTrackEvaluationFieldEntry> Entries;                                       // 0x0000 (0x10)
};

// ============================================================
// Inheritance: MovieSceneTrackEvaluationFieldEntry
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTrackEvaluationFieldEntry {
public:
    MovieSceneSection* Section;                                                                // 0x0000 (0x08)
    FrameNumberRange Range;                                                                    // 0x0008 (0x10)
    FrameNumber ForcedTime;                                                                    // 0x0018 (0x04)
    enum Flags;                                                                                // 0x001C (0x01)
    int16 LegacySortOrder;                                                                     // 0x001E (0x02)
};

// ============================================================
// Inheritance: MovieSceneSection : MovieSceneSignedObject : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneSection : public MovieSceneSignedObject {
public:
    MovieSceneSectionEvalOptions EvalOptions;                                                  // 0x0050 (0x02)
    MovieSceneEasingSettings Easing;                                                           // 0x0058 (0x38)
    MovieSceneFrameRange SectionRange;                                                         // 0x0090 (0x10)
    FrameNumber PreRollFrames;                                                                 // 0x00A0 (0x04)
    FrameNumber PostRollFrames;                                                                // 0x00A4 (0x04)
    int32 RowIndex;                                                                            // 0x00A8 (0x04)
    int32 OverlapPriority;                                                                     // 0x00AC (0x04)
    bool bIsActive;                                                                            // 0x00B0 (0x01) BitMask: 0x01
    bool bIsLocked;                                                                            // 0x00B0 (0x01) BitMask: 0x02
    float StartTime;                                                                           // 0x00B4 (0x04)
    float EndTime;                                                                             // 0x00B8 (0x04)
    float PrerollTime;                                                                         // 0x00BC (0x04)
    float PostrollTime;                                                                        // 0x00C0 (0x04)
    bool bIsInfinite;                                                                          // 0x00C4 (0x01) BitMask: 0x01
    bool bSupportsInfiniteRange;                                                               // 0x00C8 (0x01) BitMask: 0xFF
    OptionalMovieSceneBlendType BlendType;                                                     // 0x00C9 (0x02)

    // --- Functions ---
    void SetRowIndex(int32 NewRowIndex);                                                       // [Final|Public] RVA: 0x749B1E4
    void SetPreRollFrames(int32 InPreRollFrames);                                              // [Final|Public] RVA: 0x749B140
    void SetPostRollFrames(int32 InPostRollFrames);                                            // [Final|Public] RVA: 0x749B09C
    void SetOverlapPriority(int32 NewPriority);                                                // [Final|Public] RVA: 0x749AEA4
    void SetIsLocked(bool bInIsLocked);                                                        // [Final|Public] RVA: 0x749ADFC
    void SetIsActive(bool bInIsActive);                                                        // [Final|Public] RVA: 0x749AD54
    void SetCompletionMode(enum InCompletionMode);                                             // [Final|Public] RVA: 0x749AA38
    void SetBlendType(enum InBlendType);                                                       // [Public] RVA: 0x60C5DE0
    bool IsLocked();                                                                           // [Final|Public] RVA: 0x7499FB0
    bool IsActive();                                                                           // [Final|Public] RVA: 0x7499F94
    int32 GetRowIndex();                                                                       // [Final|Public] RVA: 0x6392870
    int32 GetPreRollFrames();                                                                  // [Final|Public] RVA: 0x606801C
    int32 GetPostRollFrames();                                                                 // [Final|Public] RVA: 0x7499F38
    int32 GetOverlapPriority();                                                                // [Final|Public] RVA: 0x63927C8
    enum GetCompletionMode();                                                                  // [Final|Public] RVA: 0x7499D5C
    OptionalMovieSceneBlendType GetBlendType();                                                // [Final|Public] RVA: 0x7499C58
};

// ============================================================
// Inheritance: MovieSceneSectionEvalOptions
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSectionEvalOptions {
public:
    bool bCanEditCompletionMode;                                                               // 0x0000 (0x01) BitMask: 0xFF
    enum CompletionMode;                                                                       // 0x0001 (0x01)
};

// ============================================================
// Inheritance: MovieSceneEasingSettings
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEasingSettings {
public:
    int32 AutoEaseInDuration;                                                                  // 0x0000 (0x04)
    int32 AutoEaseOutDuration;                                                                 // 0x0004 (0x04)
    TScriptInterface<lengthErrorString> EaseIn;                                                // 0x0008 (0x10)
    bool bManualEaseIn;                                                                        // 0x0018 (0x01) BitMask: 0xFF
    int32 ManualEaseInDuration;                                                                // 0x001C (0x04)
    TScriptInterface<lengthErrorString> EaseOut;                                               // 0x0020 (0x10)
    bool bManualEaseOut;                                                                       // 0x0030 (0x01) BitMask: 0xFF
    int32 ManualEaseOutDuration;                                                               // 0x0034 (0x04)
};

// ============================================================
// Inheritance: NoASCII : None
// Package: None
// ============================================================
class NoASCII : public None {
public:
    None None;                                                                                 // 0x0000 (0x00)
};

// ============================================================
// Inheritance: MovieSceneFrameRange
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneFrameRange {
public:
};

// ============================================================
// Inheritance: FrameNumber
// Package: /Script/CoreUObject
// ============================================================
struct FrameNumber {
public:
    int32 Value;                                                                               // 0x0000 (0x04)
};

// ============================================================
// Inheritance: OptionalMovieSceneBlendType
// Package: /Script/MovieScene
// ============================================================
struct OptionalMovieSceneBlendType {
public:
    enum BlendType;                                                                            // 0x0000 (0x01)
    bool bIsValid;                                                                             // 0x0001 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: FrameNumberRange
// Package: /Script/CoreUObject
// ============================================================
struct FrameNumberRange {
public:
    FrameNumberRangeBound LowerBound;                                                          // 0x0000 (0x08)
    FrameNumberRangeBound UpperBound;                                                          // 0x0008 (0x08)
};

// ============================================================
// Inheritance: FrameNumberRangeBound
// Package: /Script/CoreUObject
// ============================================================
struct FrameNumberRangeBound {
public:
    uint8 Type;                                                                                // 0x0000 (0x01)
    FrameNumber Value;                                                                         // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneObjectBindingIDs
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneObjectBindingIDs {
public:
    TArray<MovieSceneObjectBindingID> IDs;                                                     // 0x0000 (0x10)
};

// ============================================================
// Inheritance: MovieSceneObjectBindingID
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneObjectBindingID {
public:
    int32 SequenceID;                                                                          // 0x0000 (0x04)
    enum Space;                                                                                // 0x0004 (0x01)
    Guid Guid;                                                                                 // 0x0008 (0x10)
};

// ============================================================
// Inheritance: FrameRate
// Package: /Script/CoreUObject
// ============================================================
struct FrameRate {
public:
    int32 Numerator;                                                                           // 0x0000 (0x04)
    int32 Denominator;                                                                         // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneMarkedFrame
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneMarkedFrame {
public:
    FrameNumber FrameNumber;                                                                   // 0x0000 (0x04)
    FString label;                                                                             // 0x0008 (0x10)
};

// ============================================================
// Inheritance: WidgetAnimationBinding
// Package: /Script/UMG
// ============================================================
struct WidgetAnimationBinding {
public:
    FName WidgetName;                                                                          // 0x0000 (0x08)
    FName SlotWidgetName;                                                                      // 0x0008 (0x08)
    Guid AnimationGuid;                                                                        // 0x0010 (0x10)
    bool bIsRootWidget;                                                                        // 0x0020 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: MovieSceneCompiledData : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneCompiledData : public Object {
public:
    MovieSceneEvaluationTemplate EvaluationTemplate;                                           // 0x0028 (0x160)
    MovieSceneSequenceHierarchy Hierarchy;                                                     // 0x0188 (0x118)
    MovieSceneEntityComponentField EntityComponentField;                                       // 0x02A0 (0xF0)
    MovieSceneEvaluationField TrackTemplateField;                                              // 0x0390 (0x30)
    TArray<FrameTime> DeterminismFences;                                                       // 0x03C0 (0x10)
    Guid CompiledSignature;                                                                    // 0x03D0 (0x10)
    Guid CompilerVersion;                                                                      // 0x03E0 (0x10)
    MovieSceneSequenceCompilerMaskStruct AccumulatedMask;                                      // 0x03F0 (0x01)
    MovieSceneSequenceCompilerMaskStruct AllocatedMask;                                        // 0x03F1 (0x01)
    enum AccumulatedFlags;                                                                     // 0x03F2 (0x01)
};

// ============================================================
// Inheritance: MovieSceneEvaluationTemplate
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationTemplate {
public:
    TMap<MovieSceneTrackIdentifier, MovieSceneEvaluationTrack> Tracks;                         // 0x0000 (0x50)
    Guid SequenceSignature;                                                                    // 0x00A0 (0x10)
    MovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                             // 0x00B0 (0x04)
    MovieSceneTemplateGenerationLedger TemplateLedger;                                         // 0x00B8 (0xA8)
};

// ============================================================
// Inheritance: MovieSceneEvaluationTrack
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationTrack {
public:
    Guid ObjectBindingID;                                                                      // 0x0000 (0x10)
    uint16 EvaluationPriority;                                                                 // 0x0010 (0x02)
    enum EvaluationMethod;                                                                     // 0x0012 (0x01)
    MovieSceneTrack* SourceTrack;                                                              // 0x0014 (0x08)
    TArray<MovieSceneEvalTemplatePtr> ChildTemplates;                                          // 0x0020 (0x10)
    MovieSceneTrackImplementationPtr TrackTemplate;                                            // 0x0030 (0x38)
    FName EvaluationGroup;                                                                     // 0x0068 (0x08)
    bool bEvaluateInPreroll;                                                                   // 0x0070 (0x01) BitMask: 0x01
    bool bEvaluateInPostroll;                                                                  // 0x0070 (0x01) BitMask: 0x02
    bool bTearDownPriority;                                                                    // 0x0070 (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: MovieSceneEvalTemplatePtr
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvalTemplatePtr {
public:
};

// ============================================================
// Inheritance: MovieSceneTrackImplementationPtr
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTrackImplementationPtr {
public:
};

// ============================================================
// Inheritance: MovieSceneTrackIdentifier
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTrackIdentifier {
public:
    uint32 Value;                                                                              // 0x0000 (0x04)
};

// ============================================================
// Inheritance: MovieSceneEvaluationTemplateSerialNumber
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationTemplateSerialNumber {
public:
    uint32 Value;                                                                              // 0x0000 (0x04)
};

// ============================================================
// Inheritance: MovieSceneTemplateGenerationLedger
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTemplateGenerationLedger {
public:
    MovieSceneTrackIdentifier LastTrackIdentifier;                                             // 0x0000 (0x04)
    TMap<Guid, MovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                     // 0x0008 (0x50)
    TMap<Guid, MovieSceneFrameRange> SubSectionRanges;                                         // 0x0058 (0x50)
};

// ============================================================
// Inheritance: MovieSceneSequenceHierarchy
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSequenceHierarchy {
public:
    MovieSceneSequenceHierarchyNode RootNode;                                                  // 0x0000 (0x18)
    MovieSceneSubSequenceTree Tree;                                                            // 0x0018 (0x60)
    TMap<MovieSceneSequenceID, MovieSceneSubSequenceData> SubSequences;                        // 0x0078 (0x50)
    TMap<MovieSceneSequenceID, MovieSceneSequenceHierarchyNode> Hierarchy;                     // 0x00C8 (0x50)
};

// ============================================================
// Inheritance: MovieSceneSequenceHierarchyNode
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSequenceHierarchyNode {
public:
    MovieSceneSequenceID ParentID;                                                             // 0x0000 (0x04)
    TArray<MovieSceneSequenceID> Children;                                                     // 0x0008 (0x10)
};

// ============================================================
// Inheritance: MovieSceneSequenceID
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSequenceID {
public:
    uint32 Value;                                                                              // 0x0000 (0x04)
};

// ============================================================
// Inheritance: MovieSceneSubSequenceTree
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSubSequenceTree {
public:
};

// ============================================================
// Inheritance: MovieSceneSubSequenceData
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSubSequenceData {
public:
    SoftObjectPath Sequence;                                                                   // 0x0000 (0x18)
    MovieSceneSequenceTransform RootToSequenceTransform;                                       // 0x0018 (0x20)
    FrameRate TickResolution;                                                                  // 0x0038 (0x08)
    MovieSceneSequenceID DeterministicSequenceID;                                              // 0x0040 (0x04)
    MovieSceneFrameRange PlayRange;                                                            // 0x0044 (0x10)
    MovieSceneFrameRange FullPlayRange;                                                        // 0x0054 (0x10)
    MovieSceneFrameRange UnwarpedPlayRange;                                                    // 0x0064 (0x10)
    MovieSceneFrameRange PreRollRange;                                                         // 0x0074 (0x10)
    MovieSceneFrameRange PostRollRange;                                                        // 0x0084 (0x10)
    int16 HierarchicalBias;                                                                    // 0x0094 (0x02)
    bool bHasHierarchicalEasing;                                                               // 0x0096 (0x01) BitMask: 0xFF
    MovieSceneSequenceInstanceDataPtr InstanceData;                                            // 0x0098 (0x18)
    Guid SubSectionSignature;                                                                  // 0x00B8 (0x10)
    MovieSceneSequenceTransform OuterToInnerTransform;                                         // 0x00C8 (0x20)
};

// ============================================================
// Inheritance: MovieSceneSequenceTransform
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSequenceTransform {
public:
    MovieSceneTimeTransform LinearTransform;                                                   // 0x0000 (0x0C)
    TArray<MovieSceneNestedSequenceTransform> NestedTransforms;                                // 0x0010 (0x10)
};

// ============================================================
// Inheritance: MovieSceneTimeTransform
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTimeTransform {
public:
    float TimeScale;                                                                           // 0x0000 (0x04)
    FrameTime Offset;                                                                          // 0x0004 (0x08)
};

// ============================================================
// Inheritance: FrameTime
// Package: /Script/CoreUObject
// ============================================================
struct FrameTime {
public:
    FrameNumber FrameNumber;                                                                   // 0x0000 (0x04)
    float SubFrame;                                                                            // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneNestedSequenceTransform
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneNestedSequenceTransform {
public:
    MovieSceneTimeTransform LinearTransform;                                                   // 0x0000 (0x0C)
    MovieSceneTimeWarping Warping;                                                             // 0x000C (0x08)
};

// ============================================================
// Inheritance: MovieSceneTimeWarping
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneTimeWarping {
public:
    FrameNumber Start;                                                                         // 0x0000 (0x04)
    FrameNumber End;                                                                           // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneSequenceInstanceDataPtr
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSequenceInstanceDataPtr {
public:
};

// ============================================================
// Inheritance: MovieSceneEntityComponentField
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEntityComponentField {
public:
    MovieSceneEvaluationFieldEntityTree PersistentEntityTree;                                  // 0x0000 (0x60)
    MovieSceneEvaluationFieldEntityTree OneShotEntityTree;                                     // 0x0060 (0x60)
    TArray<MovieSceneEvaluationFieldEntity> Entities;                                          // 0x00C0 (0x10)
    TArray<MovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                            // 0x00D0 (0x10)
    TArray<MovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                      // 0x00E0 (0x10)
};

// ============================================================
// Inheritance: MovieSceneEvaluationFieldEntityTree
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationFieldEntityTree {
public:
};

// ============================================================
// Inheritance: MovieSceneEvaluationFieldEntity
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationFieldEntity {
public:
    MovieSceneEvaluationFieldEntityKey Key;                                                    // 0x0000 (0x0C)
    int32 SharedMetaDataIndex;                                                                 // 0x000C (0x04)
};

// ============================================================
// Inheritance: MovieSceneEvaluationFieldEntityKey
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationFieldEntityKey {
public:
    Object* EntityOwner;                                                                       // 0x0000 (0x08)
    uint32 EntityID;                                                                           // 0x0008 (0x04)
};

// ============================================================
// Inheritance: MovieSceneEvaluationFieldEntityMetaData
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationFieldEntityMetaData {
public:
    FrameNumber ForcedTime;                                                                    // 0x0000 (0x04)
    enum Flags;                                                                                // 0x0008 (0x01)
    bool bEvaluateInSequencePreRoll;                                                           // 0x0009 (0x01) BitMask: 0x01
    bool bEvaluateInSequencePostRoll;                                                          // 0x0009 (0x01) BitMask: 0x02
};

// ============================================================
// Inheritance: MovieSceneEvaluationFieldSharedEntityMetaData
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationFieldSharedEntityMetaData {
public:
    Guid ObjectBindingID;                                                                      // 0x0000 (0x10)
};

// ============================================================
// Inheritance: MovieSceneEvaluationField
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationField {
public:
    TArray<MovieSceneFrameRange> Ranges;                                                       // 0x0000 (0x10)
    TArray<MovieSceneEvaluationGroup> Groups;                                                  // 0x0010 (0x10)
    TArray<MovieSceneEvaluationMetaData> MetaData;                                             // 0x0020 (0x10)
};

// ============================================================
// Inheritance: MovieSceneEvaluationGroup
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationGroup {
public:
    TArray<MovieSceneEvaluationGroupLUTIndex> LUTIndices;                                      // 0x0000 (0x10)
    TArray<MovieSceneFieldEntry_EvaluationTrack> TrackLUT;                                     // 0x0010 (0x10)
    TArray<MovieSceneFieldEntry_ChildTemplate> SectionLUT;                                     // 0x0020 (0x10)
};

// ============================================================
// Inheritance: MovieSceneEvaluationGroupLUTIndex
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationGroupLUTIndex {
public:
    int32 NumInitPtrs;                                                                         // 0x0000 (0x04)
    int32 NumEvalPtrs;                                                                         // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneFieldEntry_EvaluationTrack
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneFieldEntry_EvaluationTrack {
public:
    MovieSceneEvaluationFieldTrackPtr TrackPtr;                                                // 0x0000 (0x08)
    uint16 NumChildren;                                                                        // 0x0008 (0x02)
};

// ============================================================
// Inheritance: MovieSceneEvaluationFieldTrackPtr
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationFieldTrackPtr {
public:
    MovieSceneSequenceID SequenceID;                                                           // 0x0000 (0x04)
    MovieSceneTrackIdentifier TrackIdentifier;                                                 // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneFieldEntry_ChildTemplate
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneFieldEntry_ChildTemplate {
public:
    uint16 ChildIndex;                                                                         // 0x0000 (0x02)
    enum Flags;                                                                                // 0x0002 (0x01)
    FrameNumber ForcedTime;                                                                    // 0x0004 (0x04)
};

// ============================================================
// Inheritance: MovieSceneEvaluationMetaData
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationMetaData {
public:
    TArray<MovieSceneSequenceID> ActiveSequences;                                              // 0x0000 (0x10)
    TArray<MovieSceneOrderedEvaluationKey> ActiveEntities;                                     // 0x0010 (0x10)
};

// ============================================================
// Inheritance: MovieSceneOrderedEvaluationKey
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneOrderedEvaluationKey {
public:
    MovieSceneEvaluationKey Key;                                                               // 0x0000 (0x0C)
    uint16 SetupIndex;                                                                         // 0x000C (0x02)
    uint16 TearDownIndex;                                                                      // 0x000E (0x02)
};

// ============================================================
// Inheritance: MovieSceneEvaluationKey
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEvaluationKey {
public:
    MovieSceneSequenceID SequenceID;                                                           // 0x0000 (0x04)
    MovieSceneTrackIdentifier TrackIdentifier;                                                 // 0x0004 (0x04)
    uint32 SectionIndex;                                                                       // 0x0008 (0x04)
};

// ============================================================
// Inheritance: MovieSceneSequenceCompilerMaskStruct
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneSequenceCompilerMaskStruct {
public:
    bool bHierarchy;                                                                           // 0x0000 (0x01) BitMask: 0x01
    bool bEvaluationTemplate;                                                                  // 0x0000 (0x01) BitMask: 0x02
    bool bEvaluationTemplateField;                                                             // 0x0000 (0x01) BitMask: 0x04
    bool bEntityComponentField;                                                                // 0x0000 (0x01) BitMask: 0x08
};

// ============================================================
// Inheritance: MovieSceneRootEvaluationTemplateInstance
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneRootEvaluationTemplateInstance {
public:
    MovieSceneSequence* WeakRootSequence;                                                      // 0x0000 (0x08)
    MovieSceneCompiledDataManager* CompiledDataManager;                                        // 0x0008 (0x08)
    MovieSceneEntitySystemLinker* EntitySystemLinker;                                          // 0x0018 (0x08)
    TMap<MovieSceneSequenceID, Object*> DirectorInstances;                                     // 0x0090 (0x50)
};

// ============================================================
// Inheritance: MovieSceneCompiledDataManager : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneCompiledDataManager : public Object {
public:
    TMap<int32, MovieSceneSequenceHierarchy> Hierarchies;                                      // 0x00D8 (0x50)
    TMap<int32, MovieSceneEvaluationTemplate> TrackTemplates;                                  // 0x0128 (0x50)
    TMap<int32, MovieSceneEvaluationField> TrackTemplateFields;                                // 0x0178 (0x50)
    TMap<int32, MovieSceneEntityComponentField> EntityComponentFields;                         // 0x01C8 (0x50)
};

// ============================================================
// Inheritance: MovieSceneEntitySystemLinker : Object
// Package: /Script/MovieScene
// ============================================================
class MovieSceneEntitySystemLinker : public Object {
public:
    MovieSceneEntitySystemGraph SystemGraph;                                                   // 0x0238 (0x138)
};

// ============================================================
// Inheritance: MovieSceneEntitySystemGraph
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEntitySystemGraph {
public:
    MovieSceneEntitySystemGraphNodes Nodes;                                                    // 0x0080 (0x38)
};

// ============================================================
// Inheritance: MovieSceneEntitySystemGraphNodes
// Package: /Script/MovieScene
// ============================================================
struct MovieSceneEntitySystemGraphNodes {
public:
};

// ============================================================
// Inheritance: UMGSequenceTickManager : Object
// Package: /Script/UMG
// ============================================================
class UMGSequenceTickManager : public Object {
public:
    TSet<UserWidget*> WeakUserWidgets;                                                         // 0x0028 (0x50)
    MovieSceneEntitySystemLinker* Linker;                                                      // 0x0078 (0x08)
};

// ============================================================
// Inheritance: NamedSlotBinding
// Package: /Script/UMG
// ============================================================
struct NamedSlotBinding {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    Widget* Content;                                                                           // 0x0008 (0x08)
};

// ============================================================
// Inheritance: WidgetTree : Object
// Package: /Script/UMG
// ============================================================
class WidgetTree : public Object {
public:
    Widget* RootWidget;                                                                        // 0x0028 (0x08)
    TArray<LazyLoadBinding> LazyLoadBindings;                                                  // 0x0030 (0x10)
};

// ============================================================
// Inheritance: LazyLoadBinding
// Package: /Script/UMG
// ============================================================
struct LazyLoadBinding {
public:
    FString Name;                                                                              // 0x0000 (0x10)
    PanelSlot* PanelSlot;                                                                      // 0x0010 (0x08)
    enum Visibility;                                                                           // 0x0018 (0x01)
};

// ============================================================
// Inheritance: PanelSlot : Visual : Object
// Package: /Script/UMG
// ============================================================
class PanelSlot : public Visual {
public:
    Object* ContentClass;                                                                      // 0x0028 (0x28)
    PanelWidget* Parent;                                                                       // 0x0050 (0x08)
    Widget* Content;                                                                           // 0x0058 (0x08)
};

// ============================================================
// Inheritance: PanelWidget : Widget : Visual : Object
// Package: /Script/UMG
// ============================================================
class PanelWidget : public Widget {
public:
    TArray<PanelSlot*> Slots;                                                                  // 0x0130 (0x10)

    // --- Functions ---
    bool RemoveChildAt(int32 Index);                                                           // [Final|Public] RVA: 0x75BA808
    bool RemoveChild(Widget* Content);                                                         // [Final|Public] RVA: 0x202FEC0
    void OnLazyChildCreated(PanelSlot* PanelSlot, Widget* Widget);                             // [Final|Public] RVA: 0x75BA4F8
    bool HasChild(Widget* Content);                                                            // [Final|Public] RVA: 0x75BA228
    bool HasAnyChildren();                                                                     // [Final|Public] RVA: 0x75BA20C
    int32 GetChildrenCount();                                                                  // [Final|Public] RVA: 0x2793B70
    int32 GetChildIndex(const Widget* Content);                                                // [Final|Public] RVA: 0x203011C
    Widget* GetChildAt(int32 Index);                                                           // [Final|Public] RVA: 0x1B30B00
    TArray<Widget*> GetAllChildren();                                                          // [Final|Public] RVA: 0x1AB9D24
    void ClearChildren();                                                                      // [Public] RVA: 0x20A82CC
    PanelSlot* AddChild(Widget* Content);                                                      // [Final|Public] RVA: 0x16760F8
};

// ============================================================
// Inheritance: AnimationEventBinding
// Package: /Script/UMG
// ============================================================
struct AnimationEventBinding {
public:
    WidgetAnimation* Animation;                                                                // 0x0000 (0x08)
    FDelegate Delegate;                                                                        // 0x0008 (0x10)
    enum AnimationEvent;                                                                       // 0x0018 (0x01)
    FName UserTag;                                                                             // 0x001C (0x08)
};

// ============================================================
// Inheritance: Geometry
// Package: /Script/SlateCore
// ============================================================
struct Geometry {
public:
};

// ============================================================
// Inheritance: Anchors
// Package: /Script/Slate
// ============================================================
struct Anchors {
public:
    Vector2D Minimum;                                                                          // 0x0000 (0x08)
    Vector2D Maximum;                                                                          // 0x0008 (0x08)
};

// ============================================================
// Inheritance: SoundBase : Object
// Package: /Script/Engine
// ============================================================
class SoundBase : public Object {
public:
    SoundClass* SoundClassObject;                                                              // 0x0030 (0x08)
    bool bDebug;                                                                               // 0x0038 (0x01) BitMask: 0x01
    bool bOverrideConcurrency;                                                                 // 0x0038 (0x01) BitMask: 0x02
    bool bOutputToBusOnly;                                                                     // 0x0038 (0x01) BitMask: 0x04
    bool bHasDelayNode;                                                                        // 0x0038 (0x01) BitMask: 0x08
    bool bHasConcatenatorNode;                                                                 // 0x0038 (0x01) BitMask: 0x10
    bool bBypassVolumeScaleForPriority;                                                        // 0x0038 (0x01) BitMask: 0x20
    enum VirtualizationMode;                                                                   // 0x0039 (0x01)
    TSet<SoundConcurrency*> ConcurrencySet;                                                    // 0x0090 (0x50)
    SoundConcurrencySettings ConcurrencyOverrides;                                             // 0x00E0 (0x28)
    float Duration;                                                                            // 0x0108 (0x04)
    float MaxDistance;                                                                         // 0x010C (0x04)
    float TotalSamples;                                                                        // 0x0110 (0x04)
    float Priority;                                                                            // 0x0114 (0x04)
    SoundAttenuation* AttenuationSettings;                                                     // 0x0118 (0x08)
    SoundModulationDefaultRoutingSettings ModulationSettings;                                  // 0x0120 (0x48)
    SoundSubmixBase* SoundSubmixObject;                                                        // 0x0168 (0x08)
    TArray<SoundSubmixSendInfo> SoundSubmixSends;                                              // 0x0170 (0x10)
    SoundEffectSourcePresetChain* SourceEffectChain;                                           // 0x0180 (0x08)
    TArray<SoundSourceBusSendInfo> BusSends;                                                   // 0x0188 (0x10)
    TArray<SoundSourceBusSendInfo> PreEffectBusSends;                                          // 0x0198 (0x10)
    TArray<AssetUserData*> AssetUserData;                                                      // 0x01A8 (0x10)
};

// ============================================================
// Inheritance: SoundClass : Object
// Package: /Script/Engine
// ============================================================
class SoundClass : public Object {
public:
    SoundClassProperties Properties;                                                           // 0x0028 (0x80)
    TArray<SoundClass*> ChildClasses;                                                          // 0x00A8 (0x10)
    TArray<PassiveSoundMixModifier> PassiveSoundMixModifiers;                                  // 0x00B8 (0x10)
    SoundClass* ParentClass;                                                                   // 0x00C8 (0x08)
};

// ============================================================
// Inheritance: SoundClassProperties
// Package: /Script/Engine
// ============================================================
struct SoundClassProperties {
public:
    float Volume;                                                                              // 0x0000 (0x04)
    float Pitch;                                                                               // 0x0004 (0x04)
    float LowPassFilterFrequency;                                                              // 0x0008 (0x04)
    float AttenuationDistanceScale;                                                            // 0x000C (0x04)
    float StereoBleed;                                                                         // 0x0010 (0x04)
    float LFEBleed;                                                                            // 0x0014 (0x04)
    float VoiceCenterChannelVolume;                                                            // 0x0018 (0x04)
    float RadioFilterVolume;                                                                   // 0x001C (0x04)
    float RadioFilterVolumeThreshold;                                                          // 0x0020 (0x04)
    bool bApplyEffects;                                                                        // 0x0024 (0x01) BitMask: 0x01
    bool bAlwaysPlay;                                                                          // 0x0024 (0x01) BitMask: 0x02
    bool bIsUISound;                                                                           // 0x0024 (0x01) BitMask: 0x04
    bool bIsMusic;                                                                             // 0x0024 (0x01) BitMask: 0x08
    bool bCenterChannelOnly;                                                                   // 0x0024 (0x01) BitMask: 0x10
    bool bApplyAmbientVolumes;                                                                 // 0x0024 (0x01) BitMask: 0x20
    bool bReverb;                                                                              // 0x0024 (0x01) BitMask: 0x40
    float Default2DReverbSendAmount;                                                           // 0x0028 (0x04)
    SoundModulationDefaultSettings ModulationSettings;                                         // 0x0030 (0x40)
    uint8 OutputTarget;                                                                        // 0x0070 (0x01)
    enum LoadingBehavior;                                                                      // 0x0071 (0x01)
    SoundSubmix* DefaultSubmix;                                                                // 0x0078 (0x08)
};

// ============================================================
// Inheritance: SoundModulationDefaultSettings
// Package: /Script/Engine
// ============================================================
struct SoundModulationDefaultSettings {
public:
    SoundModulationDestinationSettings VolumeModulationDestination;                            // 0x0000 (0x10)
    SoundModulationDestinationSettings PitchModulationDestination;                             // 0x0010 (0x10)
    SoundModulationDestinationSettings HighpassModulationDestination;                          // 0x0020 (0x10)
    SoundModulationDestinationSettings LowpassModulationDestination;                           // 0x0030 (0x10)
};

// ============================================================
// Inheritance: SoundModulationDestinationSettings
// Package: /Script/Engine
// ============================================================
struct SoundModulationDestinationSettings {
public:
    float Value;                                                                               // 0x0000 (0x04)
    SoundModulatorBase* Modulator;                                                             // 0x0008 (0x08)
};

// ============================================================
// Inheritance: SoundModulatorBase : Object
// Package: /Script/AudioExtensions
// ============================================================
class SoundModulatorBase : public Object {
public:
};

// ============================================================
// Inheritance: SoundSubmix : SoundSubmixWithParentBase : SoundSubmixBase : Object
// Package: /Script/Engine
// ============================================================
class SoundSubmix : public SoundSubmixWithParentBase {
public:
    bool bMuteWhenBackgrounded;                                                                // 0x0040 (0x01) BitMask: 0x01
    TArray<SoundEffectSubmixPreset*> SubmixEffectChain;                                        // 0x0048 (0x10)
    SoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;                                  // 0x0058 (0x08)
    int32 EnvelopeFollowerAttackTime;                                                          // 0x0060 (0x04)
    int32 EnvelopeFollowerReleaseTime;                                                         // 0x0064 (0x04)
    enum GainMode;                                                                             // 0x0068 (0x01)
    float OutputVolume;                                                                        // 0x006C (0x04)
    float WetLevel;                                                                            // 0x0070 (0x04)
    float DryLevel;                                                                            // 0x0074 (0x04)
    FMulticastDelegate OnSubmixRecordedFileDone;                                               // 0x0078 (0x10)

    // --- Functions ---
    void StopSpectralAnalysis(const Object* WorldContextObject);                               // [Final|Public] RVA: 0x7C89B50
    void StopRecordingOutput(const Object* WorldContextObject, enum ExportType, FString Name, FString Path, SoundWave* ExistingSoundWaveToOverwrite);  // [Final|Public] RVA: 0x7C898A8
    void StopEnvelopeFollowing(const Object* WorldContextObject);                              // [Final|Public] RVA: 0x7C897D8
    void StartSpectralAnalysis(const Object* WorldContextObject, enum FFTSize, enum InterpolationMethod, enum WindowType, float HopSize, enum SpectrumType);  // [Final|Public] RVA: 0x7C89598
    void StartRecordingOutput(const Object* WorldContextObject, float ExpectedDuration);       // [Final|Public] RVA: 0x7C894B0
    void StartEnvelopeFollowing(const Object* WorldContextObject);                             // [Final|Public] RVA: 0x7C893E0
    void SetSubmixOutputVolume(const Object* WorldContextObject, float InOutputVolume);        // [Final|Public] RVA: 0x7C892F8
    void RemoveSpectralAnalysisDelegate(const Object* WorldContextObject, const out ref FDelegate OnSubmixSpectralAnalysisBP);  // [Final|Public] RVA: 0x7C891A0
    void AddSpectralAnalysisDelegate(const Object* WorldContextObject, const out ref TArray<SoundSubmixSpectralAnalysisBandSettings> InBandSettings, const out ref FDelegate OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);  // [Final|Public] RVA: 0x7C88E0C
    void AddEnvelopeFollowerDelegate(const Object* WorldContextObject, const out ref FDelegate OnSubmixEnvelopeBP);  // [Final|Public] RVA: 0x7C88CB4
};

// ============================================================
// Inheritance: SoundSubmixWithParentBase : SoundSubmixBase : Object
// Package: /Script/Engine
// ============================================================
class SoundSubmixWithParentBase : public SoundSubmixBase {
public:
    SoundSubmixBase* ParentSubmix;                                                             // 0x0038 (0x08)
};

// ============================================================
// Inheritance: SoundSubmixBase : Object
// Package: /Script/Engine
// ============================================================
class SoundSubmixBase : public Object {
public:
    TArray<SoundSubmixBase*> ChildSubmixes;                                                    // 0x0028 (0x10)
};

// ============================================================
// Inheritance: SoundEffectSubmixPreset : SoundEffectPreset : Object
// Package: /Script/Engine
// ============================================================
class SoundEffectSubmixPreset : public SoundEffectPreset {
public:
};

// ============================================================
// Inheritance: SoundEffectPreset : Object
// Package: /Script/Engine
// ============================================================
class SoundEffectPreset : public Object {
public:
};

// ============================================================
// Inheritance: SoundfieldEncodingSettingsBase : Object
// Package: /Script/AudioExtensions
// ============================================================
class SoundfieldEncodingSettingsBase : public Object {
public:
};

// ============================================================
// Inheritance: SoundWave : SoundBase : Object
// Package: /Script/Engine
// ============================================================
class SoundWave : public SoundBase {
public:
    int32 CompressionQuality;                                                                  // 0x01B8 (0x04)
    int32 StreamingPriority;                                                                   // 0x01BC (0x04)
    enum SampleRateQuality;                                                                    // 0x01C0 (0x01)
    uint8 SoundGroup;                                                                          // 0x01C2 (0x01)
    bool bLooping;                                                                             // 0x01C3 (0x01) BitMask: 0x01
    bool bStreaming;                                                                           // 0x01C3 (0x01) BitMask: 0x02
    bool bSeekableStreaming;                                                                   // 0x01C3 (0x01) BitMask: 0x04
    enum LoadingBehavior;                                                                      // 0x01C4 (0x01)
    bool bMature;                                                                              // 0x01C5 (0x01) BitMask: 0x40
    bool bManualWordWrap;                                                                      // 0x01C5 (0x01) BitMask: 0x80
    bool bSingleLine;                                                                          // 0x01C6 (0x01) BitMask: 0x01
    bool bIsAmbisonics;                                                                        // 0x01C6 (0x01) BitMask: 0x02
    TArray<float> FrequenciesToAnalyze;                                                        // 0x01C8 (0x10)
    TArray<SoundWaveSpectralTimeData> CookedSpectralTimeData;                                  // 0x01D8 (0x10)
    TArray<SoundWaveEnvelopeTimeData> CookedEnvelopeTimeData;                                  // 0x01E8 (0x10)
    int32 InitialChunkSize;                                                                    // 0x01F8 (0x04)
    FString SpokenText;                                                                        // 0x0240 (0x10)
    float SubtitlePriority;                                                                    // 0x0250 (0x04)
    float Volume;                                                                              // 0x0254 (0x04)
    float Pitch;                                                                               // 0x0258 (0x04)
    int32 NumChannels;                                                                         // 0x025C (0x04)
    int32 SampleRate;                                                                          // 0x0260 (0x04)
    TArray<SubtitleCue> Subtitles;                                                             // 0x0270 (0x10)
    CurveTable* Curves;                                                                        // 0x0280 (0x08)
    CurveTable* InternalCurves;                                                                // 0x0288 (0x08)
};

// ============================================================
// Inheritance: SoundWaveSpectralTimeData
// Package: /Script/Engine
// ============================================================
struct SoundWaveSpectralTimeData {
public:
    TArray<SoundWaveSpectralDataEntry> Data;                                                   // 0x0000 (0x10)
    float TimeSec;                                                                             // 0x0010 (0x04)
};

// ============================================================
// Inheritance: SoundWaveSpectralDataEntry
// Package: /Script/Engine
// ============================================================
struct SoundWaveSpectralDataEntry {
public:
    float Magnitude;                                                                           // 0x0000 (0x04)
    float NormalizedMagnitude;                                                                 // 0x0004 (0x04)
};

// ============================================================
// Inheritance: SoundWaveEnvelopeTimeData
// Package: /Script/Engine
// ============================================================
struct SoundWaveEnvelopeTimeData {
public:
    float Amplitude;                                                                           // 0x0000 (0x04)
    float TimeSec;                                                                             // 0x0004 (0x04)
};

// ============================================================
// Inheritance: SubtitleCue
// Package: /Script/Engine
// ============================================================
struct SubtitleCue {
public:
    FText Text;                                                                                // 0x0000 (0x18)
    float Time;                                                                                // 0x0018 (0x04)
};

// ============================================================
// Inheritance: CurveTable : Object
// Package: /Script/Engine
// ============================================================
class CurveTable : public Object {
public:
};

// ============================================================
// Inheritance: SoundSubmixSpectralAnalysisBandSettings
// Package: /Script/Engine
// ============================================================
struct SoundSubmixSpectralAnalysisBandSettings {
public:
    float BandFrequency;                                                                       // 0x0000 (0x04)
    int32 AttackTimeMsec;                                                                      // 0x0004 (0x04)
    int32 ReleaseTimeMsec;                                                                     // 0x0008 (0x04)
    float QFactor;                                                                             // 0x000C (0x04)
};

// ============================================================
// Inheritance: PassiveSoundMixModifier
// Package: /Script/Engine
// ============================================================
struct PassiveSoundMixModifier {
public:
    SoundMix* SoundMix;                                                                        // 0x0000 (0x08)
    float MinVolumeThreshold;                                                                  // 0x0008 (0x04)
    float MaxVolumeThreshold;                                                                  // 0x000C (0x04)
};

// ============================================================
// Inheritance: SoundMix : Object
// Package: /Script/Engine
// ============================================================
class SoundMix : public Object {
public:
    bool bApplyEQ;                                                                             // 0x0028 (0x01) BitMask: 0x01
    float EQPriority;                                                                          // 0x002C (0x04)
    AudioEQEffect EQSettings;                                                                  // 0x0030 (0x40)
    TArray<SoundClassAdjuster> SoundClassEffects;                                              // 0x0070 (0x10)
    float InitialDelay;                                                                        // 0x0080 (0x04)
    float FadeInTime;                                                                          // 0x0084 (0x04)
    float Duration;                                                                            // 0x0088 (0x04)
    float FadeOutTime;                                                                         // 0x008C (0x04)
};

// ============================================================
// Inheritance: AudioEQEffect : AudioEffectParameters
// Package: /Script/Engine
// ============================================================
struct AudioEQEffect : public AudioEffectParameters {
public:
    float FrequencyCenter0;                                                                    // 0x0010 (0x04)
    float Gain0;                                                                               // 0x0014 (0x04)
    float Bandwidth0;                                                                          // 0x0018 (0x04)
    float FrequencyCenter1;                                                                    // 0x001C (0x04)
    float Gain1;                                                                               // 0x0020 (0x04)
    float Bandwidth1;                                                                          // 0x0024 (0x04)
    float FrequencyCenter2;                                                                    // 0x0028 (0x04)
    float Gain2;                                                                               // 0x002C (0x04)
    float Bandwidth2;                                                                          // 0x0030 (0x04)
    float FrequencyCenter3;                                                                    // 0x0034 (0x04)
    float Gain3;                                                                               // 0x0038 (0x04)
    float Bandwidth3;                                                                          // 0x003C (0x04)
};

// ============================================================
// Inheritance: AudioEffectParameters
// Package: /Script/Engine
// ============================================================
struct AudioEffectParameters {
public:
};

// ============================================================
// Inheritance: SoundClassAdjuster
// Package: /Script/Engine
// ============================================================
struct SoundClassAdjuster {
public:
    SoundClass* SoundClassObject;                                                              // 0x0000 (0x08)
    float VolumeAdjuster;                                                                      // 0x0008 (0x04)
    float PitchAdjuster;                                                                       // 0x000C (0x04)
    float LowPassFilterFrequency;                                                              // 0x0010 (0x04)
    bool bApplyToChildren;                                                                     // 0x0014 (0x01) BitMask: 0x01
    float VoiceCenterChannelVolumeAdjuster;                                                    // 0x0018 (0x04)
};

// ============================================================
// Inheritance: SoundConcurrency : Object
// Package: /Script/Engine
// ============================================================
class SoundConcurrency : public Object {
public:
    SoundConcurrencySettings Concurrency;                                                      // 0x0028 (0x28)
};

// ============================================================
// Inheritance: SoundConcurrencySettings
// Package: /Script/Engine
// ============================================================
struct SoundConcurrencySettings {
public:
    int32 MaxCount;                                                                            // 0x0000 (0x04)
    bool bLimitToOwner;                                                                        // 0x0004 (0x01) BitMask: 0x01
    uint8 ResolutionRule;                                                                      // 0x0008 (0x01)
    float RetriggerTime;                                                                       // 0x000C (0x04)
    float VolumeScale;                                                                         // 0x0010 (0x04)
    enum VolumeScaleMode;                                                                      // 0x0014 (0x04)
    float VolumeScaleAttackTime;                                                               // 0x0018 (0x04)
    bool bVolumeScaleCanRelease;                                                               // 0x001C (0x01) BitMask: 0x01
    float VolumeScaleReleaseTime;                                                              // 0x0020 (0x04)
    float VoiceStealReleaseTime;                                                               // 0x0024 (0x04)
};

// ============================================================
// Inheritance: SoundAttenuation : Object
// Package: /Script/Engine
// ============================================================
class SoundAttenuation : public Object {
public:
    SoundAttenuationSettings Attenuation;                                                      // 0x0028 (0x3A0)
};

// ============================================================
// Inheritance: SoundAttenuationSettings : BaseAttenuationSettings
// Package: /Script/Engine
// ============================================================
struct SoundAttenuationSettings : public BaseAttenuationSettings {
public:
    bool bAttenuate;                                                                           // 0x00B0 (0x01) BitMask: 0x01
    bool bSpatialize;                                                                          // 0x00B0 (0x01) BitMask: 0x02
    bool bAttenuateWithLPF;                                                                    // 0x00B0 (0x01) BitMask: 0x04
    bool bEnableListenerFocus;                                                                 // 0x00B0 (0x01) BitMask: 0x08
    bool bEnableFocusInterpolation;                                                            // 0x00B0 (0x01) BitMask: 0x10
    bool bEnableOcclusion;                                                                     // 0x00B0 (0x01) BitMask: 0x20
    bool bUseComplexCollisionForOcclusion;                                                     // 0x00B0 (0x01) BitMask: 0x40
    bool bEnableReverbSend;                                                                    // 0x00B0 (0x01) BitMask: 0x80
    bool bEnablePriorityAttenuation;                                                           // 0x00B1 (0x01) BitMask: 0x01
    bool bApplyNormalizationToStereoSounds;                                                    // 0x00B1 (0x01) BitMask: 0x02
    bool bEnableLogFrequencyScaling;                                                           // 0x00B1 (0x01) BitMask: 0x04
    bool bEnableSubmixSends;                                                                   // 0x00B1 (0x01) BitMask: 0x08
    uint8 SpatializationAlgorithm;                                                             // 0x00B2 (0x01)
    float BinauralRadius;                                                                      // 0x00B4 (0x04)
    enum AbsorptionMethod;                                                                     // 0x00B8 (0x01)
    uint8 OcclusionTraceChannel;                                                               // 0x00B9 (0x01)
    enum ReverbSendMethod;                                                                     // 0x00BA (0x01)
    enum PriorityAttenuationMethod;                                                            // 0x00BB (0x01)
    float OmniRadius;                                                                          // 0x00BC (0x04)
    float StereoSpread;                                                                        // 0x00C0 (0x04)
    float LPFRadiusMin;                                                                        // 0x00C4 (0x04)
    float LPFRadiusMax;                                                                        // 0x00C8 (0x04)
    RuntimeFloatCurve CustomLowpassAirAbsorptionCurve;                                         // 0x00D0 (0x88)
    RuntimeFloatCurve CustomHighpassAirAbsorptionCurve;                                        // 0x0158 (0x88)
    float LPFFrequencyAtMin;                                                                   // 0x01E0 (0x04)
    float LPFFrequencyAtMax;                                                                   // 0x01E4 (0x04)
    float HPFFrequencyAtMin;                                                                   // 0x01E8 (0x04)
    float HPFFrequencyAtMax;                                                                   // 0x01EC (0x04)
    float FocusAzimuth;                                                                        // 0x01F0 (0x04)
    float NonFocusAzimuth;                                                                     // 0x01F4 (0x04)
    float FocusDistanceScale;                                                                  // 0x01F8 (0x04)
    float NonFocusDistanceScale;                                                               // 0x01FC (0x04)
    float FocusPriorityScale;                                                                  // 0x0200 (0x04)
    float NonFocusPriorityScale;                                                               // 0x0204 (0x04)
    float FocusVolumeAttenuation;                                                              // 0x0208 (0x04)
    float NonFocusVolumeAttenuation;                                                           // 0x020C (0x04)
    float FocusAttackInterpSpeed;                                                              // 0x0210 (0x04)
    float FocusReleaseInterpSpeed;                                                             // 0x0214 (0x04)
    float OcclusionLowPassFilterFrequency;                                                     // 0x0218 (0x04)
    float OcclusionVolumeAttenuation;                                                          // 0x021C (0x04)
    float OcclusionInterpolationTime;                                                          // 0x0220 (0x04)
    float ReverbWetLevelMin;                                                                   // 0x0224 (0x04)
    float ReverbWetLevelMax;                                                                   // 0x0228 (0x04)
    float ReverbDistanceMin;                                                                   // 0x022C (0x04)
    float ReverbDistanceMax;                                                                   // 0x0230 (0x04)
    float ManualReverbSendLevel;                                                               // 0x0234 (0x04)
    RuntimeFloatCurve CustomReverbSendCurve;                                                   // 0x0238 (0x88)
    TArray<AttenuationSubmixSendSettings> SubmixSendSettings;                                  // 0x02C0 (0x10)
    float PriorityAttenuationMin;                                                              // 0x02D0 (0x04)
    float PriorityAttenuationMax;                                                              // 0x02D4 (0x04)
    float PriorityAttenuationDistanceMin;                                                      // 0x02D8 (0x04)
    float PriorityAttenuationDistanceMax;                                                      // 0x02DC (0x04)
    float ManualPriorityAttenuation;                                                           // 0x02E0 (0x04)
    RuntimeFloatCurve CustomPriorityAttenuationCurve;                                          // 0x02E8 (0x88)
    SoundAttenuationPluginSettings PluginSettings;                                             // 0x0370 (0x30)
};

// ============================================================
// Inheritance: BaseAttenuationSettings
// Package: /Script/Engine
// ============================================================
struct BaseAttenuationSettings {
public:
    enum DistanceAlgorithm;                                                                    // 0x0008 (0x01)
    uint8 AttenuationShape;                                                                    // 0x0009 (0x01)
    float dBAttenuationAtMax;                                                                  // 0x000C (0x04)
    enum FalloffMode;                                                                          // 0x0010 (0x01)
    Vector AttenuationShapeExtents;                                                            // 0x0014 (0x0C)
    float ConeOffset;                                                                          // 0x0020 (0x04)
    float FalloffDistance;                                                                     // 0x0024 (0x04)
    RuntimeFloatCurve CustomAttenuationCurve;                                                  // 0x0028 (0x88)
};

// ============================================================
// Inheritance: AttenuationSubmixSendSettings
// Package: /Script/Engine
// ============================================================
struct AttenuationSubmixSendSettings {
public:
    SoundSubmixBase* Submix;                                                                   // 0x0000 (0x08)
    enum SubmixSendMethod;                                                                     // 0x0008 (0x01)
    float SubmixSendLevelMin;                                                                  // 0x000C (0x04)
    float SubmixSendLevelMax;                                                                  // 0x0010 (0x04)
    float SubmixSendDistanceMin;                                                               // 0x0014 (0x04)
    float SubmixSendDistanceMax;                                                               // 0x0018 (0x04)
    float ManualSubmixSendLevel;                                                               // 0x001C (0x04)
    RuntimeFloatCurve CustomSubmixSendCurve;                                                   // 0x0020 (0x88)
};

// ============================================================
// Inheritance: SoundAttenuationPluginSettings
// Package: /Script/Engine
// ============================================================
struct SoundAttenuationPluginSettings {
public:
    TArray<SpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;         // 0x0000 (0x10)
    TArray<OcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;                   // 0x0010 (0x10)
    TArray<ReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;                         // 0x0020 (0x10)
};

// ============================================================
// Inheritance: SpatializationPluginSourceSettingsBase : Object
// Package: /Script/AudioExtensions
// ============================================================
class SpatializationPluginSourceSettingsBase : public Object {
public:
};

// ============================================================
// Inheritance: OcclusionPluginSourceSettingsBase : Object
// Package: /Script/AudioExtensions
// ============================================================
class OcclusionPluginSourceSettingsBase : public Object {
public:
};

// ============================================================
// Inheritance: ReverbPluginSourceSettingsBase : Object
// Package: /Script/AudioExtensions
// ============================================================
class ReverbPluginSourceSettingsBase : public Object {
public:
};

// ============================================================
// Inheritance: SoundModulationDefaultRoutingSettings : SoundModulationDefaultSettings
// Package: /Script/Engine
// ============================================================
struct SoundModulationDefaultRoutingSettings : public SoundModulationDefaultSettings {
public:
    enum VolumeRouting;                                                                        // 0x0040 (0x01)
    enum PitchRouting;                                                                         // 0x0041 (0x01)
    enum HighpassRouting;                                                                      // 0x0042 (0x01)
    enum LowpassRouting;                                                                       // 0x0043 (0x01)
};

// ============================================================
// Inheritance: SoundSubmixSendInfo
// Package: /Script/Engine
// ============================================================
struct SoundSubmixSendInfo {
public:
    enum SendLevelControlMethod;                                                               // 0x0000 (0x01)
    enum SendStage;                                                                            // 0x0001 (0x01)
    SoundSubmixBase* SoundSubmix;                                                              // 0x0008 (0x08)
    float SendLevel;                                                                           // 0x0010 (0x04)
    float MinSendLevel;                                                                        // 0x0014 (0x04)
    float MaxSendLevel;                                                                        // 0x0018 (0x04)
    float MinSendDistance;                                                                     // 0x001C (0x04)
    float MaxSendDistance;                                                                     // 0x0020 (0x04)
    RuntimeFloatCurve CustomSendLevelCurve;                                                    // 0x0028 (0x88)
};

// ============================================================
// Inheritance: SoundEffectSourcePresetChain : Object
// Package: /Script/Engine
// ============================================================
class SoundEffectSourcePresetChain : public Object {
public:
    TArray<SourceEffectChainEntry> Chain;                                                      // 0x0028 (0x10)
    bool bPlayEffectChainTails;                                                                // 0x0038 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: SourceEffectChainEntry
// Package: /Script/Engine
// ============================================================
struct SourceEffectChainEntry {
public:
    SoundEffectSourcePreset* Preset;                                                           // 0x0000 (0x08)
    bool bBypass;                                                                              // 0x0008 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: SoundEffectSourcePreset : SoundEffectPreset : Object
// Package: /Script/Engine
// ============================================================
class SoundEffectSourcePreset : public SoundEffectPreset {
public:
};

// ============================================================
// Inheritance: SoundSourceBusSendInfo
// Package: /Script/Engine
// ============================================================
struct SoundSourceBusSendInfo {
public:
    enum SourceBusSendLevelControlMethod;                                                      // 0x0000 (0x01)
    SoundSourceBus* SoundSourceBus;                                                            // 0x0008 (0x08)
    AudioBus* AudioBus;                                                                        // 0x0010 (0x08)
    float SendLevel;                                                                           // 0x0018 (0x04)
    float MinSendLevel;                                                                        // 0x001C (0x04)
    float MaxSendLevel;                                                                        // 0x0020 (0x04)
    float MinSendDistance;                                                                     // 0x0024 (0x04)
    float MaxSendDistance;                                                                     // 0x0028 (0x04)
    RuntimeFloatCurve CustomSendLevelCurve;                                                    // 0x0030 (0x88)
};

// ============================================================
// Inheritance: SoundSourceBus : SoundWave : SoundBase : Object
// Package: /Script/Engine
// ============================================================
class SoundSourceBus : public SoundWave {
public:
    enum SourceBusChannels;                                                                    // 0x0370 (0x01)
    float SourceBusDuration;                                                                   // 0x0374 (0x04)
    AudioBus* AudioBus;                                                                        // 0x0378 (0x08)
    bool bAutoDeactivateWhenSilent;                                                            // 0x0380 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: AudioBus : Object
// Package: /Script/Engine
// ============================================================
class AudioBus : public Object {
public:
    enum AudioBusChannels;                                                                     // 0x0028 (0x01)
    bool bIsAutomatic;                                                                         // 0x0029 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: PointerEvent : InputEvent
// Package: /Script/SlateCore
// ============================================================
struct PointerEvent : public InputEvent {
public:
};

// ============================================================
// Inheritance: InputEvent
// Package: /Script/SlateCore
// ============================================================
struct InputEvent {
public:
};

// ============================================================
// Inheritance: EventReply
// Package: /Script/UMG
// ============================================================
struct EventReply {
public:
};

// ============================================================
// Inheritance: FocusEvent
// Package: /Script/SlateCore
// ============================================================
struct FocusEvent {
public:
};

// ============================================================
// Inheritance: KeyEvent : InputEvent
// Package: /Script/SlateCore
// ============================================================
struct KeyEvent : public InputEvent {
public:
};

// ============================================================
// Inheritance: PaintContext
// Package: /Script/UMG
// ============================================================
struct PaintContext {
public:
};

// ============================================================
// Inheritance: MotionEvent : InputEvent
// Package: /Script/SlateCore
// ============================================================
struct MotionEvent : public InputEvent {
public:
};

// ============================================================
// Inheritance: CharacterEvent : InputEvent
// Package: /Script/SlateCore
// ============================================================
struct CharacterEvent : public InputEvent {
public:
};

// ============================================================
// Inheritance: DragDropOperation : Object
// Package: /Script/UMG
// ============================================================
class DragDropOperation : public Object {
public:
    FString Tag;                                                                               // 0x0028 (0x10)
    Object* Payload;                                                                           // 0x0038 (0x08)
    Widget* DefaultDragVisual;                                                                 // 0x0040 (0x08)
    enum Pivot;                                                                                // 0x0048 (0x01)
    Vector2D Offset;                                                                           // 0x004C (0x08)
    bool EnableLerpAnim;                                                                       // 0x0054 (0x01) BitMask: 0xFF
    FMulticastDelegate OnDrop;                                                                 // 0x0058 (0x10)
    FMulticastDelegate OnDragCancelled;                                                        // 0x0068 (0x10)
    FMulticastDelegate OnDragged;                                                              // 0x0078 (0x10)

    // --- Functions ---
    void Drop(const out ref PointerEvent PointerEvent);                                        // [Public] RVA: 0x75B50BC
    void Dragged(const out ref PointerEvent PointerEvent);                                     // [Public] RVA: 0x75B4FE8
    void DragCancelled(const out ref PointerEvent PointerEvent);                               // [Public] RVA: 0x75B4F14
};

// ============================================================
// Inheritance: AnalogInputEvent : KeyEvent : InputEvent
// Package: /Script/SlateCore
// ============================================================
struct AnalogInputEvent : public KeyEvent {
public:
};

// ============================================================
// Inheritance: WidgetTransform
// Package: /Script/UMG
// ============================================================
struct WidgetTransform {
public:
    Vector2D Translation;                                                                      // 0x0000 (0x08)
    Vector2D Scale;                                                                            // 0x0008 (0x08)
    Vector2D Scale_Oversea;                                                                    // 0x0010 (0x08)
    Vector2D Shear;                                                                            // 0x0018 (0x08)
    float Angle;                                                                               // 0x0020 (0x04)
};

// ============================================================
// Inheritance: SlateAccessibleWidgetData : Object
// Package: /Script/UMG
// ============================================================
class SlateAccessibleWidgetData : public Object {
public:
    bool bCanChildrenBeAccessible;                                                             // 0x0028 (0x01) BitMask: 0xFF
    enum AccessibleBehavior;                                                                   // 0x0029 (0x01)
    enum AccessibleSummaryBehavior;                                                            // 0x002A (0x01)
    FText AccessibleText;                                                                      // 0x0030 (0x18)
    FDelegate AccessibleTextDelegate;                                                          // 0x0048 (0x10)
    FText AccessibleSummaryText;                                                               // 0x0058 (0x18)
    FDelegate AccessibleSummaryTextDelegate;                                                   // 0x0070 (0x10)
};

// ============================================================
// Inheritance: WidgetNavigation : Object
// Package: /Script/UMG
// ============================================================
class WidgetNavigation : public Object {
public:
    WidgetNavigationData Up;                                                                   // 0x0028 (0x24)
    WidgetNavigationData Down;                                                                 // 0x004C (0x24)
    WidgetNavigationData Left;                                                                 // 0x0070 (0x24)
    WidgetNavigationData Right;                                                                // 0x0094 (0x24)
    WidgetNavigationData Next;                                                                 // 0x00B8 (0x24)
    WidgetNavigationData Previous;                                                             // 0x00DC (0x24)
};

// ============================================================
// Inheritance: WidgetNavigationData
// Package: /Script/UMG
// ============================================================
struct WidgetNavigationData {
public:
    enum Rule;                                                                                 // 0x0000 (0x01)
    FName WidgetToFocus;                                                                       // 0x0004 (0x08)
    Widget* Widget;                                                                            // 0x000C (0x08)
    FDelegate CustomDelegate;                                                                  // 0x0014 (0x10)
};

// ============================================================
// Inheritance: PropertyBinding : Object
// Package: /Script/UMG
// ============================================================
class PropertyBinding : public Object {
public:
    Object* SourceObject;                                                                      // 0x0028 (0x08)
    DynamicPropertyPath SourcePath;                                                            // 0x0030 (0x28)
    FName DestinationProperty;                                                                 // 0x0058 (0x08)
};

// ============================================================
// Inheritance: DynamicPropertyPath : CachedPropertyPath
// Package: /Script/UMG
// ============================================================
struct DynamicPropertyPath : public CachedPropertyPath {
public:
};

// ============================================================
// Inheritance: CachedPropertyPath
// Package: /Script/PropertyPath
// ============================================================
struct CachedPropertyPath {
public:
    TArray<PropertyPathSegment> Segments;                                                      // 0x0000 (0x10)
    Function* CachedFunction;                                                                  // 0x0018 (0x08)
};

// ============================================================
// Inheritance: PropertyPathSegment
// Package: /Script/PropertyPath
// ============================================================
struct PropertyPathSegment {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    int32 ArrayIndex;                                                                          // 0x0008 (0x04)
    Struct* Struct;                                                                            // 0x0010 (0x08)
};

// ============================================================
// Inheritance: SlateBrush
// Package: /Script/SlateCore
// ============================================================
struct SlateBrush {
public:
    Vector2D ImageSize;                                                                        // 0x0008 (0x08)
    Margin Margin;                                                                             // 0x0010 (0x10)
    SlateColor TintColor;                                                                      // 0x0020 (0x28)
    Object* ResourceObject;                                                                    // 0x0048 (0x08)
    FName ResourceName;                                                                        // 0x0050 (0x08)
    Box2D UVRegion;                                                                            // 0x0058 (0x14)
    uint8 DrawAs;                                                                              // 0x006C (0x01)
    uint8 Tiling;                                                                              // 0x006D (0x01)
    uint8 Mirroring;                                                                           // 0x006E (0x01)
    uint8 ImageType;                                                                           // 0x006F (0x01)
    bool UseImageUV;                                                                           // 0x0070 (0x01) BitMask: 0x01
    bool IsDrawAsCircle;                                                                       // 0x0070 (0x01) BitMask: 0x02
    bool bIsDynamicallyLoaded;                                                                 // 0x0088 (0x01) BitMask: 0x01
    bool bHasUObject;                                                                          // 0x0088 (0x01) BitMask: 0x02
};

// ============================================================
// Inheritance: Box2D
// Package: /Script/CoreUObject
// ============================================================
struct Box2D {
public:
    Vector2D Min;                                                                              // 0x0000 (0x08)
    Vector2D Max;                                                                              // 0x0008 (0x08)
    uint8 bIsValid;                                                                            // 0x0010 (0x01)
};

// ============================================================
// Inheritance: LocalPlayer : Player : Object
// Package: /Script/Engine
// ============================================================
class LocalPlayer : public Player {
public:
    GameViewportClient* ViewportClient;                                                        // 0x0070 (0x08)
    uint8 AspectRatioAxisConstraint;                                                           // 0x0094 (0x01)
    TSubclassOf<PlayerController> PendingLevelPlayerControllerClass;                           // 0x0098 (0x08)
    bool bSentSplitJoin;                                                                       // 0x00A0 (0x01) BitMask: 0x01
    int32 ControllerId;                                                                        // 0x00B8 (0x04)
};

// ============================================================
// Inheritance: GameViewportClient : ScriptViewportClient : Object
// Package: /Script/Engine
// ============================================================
class GameViewportClient : public ScriptViewportClient {
public:
    Console* ViewportConsole;                                                                  // 0x0040 (0x08)
    TArray<DebugDisplayProperty> DebugProperties;                                              // 0x0048 (0x10)
    int32 MaxSplitscreenPlayers;                                                               // 0x0068 (0x04)
    World* World;                                                                              // 0x0078 (0x08)
    GameInstance* GameInstance;                                                                // 0x0080 (0x08)
    SceneCaptureComponent2D* CurrentSpecialScope;                                              // 0x0390 (0x08)

    // --- Functions ---
    void SSSwapControllers();                                                                  // [Public] RVA: 0x1D76C64
    void ShowTitleSafeArea();                                                                  // [Public] RVA: 0x53745A8
    void SetConsoleTarget(int32 PlayerIndex);                                                  // [Public] RVA: 0x7BEE61C
};

// ============================================================
// Inheritance: ScriptViewportClient : Object
// Package: /Script/Engine
// ============================================================
class ScriptViewportClient : public Object {
public:
};

// ============================================================
// Inheritance: Console : Object
// Package: /Script/Engine
// ============================================================
class Console : public Object {
public:
    LocalPlayer* ConsoleTargetPlayer;                                                          // 0x0038 (0x08)
    Texture2D* DefaultTexture_Black;                                                           // 0x0040 (0x08)
    Texture2D* DefaultTexture_White;                                                           // 0x0048 (0x08)
    TArray<FString> HistoryBuffer;                                                             // 0x0068 (0x10)
};

// ============================================================
// Inheritance: DebugDisplayProperty
// Package: /Script/Engine
// ============================================================
struct DebugDisplayProperty {
public:
    Object* Obj;                                                                               // 0x0000 (0x08)
    TSubclassOf<Object> WithinClass;                                                           // 0x0008 (0x08)
};

// ============================================================
// Inheritance: GameInstance : Object
// Package: /Script/Engine
// ============================================================
class GameInstance : public Object {
public:
    TArray<LocalPlayer*> LocalPlayers;                                                         // 0x0038 (0x10)
    OnlineSession* OnlineSession;                                                              // 0x0048 (0x08)
    TArray<Object*> ReferencedObjects;                                                         // 0x0050 (0x10)
    FMulticastDelegate OnPawnControllerChangedDelegates;                                       // 0x0078 (0x10)

    // --- Functions ---
    void ReceiveShutdown();                                                                    // [Public] RVA: 0x182D6BC
    void ReceiveInit();                                                                        // [Public] RVA: 0x182D6BC
    void HandleTravelError(uint8 FailureType);                                                 // [Public] RVA: 0x182D6BC
    void HandleNetworkError(uint8 FailureType, bool bIsServer);                                // [Public] RVA: 0x182D6BC
    void DebugRemovePlayer(int32 ControllerId);                                                // [Public] RVA: 0x7BDDCCC
    void DebugCreatePlayer(int32 ControllerId);                                                // [Public] RVA: 0x7BDDC30
};

// ============================================================
// Inheritance: OnlineSession : Object
// Package: /Script/Engine
// ============================================================
class OnlineSession : public Object {
public:
};

// ============================================================
// Inheritance: SceneCaptureComponent2D : SceneCaptureComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class SceneCaptureComponent2D : public SceneCaptureComponent {
public:
    uint8 ProjectionType;                                                                      // 0x0350 (0x01)
    float FOVAngle;                                                                            // 0x0354 (0x04)
    float OrthoWidth;                                                                          // 0x0358 (0x04)
    TextureRenderTarget2D* TextureTarget;                                                      // 0x0360 (0x08)
    uint8 CompositeMode;                                                                       // 0x0368 (0x01)
    PostProcessSettings PostProcessSettings;                                                   // 0x0370 (0x6A0)
    bool bPostProcessSettingsBlendWithWorldPPV;                                                // 0x0A10 (0x01) BitMask: 0x01
    float PostProcessBlendWeight;                                                              // 0x0A14 (0x04)
    bool bOverride_CustomNearClippingPlane;                                                    // 0x0A18 (0x01) BitMask: 0x01
    float CustomNearClippingPlane;                                                             // 0x0A1C (0x04)
    bool bUseCustomProjectionMatrix;                                                           // 0x0A20 (0x01) BitMask: 0xFF
    Matrix CustomProjectionMatrix;                                                             // 0x0A30 (0x40)
    bool bEnableClipPlane;                                                                     // 0x0A70 (0x01) BitMask: 0xFF
    Vector ClipPlaneBase;                                                                      // 0x0A74 (0x0C)
    Vector ClipPlaneNormal;                                                                    // 0x0A80 (0x0C)
    bool bForceDisableMobileMSAA;                                                              // 0x0A8C (0x01) BitMask: 0xFF
    bool bCameraCutThisFrame;                                                                  // 0x0A90 (0x01) BitMask: 0x01
    bool bConsiderUnrenderedOpaquePixelAsFullyTranslucent;                                     // 0x0A90 (0x01) BitMask: 0x02
    bool bDisableFlipCopyGLES;                                                                 // 0x0A94 (0x01) BitMask: 0xFF

    // --- Functions ---
    void CaptureScene();                                                                       // [Final|Public] RVA: 0x29CA598
    void AddOrUpdateBlendable(TScriptInterface<lengthErrorString> InBlendableObject, float InWeight);  // [Final|Public] RVA: 0x7C75BF0
};

// ============================================================
// Inheritance: SceneCaptureComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class SceneCaptureComponent : public SceneComponent {
public:
    enum PrimitiveRenderMode;                                                                  // 0x0270 (0x01)
    uint8 CaptureSource;                                                                       // 0x0271 (0x01)
    bool bCaptureEveryFrame;                                                                   // 0x0272 (0x01) BitMask: 0x01
    bool bEnableFXAA;                                                                          // 0x0272 (0x01) BitMask: 0x02
    bool bEnableSSAA;                                                                          // 0x0272 (0x01) BitMask: 0x04
    bool bEnableTAA;                                                                           // 0x0272 (0x01) BitMask: 0x08
    bool bCaptureOnMovement;                                                                   // 0x0272 (0x01) BitMask: 0x10
    bool bAlwaysPersistRenderingState;                                                         // 0x0273 (0x01) BitMask: 0xFF
    SkyLightComponent* SkyLightComponent;                                                      // 0x0278 (0x08)
    bool bIsSpecialScopeView;                                                                  // 0x0280 (0x01) BitMask: 0x01
    bool bForceNoDistanceField;                                                                // 0x0280 (0x01) BitMask: 0x02
    TArray<PrimitiveComponent*> HiddenComponents;                                              // 0x0288 (0x10)
    TArray<Actor*> HiddenActors;                                                               // 0x0298 (0x10)
    TArray<PrimitiveComponent*> ShowOnlyComponents;                                            // 0x02A8 (0x10)
    TArray<Actor*> ShowOnlyActors;                                                             // 0x02B8 (0x10)
    float LODDistanceFactor;                                                                   // 0x02C8 (0x04)
    float MaxViewDistanceOverride;                                                             // 0x02CC (0x04)
    int32 CaptureSortPriority;                                                                 // 0x02D0 (0x04)
    bool bUseRayTracingIfEnabled;                                                              // 0x02D4 (0x01) BitMask: 0xFF
    bool bEnableDirectionalLights;                                                             // 0x02D5 (0x01) BitMask: 0xFF
    TArray<EngineShowFlagsSetting> ShowFlagSettings;                                           // 0x02D8 (0x10)
    FString ProfilingEventName;                                                                // 0x0330 (0x10)

    // --- Functions ---
    void ShowOnlyComponent(PrimitiveComponent* InComponent);                                   // [Final|Public] RVA: 0x7C79678
    void ShowOnlyActorComponents(Actor* InActor, const bool bIncludeFromChildActors);          // [Final|Public] RVA: 0x7C794B8
    void SetSkyLightComponent(SkyLightComponent* InSkyLight);                                  // [Final|Public] RVA: 0x7C79378
    void SetCaptureSortPriority(int32 NewCaptureSortPriority);                                 // [Final|Public] RVA: 0x7C791A8
    void RemoveShowOnlyComponent(PrimitiveComponent* InComponent);                             // [Final|Public] RVA: 0x7C78F24
    void RemoveShowOnlyActorComponents(Actor* InActor, const bool bIncludeFromChildActors);    // [Final|Public] RVA: 0x7C78D84
    void HideComponent(PrimitiveComponent* InComponent);                                       // [Final|Public] RVA: 0x7C76B40
    void HideActorComponents(Actor* InActor, const bool bIncludeFromChildActors);              // [Final|Public] RVA: 0x7C769B0
    void DestroyViewStates();                                                                  // [Final|Public] RVA: 0x29CA584
    void ClearShowOnlyComponents();                                                            // [Final|Public] RVA: 0x7C75E3C
    void ClearHiddenComponents();                                                              // [Final|Public] RVA: 0x7C75DE4
};

// ============================================================
// Inheritance: TextureRenderTarget2D : TextureRenderTarget : Texture : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class TextureRenderTarget2D : public TextureRenderTarget {
public:
    int32 SizeX;                                                                               // 0x0100 (0x04)
    int32 SizeY;                                                                               // 0x0104 (0x04)
    LinearColor ClearColor;                                                                    // 0x0108 (0x10)
    uint8 AddressX;                                                                            // 0x0118 (0x01)
    uint8 AddressY;                                                                            // 0x0119 (0x01)
    bool bForceLinearGamma;                                                                    // 0x011A (0x01) BitMask: 0x01
    bool bHDR;                                                                                 // 0x011A (0x01) BitMask: 0x02
    bool bGPUSharedFlag;                                                                       // 0x011A (0x01) BitMask: 0x04
    uint8 RenderTargetFormat;                                                                  // 0x011B (0x01)
    bool bAutoGenerateMips;                                                                    // 0x011C (0x01) BitMask: 0x01
    uint8 MipsSamplerFilter;                                                                   // 0x011D (0x01)
    uint8 MipsAddressU;                                                                        // 0x011E (0x01)
    uint8 MipsAddressV;                                                                        // 0x011F (0x01)
    uint8 OverrideFormat;                                                                      // 0x0120 (0x01)
};

// ============================================================
// Inheritance: TextureRenderTarget : Texture : StreamableRenderAsset : Object
// Package: /Script/Engine
// ============================================================
class TextureRenderTarget : public Texture {
public:
    float TargetGamma;                                                                         // 0x00F8 (0x04)
};

// ============================================================
// Inheritance: SkyLightComponent : LightComponentBase : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class SkyLightComponent : public LightComponentBase {
public:
    bool bRealTimeCapture;                                                                     // 0x02B8 (0x01) BitMask: 0xFF
    uint8 SourceType;                                                                          // 0x02B9 (0x01)
    TextureCube* Cubemap;                                                                      // 0x02C0 (0x08)
    IBLPrecomputedDataAsset* PrecomputedData;                                                  // 0x02C8 (0x08)
    float SourceCubemapAngle;                                                                  // 0x02D0 (0x04)
    int32 CubemapResolution;                                                                   // 0x02D4 (0x04)
    float SkyDistanceThreshold;                                                                // 0x02D8 (0x04)
    bool bCaptureEmissiveOnly;                                                                 // 0x02DC (0x01) BitMask: 0xFF
    bool bLowerHemisphereIsBlack;                                                              // 0x02DD (0x01) BitMask: 0xFF
    LinearColor LowerHemisphereColor;                                                          // 0x02E0 (0x10)
    bool bProvideDefaultIrradiance;                                                            // 0x02F0 (0x01) BitMask: 0xFF
    float OcclusionMaxDistance;                                                                // 0x02F4 (0x04)
    float Contrast;                                                                            // 0x02F8 (0x04)
    float OcclusionExponent;                                                                   // 0x02FC (0x04)
    float MinOcclusion;                                                                        // 0x0300 (0x04)
    Color OcclusionTint;                                                                       // 0x0304 (0x04)
    float StaticIndirectShadowConeAngle;                                                       // 0x0308 (0x04)
    float SkyIndirectShadowMaxConeAngle;                                                       // 0x030C (0x04)
    float SkyIndirectShadowMinConeAngle;                                                       // 0x0310 (0x04)
    bool bCloudAmbientOcclusion;                                                               // 0x0314 (0x01) BitMask: 0x01
    float CloudAmbientOcclusionStrength;                                                       // 0x0318 (0x04)
    float CloudAmbientOcclusionExtent;                                                         // 0x031C (0x04)
    float CloudAmbientOcclusionMapResolutionScale;                                             // 0x0320 (0x04)
    float CloudAmbientOcclusionApertureScale;                                                  // 0x0324 (0x04)
    uint8 OcclusionCombineMode;                                                                // 0x0328 (0x01)
    bool bUsedForSceneCapture;                                                                 // 0x0329 (0x01) BitMask: 0xFF
    TextureCube* BlendDestinationCubemap;                                                      // 0x03E8 (0x08)

    // --- Functions ---
    void SetVolumetricScatteringIntensity(float NewIntensity);                                 // [Final|Public] RVA: 0x27AE718
    void SetOcclusionTint(const out ref Color InTint);                                         // [Final|Public] RVA: 0x7C87D54
    void SetOcclusionExponent(float InOcclusionExponent);                                      // [Final|Public] RVA: 0x7C87CB8
    void SetOcclusionContrast(float InOcclusionContrast);                                      // [Final|Public] RVA: 0x7C87C1C
    void SetMinOcclusion(float InMinOcclusion);                                                // [Final|Public] RVA: 0x7C87B80
    void SetLowerHemisphereColor(const out ref LinearColor InLowerHemisphereColor);            // [Final|Public] RVA: 0x7C878B0
    void SetLightColor(LinearColor NewLightColor);                                             // [Final|Public] RVA: 0xFBA24C
    void SetIntensity(float NewIntensity);                                                     // [Final|Public] RVA: 0xFBA2EC
    void SetIndirectLightingIntensity(float NewIntensity);                                     // [Final|Public] RVA: 0x7C87814
    void SetCubemapBlend(TextureCube* SourceCubemap, TextureCube* DestinationCubemap, float InBlendFraction);  // [Final|Public] RVA: 0x7C8745C
    void SetCubemap(TextureCube* NewCubemap);                                                  // [Final|Public] RVA: 0x7C873C0
    void RecaptureSky();                                                                       // [Final|Public] RVA: 0x7C87250
};

// ============================================================
// Inheritance: LightComponentBase : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class LightComponentBase : public SceneComponent {
public:
    Guid LightGuid;                                                                            // 0x0270 (0x10)
    float Brightness;                                                                          // 0x0280 (0x04)
    float Intensity;                                                                           // 0x0284 (0x04)
    Color LightColor;                                                                          // 0x0288 (0x04)
    bool bAffectsWorld;                                                                        // 0x028C (0x01) BitMask: 0x01
    bool CastShadows;                                                                          // 0x028C (0x01) BitMask: 0x02
    bool CastStaticShadows;                                                                    // 0x028C (0x01) BitMask: 0x04
    bool CastDynamicShadows;                                                                   // 0x028C (0x01) BitMask: 0x08
    bool bAffectTranslucentLighting;                                                           // 0x028C (0x01) BitMask: 0x10
    bool bTransmission;                                                                        // 0x028C (0x01) BitMask: 0x20
    bool bCastVolumetricShadow;                                                                // 0x028C (0x01) BitMask: 0x40
    bool bCastDeepShadow;                                                                      // 0x028C (0x01) BitMask: 0x80
    bool bCastRaytracedShadow;                                                                 // 0x028D (0x01) BitMask: 0x01
    bool bAffectReflection;                                                                    // 0x028D (0x01) BitMask: 0x02
    bool bAffectGlobalIllumination;                                                            // 0x028D (0x01) BitMask: 0x04
    float DeepShadowLayerDistribution;                                                         // 0x0290 (0x04)
    float IndirectLightingIntensity;                                                           // 0x0294 (0x04)
    float ExtraIndirectLightingSaturation;                                                     // 0x0298 (0x04)
    float VolumetricScatteringIntensity;                                                       // 0x029C (0x04)
    GlobalDFShadowSettings GlobalDFShadowSettings;                                             // 0x02A0 (0x0C)
    int32 SamplesPerPixel;                                                                     // 0x02AC (0x04)

    // --- Functions ---
    void SetSamplesPerPixel(int32 NewValue);                                                   // [Final|Public] RVA: 0x7C5071C
    void SetCastVolumetricShadow(bool bNewValue);                                              // [Final|Public] RVA: 0x7C5058C
    void SetCastShadows(bool bNewValue);                                                       // [Final|Public] RVA: 0x7C504F0
    void SetCastRaytracedShadow(bool bNewValue);                                               // [Final|Public] RVA: 0x7C50418
    void SetCastDeepShadow(bool bNewValue);                                                    // [Final|Public] RVA: 0x7C50340
    void SetAffectReflection(bool bNewValue);                                                  // [Final|Public] RVA: 0x7C501CC
    void SetAffectGlobalIllumination(bool bNewValue);                                          // [Final|Public] RVA: 0x7C500F4
    LinearColor GetLightColor();                                                               // [Final|Public] RVA: 0x7C4FF5C
};

// ============================================================
// Inheritance: IBLPrecomputedDataAsset : DataAsset : Object
// Package: /Script/Engine
// ============================================================
class IBLPrecomputedDataAsset : public DataAsset {
public:
    TextureCube* FilteredCubemap;                                                              // 0x0030 (0x08)
    float AverageBrightness;                                                                   // 0x0038 (0x04)
    float DynamicSkyAverageBrightness;                                                         // 0x003C (0x04)
    uint8 EncodeType;                                                                          // 0x0040 (0x01)
    float MaxValueRGBM;                                                                        // 0x0044 (0x04)
    TArray<float> IrradianceEnvironmentMapFloats;                                              // 0x0048 (0x10)
};

// ============================================================
// Inheritance: GlobalDFShadowSettings
// Package: /Script/Engine
// ============================================================
struct GlobalDFShadowSettings {
public:
    float TraceStart;                                                                          // 0x0000 (0x04)
    float HitDistance;                                                                         // 0x0004 (0x04)
    float SmoothDistance;                                                                      // 0x0008 (0x04)
};

// ============================================================
// Inheritance: EngineShowFlagsSetting
// Package: /Script/Engine
// ============================================================
struct EngineShowFlagsSetting {
public:
    FString ShowFlagName;                                                                      // 0x0000 (0x10)
    bool Enabled;                                                                              // 0x0010 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: ViewTargetTransitionParams
// Package: /Script/Engine
// ============================================================
struct ViewTargetTransitionParams {
public:
    float BlendTime;                                                                           // 0x0000 (0x04)
    uint8 BlendFunction;                                                                       // 0x0004 (0x01)
    float BlendExp;                                                                            // 0x0008 (0x04)
    bool bLockOutgoing;                                                                        // 0x000C (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: UpdateLevelVisibilityLevelInfo
// Package: /Script/Engine
// ============================================================
struct UpdateLevelVisibilityLevelInfo {
public:
    FName PackageName;                                                                         // 0x0000 (0x08)
    FName Filename;                                                                            // 0x0008 (0x08)
    bool bIsVisible;                                                                           // 0x0010 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: HapticFeedbackEffect_Base : Object
// Package: /Script/Engine
// ============================================================
class HapticFeedbackEffect_Base : public Object {
public:
};

// ============================================================
// Inheritance: LatentActionInfo
// Package: /Script/Engine
// ============================================================
struct LatentActionInfo {
public:
    int32 Linkage;                                                                             // 0x0000 (0x04)
    int32 UUID;                                                                                // 0x0004 (0x04)
    FName ExecutionFunction;                                                                   // 0x0008 (0x08)
    Object* CallbackTarget;                                                                    // 0x0010 (0x08)
};

// ============================================================
// Inheritance: UpdateLevelStreamingLevelStatus
// Package: /Script/Engine
// ============================================================
struct UpdateLevelStreamingLevelStatus {
public:
    FName PackageName;                                                                         // 0x0000 (0x08)
    int32 LODIndex;                                                                            // 0x0008 (0x04)
    bool bNewShouldBeLoaded;                                                                   // 0x000C (0x01) BitMask: 0x01
    bool bNewShouldBeVisible;                                                                  // 0x000C (0x01) BitMask: 0x02
    bool bNewShouldBlockOnLoad;                                                                // 0x000C (0x01) BitMask: 0x04
};

// ============================================================
// Inheritance: ForceFeedbackParameters
// Package: /Script/Engine
// ============================================================
struct ForceFeedbackParameters {
public:
    FName Tag;                                                                                 // 0x0000 (0x08)
    bool bLooping;                                                                             // 0x0008 (0x01) BitMask: 0xFF
    bool bIgnoreTimeDilation;                                                                  // 0x0009 (0x01) BitMask: 0xFF
    bool bPlayWhilePaused;                                                                     // 0x000A (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: MatineeActor : Actor : Object
// Package: /Script/Engine
// ============================================================
class MatineeActor : public Actor {
public:
    InterpData* MatineeData;                                                                   // 0x0318 (0x08)
    FName MatineeControllerName;                                                               // 0x0320 (0x08)
    float PlayRate;                                                                            // 0x0328 (0x04)
    bool bPlayOnLevelLoad;                                                                     // 0x032C (0x01) BitMask: 0x01
    bool bForceStartPos;                                                                       // 0x032C (0x01) BitMask: 0x02
    float ForceStartPosition;                                                                  // 0x0330 (0x04)
    bool bLooping;                                                                             // 0x0334 (0x01) BitMask: 0x01
    bool bRewindOnPlay;                                                                        // 0x0334 (0x01) BitMask: 0x02
    bool bNoResetOnRewind;                                                                     // 0x0334 (0x01) BitMask: 0x04
    bool bRewindIfAlreadyPlaying;                                                              // 0x0334 (0x01) BitMask: 0x08
    bool bDisableRadioFilter;                                                                  // 0x0334 (0x01) BitMask: 0x10
    bool bClientSideOnly;                                                                      // 0x0334 (0x01) BitMask: 0x20
    bool bSkipUpdateIfNotVisible;                                                              // 0x0334 (0x01) BitMask: 0x40
    bool bIsSkippable;                                                                         // 0x0334 (0x01) BitMask: 0x80
    int32 PreferredSplitScreenNum;                                                             // 0x0338 (0x04)
    bool bDisableMovementInput;                                                                // 0x033C (0x01) BitMask: 0x01
    bool bDisableLookAtInput;                                                                  // 0x033C (0x01) BitMask: 0x02
    bool bHidePlayer;                                                                          // 0x033C (0x01) BitMask: 0x04
    bool bHideHud;                                                                             // 0x033C (0x01) BitMask: 0x08
    TArray<InterpGroupActorInfo> GroupActorInfos;                                              // 0x0340 (0x10)
    bool bShouldShowGore;                                                                      // 0x0350 (0x01) BitMask: 0x01
    TArray<InterpGroupInst*> GroupInst;                                                        // 0x0358 (0x10)
    TArray<CameraCutInfo> CameraCuts;                                                          // 0x0368 (0x10)
    bool bIsPlaying;                                                                           // 0x0378 (0x01) BitMask: 0x01
    bool bReversePlayback;                                                                     // 0x0378 (0x01) BitMask: 0x02
    bool bPaused;                                                                              // 0x0378 (0x01) BitMask: 0x04
    bool bPendingStop;                                                                         // 0x0378 (0x01) BitMask: 0x08
    float InterpPosition;                                                                      // 0x037C (0x04)
    uint8 ReplicationForceIsPlaying;                                                           // 0x0384 (0x01)
    FMulticastDelegate OnPlay;                                                                 // 0x0388 (0x10)
    FMulticastDelegate OnStop;                                                                 // 0x0398 (0x10)
    FMulticastDelegate OnPause;                                                                // 0x03A8 (0x10)

    // --- Functions ---
    void Stop();                                                                               // [Public] RVA: 0x4691CF8
    void SetPosition(float NewPosition, bool bJump);                                           // [Final|Public] RVA: 0x7C54AF4
    void SetLoopingState(bool bNewLooping);                                                    // [Public] RVA: 0x49AE830
    void Reverse();                                                                            // [Public] RVA: 0x231BB90
    void Play();                                                                               // [Public] RVA: 0x1EF4570
    void Pause();                                                                              // [Public] RVA: 0x469A868
    void EnableGroupByName(FString GroupName, bool bEnable);                                   // [Final|Public] RVA: 0x7C54208
    void ChangePlaybackDirection();                                                            // [Public] RVA: 0x469A880
};

// ============================================================
// Inheritance: InterpData : Object
// Package: /Script/Engine
// ============================================================
class InterpData : public Object {
public:
    float InterpLength;                                                                        // 0x0028 (0x04)
    float PathBuildTime;                                                                       // 0x002C (0x04)
    TArray<InterpGroup*> InterpGroups;                                                         // 0x0030 (0x10)
    InterpCurveEdSetup* CurveEdSetup;                                                          // 0x0040 (0x08)
    float EdSectionStart;                                                                      // 0x0048 (0x04)
    float EdSectionEnd;                                                                        // 0x004C (0x04)
    bool bShouldBakeAndPrune;                                                                  // 0x0050 (0x01) BitMask: 0x01
    InterpGroupDirector* CachedDirectorGroup;                                                  // 0x0058 (0x08)
    TArray<FName> AllEventNames;                                                               // 0x0060 (0x10)
};

// ============================================================
// Inheritance: InterpGroupDirector : InterpGroup : Object
// Package: /Script/Engine
// ============================================================
class InterpGroupDirector : public InterpGroup {
public:
};

// ============================================================
// Inheritance: InterpGroupActorInfo
// Package: /Script/Engine
// ============================================================
struct InterpGroupActorInfo {
public:
    FName ObjectName;                                                                          // 0x0000 (0x08)
    TArray<Actor*> Actors;                                                                     // 0x0008 (0x10)
};

// ============================================================
// Inheritance: CameraCutInfo
// Package: /Script/Engine
// ============================================================
struct CameraCutInfo {
public:
    Vector Location;                                                                           // 0x0000 (0x0C)
    float Timestamp;                                                                           // 0x000C (0x04)
};

// ============================================================
// Inheritance: ChildActorComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class ChildActorComponent : public SceneComponent {
public:
    TSubclassOf<Actor> ChildActorClass;                                                        // 0x0270 (0x08)
    Actor* ChildActor;                                                                         // 0x0278 (0x08)
    Actor* ChildActorTemplate;                                                                 // 0x0280 (0x08)

    // --- Functions ---
    void SetChildActorClass(TSubclassOf<Actor> InClass);                                       // [Final|Public] RVA: 0x7BCF748
};

// ============================================================
// Inheritance: Interface : Object
// Package: /Script/CoreUObject
// ============================================================
class Interface : public Object {
public:
};

// ============================================================
// Inheritance: ActorComponentTickFunction : TickFunction
// Package: /Script/Engine
// ============================================================
struct ActorComponentTickFunction : public TickFunction {
public:
};

// ============================================================
// Inheritance: SimpleMemberReference
// Package: /Script/Engine
// ============================================================
struct SimpleMemberReference {
public:
    Object* MemberParent;                                                                      // 0x0000 (0x08)
    FName MemberName;                                                                          // 0x0008 (0x08)
    Guid MemberGuid;                                                                           // 0x0010 (0x10)
};

// ============================================================
// Inheritance: LevelActorContainer : Object
// Package: /Script/Engine
// ============================================================
class LevelActorContainer : public Object {
public:
    TArray<Actor*> Actors;                                                                     // 0x0028 (0x10)
};

// ============================================================
// Inheritance: LevelScriptActor : Actor : Object
// Package: /Script/Engine
// ============================================================
class LevelScriptActor : public Actor {
public:
    bool bInputEnabled;                                                                        // 0x0318 (0x01) BitMask: 0x01

    // --- Functions ---
    void WorldOriginLocationChanged(IntVector OldOriginLocation, IntVector NewOriginLocation);  // [Public] RVA: 0x182D6BC
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // [Public] RVA: 0x7C4E038
    bool RemoteEvent(FName EventName);                                                         // [Public] RVA: 0x7C4D79C
    void LevelReset();                                                                         // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: IntVector
// Package: /Script/CoreUObject
// ============================================================
struct IntVector {
public:
    int32 X;                                                                                   // 0x0000 (0x04)
    int32 Y;                                                                                   // 0x0004 (0x04)
    int32 Z;                                                                                   // 0x0008 (0x04)
};

// ============================================================
// Inheritance: NavigationObjectBase : Actor : Object
// Package: /Script/Engine
// ============================================================
class NavigationObjectBase : public Actor {
public:
    CapsuleComponent* CapsuleComponent;                                                        // 0x0320 (0x08)
    BillboardComponent* GoodSprite;                                                            // 0x0328 (0x08)
    BillboardComponent* BadSprite;                                                             // 0x0330 (0x08)
    bool bIsPIEPlayerStart;                                                                    // 0x0338 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: BillboardComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class BillboardComponent : public PrimitiveComponent {
public:
    Texture2D* Sprite;                                                                         // 0x04F0 (0x08)
    bool bIsScreenSizeScaled;                                                                  // 0x04F8 (0x01) BitMask: 0x01
    float ScreenSize;                                                                          // 0x04FC (0x04)
    float U;                                                                                   // 0x0500 (0x04)
    float UL;                                                                                  // 0x0504 (0x04)
    float V;                                                                                   // 0x0508 (0x04)
    float VL;                                                                                  // 0x050C (0x04)

    // --- Functions ---
    void SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);                              // [Public] RVA: 0x7BB989C
    void SetSpriteAndUV(Texture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);  // [Public] RVA: 0x7BB96C4
    void SetSprite(Texture2D* NewSprite);                                                      // [Public] RVA: 0x49AB08C
};

// ============================================================
// Inheritance: NavigationDataChunk : Object
// Package: /Script/Engine
// ============================================================
class NavigationDataChunk : public Object {
public:
    FName NavigationDataName;                                                                  // 0x0028 (0x08)
};

// ============================================================
// Inheritance: MapBuildDataRegistry : Object
// Package: /Script/Engine
// ============================================================
class MapBuildDataRegistry : public Object {
public:
    uint8 LevelLightingQuality;                                                                // 0x0028 (0x01)
    BaseLuxVolumeData* LuxVolumeData;                                                          // 0x0030 (0x08)
};

// ============================================================
// Inheritance: BaseLuxVolumeData : Object
// Package: /Script/Engine
// ============================================================
class BaseLuxVolumeData : public Object {
public:
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
    void OnRep_WorldGravityZ();                                                                // [Public] RVA: 0x1C0AB50
};

// ============================================================
// Inheritance: NavigationSystemConfig : Object
// Package: /Script/Engine
// ============================================================
class NavigationSystemConfig : public Object {
public:
    SoftClassPath NavigationSystemClass;                                                       // 0x0028 (0x18)
    NavAgentSelector SupportedAgentsMask;                                                      // 0x0040 (0x04)
    FName DefaultAgentName;                                                                    // 0x0044 (0x08)
    bool bIsOverriden;                                                                         // 0x004C (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: NavAgentSelector
// Package: /Script/Engine
// ============================================================
struct NavAgentSelector {
public:
    bool bSupportsAgent0;                                                                      // 0x0000 (0x01) BitMask: 0x01
    bool bSupportsAgent1;                                                                      // 0x0000 (0x01) BitMask: 0x02
    bool bSupportsAgent2;                                                                      // 0x0000 (0x01) BitMask: 0x04
    bool bSupportsAgent3;                                                                      // 0x0000 (0x01) BitMask: 0x08
    bool bSupportsAgent4;                                                                      // 0x0000 (0x01) BitMask: 0x10
    bool bSupportsAgent5;                                                                      // 0x0000 (0x01) BitMask: 0x20
    bool bSupportsAgent6;                                                                      // 0x0000 (0x01) BitMask: 0x40
    bool bSupportsAgent7;                                                                      // 0x0000 (0x01) BitMask: 0x80
    bool bSupportsAgent8;                                                                      // 0x0001 (0x01) BitMask: 0x01
    bool bSupportsAgent9;                                                                      // 0x0001 (0x01) BitMask: 0x02
    bool bSupportsAgent10;                                                                     // 0x0001 (0x01) BitMask: 0x04
    bool bSupportsAgent11;                                                                     // 0x0001 (0x01) BitMask: 0x08
    bool bSupportsAgent12;                                                                     // 0x0001 (0x01) BitMask: 0x10
    bool bSupportsAgent13;                                                                     // 0x0001 (0x01) BitMask: 0x20
    bool bSupportsAgent14;                                                                     // 0x0001 (0x01) BitMask: 0x40
    bool bSupportsAgent15;                                                                     // 0x0001 (0x01) BitMask: 0x80
};

// ============================================================
// Inheritance: DefaultPhysicsVolume : PhysicsVolume : Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class DefaultPhysicsVolume : public PhysicsVolume {
public:
};

// ============================================================
// Inheritance: PhysicsCollisionHandler : Object
// Package: /Script/Engine
// ============================================================
class PhysicsCollisionHandler : public Object {
public:
    float ImpactThreshold;                                                                     // 0x0028 (0x04)
    float ImpactReFireDelay;                                                                   // 0x002C (0x04)
    SoundBase* DefaultImpactSound;                                                             // 0x0030 (0x08)
    float LastImpactSoundTime;                                                                 // 0x0038 (0x04)
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
    void StartPlay();                                                                          // [Public] RVA: 0x1B1C130
    Pawn* SpawnDefaultPawnFor(Controller* NewPlayer, Actor* StartSpot);                        // [Public] RVA: 0x278EA00
    Pawn* SpawnDefaultPawnAtTransform(Controller* NewPlayer, const out ref Transform SpawnTransform);  // [Public] RVA: 0x2815288
    bool ShouldReset(Actor* ActorToReset);                                                     // [Public] RVA: 0x7BE58FC
    void ReturnToMainMenuHost();                                                               // [Public] RVA: 0x5C5EE28
    void RestartPlayerAtTransform(Controller* NewPlayer, const out ref Transform SpawnTransform);  // [Public] RVA: 0x7BE421C
    void RestartPlayerAtPlayerStart(Controller* NewPlayer, Actor* StartSpot);                  // [Public] RVA: 0x7BE4130
    void RestartPlayer(Controller* NewPlayer);                                                 // [Public] RVA: 0x5CC32D8
    void ResetLevel();                                                                         // [Public] RVA: 0x29B7C5C
    bool PlayerCanRestart(PlayerController* Player);                                           // [Public] RVA: 0x1BB3278
    bool MustSpectate(PlayerController* NewPlayerController);                                  // [Public] RVA: 0x20A25E0
    void K2_PostLogin(PlayerController* NewPlayer);                                            // [Public] RVA: 0x182D6BC
    void K2_OnSwapPlayerControllers(PlayerController* OldPC, PlayerController* NewPC);         // [Protected] RVA: 0x182D6BC
    void K2_OnRestartPlayer(Controller* NewPlayer);                                            // [Public] RVA: 0x182D6BC
    void K2_OnLogout(Controller* ExitingController);                                           // [Public] RVA: 0x182D6BC
    void K2_OnChangeName(Controller* Other, FString NewName, bool bNameChange);                // [Public] RVA: 0x182D6BC
    Actor* K2_FindPlayerStart(Controller* Player, FString IncomingName);                       // [Final|Public] RVA: 0x7BE11F0
    void InitStartSpot(Actor* StartSpot, Controller* NewPlayer);                               // [Public] RVA: 0x29B7610
    void InitializeHUDForPlayer(PlayerController* NewPlayer);                                  // [Protected] RVA: 0x22CCB88
    bool HasMatchStarted();                                                                    // [Public] RVA: 0x7BD0624
    bool HasMatchEnded();                                                                      // [Public] RVA: 0x5C5E588
    void HandleStartingNewPlayer(PlayerController* NewPlayer);                                 // [Public] RVA: 0x1BB2090
    int32 GetNumSpectators();                                                                  // [Public] RVA: 0x7BDFFE8
    int32 GetNumPlayers();                                                                     // [Public] RVA: 0x7BDFFC0
    TSubclassOf<Object> GetDefaultPawnClassForController(Controller* InController);            // [Public] RVA: 0x2268050
    Actor* FindPlayerStart(Controller* Player, FString IncomingName);                          // [Public] RVA: 0x204CEB4
    Actor* ChoosePlayerStart(Controller* Player);                                              // [Public] RVA: 0x1BB1FE0
    void ChangeName(Controller* Controller, FString NewName, bool bNameChange);                // [Public] RVA: 0x7BDD008
    bool CanSpectate(PlayerController* Viewer, PlayerState* ViewTarget);                       // [Public] RVA: 0x7BDCEF4
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
    void OnRep_SpectatorClass();                                                               // [Protected] RVA: 0xFA0E88
    void OnRep_ReplicatedWorldTimeSeconds();                                                   // [Protected] RVA: 0x1B1C130
    void OnRep_ReplicatedHasBegunPlay();                                                       // [Protected] RVA: 0x2319BB8
    void OnRep_GameModeClass();                                                                // [Protected] RVA: 0xFA0E64
    bool HasMatchStarted();                                                                    // [Public] RVA: 0x49AE664
    bool HasMatchEnded();                                                                      // [Public] RVA: 0x5DCB318
    bool HasBegunPlay();                                                                       // [Public] RVA: 0x7BEA320
    float GetServerWorldTimeSeconds();                                                         // [Public] RVA: 0x7BEA2BC
    float GetPlayerStartTime(Controller* Controller);                                          // [Public] RVA: 0x7BE9DC4
    float GetPlayerRespawnDelay(Controller* Controller);                                       // [Public] RVA: 0x7BE9D14
};

// ============================================================
// Inheritance: ServerStatReplicator : Info : Actor : Object
// Package: /Script/Engine
// ============================================================
class ServerStatReplicator : public Info {
public:
    bool bUpdateStatNet;                                                                       // 0x0318 (0x01) BitMask: 0xFF
    bool bOverwriteClientStats;                                                                // 0x0319 (0x01) BitMask: 0xFF
    uint32 Channels;                                                                           // 0x031C (0x04)
    uint32 InRate;                                                                             // 0x0320 (0x04)
    uint32 OutRate;                                                                            // 0x0324 (0x04)
    uint32 MaxPacketOverhead;                                                                  // 0x032C (0x04)
    uint32 InRateClientMax;                                                                    // 0x0330 (0x04)
    uint32 InRateClientMin;                                                                    // 0x0334 (0x04)
    uint32 InRateClientAvg;                                                                    // 0x0338 (0x04)
    uint32 InPacketsClientMax;                                                                 // 0x033C (0x04)
    uint32 InPacketsClientMin;                                                                 // 0x0340 (0x04)
    uint32 InPacketsClientAvg;                                                                 // 0x0344 (0x04)
    uint32 OutRateClientMax;                                                                   // 0x0348 (0x04)
    uint32 OutRateClientMin;                                                                   // 0x034C (0x04)
    uint32 OutRateClientAvg;                                                                   // 0x0350 (0x04)
    uint32 OutPacketsClientMax;                                                                // 0x0354 (0x04)
    uint32 OutPacketsClientMin;                                                                // 0x0358 (0x04)
    uint32 OutPacketsClientAvg;                                                                // 0x035C (0x04)
    uint32 NetNumClients;                                                                      // 0x0360 (0x04)
    uint32 InPackets;                                                                          // 0x0364 (0x04)
    uint32 OutPackets;                                                                         // 0x0368 (0x04)
    uint32 InBunches;                                                                          // 0x036C (0x04)
    uint32 OutBunches;                                                                         // 0x0370 (0x04)
    uint32 OutLoss;                                                                            // 0x0374 (0x04)
    uint32 InLoss;                                                                             // 0x0378 (0x04)
    uint32 VoiceBytesSent;                                                                     // 0x037C (0x04)
    uint32 VoiceBytesRecv;                                                                     // 0x0380 (0x04)
    uint32 VoicePacketsSent;                                                                   // 0x0384 (0x04)
    uint32 VoicePacketsRecv;                                                                   // 0x0388 (0x04)
    uint32 PercentInVoice;                                                                     // 0x038C (0x04)
    uint32 PercentOutVoice;                                                                    // 0x0390 (0x04)
    uint32 NumActorChannels;                                                                   // 0x0394 (0x04)
    uint32 NumConsideredActors;                                                                // 0x0398 (0x04)
    uint32 PrioritizedActors;                                                                  // 0x039C (0x04)
    uint32 NumRelevantActors;                                                                  // 0x03A0 (0x04)
    uint32 NumRelevantDeletedActors;                                                           // 0x03A4 (0x04)
    uint32 NumReplicatedActorAttempts;                                                         // 0x03A8 (0x04)
    uint32 NumReplicatedActors;                                                                // 0x03AC (0x04)
    uint32 NumActors;                                                                          // 0x03B0 (0x04)
    uint32 NumNetActors;                                                                       // 0x03B4 (0x04)
    uint32 NumDormantActors;                                                                   // 0x03B8 (0x04)
    uint32 NumInitiallyDormantActors;                                                          // 0x03BC (0x04)
    uint32 NumNetGUIDsAckd;                                                                    // 0x03C0 (0x04)
    uint32 NumNetGUIDsPending;                                                                 // 0x03C4 (0x04)
    uint32 NumNetGUIDsUnAckd;                                                                  // 0x03C8 (0x04)
    uint32 ObjPathBytes;                                                                       // 0x03CC (0x04)
    uint32 NetGUIDOutRate;                                                                     // 0x03D0 (0x04)
    uint32 NetGUIDInRate;                                                                      // 0x03D4 (0x04)
    uint32 NetSaturated;                                                                       // 0x03D8 (0x04)
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
// Inheritance: ReverbSettings
// Package: /Script/Engine
// ============================================================
struct ReverbSettings {
public:
    bool bApplyReverb;                                                                         // 0x0000 (0x01) BitMask: 0xFF
    ReverbEffect* ReverbEffect;                                                                // 0x0008 (0x08)
    SoundEffectSubmixPreset* ReverbPluginEffect;                                               // 0x0010 (0x08)
    float Volume;                                                                              // 0x0018 (0x04)
    float FadeTime;                                                                            // 0x001C (0x04)
};

// ============================================================
// Inheritance: ReverbEffect : Object
// Package: /Script/Engine
// ============================================================
class ReverbEffect : public Object {
public:
    bool bBypassEarlyReflections;                                                              // 0x0028 (0x01) BitMask: 0xFF
    float ReflectionsDelay;                                                                    // 0x002C (0x04)
    float GainHF;                                                                              // 0x0030 (0x04)
    float ReflectionsGain;                                                                     // 0x0034 (0x04)
    bool bBypassLateReflections;                                                               // 0x0038 (0x01) BitMask: 0xFF
    float LateDelay;                                                                           // 0x003C (0x04)
    float DecayTime;                                                                           // 0x0040 (0x04)
    float Density;                                                                             // 0x0044 (0x04)
    float Diffusion;                                                                           // 0x0048 (0x04)
    float AirAbsorptionGainHF;                                                                 // 0x004C (0x04)
    float DecayHFRatio;                                                                        // 0x0050 (0x04)
    float LateGain;                                                                            // 0x0054 (0x04)
    float Gain;                                                                                // 0x0058 (0x04)
    float RoomRolloffFactor;                                                                   // 0x005C (0x04)
};

// ============================================================
// Inheritance: InteriorSettings
// Package: /Script/Engine
// ============================================================
struct InteriorSettings {
public:
    bool bIsWorldSettings;                                                                     // 0x0000 (0x01) BitMask: 0xFF
    float ExteriorVolume;                                                                      // 0x0004 (0x04)
    float ExteriorTime;                                                                        // 0x0008 (0x04)
    float ExteriorLPF;                                                                         // 0x000C (0x04)
    float ExteriorLPFTime;                                                                     // 0x0010 (0x04)
    float InteriorVolume;                                                                      // 0x0014 (0x04)
    float InteriorTime;                                                                        // 0x0018 (0x04)
    float InteriorLPF;                                                                         // 0x001C (0x04)
    float InteriorLPFTime;                                                                     // 0x0020 (0x04)
};

// ============================================================
// Inheritance: BroadphaseSettings
// Package: /Script/Engine
// ============================================================
struct BroadphaseSettings {
public:
    bool bUseMBPOnClient;                                                                      // 0x0000 (0x01) BitMask: 0xFF
    bool bUseMBPOnServer;                                                                      // 0x0001 (0x01) BitMask: 0xFF
    bool bUseMBPOuterBounds;                                                                   // 0x0002 (0x01) BitMask: 0xFF
    Box MBPBounds;                                                                             // 0x0004 (0x1C)
    Box MBPOuterBounds;                                                                        // 0x0020 (0x1C)
    uint32 MBPNumSubdivs;                                                                      // 0x003C (0x04)
};

// ============================================================
// Inheritance: NetViewer
// Package: /Script/Engine
// ============================================================
struct NetViewer {
public:
    NetConnection* Connection;                                                                 // 0x0000 (0x08)
    Actor* InViewer;                                                                           // 0x0008 (0x08)
    Actor* ViewTarget;                                                                         // 0x0010 (0x08)
    Vector ViewLocation;                                                                       // 0x0018 (0x0C)
    Vector ViewDir;                                                                            // 0x0024 (0x0C)
};

// ============================================================
// Inheritance: BookmarkBase : Object
// Package: /Script/Engine
// ============================================================
class BookmarkBase : public Object {
public:
};

// ============================================================
// Inheritance: ReplicatedStaticActorDestructionInfo
// Package: /Script/Engine
// ============================================================
struct ReplicatedStaticActorDestructionInfo {
public:
    TSubclassOf<Object> ObjClass;                                                              // 0x0030 (0x08)
};

// ============================================================
// Inheritance: LineBatchComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Engine
// ============================================================
class LineBatchComponent : public PrimitiveComponent {
public:
};

// ============================================================
// Inheritance: LevelStreaming : Object
// Package: /Script/Engine
// ============================================================
class LevelStreaming : public Object {
public:
    World* WorldAsset;                                                                         // 0x0028 (0x28)
    FName PackageNameToLoad;                                                                   // 0x0050 (0x08)
    TArray<FName> LODPackageNames;                                                             // 0x0058 (0x10)
    Transform LevelTransform;                                                                  // 0x0080 (0x30)
    int32 LevelLODIndex;                                                                       // 0x00B0 (0x04)
    int32 StreamingPriority;                                                                   // 0x00B4 (0x04)
    bool bShouldBeVisible;                                                                     // 0x00BA (0x01) BitMask: 0x08
    bool bShouldBeLoaded;                                                                      // 0x00BA (0x01) BitMask: 0x10
    bool bLocked;                                                                              // 0x00BA (0x01) BitMask: 0x20
    bool bIsStatic;                                                                            // 0x00BA (0x01) BitMask: 0x40
    bool bShouldBlockOnLoad;                                                                   // 0x00BA (0x01) BitMask: 0x80
    bool bShouldBlockOnUnload;                                                                 // 0x00BB (0x01) BitMask: 0x01
    bool bDisableDistanceStreaming;                                                            // 0x00BB (0x01) BitMask: 0x02
    bool bDrawOnLevelStatusMap;                                                                // 0x00BB (0x01) BitMask: 0x04
    LinearColor LevelColor;                                                                    // 0x00BC (0x10)
    TArray<LevelStreamingVolume*> EditorStreamingVolumes;                                      // 0x00D0 (0x10)
    float MinTimeBetweenVolumeUnloadRequests;                                                  // 0x00E0 (0x04)
    FMulticastDelegate OnLevelLoaded;                                                          // 0x00E8 (0x10)
    FMulticastDelegate OnLevelUnloaded;                                                        // 0x00F8 (0x10)
    FMulticastDelegate OnLevelShown;                                                           // 0x0108 (0x10)
    FMulticastDelegate OnLevelHidden;                                                          // 0x0118 (0x10)
    Level* LoadedLevel;                                                                        // 0x0128 (0x08)
    Level* PendingUnloadLevel;                                                                 // 0x0130 (0x08)

    // --- Functions ---
    bool ShouldBeLoaded();                                                                     // [Public] RVA: 0x6011778
    void SetShouldBeVisible(bool bInShouldBeVisible);                                          // [Final|Public] RVA: 0x7C4F328
    void SetShouldBeLoaded(bool bInShouldBeLoaded);                                            // [Public] RVA: 0x5E7B824
    void SetPriority(int32 NewPriority);                                                       // [Final|Public] RVA: 0x7C4EF84
    void SetLevelLODIndex(int32 LODIndex);                                                     // [Final|Public] RVA: 0x7C4E7B8
    void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval);                // [Final|Public] RVA: 0x7C4E71C
    bool IsStreamingStatePending();                                                            // [Final|Public] RVA: 0x7C4D250
    bool IsLevelVisible();                                                                     // [Final|Public] RVA: 0x7C4D230
    bool IsLevelLoaded();                                                                      // [Final|Public] RVA: 0x5CE2638
    FName GetWorldAssetPackageFName();                                                         // [Final|Public] RVA: 0x7C4D1D4
    Level* GetLoadedLevel();                                                                   // [Final|Public] RVA: 0x5DF8E18
    LevelScriptActor* GetLevelScriptActor();                                                   // [Final|Public] RVA: 0x7C4D188
    bool GetIsRequestingUnloadAndRemoval();                                                    // [Final|Public] RVA: 0x7C4D16C
    LevelStreaming* CreateInstance(FString UniqueInstanceName);                                // [Final|Public] RVA: 0x7C4D088
};

// ============================================================
// Inheritance: LevelStreamingVolume : Volume : Brush : Actor : Object
// Package: /Script/Engine
// ============================================================
class LevelStreamingVolume : public Volume {
public:
    TArray<FString> StreamingLevelFilterStrings;                                               // 0x0350 (0x10)
    TArray<FString> StreamingLevelIgnoreStrings;                                               // 0x0360 (0x10)
    bool bExcludeWorldComposition;                                                             // 0x0370 (0x01) BitMask: 0x01
    TArray<FName> StreamingLevelNames;                                                         // 0x0378 (0x10)
    bool bEditorPreVisOnly;                                                                    // 0x0388 (0x01) BitMask: 0x01
    bool bDisabled;                                                                            // 0x0388 (0x01) BitMask: 0x02
    uint8 StreamingUsage;                                                                      // 0x038C (0x01)
};

// ============================================================
// Inheritance: StreamingLevelsToConsider
// Package: /Script/Engine
// ============================================================
struct StreamingLevelsToConsider {
public:
    TArray<LevelStreaming*> StreamingLevels;                                                   // 0x0000 (0x10)
};

// ============================================================
// Inheritance: DemoNetDriver : NetDriver : Object
// Package: /Script/Engine
// ============================================================
class DemoNetDriver : public NetDriver {
public:
    TMap<FString, RollbackNetStartupActorInfo> RollbackNetStartupActors;                       // 0x08E8 (0x50)
    float CheckpointSaveMaxMSPerFrame;                                                         // 0x0A94 (0x04)
    TArray<MulticastRecordOptions> MulticastRecordOptions;                                     // 0x0AB8 (0x10)
    bool bIsLocalReplay;                                                                       // 0x0AC8 (0x01) BitMask: 0xFF
    TArray<PlayerController*> SpectatorControllers;                                            // 0x0AD0 (0x10)
};

// ============================================================
// Inheritance: RollbackNetStartupActorInfo
// Package: /Script/Engine
// ============================================================
struct RollbackNetStartupActorInfo {
public:
    Object* Archetype;                                                                         // 0x0008 (0x08)
    Level* Level;                                                                              // 0x0038 (0x08)
    TArray<Object*> ObjReferences;                                                             // 0x00A0 (0x10)
};

// ============================================================
// Inheritance: MulticastRecordOptions
// Package: /Script/Engine
// ============================================================
struct MulticastRecordOptions {
public:
    FString FuncPathName;                                                                      // 0x0000 (0x10)
    bool bServerSkip;                                                                          // 0x0010 (0x01) BitMask: 0xFF
    bool bClientSkip;                                                                          // 0x0011 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: ParticleEventManager : Actor : Object
// Package: /Script/Engine
// ============================================================
class ParticleEventManager : public Actor {
public:
};

// ============================================================
// Inheritance: NavigationSystemBase : Object
// Package: /Script/Engine
// ============================================================
class NavigationSystemBase : public Object {
public:
};

// ============================================================
// Inheritance: AISystemBase : Object
// Package: /Script/Engine
// ============================================================
class AISystemBase : public Object {
public:
    SoftClassPath AISystemClassName;                                                           // 0x0028 (0x18)
    FName AISystemModuleName;                                                                  // 0x0040 (0x08)
    bool bInstantiateAISystemOnClient;                                                         // 0x0050 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: AvoidanceManager : Object
// Package: /Script/Engine
// ============================================================
class AvoidanceManager : public Object {
public:
    float DefaultTimeToLive;                                                                   // 0x0030 (0x04)
    float LockTimeAfterAvoid;                                                                  // 0x0034 (0x04)
    float LockTimeAfterClean;                                                                  // 0x0038 (0x04)
    float DeltaTimeToPredict;                                                                  // 0x003C (0x04)
    float ArtificialRadiusExpansion;                                                           // 0x0040 (0x04)
    float TestHeightDifference;                                                                // 0x0044 (0x04)
    float HeightCheckMargin;                                                                   // 0x0048 (0x04)

    // --- Functions ---
    bool RegisterMovementComponent(MovementComponent* MovementComp, float AvoidanceWeight);    // [Final|Public] RVA: 0x7BB95C8
    int32 GetObjectCount();                                                                    // [Final|Public] RVA: 0x7BB95AC
    int32 GetNewAvoidanceUID();                                                                // [Final|Public] RVA: 0x7BB9588
    Vector GetAvoidanceVelocityForComponent(MovementComponent* MovementComp);                  // [Final|Public] RVA: 0x7BB94D0
};

// ============================================================
// Inheritance: LevelCollection
// Package: /Script/Engine
// ============================================================
struct LevelCollection {
public:
    GameStateBase* GameState;                                                                  // 0x0008 (0x08)
    NetDriver* NetDriver;                                                                      // 0x0010 (0x08)
    DemoNetDriver* DemoNetDriver;                                                              // 0x0018 (0x08)
    Level* PersistentLevel;                                                                    // 0x0020 (0x08)
    TSet<Level*> Levels;                                                                       // 0x0028 (0x50)
};

// ============================================================
// Inheritance: MaterialParameterCollectionInstance : Object
// Package: /Script/Engine
// ============================================================
class MaterialParameterCollectionInstance : public Object {
public:
    MaterialParameterCollection* Collection;                                                   // 0x0030 (0x08)
};

// ============================================================
// Inheritance: WorldComposition : Object
// Package: /Script/Engine
// ============================================================
class WorldComposition : public Object {
public:
    TArray<LevelStreaming*> TilesStreaming;                                                    // 0x0048 (0x10)
    double TilesStreamingTimeThreshold;                                                        // 0x0058 (0x08)
    bool bLoadAllTilesDuringCinematic;                                                         // 0x0060 (0x01) BitMask: 0xFF
    bool bRebaseOriginIn3DSpace;                                                               // 0x0061 (0x01) BitMask: 0xFF
    float RebaseOriginDistance;                                                                // 0x0064 (0x04)
    bool bIgnoreRootTiles;                                                                     // 0x0068 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: WorldPSCPool
// Package: /Script/Engine
// ============================================================
struct WorldPSCPool {
public:
    TMap<ParticleSystem*, PSCPool> WorldParticleSystemPools;                                   // 0x0000 (0x50)
};

// ============================================================
// Inheritance: PSCPool
// Package: /Script/Engine
// ============================================================
struct PSCPool {
public:
    TArray<PSCPoolElem> FreeElements;                                                          // 0x0000 (0x10)
    TArray<ParticleSystemComponent*> InUseComponents_Auto;                                     // 0x0010 (0x10)
    TArray<ParticleSystemComponent*> InUseComponents_Manual;                                   // 0x0020 (0x10)
};

// ============================================================
// Inheritance: PSCPoolElem
// Package: /Script/Engine
// ============================================================
struct PSCPoolElem {
public:
    ParticleSystemComponent* PSC;                                                              // 0x0000 (0x08)
};

// ============================================================
// Inheritance: LoadRegistActor_C : Actor : Object
// Package: /Game/Login/Blueprints/LoadRegistActor
// ============================================================
class LoadRegistActor_C : public Actor {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0318 (0x08)
    SceneComponent* DefaultSceneRoot;                                                          // 0x0320 (0x08)
    FMulticastDelegate MapLoadedEvent;                                                         // 0x0328 (0x10)

    // --- Functions ---
    FString GetModuleName();                                                                   // [Public] RVA: 0x182D6BC
    void LoadMap();                                                                            // RVA: 0x182D6BC
    void OnLoadMap();                                                                          // RVA: 0x182D6BC
    void ExecuteUbergraph_LoadRegistActor(int32 EntryPoint);                                   // [Final] RVA: 0x182D6BC
    void MapLoadedEvent__DelegateSignature();                                                  // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: PointerToUberGraphFrame
// Package: /Script/Engine
// ============================================================
struct PointerToUberGraphFrame {
public:
};

// ============================================================
// Inheritance: BP_LoginGamemode_C : GameMode : GameModeBase : Info : Actor : Object
// Package: /Game/Login/Blueprints/BP_LoginGamemode
// ============================================================
class BP_LoginGamemode_C : public GameMode {
public:
    SceneComponent* DefaultSceneRoot;                                                          // 0x0400 (0x08)
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
    void StartMatch();                                                                         // [Public] RVA: 0x5ECF9F8
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);                                       // [Public] RVA: 0x5E7CE10
    void Say(FString Msg);                                                                     // [Public] RVA: 0x7BE44A4
    void RestartGame();                                                                        // [Public] RVA: 0x5ECFA28
    bool ReadyToStartMatch();                                                                  // [Protected] RVA: 0x22A6EBC
    bool ReadyToEndMatch();                                                                    // [Protected] RVA: 0x1CC4D90
    bool NeedBlockLoadLevelWhenStartMatch();                                                   // [Protected] RVA: 0x279D62C
    void K2_OnSetMatchState(FName NewState);                                                   // [Protected] RVA: 0x182D6BC
    bool IsMatchInProgress();                                                                  // [Public] RVA: 0x7BE1100
    FName GetMatchState();                                                                     // [Final|Public] RVA: 0x7BDFF10
    void EndMatch();                                                                           // [Public] RVA: 0x5ECFA10
    void AbortMatch();                                                                         // [Public] RVA: 0x5ECF890
};

// ============================================================
// Inheritance: LoginMap_C : LevelScriptActor : Actor : Object
// Package: /Game/Login/Levels/LoginMap
// ============================================================
class LoginMap_C : public LevelScriptActor {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0320 (0x08)

    // --- Functions ---
    void ReceiveBeginPlay();                                                                   // [Protected] RVA: 0x182D6BC
    void ExecuteUbergraph_LoginMap(int32 EntryPoint, PlayerController* CallFunc_GetPlayerController_ReturnValue);  // [Final] RVA: 0x182D6BC
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
    void OnRep_MatchState();                                                                   // [Public] RVA: 0x29ADB60
    void OnRep_ElapsedTime();                                                                  // [Public] RVA: 0x29B7C5C
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
// Inheritance: NavDataConfig : NavAgentProperties : MovementProperties
// Package: /Script/Engine
// ============================================================
struct NavDataConfig : public NavAgentProperties {
public:
    FName Name;                                                                                // 0x0030 (0x08)
    Color Color;                                                                               // 0x0038 (0x04)
    Vector DefaultQueryExtent;                                                                 // 0x003C (0x0C)
    TSubclassOf<Actor> NavigationDataClass;                                                    // 0x0048 (0x08)
    TSubclassOf<Actor> NavDataClass;                                                           // 0x0050 (0x28)
};

// ============================================================
// Inheritance: SupportedAreaData
// Package: /Script/NavigationSystem
// ============================================================
struct SupportedAreaData {
public:
    FString AreaClassName;                                                                     // 0x0000 (0x10)
    int32 AreaID;                                                                              // 0x0010 (0x04)
    TSubclassOf<Object> AreaClass;                                                             // 0x0018 (0x08)
};

// ============================================================
// Inheritance: BP_LoginPlayerController_C : PlayerController : Controller : Actor : Object
// Package: /Game/Login/Blueprints/BP_LoginPlayerController
// ============================================================
class BP_LoginPlayerController_C : public PlayerController {
public:
    PointerToUberGraphFrame UberGraphFrame;                                                    // 0x0678 (0x08)

    // --- Functions ---
    void InpActEvt_Android_Back_K2Node_InputKeyEvent(Key Key);                                 // RVA: 0x182D6BC
    void ExecuteUbergraph_BP_LoginPlayerController(int32 EntryPoint, SGGameInstance* CallFunc_GetGameInstance_ReturnValue, BP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, Key K2Node_InputKeyEvent_Key);  // [Final] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: SGGameInstance : GameInstance : Object
// Package: /Script/SGFramework
// ============================================================
class SGGameInstance : public GameInstance {
public:
    FMulticastDelegate OnWorldBeginPlay;                                                       // 0x01D0 (0x10)
    int32 DeviceLevel_HighEnd;                                                                 // 0x0200 (0x04)
    FMulticastDelegate OnScreenOrientationChanged;                                             // 0x0208 (0x10)
    PlayerController* CacheLocalPC;                                                            // 0x0218 (0x08)
    TArray<TSubclassOf<SGGameInstanceComponent>> ComponentClasses;                             // 0x0220 (0x10)
    TArray<SGGameInstanceComponent*> Components;                                               // 0x0230 (0x10)
    TArray<Package*> CachePackages;                                                            // 0x0258 (0x10)
    TArray<World*> CacheWorlds;                                                                // 0x0268 (0x10)
    TMap<FString, FString> MapNameToPath;                                                      // 0x0278 (0x50)
    TMap<MeshComponent*, GameCustomDepthStencilInfoStack> MeshCustomDepthStencilInfo;          // 0x0318 (0x50)

    // --- Functions ---
    void SendLog(const out ref FString savePath);                                              // [Final|Public] RVA: 0x5D6EF74
    void SendLocalLog(const out ref FString savePath, const out ref FString LocalLogName);     // [Final|Public] RVA: 0x5D6F168
    void SendCppPatch(const out ref FString PatchPath, const out ref FString SymPath);         // [Final|Public] RVA: 0x5D6F054
    void ReportLuaErrorMsg(out FString Err);                                                   // [Final|Public] RVA: 0x5D6EF74
    int32 GetSubModeID();                                                                      // [Final|Public] RVA: 0xFA26F4
    int32 GetRuleID();                                                                         // [Final|Public] RVA: 0xFA26BC
    SGGameInstanceComponent* FindGIComponentByClass(TSubclassOf<SGGameInstanceComponent> InClass);  // [Final|Public] RVA: 0x5D6D214
    FString ExecDoString(out FString Cmd);                                                     // [Final|Public] RVA: 0x2156438
    void BeginCacheMap(FString MapName);                                                       // [Final|Public] RVA: 0x5D6BF10
};

// ============================================================
// Inheritance: SGGameInstanceComponent : Object
// Package: /Script/SGFramework
// ============================================================
class SGGameInstanceComponent : public Object {
public:
};

// ============================================================
// Inheritance: GameCustomDepthStencilInfoStack
// Package: /Script/SGFramework
// ============================================================
struct GameCustomDepthStencilInfoStack {
public:
};

// ============================================================
// Inheritance: BP_GameInstance_C : SGGameInstance : GameInstance : Object
// Package: /Game/Startup/GameBase/BP_GameInstance
// ============================================================
class BP_GameInstance_C : public SGGameInstance {
public:
    FMulticastDelegate OnAndroidBackPressed;                                                   // 0x0368 (0x10)

    // --- Functions ---
    void OnAndroidBackPressed__DelegateSignature();                                            // [Public] RVA: 0x182D6BC
};

// ============================================================
// Inheritance: NiagaraUIActor : Actor : Object
// Package: /Script/NiagaraUIRenderer
// ============================================================
class NiagaraUIActor : public Actor {
public:
    NiagaraUIComponent* NiagaraUIComponent;                                                    // 0x0318 (0x08)
};

// ============================================================
// Inheritance: NiagaraUIComponent : NiagaraComponent : FXSystemComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/NiagaraUIRenderer
// ============================================================
class NiagaraUIComponent : public NiagaraComponent {
public:
};

// ============================================================
// Inheritance: NiagaraComponent : FXSystemComponent : PrimitiveComponent : SceneComponent : ActorComponent : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraComponent : public FXSystemComponent {
public:
    NiagaraSystem* Asset;                                                                      // 0x04F0 (0x08)
    enum TickBehavior;                                                                         // 0x04F8 (0x01)
    NiagaraUserRedirectionParameterStore OverrideParameters;                                   // 0x0500 (0xC8)
    bool bForceSolo;                                                                           // 0x05C8 (0x01) BitMask: 0x01
    bool bEnableGpuComputeDebug;                                                               // 0x05C8 (0x01) BitMask: 0x02
    bool bAutoDestroy;                                                                         // 0x05F4 (0x01) BitMask: 0x01
    bool bRenderingEnabled;                                                                    // 0x05F4 (0x01) BitMask: 0x02
    bool bAutoManageAttachment;                                                                // 0x05F4 (0x01) BitMask: 0x04
    bool bAutoAttachWeldSimulatedBodies;                                                       // 0x05F4 (0x01) BitMask: 0x08
    float MaxTimeBeforeForceUpdateTransform;                                                   // 0x05F8 (0x04)
    TArray<NiagaraMaterialOverride> EmitterMaterials;                                          // 0x0600 (0x10)
    FMulticastDelegate OnSystemFinished;                                                       // 0x0618 (0x10)
    SceneComponent* AutoAttachParent;                                                          // 0x0628 (0x08)
    FName AutoAttachSocketName;                                                                // 0x0630 (0x08)
    enum AutoAttachLocationRule;                                                               // 0x0638 (0x01)
    enum AutoAttachRotationRule;                                                               // 0x0639 (0x01)
    enum AutoAttachScaleRule;                                                                  // 0x063A (0x01)

    // --- Functions ---
    void SetVariableVec4(FName InVariableName, const out ref Vector4 InValue);                 // [Final|Public] RVA: 0x4B973F4
    void SetVariableVec3(FName InVariableName, Vector InValue);                                // [Final|Public] RVA: 0x4B972F8
    void SetVariableVec2(FName InVariableName, Vector2D InValue);                              // [Final|Public] RVA: 0x4B97214
    void SetVariableTextureRenderTarget(FName InVariableName, TextureRenderTarget* TextureRenderTarget);  // [Final|Public] RVA: 0x4B9712C
    void SetVariableQuat(FName InVariableName, const out ref Quat InValue);                    // [Final|Public] RVA: 0x4B97034
    void SetVariableObject(FName InVariableName, Object* Object);                              // [Final|Public] RVA: 0x4B96AB4
    void SetVariableMaterial(FName InVariableName, MaterialInterface* Object);                 // [Final|Public] RVA: 0x4B96F4C
    void SetVariableLinearColor(FName InVariableName, const out ref LinearColor InValue);      // [Final|Public] RVA: 0x4B96E54
    void SetVariableInt(FName InVariableName, int32 InValue);                                  // [Final|Public] RVA: 0x4B96D6C
    void SetVariableFloat(FName InVariableName, float InValue);                                // [Final|Public] RVA: 0x4B96C84
    void SetVariableBool(FName InVariableName, bool InValue);                                  // [Final|Public] RVA: 0x4B96B9C
    void SetVariableActor(FName InVariableName, Actor* Actor);                                 // [Final|Public] RVA: 0x4B96AB4
    void SetTickBehavior(enum NewTickBehavior);                                                // [Final|Public] RVA: 0x4B96A18
    void SetSeekDelta(float InSeekDelta);                                                      // [Final|Public] RVA: 0x4B9697C
    void SetRenderingEnabled(bool bInRenderingEnabled);                                        // [Final|Public] RVA: 0x4B968D4
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);      // [Final|Public] RVA: 0x4B96800
    void SetPaused(bool bInPaused);                                                            // [Final|Public] RVA: 0x4B96764
    void SetNiagaraVariableVec4(FString InVariableName, const out ref Vector4 InValue);        // [Final|Public] RVA: 0x4B965FC
    void SetNiagaraVariableVec3(FString InVariableName, Vector InValue);                       // [Final|Public] RVA: 0x4B964C4
    void SetNiagaraVariableVec2(FString InVariableName, Vector2D InValue);                     // [Final|Public] RVA: 0x4B96398
    void SetNiagaraVariableQuat(FString InVariableName, const out ref Quat InValue);           // [Final|Public] RVA: 0x4B96264
    void SetNiagaraVariableObject(FString InVariableName, Object* Object);                     // [Final|Public] RVA: 0x4B95F38
    void SetNiagaraVariableLinearColor(FString InVariableName, const out ref LinearColor InValue);  // [Final|Public] RVA: 0x4B9615C
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);                         // [Final|Public] RVA: 0x1669140
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);                       // [Final|Public] RVA: 0x157CE9C
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);                         // [Final|Public] RVA: 0x4B9603C
    void SetNiagaraVariableActor(FString InVariableName, Actor* Actor);                        // [Final|Public] RVA: 0x4B95F38
    void SetMaxSimTime(float InMaxTime);                                                       // [Final|Public] RVA: 0x4B95E9C
    void SetGpuComputeDebug(bool bEnableDebug);                                                // [Final|Public] RVA: 0x4B95DE8
    void SetForceSolo(bool bInForceSolo);                                                      // [Final|Public] RVA: 0x4B95D4C
    void SetDesiredAge(float InDesiredAge);                                                    // [Final|Public] RVA: 0x4B95CB4
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                              // [Final|Public] RVA: 0x4B95C1C
    void SetAutoDestroy(bool bInAutoDestroy);                                                  // [Final|Public] RVA: 0x4B95B84
    void SetAsset(NiagaraSystem* InAsset);                                                     // [Final|Public] RVA: 0x229D4F4
    void SetAllowScalability(bool bAllow);                                                     // [Final|Public] RVA: 0x4B95AD8
    void SetAgeUpdateMode(enum InAgeUpdateMode);                                               // [Final|Public] RVA: 0x4B95A44
    void SeekToDesiredAge(float InDesiredAge);                                                 // [Final|Public] RVA: 0x4B959A0
    void ResetSystem();                                                                        // [Final|Public] RVA: 0x4B95984
    void ReinitializeSystem();                                                                 // [Final|Public] RVA: 0x1385640
    bool IsPaused();                                                                           // [Final|Public] RVA: 0x4B9595C
    enum GetTickBehavior();                                                                    // [Final|Public] RVA: 0x4B95944
    float GetSeekDelta();                                                                      // [Final|Public] RVA: 0x4B9592C
    bool GetPreviewLODDistanceEnabled();                                                       // [Final|Public] RVA: 0x21793E8
    int32 GetPreviewLODDistance();                                                             // [Final|Public] RVA: 0x4B95918
    TArray<Vector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);  // [Final|Public] RVA: 0x4B956B8
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);  // [Final|Public] RVA: 0x4B957E8
    TArray<Vector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);               // [Final|Public] RVA: 0x4B954AC
    float GetMaxSimTime();                                                                     // [Final|Public] RVA: 0x4B95494
    bool GetForceSolo();                                                                       // [Final|Public] RVA: 0x4B95478
    float GetDesiredAge();                                                                     // [Final|Public] RVA: 0x4B95460
    NiagaraDataInterface* GetDataInterface(FString Name);                                      // [Final|Public] RVA: 0x4B95354
    NiagaraSystem* GetAsset();                                                                 // [Final|Public] RVA: 0x4B9533C
    enum GetAgeUpdateMode();                                                                   // [Final|Public] RVA: 0x4B95324
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                  // [Final|Public] RVA: 0x4B9521C
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);                           // [Final|Public] RVA: 0x4B950B0
};

// ============================================================
// Inheritance: NiagaraSystem : FXSystemAsset : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraSystem : public FXSystemAsset {
public:
    bool bDumpDebugSystemInfo;                                                                 // 0x0030 (0x01) BitMask: 0xFF
    bool bDumpDebugEmitterInfo;                                                                // 0x0031 (0x01) BitMask: 0xFF
    bool bRequireCurrentFrameData;                                                             // 0x0032 (0x01) BitMask: 0xFF
    bool bFixedBounds;                                                                         // 0x0034 (0x01) BitMask: 0x01
    NiagaraEffectType* EffectType;                                                             // 0x0038 (0x08)
    bool bOverrideScalabilitySettings;                                                         // 0x0040 (0x01) BitMask: 0xFF
    TArray<NiagaraSystemScalabilityOverride> ScalabilityOverrides;                             // 0x0048 (0x10)
    NiagaraSystemScalabilityOverrides SystemScalabilityOverrides;                              // 0x0058 (0x10)
    TArray<NiagaraEmitterHandle> EmitterHandles;                                               // 0x0068 (0x10)
    TArray<NiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                  // 0x0078 (0x10)
    NiagaraScript* SystemSpawnScript;                                                          // 0x0088 (0x08)
    NiagaraScript* SystemUpdateScript;                                                         // 0x0090 (0x08)
    NiagaraSystemCompiledData SystemCompiledData;                                              // 0x00A8 (0x218)
    NiagaraUserRedirectionParameterStore ExposedParameters;                                    // 0x02C0 (0xC8)
    Box FixedBounds;                                                                           // 0x0388 (0x1C)
    bool bAutoDeactivate;                                                                      // 0x03A4 (0x01) BitMask: 0xFF
    float WarmupTime;                                                                          // 0x03A8 (0x04)
    int32 WarmupTickCount;                                                                     // 0x03AC (0x04)
    float WarmupTickDelta;                                                                     // 0x03B0 (0x04)
    bool bHasSystemScriptDIsWithPerInstanceData;                                               // 0x03B4 (0x01) BitMask: 0xFF
    TArray<FName> UserDINamesReadInSystemScripts;                                              // 0x03B8 (0x10)
};

// ============================================================
// Inheritance: NiagaraEffectType : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraEffectType : public Object {
public:
    enum UpdateFrequency;                                                                      // 0x0028 (0x04)
    enum CullReaction;                                                                         // 0x002C (0x04)
    NiagaraSignificanceHandler* SignificanceHandler;                                           // 0x0030 (0x08)
    TArray<NiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;                   // 0x0038 (0x10)
    NiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                           // 0x0048 (0x10)
    NiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;                         // 0x0058 (0x10)
};

// ============================================================
// Inheritance: NiagaraSignificanceHandler : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraSignificanceHandler : public Object {
public:
};

// ============================================================
// Inheritance: NiagaraSystemScalabilitySettings
// Package: /Script/Niagara
// ============================================================
struct NiagaraSystemScalabilitySettings {
public:
    NiagaraPlatformSet Platforms;                                                              // 0x0000 (0x30)
    bool bCullByDistance;                                                                      // 0x0030 (0x01) BitMask: 0x01
    bool bCullMaxInstanceCount;                                                                // 0x0030 (0x01) BitMask: 0x02
    bool bCullPerSystemMaxInstanceCount;                                                       // 0x0030 (0x01) BitMask: 0x04
    bool bCullByMaxTimeWithoutRender;                                                          // 0x0030 (0x01) BitMask: 0x08
    float MaxDistance;                                                                         // 0x0034 (0x04)
    int32 MaxInstances;                                                                        // 0x0038 (0x04)
    int32 MaxSystemInstances;                                                                  // 0x003C (0x04)
    float MaxTimeWithoutRender;                                                                // 0x0040 (0x04)
};

// ============================================================
// Inheritance: NiagaraPlatformSet
// Package: /Script/Niagara
// ============================================================
struct NiagaraPlatformSet {
public:
    int32 QualityLevelMask;                                                                    // 0x0000 (0x04)
    TArray<NiagaraDeviceProfileStateEntry> DeviceProfileStates;                                // 0x0008 (0x10)
    TArray<NiagaraPlatformSetCVarCondition> CVarConditions;                                    // 0x0018 (0x10)
};

// ============================================================
// Inheritance: NiagaraDeviceProfileStateEntry
// Package: /Script/Niagara
// ============================================================
struct NiagaraDeviceProfileStateEntry {
public:
    FName ProfileName;                                                                         // 0x0000 (0x08)
    uint32 QualityLevelMask;                                                                   // 0x0008 (0x04)
    uint32 SetQualityLevelMask;                                                                // 0x000C (0x04)
};

// ============================================================
// Inheritance: NiagaraPlatformSetCVarCondition
// Package: /Script/Niagara
// ============================================================
struct NiagaraPlatformSetCVarCondition {
public:
    FName CVarName;                                                                            // 0x0000 (0x08)
    bool Value;                                                                                // 0x0008 (0x01) BitMask: 0xFF
    int32 MinInt;                                                                              // 0x000C (0x04)
    int32 MaxInt;                                                                              // 0x0010 (0x04)
    float MinFloat;                                                                            // 0x0014 (0x04)
    float MaxFloat;                                                                            // 0x0018 (0x04)
    bool bUseMinInt;                                                                           // 0x001C (0x01) BitMask: 0x01
    bool bUseMaxInt;                                                                           // 0x001C (0x01) BitMask: 0x02
    bool bUseMinFloat;                                                                         // 0x001C (0x01) BitMask: 0x04
    bool bUseMaxFloat;                                                                         // 0x001C (0x01) BitMask: 0x08
};

// ============================================================
// Inheritance: NiagaraSystemScalabilitySettingsArray
// Package: /Script/Niagara
// ============================================================
struct NiagaraSystemScalabilitySettingsArray {
public:
    TArray<NiagaraSystemScalabilitySettings> Settings;                                         // 0x0000 (0x10)
};

// ============================================================
// Inheritance: NiagaraEmitterScalabilitySettingsArray
// Package: /Script/Niagara
// ============================================================
struct NiagaraEmitterScalabilitySettingsArray {
public:
    TArray<NiagaraEmitterScalabilitySettings> Settings;                                        // 0x0000 (0x10)
};

// ============================================================
// Inheritance: NiagaraEmitterScalabilitySettings
// Package: /Script/Niagara
// ============================================================
struct NiagaraEmitterScalabilitySettings {
public:
    NiagaraPlatformSet Platforms;                                                              // 0x0000 (0x30)
    bool bScaleSpawnCount;                                                                     // 0x0030 (0x01) BitMask: 0x01
    float SpawnCountScale;                                                                     // 0x0034 (0x04)
};

// ============================================================
// Inheritance: NiagaraSystemScalabilityOverride : NiagaraSystemScalabilitySettings
// Package: /Script/Niagara
// ============================================================
struct NiagaraSystemScalabilityOverride : public NiagaraSystemScalabilitySettings {
public:
    bool bOverrideDistanceSettings;                                                            // 0x0048 (0x01) BitMask: 0x01
    bool bOverrideInstanceCountSettings;                                                       // 0x0048 (0x01) BitMask: 0x02
    bool bOverridePerSystemInstanceCountSettings;                                              // 0x0048 (0x01) BitMask: 0x04
    bool bOverrideTimeSinceRendererSettings;                                                   // 0x0048 (0x01) BitMask: 0x08
};

// ============================================================
// Inheritance: NiagaraSystemScalabilityOverrides
// Package: /Script/Niagara
// ============================================================
struct NiagaraSystemScalabilityOverrides {
public:
    TArray<NiagaraSystemScalabilityOverride> Overrides;                                        // 0x0000 (0x10)
};

// ============================================================
// Inheritance: NiagaraEmitterHandle
// Package: /Script/Niagara
// ============================================================
struct NiagaraEmitterHandle {
public:
    Guid ID;                                                                                   // 0x0000 (0x10)
    FName IdName;                                                                              // 0x0010 (0x08)
    bool bIsEnabled;                                                                           // 0x0018 (0x01) BitMask: 0xFF
    FName Name;                                                                                // 0x001C (0x08)
    NiagaraEmitter* Instance;                                                                  // 0x0028 (0x08)
};

// ============================================================
// Inheritance: NiagaraEmitter : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraEmitter : public Object {
public:
    bool bLocalSpace;                                                                          // 0x0028 (0x01) BitMask: 0xFF
    bool bDeterminism;                                                                         // 0x0029 (0x01) BitMask: 0xFF
    int32 RandomSeed;                                                                          // 0x002C (0x04)
    enum AllocationMode;                                                                       // 0x0030 (0x01)
    int32 PreAllocationCount;                                                                  // 0x0034 (0x04)
    NiagaraEmitterScriptProperties UpdateScriptProps;                                          // 0x0038 (0x28)
    NiagaraEmitterScriptProperties SpawnScriptProps;                                           // 0x0060 (0x28)
    enum SimTarget;                                                                            // 0x0088 (0x01)
    Box FixedBounds;                                                                           // 0x008C (0x1C)
    int32 MinDetailLevel;                                                                      // 0x00A8 (0x04)
    int32 MaxDetailLevel;                                                                      // 0x00AC (0x04)
    NiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;                          // 0x00B0 (0x14)
    NiagaraPlatformSet Platforms;                                                              // 0x00C8 (0x30)
    NiagaraEmitterScalabilityOverrides ScalabilityOverrides;                                   // 0x00F8 (0x10)
    bool bInterpolatedSpawning;                                                                // 0x0108 (0x01) BitMask: 0x01
    bool bFixedBounds;                                                                         // 0x0108 (0x01) BitMask: 0x02
    bool bUseMinDetailLevel;                                                                   // 0x0108 (0x01) BitMask: 0x04
    bool bUseMaxDetailLevel;                                                                   // 0x0108 (0x01) BitMask: 0x08
    bool bOverrideGlobalSpawnCountScale;                                                       // 0x0108 (0x01) BitMask: 0x10
    bool bRequiresPersistentIDs;                                                               // 0x0108 (0x01) BitMask: 0x20
    bool bCombineEventSpawn;                                                                   // 0x0108 (0x01) BitMask: 0x40
    float MaxDeltaTimePerTick;                                                                 // 0x010C (0x04)
    uint32 DefaultShaderStageIndex;                                                            // 0x0110 (0x04)
    uint32 MaxUpdateIterations;                                                                // 0x0114 (0x04)
    TSet<uint32> SpawnStages;                                                                  // 0x0118 (0x50)
    bool bSimulationStagesEnabled;                                                             // 0x0168 (0x01) BitMask: 0x01
    bool bDeprecatedShaderStagesEnabled;                                                       // 0x0168 (0x01) BitMask: 0x02
    bool bLimitDeltaTime;                                                                      // 0x0168 (0x01) BitMask: 0x04
    FString UniqueEmitterName;                                                                 // 0x0170 (0x10)
    TArray<NiagaraRendererProperties*> RendererProperties;                                     // 0x0180 (0x10)
    TArray<NiagaraEventScriptProperties> EventHandlerScriptProps;                              // 0x0190 (0x10)
    TArray<NiagaraSimulationStageBase*> SimulationStages;                                      // 0x01A0 (0x10)
    NiagaraScript* GPUComputeScript;                                                           // 0x01B0 (0x08)
    TArray<FName> SharedEventGeneratorIds;                                                     // 0x01B8 (0x10)
};

// ============================================================
// Inheritance: NiagaraEmitterScriptProperties
// Package: /Script/Niagara
// ============================================================
struct NiagaraEmitterScriptProperties {
public:
    NiagaraScript* Script;                                                                     // 0x0000 (0x08)
    TArray<NiagaraEventReceiverProperties> EventReceivers;                                     // 0x0008 (0x10)
    TArray<NiagaraEventGeneratorProperties> EventGenerators;                                   // 0x0018 (0x10)
};

// ============================================================
// Inheritance: NiagaraScript : NiagaraScriptBase : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraScript : public NiagaraScriptBase {
public:
    enum Usage;                                                                                // 0x0028 (0x01)
    int32 UsageIndex;                                                                          // 0x002C (0x04)
    Guid UsageId;                                                                              // 0x0030 (0x10)
    NiagaraParameterStore RapidIterationParameters;                                            // 0x0040 (0x78)
    NiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                            // 0x00B8 (0x98)
    TArray<NiagaraBoundParameter> ScriptExecutionBoundParameters;                              // 0x0150 (0x10)
    NiagaraVMExecutableDataId CachedScriptVMId;                                                // 0x0160 (0x48)
    NiagaraVMExecutableData CachedScriptVM;                                                    // 0x01B8 (0xE0)
    TArray<NiagaraParameterCollection*> CachedParameterCollectionReferences;                   // 0x0298 (0x10)
    TArray<NiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                        // 0x02A8 (0x10)

    // --- Functions ---
    void RaiseOnGPUCompilationComplete();                                                      // [Final|Public] RVA: 0x1E39048
};

// ============================================================
// Inheritance: NiagaraScriptBase : Object
// Package: /Script/NiagaraShader
// ============================================================
class NiagaraScriptBase : public Object {
public:
};

// ============================================================
// Inheritance: NiagaraParameterStore
// Package: /Script/Niagara
// ============================================================
struct NiagaraParameterStore {
public:
    Object* Owner;                                                                             // 0x0008 (0x08)
    TArray<NiagaraVariableWithOffset> SortedParameterOffsets;                                  // 0x0010 (0x10)
    TArray<uint8> ParameterData;                                                               // 0x0020 (0x10)
    TArray<NiagaraDataInterface*> DataInterfaces;                                              // 0x0030 (0x10)
    TArray<Object*> UObjects;                                                                  // 0x0040 (0x10)
};

// ============================================================
// Inheritance: NiagaraVariableWithOffset : NiagaraVariableBase
// Package: /Script/Niagara
// ============================================================
struct NiagaraVariableWithOffset : public NiagaraVariableBase {
public:
    int32 Offset;                                                                              // 0x000C (0x04)
};

// ============================================================
// Inheritance: NiagaraVariableBase
// Package: /Script/Niagara
// ============================================================
struct NiagaraVariableBase {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    NiagaraTypeDefinitionHandle TypeDefHandle;                                                 // 0x0008 (0x04)
};

// ============================================================
// Inheritance: NiagaraTypeDefinitionHandle
// Package: /Script/Niagara
// ============================================================
struct NiagaraTypeDefinitionHandle {
public:
    int32 RegisteredTypeIndex;                                                                 // 0x0000 (0x04)
};

// ============================================================
// Inheritance: NiagaraDataInterface : NiagaraDataInterfaceBase : NiagaraMergeable : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraDataInterface : public NiagaraDataInterfaceBase {
public:
};

// ============================================================
// Inheritance: NiagaraDataInterfaceBase : NiagaraMergeable : Object
// Package: /Script/NiagaraCore
// ============================================================
class NiagaraDataInterfaceBase : public NiagaraMergeable {
public:
};

// ============================================================
// Inheritance: NiagaraMergeable : Object
// Package: /Script/NiagaraCore
// ============================================================
class NiagaraMergeable : public Object {
public:
};

// ============================================================
// Inheritance: NiagaraScriptExecutionParameterStore : NiagaraParameterStore
// Package: /Script/Niagara
// ============================================================
struct NiagaraScriptExecutionParameterStore : public NiagaraParameterStore {
public:
    int32 ParameterSize;                                                                       // 0x0078 (0x04)
    uint32 PaddedParameterSize;                                                                // 0x007C (0x04)
    TArray<NiagaraScriptExecutionPaddingInfo> PaddingInfo;                                     // 0x0080 (0x10)
    bool bInitialized;                                                                         // 0x0090 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: NiagaraScriptExecutionPaddingInfo
// Package: /Script/Niagara
// ============================================================
struct NiagaraScriptExecutionPaddingInfo {
public:
    uint16 SrcOffset;                                                                          // 0x0000 (0x02)
    uint16 DestOffset;                                                                         // 0x0002 (0x02)
    uint16 SrcSize;                                                                            // 0x0004 (0x02)
    uint16 DestSize;                                                                           // 0x0006 (0x02)
};

// ============================================================
// Inheritance: NiagaraBoundParameter
// Package: /Script/Niagara
// ============================================================
struct NiagaraBoundParameter {
public:
    NiagaraVariable Parameter;                                                                 // 0x0000 (0x20)
    int32 SrcOffset;                                                                           // 0x0020 (0x04)
    int32 DestOffset;                                                                          // 0x0024 (0x04)
};

// ============================================================
// Inheritance: NiagaraVariable : NiagaraVariableBase
// Package: /Script/Niagara
// ============================================================
struct NiagaraVariable : public NiagaraVariableBase {
public:
    TArray<uint8> VarData;                                                                     // 0x0010 (0x10)
};

// ============================================================
// Inheritance: NiagaraVMExecutableDataId
// Package: /Script/Niagara
// ============================================================
struct NiagaraVMExecutableDataId {
public:
    Guid CompilerVersionID;                                                                    // 0x0000 (0x10)
    enum ScriptUsageType;                                                                      // 0x0010 (0x01)
    Guid ScriptUsageTypeID;                                                                    // 0x0014 (0x10)
    bool bUsesRapidIterationParams;                                                            // 0x0024 (0x01) BitMask: 0x01
    bool bInterpolatedSpawn;                                                                   // 0x0024 (0x01) BitMask: 0x02
    bool bRequiresPersistentIDs;                                                               // 0x0024 (0x01) BitMask: 0x04
    Guid BaseScriptID;                                                                         // 0x0028 (0x10)
    NiagaraCompileHash BaseScriptCompileHash;                                                  // 0x0038 (0x10)
};

// ============================================================
// Inheritance: NiagaraCompileHash
// Package: /Script/NiagaraCore
// ============================================================
struct NiagaraCompileHash {
public:
    TArray<uint8> DataHash;                                                                    // 0x0000 (0x10)
};

// ============================================================
// Inheritance: NiagaraVMExecutableData
// Package: /Script/Niagara
// ============================================================
struct NiagaraVMExecutableData {
public:
    TArray<uint8> ByteCode;                                                                    // 0x0000 (0x10)
    TArray<uint8> OptimizedByteCode;                                                           // 0x0010 (0x10)
    int32 NumTempRegisters;                                                                    // 0x0020 (0x04)
    int32 NumUserPtrs;                                                                         // 0x0024 (0x04)
    TArray<uint8> ScriptLiterals;                                                              // 0x0028 (0x10)
    TArray<NiagaraVariable> Attributes;                                                        // 0x0038 (0x10)
    NiagaraScriptDataUsageInfo DataUsage;                                                      // 0x0048 (0x01)
    TArray<NiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                           // 0x0050 (0x10)
    TArray<VMExternalFunctionBindingInfo> CalledVMExternalFunctions;                           // 0x0060 (0x10)
    TArray<NiagaraDataSetID> ReadDataSets;                                                     // 0x0080 (0x10)
    TArray<NiagaraDataSetProperties> WriteDataSets;                                            // 0x0090 (0x10)
    TArray<NiagaraStatScope> StatScopes;                                                       // 0x00A0 (0x10)
    TArray<NiagaraDataInterfaceGPUParamInfo> DIParamInfo;                                      // 0x00B0 (0x10)
    enum LastCompileStatus;                                                                    // 0x00C0 (0x01)
    TArray<SimulationStageMetaData> SimulationStageMetaData;                                   // 0x00C8 (0x10)
    bool bReadsSignificanceIndex;                                                              // 0x00D8 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: NiagaraScriptDataUsageInfo
// Package: /Script/Niagara
// ============================================================
struct NiagaraScriptDataUsageInfo {
public:
    bool bReadsAttributeData;                                                                  // 0x0000 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: NiagaraScriptDataInterfaceCompileInfo
// Package: /Script/Niagara
// ============================================================
struct NiagaraScriptDataInterfaceCompileInfo {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    int32 UserPtrIdx;                                                                          // 0x0008 (0x04)
    NiagaraTypeDefinition Type;                                                                // 0x0010 (0x10)
    FName RegisteredParameterMapRead;                                                          // 0x0020 (0x08)
    FName RegisteredParameterMapWrite;                                                         // 0x0028 (0x08)
    bool bIsPlaceholder;                                                                       // 0x0030 (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: NiagaraTypeDefinition
// Package: /Script/Niagara
// ============================================================
struct NiagaraTypeDefinition {
public:
    Object* ClassStructOrEnum;                                                                 // 0x0000 (0x08)
    uint16 UnderlyingType;                                                                     // 0x0008 (0x02)
};

// ============================================================
// Inheritance: VMExternalFunctionBindingInfo
// Package: /Script/Niagara
// ============================================================
struct VMExternalFunctionBindingInfo {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    FName OwnerName;                                                                           // 0x0008 (0x08)
    TArray<bool> InputParamLocations;                                                          // 0x0010 (0x10)
    int32 NumOutputs;                                                                          // 0x0020 (0x04)
    TArray<VMFunctionSpecifier> FunctionSpecifiers;                                            // 0x0028 (0x10)
};

// ============================================================
// Inheritance: VMFunctionSpecifier
// Package: /Script/Niagara
// ============================================================
struct VMFunctionSpecifier {
public:
    FName Key;                                                                                 // 0x0000 (0x08)
    FName Value;                                                                               // 0x0008 (0x08)
};

// ============================================================
// Inheritance: NiagaraDataSetID
// Package: /Script/Niagara
// ============================================================
struct NiagaraDataSetID {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    enum Type;                                                                                 // 0x0008 (0x01)
};

// ============================================================
// Inheritance: NiagaraDataSetProperties
// Package: /Script/Niagara
// ============================================================
struct NiagaraDataSetProperties {
public:
    NiagaraDataSetID ID;                                                                       // 0x0000 (0x0C)
    TArray<NiagaraVariable> Variables;                                                         // 0x0010 (0x10)
};

// ============================================================
// Inheritance: NiagaraStatScope
// Package: /Script/Niagara
// ============================================================
struct NiagaraStatScope {
public:
    FName FullName;                                                                            // 0x0000 (0x08)
    FName FriendlyName;                                                                        // 0x0008 (0x08)
};

// ============================================================
// Inheritance: NiagaraDataInterfaceGPUParamInfo
// Package: /Script/NiagaraShader
// ============================================================
struct NiagaraDataInterfaceGPUParamInfo {
public:
    FString DataInterfaceHLSLSymbol;                                                           // 0x0000 (0x10)
    FString DIClassName;                                                                       // 0x0010 (0x10)
    TArray<NiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                          // 0x0020 (0x10)
};

// ============================================================
// Inheritance: NiagaraDataInterfaceGeneratedFunction
// Package: /Script/NiagaraShader
// ============================================================
struct NiagaraDataInterfaceGeneratedFunction {
public:
};

// ============================================================
// Inheritance: SimulationStageMetaData
// Package: /Script/NiagaraShader
// ============================================================
struct SimulationStageMetaData {
public:
    FName SimulationStageName;                                                                 // 0x0000 (0x08)
    FName IterationSource;                                                                     // 0x0008 (0x08)
    bool bSpawnOnly;                                                                           // 0x0010 (0x01) BitMask: 0x01
    bool bWritesParticles;                                                                     // 0x0010 (0x01) BitMask: 0x02
    bool bPartialParticleUpdate;                                                               // 0x0010 (0x01) BitMask: 0x04
    TArray<FName> OutputDestinations;                                                          // 0x0018 (0x10)
    int32 MinStage;                                                                            // 0x0028 (0x04)
    int32 MaxStage;                                                                            // 0x002C (0x04)
};

// ============================================================
// Inheritance: NiagaraParameterCollection : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraParameterCollection : public Object {
public:
    FName Namespace;                                                                           // 0x0028 (0x08)
    TArray<NiagaraVariable> Parameters;                                                        // 0x0030 (0x10)
    MaterialParameterCollection* SourceMaterialCollection;                                     // 0x0040 (0x08)
    NiagaraParameterCollectionInstance* DefaultInstance;                                       // 0x0048 (0x08)
    Guid CompileId;                                                                            // 0x0050 (0x10)
};

// ============================================================
// Inheritance: NiagaraParameterCollectionInstance : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraParameterCollectionInstance : public Object {
public:
    NiagaraParameterCollection* Collection;                                                    // 0x0028 (0x08)
    TArray<NiagaraVariable> OverridenParameters;                                               // 0x0030 (0x10)
    NiagaraParameterStore ParameterStorage;                                                    // 0x0040 (0x78)

    // --- Functions ---
    void SetVectorParameter(FString InVariableName, Vector InValue);                           // [Final|Public] RVA: 0x4B9C8C8
    void SetVector4Parameter(FString InVariableName, const out ref Vector4 InValue);           // [Final|Public] RVA: 0x4B9C760
    void SetVector2DParameter(FString InVariableName, Vector2D InValue);                       // [Final|Public] RVA: 0x4B9C660
    void SetQuatParameter(FString InVariableName, const out ref Quat InValue);                 // [Final|Public] RVA: 0x4B9C030
    void SetIntParameter(FString InVariableName, int32 InValue);                               // [Final|Public] RVA: 0x4B9BF2C
    void SetFloatParameter(FString InVariableName, float InValue);                             // [Final|Public] RVA: 0x4B9BE28
    void SetColorParameter(FString InVariableName, LinearColor InValue);                       // [Final|Public] RVA: 0x4B9BD1C
    void SetBoolParameter(FString InVariableName, bool InValue);                               // [Final|Public] RVA: 0x4B9BC14
    Vector GetVectorParameter(FString InVariableName);                                         // [Final|Public] RVA: 0x4B9B7A4
    Vector4 GetVector4Parameter(FString InVariableName);                                       // [Final|Public] RVA: 0x4B9B6E4
    Vector2D GetVector2DParameter(FString InVariableName);                                     // [Final|Public] RVA: 0x4B9B5D0
    Quat GetQuatParameter(FString InVariableName);                                             // [Final|Public] RVA: 0x4B9B510
    int32 GetIntParameter(FString InVariableName);                                             // [Final|Public] RVA: 0x4B9B374
    float GetFloatParameter(FString InVariableName);                                           // [Final|Public] RVA: 0x4B9B2BC
    LinearColor GetColorParameter(FString InVariableName);                                     // [Final|Public] RVA: 0x4B9B1FC
    bool GetBoolParameter(FString InVariableName);                                             // [Final|Public] RVA: 0x4B9B0F4
};

// ============================================================
// Inheritance: NiagaraScriptDataInterfaceInfo
// Package: /Script/Niagara
// ============================================================
struct NiagaraScriptDataInterfaceInfo {
public:
    NiagaraDataInterface* DataInterface;                                                       // 0x0000 (0x08)
    FName Name;                                                                                // 0x0008 (0x08)
    int32 UserPtrIdx;                                                                          // 0x0010 (0x04)
    NiagaraTypeDefinition Type;                                                                // 0x0018 (0x10)
    FName RegisteredParameterMapRead;                                                          // 0x0028 (0x08)
    FName RegisteredParameterMapWrite;                                                         // 0x0030 (0x08)
};

// ============================================================
// Inheritance: NiagaraEventReceiverProperties
// Package: /Script/Niagara
// ============================================================
struct NiagaraEventReceiverProperties {
public:
    FName Name;                                                                                // 0x0000 (0x08)
    FName SourceEventGenerator;                                                                // 0x0008 (0x08)
    FName SourceEmitter;                                                                       // 0x0010 (0x08)
};

// ============================================================
// Inheritance: NiagaraEventGeneratorProperties
// Package: /Script/Niagara
// ============================================================
struct NiagaraEventGeneratorProperties {
public:
    int32 MaxEventsPerFrame;                                                                   // 0x0000 (0x04)
    FName ID;                                                                                  // 0x0004 (0x08)
    NiagaraDataSetCompiledData DataSetCompiledData;                                            // 0x0010 (0x40)
};

// ============================================================
// Inheritance: NiagaraDataSetCompiledData
// Package: /Script/Niagara
// ============================================================
struct NiagaraDataSetCompiledData {
public:
    TArray<NiagaraVariable> Variables;                                                         // 0x0000 (0x10)
    TArray<NiagaraVariableLayoutInfo> VariableLayouts;                                         // 0x0010 (0x10)
    NiagaraDataSetID ID;                                                                       // 0x0020 (0x0C)
    uint32 TotalFloatComponents;                                                               // 0x002C (0x04)
    uint32 TotalInt32Components;                                                               // 0x0030 (0x04)
    uint32 TotalHalfComponents;                                                                // 0x0034 (0x04)
    bool bRequiresPersistentIDs;                                                               // 0x0038 (0x01) BitMask: 0x01
    enum SimTarget;                                                                            // 0x003C (0x01)
};

// ============================================================
// Inheritance: NiagaraVariableLayoutInfo
// Package: /Script/Niagara
// ============================================================
struct NiagaraVariableLayoutInfo {
public:
    uint32 FloatComponentStart;                                                                // 0x0000 (0x04)
    uint32 Int32ComponentStart;                                                                // 0x0004 (0x04)
    uint32 HalfComponentStart;                                                                 // 0x0008 (0x04)
    NiagaraTypeLayoutInfo LayoutInfo;                                                          // 0x0010 (0x60)
};

// ============================================================
// Inheritance: NiagaraTypeLayoutInfo
// Package: /Script/Niagara
// ============================================================
struct NiagaraTypeLayoutInfo {
public:
    TArray<uint32> FloatComponentByteOffsets;                                                  // 0x0000 (0x10)
    TArray<uint32> FloatComponentRegisterOffsets;                                              // 0x0010 (0x10)
    TArray<uint32> Int32ComponentByteOffsets;                                                  // 0x0020 (0x10)
    TArray<uint32> Int32ComponentRegisterOffsets;                                              // 0x0030 (0x10)
    TArray<uint32> HalfComponentByteOffsets;                                                   // 0x0040 (0x10)
    TArray<uint32> HalfComponentRegisterOffsets;                                               // 0x0050 (0x10)
};

// ============================================================
// Inheritance: NiagaraDetailsLevelScaleOverrides
// Package: /Script/Niagara
// ============================================================
struct NiagaraDetailsLevelScaleOverrides {
public:
    float Low;                                                                                 // 0x0000 (0x04)
    float Medium;                                                                              // 0x0004 (0x04)
    float High;                                                                                // 0x0008 (0x04)
    float Epic;                                                                                // 0x000C (0x04)
    float Cine;                                                                                // 0x0010 (0x04)
};

// ============================================================
// Inheritance: NiagaraEmitterScalabilityOverrides
// Package: /Script/Niagara
// ============================================================
struct NiagaraEmitterScalabilityOverrides {
public:
    TArray<NiagaraEmitterScalabilityOverride> Overrides;                                       // 0x0000 (0x10)
};

// ============================================================
// Inheritance: NiagaraEmitterScalabilityOverride : NiagaraEmitterScalabilitySettings
// Package: /Script/Niagara
// ============================================================
struct NiagaraEmitterScalabilityOverride : public NiagaraEmitterScalabilitySettings {
public:
    bool bOverrideSpawnCountScale;                                                             // 0x0038 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: NiagaraRendererProperties : NiagaraMergeable : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraRendererProperties : public NiagaraMergeable {
public:
    NiagaraPlatformSet Platforms;                                                              // 0x0028 (0x30)
    int32 SortOrderHint;                                                                       // 0x0058 (0x04)
    bool bIsEnabled;                                                                           // 0x005C (0x01) BitMask: 0xFF
    bool bMotionBlurEnabled;                                                                   // 0x005D (0x01) BitMask: 0xFF
};

// ============================================================
// Inheritance: NiagaraEventScriptProperties : NiagaraEmitterScriptProperties
// Package: /Script/Niagara
// ============================================================
struct NiagaraEventScriptProperties : public NiagaraEmitterScriptProperties {
public:
    enum ExecutionMode;                                                                        // 0x0028 (0x01)
    uint32 SpawnNumber;                                                                        // 0x002C (0x04)
    uint32 MaxEventsPerFrame;                                                                  // 0x0030 (0x04)
    Guid SourceEmitterID;                                                                      // 0x0034 (0x10)
    FName SourceEventName;                                                                     // 0x0044 (0x08)
    bool bRandomSpawnNumber;                                                                   // 0x004C (0x01) BitMask: 0xFF
    uint32 MinSpawnNumber;                                                                     // 0x0050 (0x04)
};

// ============================================================
// Inheritance: NiagaraSimulationStageBase : NiagaraMergeable : Object
// Package: /Script/Niagara
// ============================================================
class NiagaraSimulationStageBase : public NiagaraMergeable {
public:
    NiagaraScript* Script;                                                                     // 0x0028 (0x08)
    FName SimulationStageName;                                                                 // 0x0030 (0x08)
    bool bEnabled;                                                                             // 0x0038 (0x01) BitMask: 0x01
};

// ============================================================
// Inheritance: NiagaraSystemCompiledData
// Package: /Script/Niagara
// ============================================================
struct NiagaraSystemCompiledData {
public:
    NiagaraParameterStore InstanceParamStore;                                                  // 0x0000 (0x78)
    NiagaraDataSetCompiledData DataSetCompiledData;                                            // 0x0078 (0x40)
    NiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;                         // 0x00B8 (0x40)
    NiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;                        // 0x00F8 (0x40)
    NiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;                       // 0x0138 (0x20)
    NiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;                       // 0x0158 (0x20)
    NiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;                        // 0x0178 (0x20)
    TArray<NiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;             // 0x0198 (0x10)
    NiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;                      // 0x01A8 (0x20)
    NiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;                      // 0x01C8 (0x20)
    NiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;                       // 0x01E8 (0x20)
    TArray<NiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;            // 0x0208 (0x10)
};

// ============================================================
// Inheritance: NiagaraParameterDataSetBindingCollection
// Package: /Script/Niagara
// ============================================================
struct NiagaraParameterDataSetBindingCollection {
public:
    TArray<NiagaraParameterDataSetBinding> FloatOffsets;                                       // 0x0000 (0x10)
    TArray<NiagaraParameterDataSetBinding> Int32Offsets;                                       // 0x0010 (0x10)
};

// ============================================================
// Inheritance: NiagaraParameterDataSetBinding
// Package: /Script/Niagara
// ============================================================
struct NiagaraParameterDataSetBinding {
public:
    int32 ParameterOffset;                                                                     // 0x0000 (0x04)
    int32 DataSetComponentOffset;                                                              // 0x0004 (0x04)
};

// ============================================================
// Inheritance: NiagaraUserRedirectionParameterStore : NiagaraParameterStore
// Package: /Script/Niagara
// ============================================================
struct NiagaraUserRedirectionParameterStore : public NiagaraParameterStore {
public:
    TMap<NiagaraVariable, NiagaraVariable> UserParameterRedirects;                             // 0x0078 (0x50)
};

// ============================================================
// Inheritance: NiagaraMaterialOverride
// Package: /Script/Niagara
// ============================================================
struct NiagaraMaterialOverride {
public:
    MaterialInterface* Material;                                                               // 0x0000 (0x08)
    uint32 MaterialSubIndex;                                                                   // 0x0008 (0x04)
    NiagaraRendererProperties* EmitterRendererProperty;                                        // 0x0010 (0x08)
};

