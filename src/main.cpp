#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <boost/algorithm/string.hpp>
#include "Hero.h"
#include "Enemy.h"

using namespace std;
using namespace boost;

void setTheScene(string);

string speak(string);

int main(int argc, char **argv) {
    Hero player, chunk;
    Enemy gomer;
    string name;
    int choice = 0;

    srand(static_cast<unsigned int>(time(0)));
    chunk.setName("CHUNK");
    gomer.setCurrHP(30);

    cout << speak("UNKOWN") << "Welcome to Planet Erf." << endl;
    cout << speak("UNKOWN") << "I'm " << chunk.getName() << ". Pleased to meet ya!" << endl << endl;
    cout << speak("YOU") << "Hi, I'm (enter your name): ";

    cin >> name;
    player.setName(name);
    const string CHUNKNAME = chunk.getName();
    const string PLAYERNAME = player.getName();

    //Chunk chat
    cout << speak(CHUNKNAME)
         << "Well! " << player.getName() << " is my father's name! I'll be buggered." << endl;
    cout << speak(CHUNKNAME)
         << "So, I just saw " << gomer.getName() << " from planet " << gomer.getPlanet() << endl;
    cout << speak(CHUNKNAME)
         << "That dude has some serious issues and he needs to check himself before he shreks himself." << endl;
    cout << speak(CHUNKNAME) << "Nomsayin?" << endl;

    cout << speak(PLAYERNAME) << "[1] 'Shonuff, cuz." << endl;
    cout << speak(PLAYERNAME) << "[2] 'I just met you and you want me to take out a mufuk?" << endl;
    cin >> choice;

    bool chosen = false;
    while (!chosen) {
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
                cout << speak(CHUNKNAME)
                     << "What? I can't understand you. You must've eaten paint chips as a young Erfling." << endl;
                cout << speak(CHUNKNAME) << "Whadya say?" << endl;
                cout << speak(PLAYERNAME) << "[1] 'Shonuff, cuz." << endl;
                cout << speak(PLAYERNAME) << "[2] 'I just met you and you want me to take out a mufuk?" << endl;
                cin >> choice;
                break;
        }
    }

    cin.get();
    setTheScene("BEHIND THE SHED");
    cin.get();
    choice = 0;
    cout << speak(CHUNKNAME) << "Don't worry about it you're a natch!" << endl;
    while (gomer.getCurrHP() > 0 && player.getCurrHP() > 0) {
        cout << "####GOMER SNEAK ATTACKS" << endl;
        player.setCurrHP(player.getCurrHP() - 5);
        cout << "---You have " << player.getCurrHP() << " HP left!" << endl;
        if(player.getCurrHP() == 0){
            cout << speak("BATTLE") << "Clutch time! Ain't no rest for the wicked! Do or die!" << endl;
        }
        cout << speak("BATTLE") << "Would you like to [1] Fight or [2] Run?" << endl;
        cin >> choice;
        int hit = 0;

        switch (choice) {
            case 1:
                hit = rand() % 12;
                gomer.setCurrHP(gomer.getCurrHP() - hit);
                cout << speak("BATTLE") << "You hit that punk for " << hit << " HP!" << endl;
                cout << speak("BATTLE") << "GOMER has " << gomer.getCurrHP() << " HP remaining." << endl;
                break;
            case 2:
                gomer.setCurrHP(0);
                cout << speak("BATTLE") << "YOU. YOU RAN?" << endl;
                cout << speak("BATTLE") << "GOMER can't believe it." << endl;
                cout << speak("BATTLE") << "..." << endl;
                cout << speak("BATTLE") << "But GOMER can't believe anything anymore." << endl;
                cout << speak("BATTLE") << "Because he's dead. He died laughing at your stupid limp run." << endl;
                break;
            default:
                cout << speak("BATTLE") << "That's not even a choice..." << endl;
                break;
        }
    }

    if(player.getCurrHP() > 0 && gomer.getCurrHP() <=0){
        cout << speak(CHUNKNAME) << "WOW. SUCH A BADASS!!!" << endl;
    }
    if(player.getCurrHP() <= 0 && gomer.getCurrHP() > 0) {
        cout << speak(CHUNKNAME) << "You let that filthy frog beat you? Top o' the kek." << endl;
    }
    if(player.getCurrHP() <= 0 && gomer.getCurrHP() <= 0){
        cout << speak(CHUNKNAME) << "Welllll you two just killed each other. I guess karma came quick." << endl;
    }

    return 0;
}

string speak(string character) {
    return "(" + character + "): ";
}

void setTheScene(string location) {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << location << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
