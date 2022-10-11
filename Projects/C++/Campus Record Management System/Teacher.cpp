#ifndef TEACHER
#define TEACHER

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

#include "User.cpp"
#include "SLL.cpp"

using namespace std;

string sessions[4] = {"Freshman Year", "Sophomore", "Junior Year", "Senior Year"};

class Teacher: public User{
    string fName, sName, sOne, sTwo;
    public:
        //Setters
        void setFirstName(string);
        void setSecondName(string);
        void setSessionOne(int);
        void setSessionTwo(int);
        //Getters
        string getFirstName() const;
        string getSecondName() const;
        string getSessionOne() const;
        string getSessionTwo() const;

        void setValues()
        {
            bool flag1, flag2;
            flag1 = flag2 = true;
            string fName, sName;
            int s1, s2;
            cout << "Enter first name: ";
            cin >> fName;
            cout << "Enter second name: ";
            cin >> sName;
            cout << "Enter session(s):\n";
            cout << "Select:\n";
            cout << "Press:\n";
            cout << "1 for freshman year\n";
            cout << "2 for sophomore year\n";
            cout << "3 for junior year\n";
            cout << "4 for senior year\n\n";
            while(flag1 || flag2)
            {
                if(flag1)
                {
                    cout << "=>";
                    cin >> s1;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if((s1 < 1 || s1 > 4))
                    {
                        cout << "Enter number in range 1-4\n";
                    }
                    else
                        flag1 = false;    
                }
                if(!flag1 && flag2)
                {
                    cout << "=>";
                    cin >> s2;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if((s2 < 1 || s2 > 4) && s2 != s1)
                    {
                        cout << "Enter number in range 1-4\n";
                    }
                    else
                        flag2 = false;    
                }
            }
            this->setFirstName(fName);
            this->setSecondName(sName);
            this->setSessionOne(s1);
            this->setSessionTwo(s2);
        }

        //Other class functions
        Node<Teacher>* createList(int);
        void writeTeachers();
        Node<Teacher>* readTeachers();
        void updateTeacher();
        void deleteTeacher();
        void displayTeachers();
        vector<int> getIds();
        bool doesExist(int, vector<int>);
        void displayProfile(int);
        void displayClasses(int);

        //Operators
        bool operator < (const Teacher S)
        {
            if(this->getID() < S.getID())
                return true;
            return false;
        }
        bool operator > (const Teacher S)
        {
            if(this->getID() > S.getID())
                return true;
            return false;
        }
        friend ostream& operator << (ostream &out, const Teacher S)
        {
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
            out << S.getSessionOne() << " || " << S.getSessionTwo();
            return out;
        }
        friend istream& operator >> (istream &in, Teacher &S)
        {
            bool flag1, flag2;
            flag1 = flag2 = true;
            string fName, sName;
            int id, s1, s2;
            cout << "Enter id: ";
            in >> id;
            cout << "Enter first name: ";
            in >> fName;
            cout << "Enter second name: ";
            in >> sName;
            cout << "Enter session(s):\n";
            cout << "Select:\n";
            cout << "Press:\n";
            cout << "1 for freshman year\n";
            cout << "2 for sophomore year\n";
            cout << "3 for junior year\n";
            cout << "4 for senior year\n\n";
            while(flag1 || flag2)
            {
                if(flag1)
                {
                    cout << "=>";
                    cin >> s1;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if((s1 < 1 || s1 > 4))
                    {
                        cout << "Enter number in range 1-4\n";
                    }
                    else
                        flag1 = false;    
                }
                if(!flag1 && flag2)
                {
                    cout << "=>";
                    cin >> s2;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if((s2 < 1 || s2 > 4) && s2 != s1)
                    {
                        cout << "Enter number in range 1-4\n";
                    }
                    else
                        flag2 = false;    
                }
            }
            S.setID(id);
            S.setFirstName(fName);
            S.setSecondName(sName);
            S.setSessionOne(s1);
            S.setSessionTwo(s2);
            return in;
        }
};

void Teacher::setFirstName(string name)
{
    this->fName = name;
}

void Teacher::setSecondName(string name)
{
    this->sName = name;
}

