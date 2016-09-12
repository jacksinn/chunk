#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>


using namespace std;
using namespace boost;

class Hero {
private:
    string name;
    string kin;

public:
    void set_name(string n){
        to_upper(n);
        name = n;
    }
    string get_name(void){
        return name;
    }

    
    
};


int main(int argc, char **argv)
{
    Hero hero;
	cout << ">>Welcome to Chunkland.\nI'm Chunk (no relation)\n. Pleased to meet ya!\n\n";
    cout << "Hi, I'm (enter your name): ";
    string name;
    cin >> name;
    hero.set_name(name);
    cout << ">>Well! " << hero.get_name() << " is my father's name!" << endl;
    
    return 0;
}
