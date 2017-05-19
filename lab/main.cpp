	#include <iostream>
	#include <string>
	using namespace std;
	#include "unit.cpp"
	#include "test.cpp"
	int main ()
	{
		string name;
		string race;
		
		Base base_obj;
		wlk_d wlk_obj;
		
		show_who (base_obj);
		cin >> name;
		cout << "specify your race";	
		cout << "Write orc if you whant be orc(more attack and hp) or human(more armor) if you whant be human:";
		cin >> race;
			if (race == "orc")
			{
				cout << "Welcome to horde\n";
				unit Vasiliy(50, 15, 200);
			}
			if (race == "human")
			{
				cout << "Welcome to aliance\n";
				unit Vasiliy(46, 30, 175);
			}		
			return 0;
	}
 		show_who(wlk_obj);				
			
			int battle; 
			{
	bool attack;
		
	cout << "Write attack to damage the enemy \n";
	cin >> attack; 
	attack = true;
		if (attack == true) 
 			 {
				unit Skeleton (30, 6, 40);
				
				Skeleton operator = (Skeleton &unit)
				{
					return Skeleton(this->dmg = unit.dmg, this->def = unit.def, this->hp = unit.hp);
				}

		bool attack = false;
				
  			}
		if (attack == false) 
  			{
				cout << "You noob";
  			}
  			
		return battle;
		}
		
