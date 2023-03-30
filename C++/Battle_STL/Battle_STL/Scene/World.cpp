#include "framework.h"
#include "World.h"

World::World()
{
	_boss = make_shared<BossMonster>(1000, 40, "C++");

	vector<shared_ptr<Creature>> players;
	for (int i = 0; i < 10; i++)
	{
		int hp = rand() % 21 + 50;
		int atk = rand() % 11 + 20;
		shared_ptr<Creature> player = make_shared<Knight>(hp, atk, "Knight" + to_string(i));
		players.push_back(player);
	}
}

World::~World()
{
}

void World::Updata()
{
	for (auto& player : _players)
	{
		player->Attack(_boss);
	}

	dynamic_pointer_cast<BossMonster>(_boss)->AttackPlayersByAggroTable();
}

bool World::End()
{
	bool playerAll_Dead = true;

	for (auto& player : _players)
	{
		if (player->IsAlive() == false)
		{
			playerAll_Dead = false;
			break;
		}
	}

	return playerAll_Dead || (_boss->IsAlive() == false);
		
}
