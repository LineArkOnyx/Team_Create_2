#pragma once
#include"DxLib.h"
#include"iostream"
class Enemy
{
private:
	int x[2]; , y, h, w, handle;
	bool IsUse;
public:
	void InitEnemy();
	void Stepenemy();
	void DrawEnemy();
	void Enemy_Hit_Hanmmer();
};
extern Enemy enemy;