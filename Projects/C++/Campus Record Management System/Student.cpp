#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

#include "User.cpp"
#include "SLL.cpp"

using namespace std;



/*
----->Show<-----
ID  Name        Session   
*/
class Student: public User{
    string fName, sName;
    string session;
    public:
        //Setters
        void setFirstName(string);
        void setSecondName(string);
        void setSession(string);
        //Getters
        string getFirstName() const;
        string getSecondName() const;
        string getSession() const;

        //Other class functions
        Node<Student>* createList(int, string, int);
        void writeStudents(int sessionChoice);
        Node<Student>* readStudents(int sessionChoice);
        void displayStudents(int sessionChoice);
        void deleteStudent(int);
        void updateStudent(int );
        vector<int> getIds(int);
        bool doesExist(int, vector<int>);
        void displayProfile(int, int);

        //Operators
        bool operator < (const Student S)
        {
            if(this->getID() < S.getID())
                return true;
            return false;
        }
        bool operator > (const Student S)
        {
            if(this->getID() > S.getID())
                return true;
            return false;
        }
        friend ostream& operator << (ostream &out, const Student S)
        {
            //cout << User;
            out << S.getID() << "\t";
            if(strLen(S.getSecondName()) > 8 || strLen(S.getFirstName()) > 8 )
            {
                out << S.getFirstName() << ' ';
                out << S.getSecondName() << "\t";    
            }
            else
            {
                out << S.getFirstName() << ' ';
                out << S.getSecondName() << "\t\t";
            }    
            out << S.getSession();
            return out;
        }
        friend istream &operator>>(istream &in, Student &S)
        {
            string fName, sName, session;
            int id;
            cout << "Enter id: ";
            in >> id;
            cout << "Enter first name: ";
            in >> fName;
            cout << "Enter second name: ";
            in >> sName;
            cout << "Enter session: ";
            in >> session;
            S.setID(id);
            S.setFirstName(fName);
            S.setSecondName(sName);
            S.setSession(session);
            return in;

        }

};

void Student::setFirstName(string name)
{
    this->fName = name;
}

void Student::setSecondName(string name)
{
    this->sName = name;
}

void Student::setSession(string session)
{
    this->session = session;
}

string Student::getFirstName() const
{
    return this->fName;
}

string Student::getSecondName() const
{
    return this->sName;
}

string Student::getSession() const
{
    return this->session;
}

Node<Student>* Student::createList(int sessionChoice,string session, int n)
{
    string fileName, firstName, secondName;
    LinkedList<Student> List;
    Student S;
    int id, i = 0;
    while(i<n)
    {
        cout << "Enter id: ";
        cin >> id;
        if (cin.fail())
        {
            cin.clear(); cin.ignore(512, '\n');
            cout << "Not a number\n";
        }
        if(id > 0 && id < 51)
        {
            if(doesExist(id, getIds(sessionChoice)))
            {
                cout << "Student with this id already exists\n";
                cout << "select appropriate option for updation\n";
            }   
            else
            {
                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter second name: ";
                cin >> secondName;
                S.setID(id);
                S.setFirstName(firstName);
                S.setSecondName(secondName);
                S.setSession(session);
                List.InsertAtTail(S);
            }
            i++;
        }
        else
        {
            cout << "Invalid Range!\nID must be from 0 t0 50\n";
        }
    }
    return List.getHead();
}

void Student::writeStudents(int sessionChoice)
{
    displayStudents(sessionChoice);
    int n, id, i = 0;
    string fileName, firstName, secondName, session;
    Student S;
    LinkedList<Student> List;
    // file pointer
    fstream fout;
    // opens an existing csv file or creates a new file. 
    if(sessionChoice == 1)
    {
        fileName = "freshmanYear";
        session = "Freshman Year";
    }
    else if(sessionChoice == 2)
    {
        fileName = "sophomore";
        session = "Sophomore";
    }    
    else if (sessionChoice == 3)
    {
        fileName = "juniorYear";
        session = "Junior Year";
    }
    else
    {
        fileName = "seniorYear";
        session = "Senior Year";
    }
    fout.open(fileName+".csv", ios::out | ios::app);
    cout << "Type number of students you want to add: ";
    cin >> n;
    if(n < 1 || n > 50)
    { 
        cout << "value must be in range 1-50\n";
        return;
    }
    cout << "Enter the details of student:\n";
    List.setHead(createList(sessionChoice,session, n));
    Node<Student> *p = List.getHead();
    for (i = 0; i < List.Count(); i++)
    {
        id = p->data.getID();
        firstName = p->data.getFirstName();
        secondName = p->data.getSecondName();
        fout << id << ", " << firstName << ", " << secondName << ", " << session << "\n";
        p = p->next;
    }
}

