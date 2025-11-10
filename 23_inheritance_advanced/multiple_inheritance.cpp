#include <iostream>

class Character
{
public:
    Character(unsigned hp_) : hp(hp_)
    {
        std::cout << "I am a suspicious character.";
    }
    int hp;
};

class Sheep : virtual public Character
{
public:
    Sheep()
    {
        std::cout << "I am a sheep\n";
    }
    void think() const
    {
        std::cout << "I need to commit sheep...\n";
    }
};

class Bob : virtual public Character
{
public:
    void think() const
    {
        std::cout << "I think; therefore I am.\n";
    }
};

class BlaineTerrorist : public Sheep, public Bob
{

};

int main(void)
{
    BlaineTerrorist bt;
    bt.think();

    std::cout << bt.Bob::hp;
}