#include"Enemy.h"
#include"iostream"
#include"DxLib.h"
#include"../../Collision/Collision.h"
#include"../Play/Player/Player.h"
#include"../Play/Play.h"
Enemy enemy;
void Enemy::InitEnemy()
{
	x = 500;
	y = 400;
	h = 16;
	w = 16;

	IsUse = false;
}
void Enemy::Stepenemy()
{
}
void Enemy::DrawEnemy()
{
	DrawRotaGraph(x, y, 1.0, 0.0, handle,true);
}
void Enemy::Enemy_Hit_Hanmmer()
{
	DrawBox(x, y, x + h, y + w,GetColor(255,255,255),true);
	DrawBox(player.GetPlayerPosX(), player.GetPlayerPosY(), player.GetPlayerPosX() + player.GetPlayerPosH(), player.GetPlayerPosY() + player.GetPlayerPosW(), GetColor(255, 255, 255), true);
	if (Collision::IsHitRect(x, y, h, w, player.GetPlayerPosX(), player.GetPlayerPosY(), player.GetPlayerPosH(), player.GetPlayerPosW()))
	{
		DrawFormatString(100, 100, GetColor(255, 255, 255), "ƒqƒbƒg");
	}
}