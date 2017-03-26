	#include <iostream>
	#include <string>
	using namespace std;
	#include "unit.cpp"
	#include "test.cpp"
	int main ()
	{
		string name;
		string race;
		
		cout << "Enter your name ";
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
				unit Vasiliy(40, 30, 175);
			}		
			return 0;
	}
			int battle; 
			{
	bool attack;
		
	cout << "Write attack to damage the enemy \n";
	cin >> attack; 
	attack = true;
		if (attack == true) 
 			 {
				int test::N = 30; 
				unit Skeleton (30, 6, 175 - N);
		bool attack = false;
				
  			}
		if (attack == false) 
  			{
				cout << "You noob";
  			}
		return battle;
		}
