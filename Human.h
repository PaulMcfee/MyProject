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

		int getAge() {
			return this->age;
		}

		string getFName() {
			return this->fname;
		}

		string getLname() {
			return this->lname;
		}

		// i added getters
};


#endif //HUMAN_H