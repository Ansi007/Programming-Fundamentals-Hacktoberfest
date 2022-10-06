//Task
//You are given two classes, Person and Student, where Person is the base classand Student is the derived class.
// Completed code for Person and a declaration for Student are provided for you in the editor.Observe that
//  Student inherits all the properties of Person.


//Complete the Student class by writing the following :
//
//A Student class constructor, which has  parameters :
//A string, .
//A string, .
//An integer, .
//An integer array(or vector) of test scores, .
//A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
//Grading.png



//Sample Input
//
//Heraldo Memelli 8135627
//2
//100 80




//Sample Output
//
//Name : Memelli, Heraldo
//ID : 8135627
//Grade : O
//Explanation
//
//This student had  scores to average : and .The student's average grade is . An average grade of  corresponds to the letter grade , so the calculate() method should return the character'O'.

















#include <iostream>
#include <vector>

using namespace std;


class Personn
{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Personn()
    {
        firstName = "";
        lastName = "";
        id = 0;
    }
    Personn(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Personn
{
private:
    vector<int> testScores;
public:
    Student()
    {
        firstName = "";
        lastName = "";
        id = 0;
        testScores = vector<int>();
    }
    Student(string firstName, string lastName, int id, vector<int>v)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = id;
        testScores = v;
    }
    char calculate()
    {
        int sum = 0;
        char c = '0';
        for (int i = 0; i < testScores.size(); i++)
        {
            sum += testScores[i];
        }
        sum /= (testScores.size());//average

        if (sum >= 90 && sum <= 100)
        {
            c = 'O';
        }
        else if (sum >= 80 && sum < 90)
        {
            c = 'E';
        }
        else if (sum >= 70 && sum < 80)
        {
            c = 'A';
        }
        else if (sum >= 55 && sum < 70)
        {
            c = 'P';
        }
        else if (sum >= 40 && sum < 55)
        {
            c = 'D';
        }
        else if (sum < 40)
        {
            c = 'T';
        }
        return c;
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}