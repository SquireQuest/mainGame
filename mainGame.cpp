#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Declaring Global Variables

//Data Values
int gold, userHP = 15, food = 5;

//Weapon bools
bool fist = true;
bool knife = false;
bool hatchet = false;
bool marshmallow = false;
bool sword = false;
bool pistol = false;
bool shotgun = false;
bool machineGun = false;
bool sniper = false;
bool onlySword = false;
bool shield = false;
bool mythrillShield = false;

bool knifeBuy, hatchetBuy, marshBuy, swordBuy, pistolBuy, shotgunBuy, mgBuy, sniperBuy, onlySwordBuy, shieldBuy, mShieldBuy;
int pBullet, sgBullet, mgBullet, snBullet;

//Essentials
bool playing = true;

//-- Start Code --//

void drawLine(int length)
{
    for (int i = 1; i <= length; i++)
    {
        cout << "-";
    }
    cout << endl;
}

//Random Int Generator
int random(int max)
{
    srand(time(NULL)*time(NULL));
    return 1+rand()%max;
}

string weaponChoice()
{
    string choice;
    
    cout << "What weapon would you like to choose?" << endl;
    drawLine(15);
    if (fist)
    {
        cout << "Fist" << endl;
    }
    if (knife)
    {
        cout << "Knife" << endl;
    }
    if (hatchet)
    {
        cout << "Hatchet" << endl;
    }
    if (marshmallow)
    {
        cout << "Marshmallow" << endl;
    }
    if (sword)
    {
        cout << "Sword" << endl;
    }
    if (pistol)
    {
        cout << "Pistol" << endl;
    }
    if (shotgun)
    {
        cout << "Shotgun" << endl;
    }
    if (machineGun)
    {
        cout << "Machine Gun" << endl;
    }
    if (sniper)
    {
        cout << "Sniper" << endl;
    }
    if (onlySword)
    {
        cout << "The Only Sword" << endl;
    }
    /*
    if (fist)
    {
        cout << "Fist" << endl;
    }
    if (fist)
    {
        cout << "Fist" << endl;
    }
    if (fist)
    {
        cout << "Fist" << endl;
    } */
    choice = "";
    
    while (choice != "fist" && choice != "knife" && choice != "hatchet" && choice != "marshmallow" && choice != "sword" && choice != "pistol" && choice != "shotgun" && choice != "machine gun" && choice != "sniper" && choice != "the only sword")
    {
        cin >> choice;
        
        if (choice == "fist" && fist)
        {
            //nothing
        }
        else if (choice == "knife" && knife)
        {
            //more nothing!
        }
        else if (choice == "hatchet" && hatchet)
        {
            //more nothing!
        }
        else if (choice == "marshmallow" && marshmallow)
        {
            //more nothing!
        }
        else if (choice == "sword" && sword)
        {
            //more nothing!
        }
        else if (choice == "pistol" && pistol)
        {
            //more nothing!
        }
        else if (choice == "shotgun" && shotgun)
        {
            //more nothing!
        }
        else if (choice == "machine gun" && machineGun)
        {
            //more nothing!
        }
        else if (choice == "sniper" && sniper)
        {
            //more nothing!
        }
        else if (choice == "the only sword" && onlySword)
        {
            //more nothing!
        }
        else
        {
            choice = "";
            cout << "That weapon doesn't exist!" << endl;
        }
    }
    return choice;
    
}

