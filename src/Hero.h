//
// Created by Steven Jackson on 9/13/16.
//
#include <iostream>
#include <cstdlib>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

#ifndef CHUNK_HERO_H
#define CHUNK_HERO_H


class Hero {
private:
    string name;
    string kin;
    int maxHP = 30;
    int currHP = 30;
    int level = 1;
    int maxMana = 10;
    int currMana = 10;
    int maxStrength = 10;

public:

    const string &getName() const {
        return name;
    }

    void setName(string name) {
        to_upper(name);
        Hero::name = name;
    }

    const string &getKin() const {
        return kin;
    }

    void setKin(const string &kin) {
        Hero::kin = kin;
    }

    int getMaxHP() const {
        return maxHP;
    }

    void setMaxHP(int maxHP) {
        Hero::maxHP = maxHP;
    }

    int getCurrHP() const {
        return currHP;
    }

    void setCurrHP(int currHP) {
        Hero::currHP = currHP;
    }

    int getLevel() const {
        return level;
    }

    void setLevel(int level) {
        Hero::level = level;
    }

    int getMaxMana() const {
        return maxMana;
    }

    void setMaxMana(int maxMana) {
        Hero::maxMana = maxMana;
    }

    int getCurrMana() const {
        return currMana;
    }

    void setCurrMana(int currMana) {
        Hero::currMana = currMana;
    }

    int getMaxStrength() const {
        return maxStrength;
    }

    void setMaxStrength(int maxStrength) {
        Hero::maxStrength = maxStrength;
    }

};


#endif //CHUNK_HERO_H
