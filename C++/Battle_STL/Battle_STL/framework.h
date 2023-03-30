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

// �⺻ Ŭ����
#include "Object/Creature.h"
#include "Object/Player/Player.h"
#include "Object/Monsters/Monster.h"

// ���� Ŭ����
#include "Object/Player/Knight.h"
#include "Object/Player/Mage.h"
#include "Object/Monsters/BossMonster.h"

#include "Scene/World.h"