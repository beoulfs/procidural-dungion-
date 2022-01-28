
export module Module;
#include <string>
#include <iostream>
#include <ctime>


export std::string progression(){
	srand(time(NULL));
	int temp = 0;
	temp = rand() % 20 + 1;
	if (temp = 1) {
		return "a goblin barakade with 1d6 goblins \n";
	}
	else if (temp = 2) {
		return "dead end \n";
	}
	else if (temp = 3) {
		return "path split \n";
	}
	else if (temp = 4) {
		return "small stream, dc 10 dex to cross \n";
	}
	else if (temp = 5) {
		return "spike trap \n";
	}
	else if (temp = 6) {
		return "blank tripwire \n";
	}
	else if (temp = 7) {
		return "path loops back \n";
	}
	else if (temp = 8) {
		return "goblin patrole \n";
	}
	else if (temp = 9) {
		return "hole \n";
	}
	else if (temp = 10) {
		return "monument \n";
	}
	else if (temp = 11) {
		return "goblin barakade \n";
	}
	else if (temp = 12) {
		return "locked door \n";
	}
	else if (temp = 13) {
		return "path fork \n";
	}
	else if (temp = 14) {
		return "notes in an unkown lagnguige writtan on the wall \n";
	}
	else if (temp = 15) {
		return " goblin knight \n";
	} 
	else if (temp = 16){
		return "goblin patrole \n";
	}
	else if (temp = 17) {
		return "zombi goblin \n";
	}
	else if (temp = 18) {
		return "pit trap \n";
	}
	else if (temp = 19) {
		return "rendom explosion \n";
	}
	else if (temp = 20) {
		return "monument";
	}
	

}