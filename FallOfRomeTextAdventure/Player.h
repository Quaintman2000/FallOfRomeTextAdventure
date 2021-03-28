#pragma once
#include <iostream>
#include <string>

class Player
{
public:
	std::string name;
	/// <summary>
	/// Grabs the player input and returns a integer.
	/// </summary>
	/// <returns>Player input as Int</returns>
	int GetPlayerInputInt();
	/// <summary>
	/// Grabs the player input and returns a string.
	/// </summary>
	/// <returns>Player input as String</returns>
	std::string GetPlayerInputString();
	/// <summary>
	/// Asks for the name of the user and sets that as the player name
	/// </summary>
	void SetName();
};

