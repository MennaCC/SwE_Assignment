#pragma 
#include <string>

using namespace std;

class Person{

private:
	static const int LIMIT = 25;
	string lname;
	//char fname[LIMIT];
	//fname must be a pointer to array of char (dynamic array) or a string to be set by string
	string fname; 
public:
	Person(){
		lname = "";
		fname[0] = '/0';
	}
	Person(const string &ln, const char *fn = "HeyYou"){
		lname = ln;
 
		bool reachedTheEnd = false;
		fname = fn;
		/*for(int i=0; i<LIMIT && !reachedTheEnd; i++){
			fname[i] = *(fn+i);
			if(*(fn+i)!='/0')
				reachedTheEnd = true;
		}*/
	}

	//prototypes
	void show() const;
	void showFormal() const;
};