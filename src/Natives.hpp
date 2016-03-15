/* =========================================

		FCNPC - Fully Controllable NPC
			----------------------

	- File: Natives.hpp
	- Author(s): OrMisicL

  =========================================*/

#ifndef NATIVES_H
#define NATIVES_H

class CNatives
{
public:
	static cell AMX_NATIVE_CALL FCNPC_SetUpdateRate(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_InitMapAndreas(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_Create(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_Destroy(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_Spawn(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_Respawn(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsSpawned(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_Kill(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsDead(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsValid(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsStreamedIn(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetPosition(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetPosition(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetQuaternion(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetQuaternion(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetAngle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetAngleToPos(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetAngleToPlayer(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetAngle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetVelocity(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetVelocity(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetHealth(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetHealth(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetArmour(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetArmour(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetInvulnerable(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsInvulnerable(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetSkin(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetSkin(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetInterior(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetInterior(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetVirtualWorld(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetVirtualWorld(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetWeapon(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeapon(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetAmmo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetAmmo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetWeaponSkillLevel(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponSkillLevel(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetWeaponState(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponState(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetWeaponDamage(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponDamage(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetWeaponReloadTime(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponReloadTime(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetWeaponShootTime(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponShootTime(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetWeaponClipSize(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponClipSize(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetWeaponInfo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponInfo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetWeaponDefaultInfo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetWeaponDefaultInfo(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetKeys(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetKeys(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetSpecialAction(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetSpecialAction(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetAnimation(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetAnimationByName(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetAnimation(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_ResetAnimation(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_ApplyAnimation(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_ClearAnimations(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetFightingStyle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetFightingStyle(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_GoTo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GoToPlayer(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_Stop(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsMoving(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_AimAt(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_AimAtPlayer(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_StopAim(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_MeleeAttack(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_StopAttack(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsAiming(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsShooting(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsReloading(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_ToggleReloading(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_ToggleInfiniteAmmo(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_EnterVehicle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_ExitVehicle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_PutInVehicle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_RemoveFromVehicle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetVehicleID(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetVehicleSeat(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetVehicleSiren(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsVehicleSiren(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetVehicleHealth(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetVehicleHealth(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetPassengerDriveBy(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsPassengerDriveBy(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_SetSurfingOffsets(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetSurfingOffsets(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetSurfingVehicle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetSurfingVehicle(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetSurfingObject(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetSurfingObject(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetSurfingPlayerObject(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetSurfingPlayerObject(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_StartPlayingPlayback(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_StopPlayingPlayback(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_PausePlayingPlayback(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_ResumePlayingPlayback(AMX *amx, cell *params);

	static cell AMX_NATIVE_CALL FCNPC_OpenNode(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_CloseNode(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_IsNodeOpen(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetNodeType(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetNodePointPosition(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_SetNodePoint(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetNodePointCount(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_GetNodeInfo(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_PlayNode(AMX *amx, cell *params);
	static cell AMX_NATIVE_CALL FCNPC_StopPlayingNode(AMX *amx, cell *params);
};

#endif