#include <iostream>

// TODO:
// Reload function for weapon and for all derived classes
// Create an inventory for the player (set of weapons)

class Weapon // Abstract class, cannot create objects of it
{
public:
    virtual void use(void) = 0; // Pure virtual function
};

class Gun : public Weapon
{
public:
    void use(void) override
    {
        std::cout << "BANG!" << std::endl;
    }
};

class MachineGun : public Gun
{
public:
    int magazine = 20;
    void use(void) override
    {
        while (magazine-- > 0)
        {
            std::cout << "BANG!";
        }
        magazine = 20;
        std::cout << std::endl;
    }
};

class Bazooka : public Weapon
{
public:
    void use(void) override
    {
        std::cout << "BOOM!" << std::endl;
    }
};

class Knife : public Weapon
{
public:
    void use(void) override
    {
        std::cout << "Slash!" << std::endl;
    }
};

class Player
{
public:
    void use_weapon(Weapon& weapon)
    {
        weapon.use();
    }
};

int main(void)
{
    Gun gun;
    MachineGun mg;
    Bazooka bazooka;
    Knife knife;

    gun.use();
    mg.use();

    // Create a reference to a base class
    Gun& weapon = mg;
    weapon.use();

    std::cout << "--------------\n";
    Player player;
    player.use_weapon(knife);

    return 0;
}