void shop()
{
    string buyRequest;
    cout << "Welcome to the shop!  What would you like to buy?" << endl;
    drawLine(15);
    //Shop buy conditions
    if (!knife)
    {
        cout << "Knife - 50 gold" << endl;
        knifeBuy = true;
    }
    else
    {
        knifeBuy = false;
    }
    
    if (!hatchet)
    {
        cout << "Hatchet - 150 gold" << endl;
        hatchetBuy = true;
    }
    else
    {
        hatchetBuy = false;
    }
    
    if ((knife || hatchet) && !marshmallow)
    {
        cout << "Flaming Marshmallow - 250 gold" << endl;
        marshBuy = true;
    }
    else
    {
        marshBuy = false;
    }
    
    if (knife && marshmallow && !sword)
    {
        cout << "Sword - 500 gold" << endl;
        swordBuy = true;
    }
    else
    {
        swordBuy = false;
    }
    
    if (hatchet && sword && !pistol)
    {
        cout << "Pistol - 750 gold" << endl;
        pistolBuy = true;
    }
    else
    {
        pistolBuy = false;
    }
    
    if (hatchet && sword && !shotgun)
    {
        cout << "Shotgun - 1,000 gold" << endl;
        shotgunBuy = true;
    }
    else
    {
        shotgunBuy = false;
    }
    
    if (pistol && shotgun && !machineGun)
    {
        cout << "Machine Gun - 1,500 gold" << endl;
        mgBuy = true;
    }
    else
    {
        mgBuy = false;
    }
    
    if (machineGun && !sniper)
    {
        cout << "Sniper Rifle - 2,000 gold" << endl;
        sniperBuy = true;
    }
    else
    {
        sniperBuy = false;
    }
    
    if ((pistol || shotgun) && !shield)
    {
        cout << "Shield - 500 gold" << endl;
        shieldBuy = true;
    }
    else
    {
        shieldBuy = false;
    }
    
    if (shield && !mythrillShield)
    {
        cout << "Mythrill Shield - 1,500 gold" << endl;
        mShieldBuy = true;
    }
    else
    {
        mShieldBuy = false;
    }
    
    cin >> buyRequest;
    
    if (buyRequest == "knife" && knifeBuy && gold >= 50)
    {
        cout << "You bought the knife!" << endl;
        knife = true;
        gold -= 50;
    }
    else
    {
        if (buyRequest == "knife") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if (buyRequest == "hatchet" && hatchetBuy && gold >= 150)
    {
        cout << "You bought the knife!" << endl;
        hatchet = true;
        gold -= 150;
    }
    else
    {
        if (buyRequest == "hatchet") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
        if ((buyRequest == "marshmallow" || buyRequest == "flaming marshmallow") && marshBuy && gold >= 50)
    {
        cout << "You bought the flaming marshmallow!" << endl;
        marshmallow = true;
        gold -= 250;
    }
    else
    {
        if (buyRequest == "marshmallow" || buyRequest == "flaming marshmallow") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if (buyRequest == "sword" && swordBuy && gold >= 500)
    {
        cout << "You bought the sword!" << endl;
        sword = true;
        gold -= 500;
    }
    else
    {
        if (buyRequest == "sword") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if (buyRequest == "pistol" && pistolBuy && gold >= 750)
    {
        cout << "You bought the pistol!" << endl;
        pistol = true;
        gold -= 750;
    }
    else
    {
        if (buyRequest == "pistol") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if (buyRequest == "shotgun" && shotgunBuy && gold >= 1000)
    {
        cout << "You bought the Shotgun!" << endl;
        shotgun = true;
        gold -= 1000;
    }
    else
    {
        if (buyRequest == "shotgun") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if (buyRequest == "machine gun" && mgBuy && gold >= 1500)
    {
        cout << "You bought the Machine Gun!" << endl;
        machineGun = true;
        gold -= 1500;
    }
    else
    {
        if (buyRequest == "machine gun") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if ((buyRequest == "sniper" || buyRequest == "sniper rifle") && sniperBuy && gold >= 500)
    {
        cout << "You bought the Sniper Rifle!" << endl;
        sword = true;
        gold -= 2000;
    }
    else
    {
        if (buyRequest == "sniper" || buyRequest == "sniper rifle") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if (buyRequest == "shield" && shieldBuy && gold >= 500)
    {
        cout << "You bought the Shield!" << endl;
        sword = true;
        gold -= 500;
    }
    else
    {
        if (buyRequest == "shield") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
    if ((buyRequest == "mythrill shield" || buyRequest == "mythril shield") && mShieldBuy && gold >= 500)
    {
        cout << "You bought the sword!" << endl;
        sword = true;
        gold -= 500;
    }
    else
    {
        if (buyRequest == "mythrill shield" || buyRequest == "mythril shield") {
            cout << "You don't have enough money to do that!" << endl;
        }
    }
}

int damageDealt(string weapon)
{
    int damage;
    
    if (weapon == "fist")
    {
        damage = random(4);
        damage += 4;
        return damage;
    }
    if (weapon == "knife")
    {
        damage = random(4);
        damage += 12;
        return damage;
    }
    if (weapon == "hatchet")
    {
        damage = random(10);
        damage += 10;
        return damage;
    }
    if (weapon == "marshmallow")
    {
        damage = random(5);
        damage += 20;
        return damage;
    }
    if (weapon == "sword")
    {
        damage = random(20);
        damage += 20;
        return damage;
    }
    if (weapon == "pistol")
    {
        damage = random(10);
        damage += 30;
        return damage;
    }
    if (weapon == "shotgun")
    {
        damage = random(5);
        damage += 45;
        return damage;
    }
    if (weapon == "machine gun")
    {
        damage = random(20);
        damage += 55;
        return damage;
    }
    if (weapon == "sniper")
    {
        damage = random(25);
        damage += 75;
        return damage;
    }
    if (weapon == "the only sword")
    {
        damage = random(100);
        damage += 50;
        return damage;
    }
}

string chooseEnemyType(int uHP)
{
    return "Kitten";
}

int chooseEnemyHP(int uHP, string eType)
{
    return 10;
}

int enemyDamage(string eType, int eHP)
{
    if (eType == "Kitten")
    {
        return eHP/5;
    }
}

//Realtime Battle
bool realtime(int uHP)
{
    //Declaring local variables
    
    bool battle = true;
    string weapon, choice;
    
    weapon = weaponChoice();
    cout << "You are using the " << weapon << endl;
        
    string eType = chooseEnemyType(uHP);
    int eHP = chooseEnemyHP(uHP, eType);
    cout << "The " << eType << " appered.  It has " << eHP << " health." << endl;
    
    while (battle)
    {    
        while (choice != "run" && choice != "attack" && choice != "eat")
        {
            cout << "Would you like to attack, run, or eat?" << endl;
            cin >> choice;
        }
        if (choice == "attack")
        {
            eHP -= damageDealt(weapon);
        }
        else if (choice == "run")
        {
            cout << "Could not escape!" << endl;
        }
        else if (choice == "eat")
        {
            if (food > 0)
            {
                food -= 1;
                uHP += 5;
                cout << "You ate a piece of food.  You now have " << food << " food and " << eHP << " HP" << endl;
            }
            else
            {
                cout << "You don't have any food!" << endl;
            }
        }
        uHP -= enemyDamage(eType, eHP);
        
        if (uHP <= 0)
        {
            return false;
            cout << "You have been defeated by the enemy!" << endl;
        }
        else if (eHP <= 0)
        {
            return true;
            cout << "You have defeated the enemy!" << endl;
        }
    }
}

int main()
{
    string choice, oChoice;
    
    while(playing)
    {
        cout << "Would you rather battle, shop, or finish?" << endl;
        cin >> choice;
        
        if (choice == "battle")
        {
            realtime(userHP);
        }
        else if (choice == "shop")
        {
            shop();
        }
        else if (choice == "end" || choice == "finish")
        {
            cout << "Are you sure you would like to leave?" << endl;
            cin >> oChoice;
            if (oChoice == "yes" || oChoice == "Yes")
            {
                playing = false;
            }
        }
        else
        {
            cout << "Sorry, I am not aware of that command." << endl;
        }
    }
}