void Student::updateStudent(int sessionChoice)
{
    displayStudents(sessionChoice);
    int updateId, id, rowSize, i, flag = 0;
    string fileName, line, word, sName, fName, session;
    vector<string> row;
    enterUpdateId:
    cout << "Enter student id: ";
    cin >> updateId;
    if(!doesExist(updateId, getIds(sessionChoice)))
    {   
        cout << "Student with this ID does not exist\n\n";
        goto enterUpdateId;
    }
    if(sessionChoice == 1)
    {
        fileName = "freshmanYear";
        session = "Freshman Year";
    }
    else if(sessionChoice == 2)
    {
        fileName = "sophomore";
        session = "Sophomore";
    }    
    else if (sessionChoice == 3)
    {
        fileName = "juniorYear";
        session = "Junior Year";
    }
    else
    {
        fileName = "seniorYear";
        session = "Senior Year";
    }
    // File pointer
    fstream fin, fout;
  
    // Open an existing record
    fin.open(fileName+".csv", ios::in);
  
    // Create a new file to store updated data
    fout.open(fileName+"new.csv", ios::out);

    while (!fin.eof())
    {
        row.clear();
        getline(fin, line);
        stringstream s(line);
        while (getline(s, word, ','))
        {
            row.push_back(word);
        }
        id = stoi(row[0]);
        rowSize = row.size();

        if (id == updateId && !flag)
        {
            flag = 1;
            cout << "Enter first name: ";
            cin >> fName;
            cout << "Enter second name: ";
            cin >> sName;
            if (!fin.eof())
            {
                fout << id << ", " << fName << ", " << sName << ", " << session << "\n";
            }
        }    
        else
        {
            if (!fin.eof())
            {
                for (i = 0; i < rowSize - 1; i++)
                {
                    // writing other existing records
                    // into the new file using fout.
                    fout << row[i] << ",";
                }
                // the last column data ends with a '\n'
                fout << row[rowSize - 1] << "\n";
            }
        }
        if (fin.eof())
            break;
    }
    fin.close();
    fout.close();

    string fileToDelete = fileName+".csv", fileToRename = fileName+"new.csv";
    // removing the existing file
    remove(fileToDelete.c_str());
  
    // renaming the updated file with the existing file name
    rename(fileToRename.c_str(), fileToDelete.c_str());

}

Node<Student>* Student::readStudents(int sessionChoice)
{
    vector<vector<string>> content;
    vector<string> row;
    int i;
    string fileName, line, word;
    Student S;
    LinkedList<Student> List;
    // file pointer
    fstream fin;
    if (sessionChoice == 1)
        fileName = "freshmanYear";
    else if (sessionChoice == 2)
        fileName = "sophomore";
    else if (sessionChoice == 3)
        fileName = "juniorYear";
    else
        fileName = "seniorYear";
    // opens an existing csv file.
    fin.open(fileName + ".csv", ios::in);
    if (fin.is_open())
    {
        while (getline(fin, line))
        {
            row.clear();
            stringstream str(line);
            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else
        cout<<"Could not open the file\n";
    for(i=0;i<content.size();i++)
    {
        S.setID(stoi(content[i][0]));
        S.setFirstName(content[i][1]);
        S.setSecondName(content[i][2]);
        S.setSession(content[i][3]);
        List.InsertAtTail(S);
    }
    List.mergeSort();
    return List.getHead();
}

void Student::displayStudents(int sessionChoice)
{
    Node<Student> *p = readStudents(sessionChoice);
    cout << "Id\t  Name\t\t\t  Session\n\n";
    while(p)
    {
        cout << p->data << '\n';
        cout << "--------------------------------------------------\n";

        p = p->next;
    }
}

void Student::deleteStudent(int sessionChoice)
{
    displayStudents(sessionChoice);
    int id, delId, rowSize, i;
    string fileName, line, word;
    vector<string> row;
    enterDelId:
    cout << "Enter student id: ";
    cin >> delId;
    if(!doesExist(delId, getIds(sessionChoice)))
    {   
        cout << "Student with this ID does not exist\n\n";
        goto enterDelId;
    }
    if(sessionChoice == 1)
        fileName = "freshmanYear";
    else if(sessionChoice == 2)
        fileName = "sophomore";
    else if (sessionChoice == 3)
        fileName = "juniorYear";
    else
        fileName = "seniorYear";
    // File pointer
    fstream fin, fout;
  
    // Open an existing record
    fin.open(fileName+".csv", ios::in);
  
    // Create a new file to store updated data
    fout.open(fileName+"new.csv", ios::out);

    //get id from the user
    

    //traverse the file
    while (!fin.eof())
    {    
        row.clear();
        getline(fin, line);
        stringstream s(line);
        while (getline(s, word, ','))
        {
            row.push_back(word);
        }
        id = stoi(row[0]);
        rowSize = row.size();
        if(delId != id)
        {
            if (!fin.eof())
            {
                for (i = 0; i < rowSize - 1; i++)
                {
                    // writing other existing records
                    // into the new file using fout.
                    fout << row[i] << ", ";
                }
                // the last column data ends with a '\n'
                fout << row[rowSize - 1] << "\n";
            }
        }
        if (fin.eof())
            break;
    }

    fin.close();
    fout.close();

    string fileToDelete = fileName+".csv", fileToRename = fileName+"new.csv";

    // system(fileToDelete.c_str());
    // system(fileToRename.c_str());

    // removing the existing file
    remove(fileToDelete.c_str());
  
    // renaming the updated file with the existing file name
    rename(fileToRename.c_str(), fileToDelete.c_str());
}

vector<int> Student::getIds(int sessionChoice)
{
    vector<int> ids;
    Node<Student> *p = readStudents(sessionChoice);
    while(p)
    {
        ids.push_back(p->data.getID());
        p = p->next;
    }
    return ids;
}

bool Student::doesExist(int id, vector<int> ids)
{
    int i;
    for (i = 0; i < ids.size(); i++)
        if(id == ids.at(i))
            return true;
    return false;
}

void Student::displayProfile(int sessionChoice, int id)
{

    Node<Student> *p = readStudents(sessionChoice);
    while(p->data.getID() != id)
    {
        p = p->next;
    }
    cout << "Id: " << id << '\n';
    cout << "Name: " << p->data.getFirstName() << ' ' << p->data.getSecondName() << '\n';
    cout << "Session: " << p->data.getSession() << '\n';
    cout << "-----------------------------\n";
}

#endif