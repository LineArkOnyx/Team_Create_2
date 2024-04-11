#include "Play.h"


Play::Play()
{
	
}
Play::~Play()
{

}
void Play::InitPlay()
{
	player.InitPlayer();
}
void Play::StepPlay()
{
	player.StepPlayer();

	if (player.GetPlayerAttack()) {
		DrawCircle(player.GetPlayerPosX(), player.GetPlayerPosY(), 100, GetColor(255, 255, 0), 1, 1);
	}
}
void Play::DrawPlay()
{
	player.DrawPlayer();
}
void Play::FinPlay()
{
	player.FinPlayer();
}
