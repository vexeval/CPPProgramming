#include <iostream>

class Character
{
public:
    Character(unsigned hp_) : hp(hp_)
    {
        std::cout << "I am a suspicious character.";
    }
    Character();
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

class BobSheep : public Sheep, public Bob
{
    void think() const
    {
        std::cout << "I need to commit blait.\n";
    }
};

int main(void)
{
    BobSheep bs;
    Character& bsc = bs;
    bsc.think();

    std::cout << bs.Bob::hp;
}