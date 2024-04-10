#pragma once
#include "DxLib.h"
#include "Player/Player.h"

class Play
{
public:
	Play();
	~Play();
	void InitPlay();
	void StepPlay();
	void DrawPlay();
	void FinPlay();
private:
	Player player;
};