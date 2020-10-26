# Address Dumper for Warface EU/NA 64bit

![Output Image](https://i.imgur.com/y5q1Iet.png)

<details>
  <summary>
    Output:
  </summary>
```
 > initialization started
 > scanning started
 
 
 > SSystemGlobalEnvironment:
 >       address: 0000000141D73AC0
 >       IGame: 0000000000000040
 >       ISystem: 00000000000000E8
 >       IRenderer: 0000000000000048
 >       IPhysicalWorld: 0000000000000070
 >       I3DEngine: 00000000000000F8
 >       ITimer: 00000000000000B8
 >       IEntitySystem: 00000000000000D8
 
 > IRenderer:
 >       address: 0000000142040978
 >       ProjectToScreen: 0000000000000320
 >       ClientDevice: 000000000000A6D0
 
 > CD3D9Renderer:
 >       address: 000000014207825C
 
 > I3DEngine:
 >       SetPostEffectParam: 0000000000000470
 
 > ITimer:
 >       address: 0000000142040968
 >       GetFrameTime: 0000000000000038
 
 > IPhysicalWorld:
 >       RayWorldIntersection: 0000000000000118
 
 > IEntitySystem:
 >       GetEntity: 0000000000000058
 >       GetEntityIterator: 00000000000000A8
 
 > IEntityIterator:
 >       Next: 0000000000000030
 
 > IGame:
 >       address: 000000014207C818
 
 > SCVars:
 >       address: 000000014207C820
 >       cl_fov: 0000000000000004
 >       i_soundeffects: 00000000000000E0
 >       g_enableIdleCheck: 0000000000000168
 >       g_gameroom_afk_timeout: 0000000000000794
 >       g_ingame_afk_timeout: 0000000000000798
 >       i_pelletsDisp: 0000000000000128
 >       i_unlimitedammo: 0000000000000130
 >       g_silencer_shoot_spotting: 0000000000000D70
 >       g_victoryCondition: 0000000000000600
 
 > IGameFramework:
 >       address: 000000014207D4B8
 >       GetCurrentGameRules: 0000000000000448
 >       GetClientActor: 0000000000000470
 
 > IGameRules:
 >       GetTeam: 0000000000000368
 >       SvRequestHit: 0000000141247D10
 
 > IActor:
 >       GetHealth: 00000000000000D8
 >       GetMaxHealth: 00000000000000F8
 >       SetHealth: 00000000000000E0
 >       GetArmor: 0000000000000100
 >       GetMaxArmor: 0000000000000108
 >       SetHealth: 00000000000000F0
 >       IsPlayer: 0000000000000230
 >       SvClimbMessage: 0000000141437C10
 
 > IItem:
 >       GetIWeapon: 0000000000000278
 
 > IWeapon:
 >       StartFire: 0000000000000058
 >       StopFire: 0000000000000060
 
 > IEntity:
 >       SetPos: 00000000000000A8
 >       SetAngles: 00000000000000E8
 >       SetScale: 00000000000000F8
 >       GetAngles: 00000000000000F0
 >       GetScale: 0000000000000100
 >       GetFlags: 0000000000000030
 >       GetWorldPos: 00000000000000B8
 >       GetWorldBBox: 00000000000000C8
 >       GetName: 0000000000000060
 >       GetEntityRenderProxy: 00000000000001D8
 >       GetEntityClass: 0000000000000018
 >       GetCharacter: 0000000000000290
 
 > IEntityRenderProxy:
 >       SetHUDSilhouettesParams: 0000000000000160
 
 > ICharacterInstance:
 >       GetISkeletonPose: 0000000000000028
 
 > ISkeletonPose:
 >       GetAbsJointByID: 0000000000000038
 
 
 > WinAPI:
 >       j_malloc: 00000001416C5121
 >       j_free: 00000001416C511B
 >       j_memcpy: 00000001416C5001
 >       j_memset: 00000001416C500D
 >       j_strcmp: 00000001416C50C7
 >       j_strstr: 00000001416C4FE9
 >       j_GetAsyncKeyState: 00000001400ADE20
 >       j_sqrt: 00000001418E41CD
 >       j_sinf: 00000001416C50AF
 >       j_cosf: 00000001416C50A9
 >       j_atoi: 00000001416C505B
 >       j_Sleep: 00000001400ADD40
 
 > scanning took 2.655607 seconds
 ```
</details>

Build with Visual Studio (2019), rename DLL to "ddraw.dll" and put it in your "Warface\Bin64Release\" folder then start the game.

Please read the LICENSE.
