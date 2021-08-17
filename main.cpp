#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>




class Monster{
public:
    enum MonsterType{
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES
    };

private:
    MonsterType m_type;
    std::string m_name;
    int m_health;

    std::string getTypeString(){
        switch(m_type){
            case Dragon:   return "Dragon";
            case Goblin:   return "Goblin";
            case Ogre:     return "Ogre";
            case Orc:      return "Orc";
            case Skeleton: return "Skeleton";
            case Troll:    return "Troll";
            case Vampire:  return "Vampire";
            case Zombie:   return "Zombie";
            default:       return "error in name typing";
        };
    }

public:
    Monster(MonsterType type, std::string name, int health):
        m_type(type), m_name(name), m_health(health) {  }



    void print(){
        std::cout << m_name << " is the " << this->getTypeString();
        std::cout << " that has " << m_health << " health points.\n";
    }
};


class MonsterGenerator{
public:
    static int getRandomNumber(int min, int max)
    {
        static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
        return static_cast<int>(rand() * fraction * (max - min + 1) + min);
    }

    static Monster generateMonster(){
        Monster::MonsterType Type = static_cast<>();
        return Monster(, "Jack", getRandomNumber(0, 100));
    }
};


int main()
{
    Monster m = MonsterGenerator::generateMonster();
    m.print();

    return 0;
}
