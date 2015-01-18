/**
 * fn_canAccessMedicalEquipment.sqf
 * @Descr: Check if caller can access targets medical equipment, based upon accessLevel
 * @Author: Glowbal
 *
 * @Arguments: [target OBJECT, caller OBJECT]
 * @Return: BOOL
 * @PublicAPI: true
 */

#include "script_component.hpp"

private ["_target", "_caller", "_accessLevel", "_return"];
_target = _this select 0;
_caller = _this select 1;

_accessLevel = _target getvariable [QGVAR(allowSharedEquipmentAccess), -1];

_return = false;

if (_accessLevel >= 0) then {
    if (_accessLevel == 0) exitwith { _return = true; };
    if (_accessLevel == 1) exitwith { _return = (side _target == side _caller); };
    if (_accessLevel == 2) exitwith { _return = (group _target == group _caller); };
};

_return;