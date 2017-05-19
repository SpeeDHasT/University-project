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
	class neutral unit
		{
			private:
			int dmg2, hp3;
			int static arm1;
			public: 
			unit (int dmg2, int static arm1, int hp3) 
				{
					this -> dmg2 = dmg2;
					this -> arm1 = arm1;
					this -> hp3 = hp3;
					
					class tip
						{
							int inv = invulnerable;
							Bool inv = true;
						}
				}
				};		
	
	#endif
