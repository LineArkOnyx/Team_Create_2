#include"Enemy.h"
#include"iostream"
#include"DxLib.h"
#include"../../Collision/Collision.h"
#include"../Play/Player/Player.h"
#include"../Play/Play.h"
Enemy enemy;
void Enemy::InitEnemy()
{
	x = 100;
	y = 100;

	IsUse = false;
}
void Enemy::Stepenemy()
{
	Enemy::DrawEnemy();
}
void Enemy::DrawEnemy()
{
	DrawRotaGraph(x, y, 1.0, 0.0, handle,true);
}
void Enemy::Enemy_Hit_Hanmmer()
{
	Collision::IsHitRect(x,y,h,w, player.)
}