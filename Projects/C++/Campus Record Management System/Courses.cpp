#ifndef COURSE
#define COURSE

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <cctype>
#include <string>



#include "SLL.cpp"

using namespace std;

string sess[4] = {"Freshman Year", "Sophomore", "Junior Year", "Senior Year"};

string makeLowercase(string s)
{
    int i;
    for (i = 0; s[i]!='\0'; i++) 
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

class Course{
    int id;
    string courseTitle;

public: 
    //Setters   
    void setId(int);
    void setCourseTitle(string);

    //Getters
    int getId() const;
    string getCourseTitle() const;

    //Other class functions
    Node<Course> *createList(int sessionChoice, int n);
    void writeCourses(int sessionChoice);
    Node<Course> *readCourses(int sessionChoice);
    void displayCourses(int sessionChoice);
    void updateCourse(int sessionChoice);
    void deleteCourse(int sessionChoice);
    vector<int> getIds(int);
    bool idExists(int, vector<int>);
    vector<string> getTitles(int);
    bool titleExists(string, vector<string>);

    //Operators
    bool operator < (const Course S)
    {
        if(this->getId() < S.getId())
            return true;
        return false;
    }
    bool operator > (const Course S)
    {
        if(this->getId() > S.getId())
            return true;
        return false;
    }
    friend ostream& operator << (ostream &out, const Course S)
    {
        out << S.getId() << "\t";
        out << S.getCourseTitle();
        return out;
    }
    friend istream &operator>>(istream &in, Course &S)
    {
        string cTitle;
        int id;
        cout << "Enter id: ";
        in >> id;
        cout << "Enter course title: ";
        in >> cTitle;
        S.setId(id);
        S.setCourseTitle(cTitle);
        return in;
    }

};

void Course::setId(int id)
{
    this->id = id;
}

void Course::setCourseTitle(string title)
{
    this->courseTitle = title;
}

int Course::getId() const
{
    return this->id;
}

string Course::getCourseTitle() const
{
    return this->courseTitle;
}

vector<int> Course::getIds(int sessionChoice)
{
    vector<int> ids;
    Node<Course> *p = readCourses(sessionChoice);
    while(p)
    {
        ids.push_back(p->data.getId());
        p = p->next;
    }
    return ids;
}

bool Course::idExists(int id, vector<int> ids)
{
    int i;
    for (i = 0; i < ids.size(); i++)
        if(id == ids.at(i))
            return true;
    return false;
}

vector<string> Course::getTitles(int sessionChoice)
{
    vector<string> titles;
    Node<Course> *p = readCourses(sessionChoice);
    while(p)
    {
        titles.push_back(p->data.getCourseTitle());
        p = p->next;
    }
    return titles;
}

bool Course::titleExists(string title, vector<string> titles)
{
    int i;
    for (i = 0; i < titles.size(); i++)
        if(title == titles.at(i))
            return true;
    return false;
}

Node<Course>* Course::createList(int sessionChoice, int n)
{
    int titleFlag, idFlag;
    string title;
    LinkedList<Course> List;
    Course S;
    int id, i = 0;
    while(i<n)
    {
        idFlag = titleFlag =false;
        cout << "Enter id: ";
        cin >> id;
        if (cin.fail())
        {
            cin.clear(); cin.ignore(512, '\n');
            cout << "Not a number\n";
        }
        if(id > 0 && id < 7)
        {
            if(idExists(id, getIds(sessionChoice)))
            {
                idFlag = true;
                cout << "Course with this id already exists\n";
                cout << "select appropriate option for updation\n";
            }
            else
            {
                cout << "Enter course title: ";
                cin.ignore();
                getline(cin, title);
                // cin >> title;
                title = makeLowercase(title);
                if (titleExists(title, getTitles(sessionChoice)))
                {
                    titleFlag = true;
                    cout << "Course with this title already exists\n";
                    cout << "select appropriate option for updation\n";
                }
                else
                {
                    S.setId(id);
                    S.setCourseTitle(title);
                    List.InsertAtTail(S);    
                    i++;
                }
            }
        }
        else
        {
            cout << "Enter id in range 1-6\n";
        }
        
    }
    return List.getHead();
}

void Course::writeCourses(int sessionChoice)
{
    //DISPLAY COURSES
    displayCourses(sessionChoice);
    fstream fout;
    string fileName, title;
    int n, id, i;
    LinkedList<Course> List;

    if(sessionChoice == 1)
    {
        fileName = "freshmanCourses";
    }
    else if(sessionChoice == 2)
    {
        fileName = "sophomoreCourses";
    }    
    else if (sessionChoice == 3)
    {
        fileName = "juniorCourses";
    }
    else
    {
        fileName = "seniorCourses";
    }

    fout.open(fileName+".csv", ios::out | ios::app);

    cout << "Type number of courses you want to add: ";
    cin >> n;
    if(n < 1 || n > 6)
    { 
        cout << "value must be in range 1-6\n";
        return;
    }

    List.setHead(createList(sessionChoice, n));
    Node<Course> *p = List.getHead();
    for (i = 0; i < List.Count() ; i++)
    {
        id = p->data.getId();
        title = p->data.getCourseTitle();
        fout << id << ", " << title << "\n";
        p = p->next;
    }
}   

Node<Course>* Course::readCourses(int sessionChoice)
{
    vector<vector<string>> content;
    vector<string> row;
    int i;
    string fileName, line, word;
    Course S;
    LinkedList<Course> List;
    // file pointer
    fstream fin;
    if(sessionChoice == 1)
        fileName = "freshmanCourses";
    else if(sessionChoice == 2)
        fileName = "sophomoreCourses";
    else if (sessionChoice == 3)
        fileName = "juniorCourses";
    else
        fileName = "seniorCourses";
    // opens an existing csv file. 
    fin.open(fileName+".csv", ios::in);
    if(fin.is_open())
    {
        while(getline(fin, line))
        {
            row.clear();    
            stringstream str(line);
            while(getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else
        cout<<"Could not open the file\n";
    for(i=0;i<content.size();i++)
    {
        S.setId(stoi(content[i][0]));
        S.setCourseTitle(content[i][1]);
        List.InsertAtTail(S);
    }
    List.mergeSort();
    return List.getHead();
}

void Course::displayCourses(int sessionChoice)
{
    cout << sess[sessionChoice - 1] << "\n\n";
    Node<Course> *p = readCourses(sessionChoice);
    cout << "Id\tTitle\n\n";
    while(p)
    {
        cout << p->data << '\n';
        cout << "--------------------------------------------------\n";
        p = p->next;
    }
}

void Course::updateCourse(int sessionChoice)
{
    displayCourses(sessionChoice);
    int updateId, id, rowSize, i, flag = 0;
    string fileName, line, word, cTitle;
    vector<string> row;
    enterUPdId:
    cout << "Enter course id: ";
    cin >> updateId;
    if(!idExists(updateId, getIds(sessionChoice)))
    {   
        cout << "Course with this ID does not exist\n\n";
        goto enterUPdId;
    }
    if(sessionChoice == 1)
    {
        fileName = "freshmanCourses";
    }
    else if(sessionChoice == 2)
    {
        fileName = "sophomoreCourses";
    }    
    else if (sessionChoice == 3)
    {
        fileName = "juniorCourses";
    }
    else
    {
        fileName = "seniorCourses";
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
            cout << "Enter course title: ";
            cin >> cTitle;
            cTitle = makeLowercase(cTitle);
            if (!fin.eof())
            {
                fout << id << ", " << cTitle << "\n";
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

void Course::deleteCourse(int sessionChoice)
{
    displayCourses(sessionChoice);
    int id, delId, rowSize, i;
    string fileName, line, word;
    vector<string> row;
    enterDelId:
    cout << "Enter course id: ";
    cin >> delId;
    if(!idExists(delId, getIds(sessionChoice)))
    {   
        cout << "Student with this ID does not exist\n\n";
        goto enterDelId;
    }
    if(sessionChoice == 1)
    {
        fileName = "freshmanCourses";
    }
    else if(sessionChoice == 2)
    {
        fileName = "sophomoreCourses";
    }    
    else if (sessionChoice == 3)
    {
        fileName = "juniorCourses";
    }
    else
    {
        fileName = "seniorCourses";
    }
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

    // removing the existing file
    remove(fileToDelete.c_str());

    // renaming the updated file with the existing file name
    rename(fileToRename.c_str(), fileToDelete.c_str());
}

#endif