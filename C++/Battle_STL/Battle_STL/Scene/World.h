#pragma once
class World
{
public:
	World();
	~World();

	void Updata();

	bool End();


private:
	shared_ptr<Creature> _boss;
	vector<shared_ptr<Creature>> _players;
};

