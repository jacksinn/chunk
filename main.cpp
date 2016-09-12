#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	cout << ">>Welcome to Chunkland.\nI'm Chunk (no relation)\n. Pleased to meet ya!\n\n";
    cout << "Hi, I'm (enter your name): ";
    string heroName;
    cin >> heroName;
    cout << "Well! " << heroName << " is my father's name!" << endl;
    
    return 0;
}
