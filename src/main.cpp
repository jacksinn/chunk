#include <iostream>
#include <cstdlib>
#include <string>
#include <boost/algorithm/string.hpp>
#include "Hero.h"

using namespace std;
using namespace boost;


class Enemy {
private:
    string planet = "MERS";
    string name = "GOMER";
    string kin = "SPACE JUNKER";
    int maxHP = 10;
    int currHP = 10;
    int level = 1;
    int maxMana = 10;
    int currMana = 10;
    int maxStrength = 5;

public:
    const string &getPlanet() const {
        return planet;
    }

    void setPlanet(const string &planet) {
        Enemy::planet = planet;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Enemy::name = name;
    }

    const string &getKin() const {
        return kin;
    }

    void setKin(const string &kin) {
        Enemy::kin = kin;
    }

    int getMaxHP() const {
        return maxHP;
    }

    void setMaxHP(int maxHP) {
        Enemy::maxHP = maxHP;
    }

    int getCurrHP() const {
        return currHP;
    }

    void setCurrHP(int currHP) {
        Enemy::currHP = currHP;
    }

    int getLevel() const {
        return level;
    }

    void setLevel(int level) {
        Enemy::level = level;
    }

    int getMaxMana() const {
        return maxMana;
    }

    void setMaxMana(int maxMana) {
        Enemy::maxMana = maxMana;
    }

    int getCurrMana() const {
        return currMana;
    }

    void setCurrMana(int currMana) {
        Enemy::currMana = currMana;
    }

    int getMaxStrength() const {
        return maxStrength;
    }

    void setMaxStrength(int maxStrength) {
        Enemy::maxStrength = maxStrength;
    }
};

void setTheScene(string);
string speak(string);

int main(int argc, char **argv)
{
    Hero player, chunk;
    Enemy gomer;
    string name;
    int choice = 0;


    chunk.setName("CHUNK");

    cout << speak("UNKOWN") << "Welcome to Planet Erf." << endl;
    cout << speak("UNKOWN") << "I'm " << chunk.getName() << ". Pleased to meet ya!" << endl << endl;
    cout << speak("YOU") << "Hi, I'm (enter your name): ";

    cin >> name;
    player.setName(name);
    const string CHUNKNAME = chunk.getName();
    const string PLAYERNAME = player.getName();

    //Chunk chat
    cout << speak(CHUNKNAME)
         <<"Well! " << player.getName() << " is my father's name! I'll be buggered." << endl;
    cout << speak(CHUNKNAME)
         << "So, I just saw " << gomer.getName() << " from planet " << gomer.getPlanet() << endl;
    cout << speak(CHUNKNAME)
         << "That dude has some serious issues and he needs to check himself before he shreks himself." << endl;
    cout << speak(CHUNKNAME) << "Nomsayin?" << endl;

    cout << speak(PLAYERNAME) << "[1] 'Shonuff, cuz." << endl;
    cout << speak(PLAYERNAME) << "[2] 'I just met you and you want me to take out a mufuk?" << endl;
    cin >> choice;

    bool chosen = false;
    while(!chosen) {
        switch (choice) {
            case 1:
                cout << speak(CHUNKNAME) << "Whoa, you're ruthless. I love it. Take him behind the shed over there."
                     << endl;
                chosen = true;
                break;
            case 2:
                cout << speak(CHUNKNAME) << "HAHA" << endl << speak(CHUNKNAME) << "But, yeah." << endl;
                chosen = true;
                break;
            default:
                cout << speak(CHUNKNAME) << "What? I can't understand you. You must've eaten paint chips as a young Erfling." << endl;
                cout << speak(CHUNKNAME) << "Whadya say?" << endl;
                cout << speak(PLAYERNAME) << "[1] 'Shonuff, cuz." << endl;
                cout << speak(PLAYERNAME) << "[2] 'I just met you and you want me to take out a mufuk?" << endl;
                cin >> choice;
                break;
        }
    }

    setTheScene("BEHIND THE SHED");

    return 0;
}

string speak(string character){
    return "(" + character + "): ";
}

void setTheScene(string location) {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << location << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
