#include "Infantry.h"
#include "LegionUnit.h"

#include <iostream>
using namespace std;

Infantry::Infantry(int health , int defense) : LegionUnit(health,defense,"Infantry")
{}


// void Infantry:: move()
// {
//         //to move we going to use the position of the Infantry
//         position += 1;
//         cout << "Infantry marches to position " << position << std::endl;
// }


// void Infantry::attack() //I might change this, this is how I used it from last weeks practical 
// {
//     if (formation == "phalanx") {
//             std::cout << "Infantry forms a phalanx and thrusts spears, dealing " << (power + 5) << " damage." << std::endl;
//         } else if (formation == "shield wall") {
//             std::cout << "Infantry forms a shield wall, dealing " << power << " damage and increasing defense." << std::endl;
//         } else {
//             std::cout << "Infantry attacks in " << formation << " formation, dealing " << power << " damage." << std::endl;
//         }
// }



// void Infantry::defend() //Im trying to creative here please dont mind me
// {
     
//      std::cout << "Infantry raises shields in " << formation << " formation, further boosting defense." << std::endl;
// }

// void Infantry::retreat()
// {
    
//     std::cout << "Infantry raises shields in " << formation << " formation, further boosting defense." << std::endl;
// }

// int Infantry::getPower()
// {
//     return power;
// }

// std::string Infantry::getType() const
// {
//     return "Infantry";
// }