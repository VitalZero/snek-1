#pragma once
#include <string>

class Settings
{
public:
	Settings(const std::string& fileName);
	int GetTileSize() const;
	int GetBoardWidth() const;
	int GetBoardHeight() const;
	float GetSpeedUpRate() const;
	int GetPoisonAmount() const;
	int GetFoodAmount() const;
private:
	int tileSize = 0;
	int boardWidth = 0;
	int boardHeight = 0;
	float speedUpRate = 0;
	int poisonAmount = 0;
	int foodAmount = 0;
};