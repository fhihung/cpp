#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Monster{
    private:
    string name;
    public:
    int hp;
    int mana;
    int armor;
    int damage;
    int level;
    vector<string> skills;
    vector<string> items;

    Monster(string name, int hp, int mana, int armor, int level, int damage, vector<string> skills,vector<string>items): name(name), hp(hp){}
    string getName(){
        return name;
    }
    void setName(string newName){
        name = newName;
    }
    void levelUp(){
        level++;
        hp +=10;
        mana +=10;
        damage += 2;
        cout << "Level up";

    }
    void getHit(int damage){
        if((damage < armor)){
            armor = armor - damage;
        }
        else {
            damage -= armor;
            armor = 0;
            hp -= damage;
            cout << "Armor = 0" << "HP: " << hp;
        }
    }

    void displayInfo(){
        cout << name << " " << hp << " " << mana;
    }
    int main(int argc, char const *argv[])
{
    Monster m;
    m.damage = 20;
    m.hp = 100;
    m.mana = 100;
    m.armor = 100;
    // m.items = {'ao_giap'};
    // m.skills = {'tuong_gio'};
    m.level = 1;
    m.levelUp();
    m.getHit(150);
    m.displayInfo();
    return 0;
}
};


