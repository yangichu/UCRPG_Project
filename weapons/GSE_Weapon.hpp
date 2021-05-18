#ifndef __GSE_Weapon__
#define __GSE_Weapon__

#include "weapon.hpp"

using namespace std;

class GSE_Weapon: public Weapon{
	public:
		GSE_Weapon(int num):Weapon(num){
			name = adj + " Clipboard";
		}
		
		virtual void weaponDetails() const{
			cout << "Weapon Name: " << name << endl;
			cout << "With a Clipboard, you attack twice dealing damage equivalent to half of your DEF." << endl;
		}
};

#endif
