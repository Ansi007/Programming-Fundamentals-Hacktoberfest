//
//Objective
//In this challenge, we're going to learn about the difference between a class and an instance; 
// because this is an Object Oriented concept, it's only enabled in certain languages.Check out 
// the Tutorial tab for learning materialsand an instructional video!


//Task
//Write a Person class with an instance variable, age, and a constructor that takes an integer, initialAge, 
// as a parameter.The constructor must assign initialAge to age after confirming the argument passed 
// as initialAge is not negative; if a negative argument is passed as initialAge, the constructor should set age  to 0 and 
// print Age is not valid, setting age to 0..In addition, you must write the following instance methods :
//yearPasses() should increase the age instance variable by 1.
//amIOld() should perform the following conditional actions :
//If age<13 , print You are young..
//If age>=13 and age<18, print You are a teenager..
//Otherwise, print You are old..


//To help you learn by exampleand complete this challenge, much of the code is provided for you, 
// but you'll be writing everything in the future. The code that creates each instance of your Person 
// class is in the main method. Don't worry if you don't understand it all quite yet!


//The first line contains an integer, (the number of test cases), and the  subsequent lines each contain
//  an integer denoting the  of a Person instance.


//Sample Input
//4
//- 1
//10
//16
//18



//Sample Output
//Age is not valid, setting age to 0.
//You are young.
//You are young.
//
//You are young.
//You are a teenager.
//
//You are a teenager.
//You are old.
//
//You are old.
//You are old.






using namespace std;
#include <iostream>
class Person
{
public:
    int age;
    Person();
    Person(int initialAge);
    int getAge();
    void amIOld();
    void yearPasses();
};

Person::Person()
{
    age = 0;
}
Person::Person(int initialAge)
{
    if (initialAge < 0)
    {
        age = 0;
        cout << "Age is not valid, setting age to 0.\n";
    }
    else
        age = initialAge;
}

int Person::getAge()
{
    return age;
}

void Person::amIOld()
{
    if (age < 13)
    {
        cout << "You are young.\n";
    }
    else if ((age >= 13) && (age < 18))
    {
        cout << "You are a teenager.\n";
    }
    else
    {
        cout << "You are old.\n";
    }
}

void Person::yearPasses()
{
    age += 1;
}

int main() {
    int t;
    int age;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();

        cout << '\n';
    }

    return 0;
}