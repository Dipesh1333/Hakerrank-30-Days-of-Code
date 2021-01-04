/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Day 12: Inheritance

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
    private:
        vector<int> testScores;  
    public:
       Student(string firstName, string lastName, int identification, vector<int>scores) : Person( firstName,  lastName,  identification), testScores(scores){}
            
            char calculate()
            {
               int avg = 0;
               for(int i=0; i<testScores.size(); i++)
                {
                avg += testScores[i];
                }

              avg = avg/testScores.size();
       
        if(avg >= 90 && avg <= 100)
            cout<< "O";
        else if(avg >= 80 && avg < 90)
            cout<< "A";
        else if(avg >= 70 && avg < 80)
            cout<< "E";
        else if(avg >= 55 && avg < 70)
            cout<< "P";
        else if(avg >= 40 && avg < 55)
            cout<< "D";
        else
            cout<< "T";
       
    }
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}