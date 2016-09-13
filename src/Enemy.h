//
// Created by Steven Jackson on 9/13/16.
//
#include <iostream>
#include <cstdlib>
#include <string>
#include <boost/algorithm/string.hpp>
#include "Hero.h"

using namespace std;
using namespace boost;

#ifndef CHUNK_ENEMY_H
#define CHUNK_ENEMY_H


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



#endif //CHUNK_ENEMY_H
