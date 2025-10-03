#include <iostream>

// Enumeration (enum)
enum Difficulty { Will, Easy, Normal, Hard, Gabe };

class GameConfig {
public:
    int getPlayerDifficulty() {
        return playerDifficulty;
    }

    static int getDefaultDifficulty() {
        return defaultDifficulty;
    }

    static void setDefaultDifficulty(int level) {
        if (level >= Easy && level <= Hard) {
            defaultDifficulty = level;
        }
    }

    GameConfig() : playerDifficulty(defaultDifficulty) { }

    static std::string difficultyToString(int level) {
        switch (level)
        {
            case 0:return "Will";
            case 1:return "Easy";
            case 2:return "Normal";
            case 3:return "Hard";
            case 4:return "Gabe Newell";
            default:return "Unknown";
        }
    }

private:
    static int defaultDifficulty;
    int playerDifficulty;

};

// Initialize static member
int GameConfig::defaultDifficulty = Gabe;

int main(void)
{
    Difficulty difficulty = Will;

    std::cout << difficulty << std::endl;
    std::cout << "Default difficulty is " << GameConfig::difficultyToString(GameConfig::getDefaultDifficulty()) << std::endl;

    GameConfig player;
    std::cout << "Player difficulty is " << GameConfig::difficultyToString(player.getPlayerDifficulty()) << std::endl;

    return 0;
}