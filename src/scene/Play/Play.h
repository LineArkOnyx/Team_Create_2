#pragma once
#include "DxLib.h"
#include "Player/Player.h"
#include "../../Collision/Collision.h"

class Play
{
public:
	Play();
	~Play();
	void InitPlay();
	void StepPlay();
	void DrawPlay();
	void FinPlay();

	//
	void EnemyHitHammer();
private:
	Player player;
};