void Teacher::setSessionOne(int a)
{
    this->sOne = sessions[a-1];
}

void Teacher::setSessionTwo(int a)
{
    this->sTwo = sessions[a-1];
}

string Teacher::getFirstName() const
{
    return this->fName;
}

string Teacher::getSecondName() const
{
    return this->sName;
}

string Teacher::getSessionOne() const
{
    return this->sOne;
}

string Teacher::getSessionTwo() const
{
    return this->sTwo;
}

Node<Teacher>* Teacher::createList(int n)
{
    string firstName, secondName;
    int s1, s2;
    bool flag1, flag2;
    flag1 = flag2 = true;
    LinkedList<Teacher> List;
    Teacher S;
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
            if(doesExist(id, getIds()))
            {
                cout << "Teacher with this id already exists\n";
                cout << "select appropriate option for updation\n";
            }   
            else
            {
                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter second name: ";
                cin >> secondName;
                
                cout << "Enter session(s):\n";
                cout << "Select:\n";
                cout << "Press:\n";
                cout << "1 for freshman year\n";
                cout << "2 for sophomore year\n";
                cout << "3 for junior year\n";
                cout << "4 for senior year\n\n";
                while(flag1 || flag2)
                {
                    if(flag1)
                    {
                        cout << "Session one=> ";
                        cin >> s1;
                        if(cin.fail())
                        {
                            cin.clear(); cin.ignore(512, '\n');
                            cout << "Not a number\n";
                        }
                        if((s1 < 1 || s1 > 4))
                        {
                            cout << "Enter number in range 1-4 & not as same as first number\n";
                        }
                        else
                            flag1 = false;    
                    }
                    if(!flag1 && flag2)
                    {
                        cout << "Session two=> ";
                        cin >> s2;
                        if(cin.fail())
                        {
                            cin.clear(); cin.ignore(512, '\n');
                            cout << "Not a number\n";
                        }
                        if((s2 < 1 || s2 > 4) && s2 != s1)
                        {
                            cout << "Enter number in range 1-4\n";
                        }
                        else
                            flag2 = false;    
                    }                
            }
            flag1 = flag2 = true;
            S.setID(id);
            S.setFirstName(firstName);
            S.setSecondName(secondName);
            S.setSessionOne(s1);
            S.setSessionTwo(s2);
            List.InsertAtTail(S);
            }
            i++;
        }
        else
        {
            cout << "Invalid Range!\nID must be from 0 to 50\n";
        }
    }
    return List.getHead();
}

void Teacher::writeTeachers()
{
    displayTeachers();
    int n, id, i = 0;
    string  firstName, secondName, sessionOne, sessionTwo;
    Teacher S;
    LinkedList<Teacher> List;
    // file pointer
    fstream fout;
    // opens an existing csv file or creates a new file.
    fout.open("teachers.csv", ios::out | ios::app);
    cout << "Type number of teachers you want to add: ";
    cin >> n;
    if(n < 1 || n > 50)
    { 
        cout << "value must be in range 1-50\n";
        return;
    }
    cout << "Enter the details of teachers:\n";
    List.setHead(createList(n));
    Node<Teacher> *p = List.getHead();
    for (i = 0; i < List.Count(); i++)
    {
        id = p->data.getID();
        firstName = p->data.getFirstName();
        secondName = p->data.getSecondName();
        sessionOne = p->data.getSessionOne();
        sessionTwo = p->data.getSessionTwo();
        fout << id << ", " << firstName << ", " << secondName << ", " << sessionOne << 
        ", "<< sessionTwo <<  "\n";
        p = p->next;
    }
}

Node<Teacher>* Teacher::readTeachers()
{
    vector<vector<string>> content;
    vector<string> row;
    int i, s1, s2;
    string line, word;
    Teacher S;
    LinkedList<Teacher> List;
    // file pointer
    fstream fin;
    // opens an existing csv file.
    fin.open("teachers.csv", ios::in);
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
        if(content[i][3] == (" "+sessions[0]))
            s1 = 1;
        else if(content[i][3] == (" "+sessions[1]))
            s1 = 2;
        else if(content[i][3] == (" "+sessions[2]))
            s1 = 3;
        else
            s1 = 4;
        S.setSessionOne(s1);
        if(content[i][4] == (" "+sessions[0]))
            s2 = 1;
        else if(content[i][4] == (" "+sessions[1]))
            s2 = 2;
        else if(content[i][4] == (" "+sessions[2]))
            s2 = 3;
        else
            s2 = 4;
        S.setSessionTwo(s2);
        List.InsertAtTail(S);
    }
    List.mergeSort();
    return List.getHead();
}

