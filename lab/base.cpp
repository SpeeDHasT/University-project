
#include <iostream.h>


class Base {
public:
virtual void who() 
	{
	cout << "Enter your name ";
	}
	};
		class wlk_d: public Base {
		public:
		void who() 
			{ 
			cout << "Welcome to battle \n";
			}
			};
			void show_who (Base &r) 
				{
				r.who();
				}
