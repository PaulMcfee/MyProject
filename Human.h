#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;

class Human {
	private:
		string fname;
		string lname;
		int age;




	public:

		Human() {
			age = 0;
			fname = "";
			lname = "";
		}

		Human(int age, string lname, string fname) {
			this->age = age;
			this->fname = fname;
			this->lname = lname;
		}

		void incrementAge(){
			this->age++;
		}
};

#endif //HUMAN_H