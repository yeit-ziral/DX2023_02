#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

enum class CreatureType
{
	NONE,
	PLAYER,
	MONSTER,
	AGGRO_ABLE
};

// 기본 클래스
#include "Object/Creature.h"
#include "Object/Player/Player.h"
#include "Object/Monsters/Monster.h"

// 하위 클래스
#include "Object/Player/Knight.h"
#include "Object/Player/Mage.h"
#include "Object/Monsters/BossMonster.h"

#include "Scene/World.h"