#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

#include <string>
#include <vector>


class LegionUnit
{

  protected:
      int health;
      int defense;
      std::string name;
      std::vector<LegionUnit*> LegionUnits;



       

  public:

  LegionUnit(int health , int defense , std::string LegionType);
  virtual ~LegionUnit();


     virtual void move()= 0;
      virtual void  attack(LegionUnit* enemy) = 0;
     virtual void retreat()=0; 
     virtual void defend() = 0;

     virtual int setHealth(int health ) =0;
     virtual int setDefence(int beaten) =0;

     virtual int getHealth() const = 0;

     bool isAlive();
     void takeDamage(int damage);
     virtual std::string getType() const;
};

#endif