void Teacher::updateTeacher()
{
    displayTeachers();
    int updateId, id, rowSize, i, flag = 0;
    string fileName, line, word, sName, fName, session;
    vector<string> row;
    Teacher T;
    enterUpdId:
    cout << "Enter teacher id: ";
    cin >> updateId;
    if(!doesExist(updateId, getIds()))
    {   
        cout << "Student with this ID does not exist\n\n";
        goto enterUpdId;
    }
    // File pointer
    fstream fin, fout;
  
    // Open an existing record
    fin.open("teachers.csv", ios::in);
  
    // Create a new file to store updated data
    fout.open("teachersnew.csv", ios::out);

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
            T.setID(updateId);
            T.setValues();

            if (!fin.eof())
            {
                fout << T.getID() << ", " << T.getFirstName() << ", " << T.getSecondName() << ", " << T.getSessionOne() << ", "<< T.getSessionTwo() << "\n";
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

    string fileToDelete = "teachers.csv", fileToRename = "teachersnew.csv";
    // removing the existing file
    remove(fileToDelete.c_str());
  
    // renaming the updated file with the existing file name
    rename(fileToRename.c_str(), fileToDelete.c_str());

}

void Teacher::deleteTeacher()
{
    displayTeachers();
    int id, delId, rowSize, i;
    string line, word;
    vector<string> row;
    
    cout << "Enter teacher id: ";
    cin >> delId;
    if(!doesExist(delId, getIds()))
    {   
        cout << "Student with this ID does not exist\n";
        return;
    }
    // File pointer
    fstream fin, fout;
  
    // Open an existing record
    fin.open("teachers.csv", ios::in);
  
    // Create a new file to store updated data
    fout.open("teachersnew.csv", ios::out);

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

    string fileToDelete = "teachers.csv", fileToRename = "teachersnew.csv";

    // removing the existing file
    remove(fileToDelete.c_str());
  
    // renaming the updated file with the existing file name
    rename(fileToRename.c_str(), fileToDelete.c_str());
}

void Teacher::displayTeachers()
{
    Node<Teacher> *p = readTeachers();
    cout << "Id\t  Name\t\t\t  Sessions\n\n";
    while(p)
    {
        cout << p->data << '\n';
        cout << "--------------------------------------------------\n";
        p = p->next;
    }
}

vector<int> Teacher::getIds()
{
    vector<int> ids;
    Node<Teacher> *p = readTeachers();
    while(p)
    {
        ids.push_back(p->data.getID());
        p = p->next;
    }
    return ids;
}

bool Teacher::doesExist(int id, vector<int> ids)
{
    int i;
    for (i = 0; i < ids.size(); i++)
        if(id == ids.at(i))
            return true;
    return false;
}

void Teacher::displayProfile(int id)
{
    Node<Teacher> *p = readTeachers();
    
    while(p->data.getID() != id)
    {
        p = p->next;
    }
    cout << "Id: " << id << '\n';
    cout << "Name: " << p->data.getFirstName() << ' ' << p->data.getSecondName() << '\n';
    cout << "Session(s): " << p->data.getSessionOne() << " & " << p->data.getSessionTwo()  << '\n';
    cout << "-----------------------------\n";
}

void Teacher::displayClasses(int id)
{
    Node<Teacher> *p = readTeachers();
    
    while(p->data.getID() != id)
    {
        p = p->next;
    }
    cout << p->data.getFirstName() << " your schedule is as follows\n";
    cout << "First lecture is in: " << p->data.getSessionOne() << '\n';
    cout << "Second lecture is in: " << p->data.getSessionTwo() << '\n';
}

#endif