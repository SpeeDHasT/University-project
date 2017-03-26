	#ifndef CLASS_U_
	#define CLASS_U_
	class unit
		{
			private:
			int dmg, hp;
			int static arm;
			public: 
			unit (int dmg, int static arm, int hp) // объявление конструктора с указателем this
				{
					this -> dmg = dmg;
					this -> arm = arm;
					this -> hp = hp;
				}
		};
		
		unit()
		{
			dmg = 0;
		    arm = 0;
		    hp = 0;
		}
		~unit()
		{
			cout << "\nDestructor was used here\n";
		}
	
	
	#endif
