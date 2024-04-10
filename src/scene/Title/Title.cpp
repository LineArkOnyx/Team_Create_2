#include "Title.h"


#define TITLE_PATH				"../data/TitleImage/Mole hit.png"
#define TITLE_BUTTON_PATH		"../data/TitleImage/PleaseClick.png"
#define TITLE_HAMMER_PATH		"../data/TitleImage/hanma.png"

Title::Title() 
{
	TitleImgaeHndl = 0;		//タイトルのハンドル
	TitleButtonHndl = 0;	//ボタンのハンドル
	TitlehammerHndl = 0;	//ハンマーのハンドル

	button_X = 0;			//ボタンの座標
	button_Y = 0;			//ボタンの座標
	
	hammer_X = 0;			//ハンマーの座標
	hammer_Y = 0;			//ハンマーの座標
}
Title::~Title() 
{

}
void Title::InitTitle()
{
	TitleImgaeHndl = LoadGraph(TITLE_PATH);
	TitleButtonHndl = LoadGraph(TITLE_BUTTON_PATH);
	TitlehammerHndl = LoadGraph(TITLE_HAMMER_PATH);
	button_X = 330;
	button_Y = 550;

	hammer_X = 700;
	hammer_Y = 0;

	SetMouseDispFlag(true);
}
void Title::StepTitle()
{
	
}
void Title::DrawTitle()
{
	DrawGraph(0, 0, TitleImgaeHndl, true);
	DrawGraph(button_X, button_Y, TitleButtonHndl, true);
	DrawGraph(hammer_X, hammer_Y, TitlehammerHndl, true);
}
void Title::FinTitle()
{
	DeleteGraph(TitleImgaeHndl);
	DeleteGraph(TitleButtonHndl);
}