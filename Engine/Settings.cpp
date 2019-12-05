#include "Settings.h"
#include <cassert>
#include <fstream>
#include <limits>


Settings::Settings(const std::string& fileName)
{
	std::ifstream in(fileName);

	assert( in.is_open() );

	if (!in.is_open())
	{
	}
	else
	{
		std::string tmpString;
		while (std::getline(in, tmpString) && in.good())
		{
			if (tmpString == "[Tile Size]" )
			{
				in >> tileSize;
			}
			else if (tmpString == "[Board Size]" )
			{
				in >> boardWidth;
				in >> boardHeight;
			}
			else if (tmpString == "[Speedup Rate]" )
			{
				in >> speedUpRate;
			}
			else if (tmpString == "[Food Amount]")
			{
				in >> foodAmount;
			}
			else if (tmpString == "[Poison Amount]")
			{
				in >> poisonAmount;
			}
			else if (tmpString.empty())
			{

			}
			else
			{
				throw std::runtime_error("Bad settings file: " + tmpString);
			}
		}

	}
}

int Settings::GetTileSize() const
{
	return tileSize;
}

int Settings::GetBoardWidth() const
{
	return boardWidth;
}

int Settings::GetBoardHeight() const
{
	return boardHeight;
}

float Settings::GetSpeedUpRate() const
{
	return speedUpRate;
}

int Settings::GetPoisonAmount() const
{
	return poisonAmount;
}

int Settings::GetFoodAmount() const
{
	return foodAmount;
}
