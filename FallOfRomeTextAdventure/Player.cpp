#include "Player.h"

int Player::GetPlayerInputInt()
{
    // Stores string.
    std::string strAnswer;
    // Grabs String
    std::getline(std::cin, strAnswer);
    // Converts to string
    int answer = std::stoi(strAnswer);
    // Returns int
    return answer;
}

std::string Player::GetPlayerInputString()
{
    // Stores String
    std::string strAnswer;
    // Grabs string
    std::getline(std::cin, strAnswer);
    // Return string
    return strAnswer;
}

void Player::SetName()
{
    std::cout << "What's your name?" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name);
}
