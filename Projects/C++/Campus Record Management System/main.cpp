#include <iostream>
#include "Admin.cpp"
#include "Student.cpp"
#include "Courses.cpp"
#include "Teacher.cpp"
#include "SLL.cpp"

using namespace std;

int main()
{
    Student S;
    Course C;
    Teacher T;
    bool flag = true;
    int loginChoice, recordChoice, operationChoice, sessionChoice, updateChoice, studentId, teacherId;
    cout << "\n\n========================\n\tWelcome\n========================\n\n\n";
    /*
    
        LOGIN PAGE
    
    */
    cout << "Login\n";
    cout << "Press:\n\n";
    cout << "1 to login as admin\n\n";
    cout << "2 to login as student\n\n";
    cout << "3 to login as teacher\n\n";
    while(flag)
    {
        cout << "=>";
        cin >> loginChoice;
        if(cin.fail())
        {
            cin.clear(); cin.ignore(512, '\n');
            cout << "Not a number\n";
        }
        if(loginChoice < 1 || loginChoice > 3)
        {
            cout << "Enter number in range 1-3\n";
        }
        else
            flag = false;
    }
    flag = true;
    system("cls");
    /*
    
        ADMIN PAGE
    
    */
    if(loginChoice == 1)
    {
        cout << "\n\n========================\n\tAdmin\n========================\n\n\n";
        cout << "Select desired option:\n";
        cout << "Press:\n\n";
        cout << "1 for student record\n\n";
        cout << "2 for course record\n\n";
        cout << "3 for teacher record\n\n";
        while(flag)
        {
            cout << "=>";
            cin >> recordChoice;
            if(cin.fail())
            {
                cin.clear(); cin.ignore(512, '\n');
                cout << "Not a number\n";
            }
            if(recordChoice < 1 || recordChoice > 3)
            {
                cout << "Enter number in range 1-3\n";
            }
            else
                flag = false;
        }
        flag = true;
        system("cls");
        /*
        
        UPDATING STUDENT RECORD
        
        */
        if(recordChoice == 1)
        {
            cout << "\n\n========================\n\tStudent Record\n========================\n\n\n";
            cout << "Select desired option:\n";
            cout << "Press:\n\n";
            cout << "1 to view student record\n\n";
            cout << "2 to edit student record\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> operationChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n";
                }
                if(operationChoice < 1 || operationChoice > 2)
                {
                    cout << "Enter number in range 1-2\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");
            cout << "Select session:\n";
            cout << "Press:\n\n";
            cout << "1 for freshman year\n\n";
            cout << "2 for sophomore year\n\n";
            cout << "3 for junior year\n\n";
            cout << "4 for senior year\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> sessionChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n";
                }
                if(sessionChoice < 1 || sessionChoice > 4)
                {
                    cout << "Enter number in range 1-4\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");    
            if(operationChoice == 1)
                S.displayStudents(sessionChoice);
            else 
            {
                cout << "Select desired option:\n";
                cout << "Press:\n\n";
                cout << "1 to add new students\n\n";
                cout << "2 to update existing student record\n\n";
                cout << "3 to delete a student\n\n";
                while(flag)
                {
                    cout << "=>";
                    cin >> updateChoice;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if(updateChoice < 1 || updateChoice > 3)
                    {
                        cout << "Enter number in range 1-3\n";
                    }
                    else
                        flag = false;
                }
                flag = true;
                system("cls");
                if(updateChoice == 1)
                {
                    cout << "\n\n========================\n\tAdd new student(s)\n========================\n\n\n";
                    S.writeStudents(sessionChoice);
                    cout << "\nStudent(s) added successfully\n";
                    system("cls");
                    S.displayStudents(sessionChoice);
                }       
                else if(updateChoice == 2)
                {
                    cout << "\n\n========================\n\tUpdate student record\n========================\n\n\n";
                    S.updateStudent(sessionChoice);
                    cout << "\nStudent updated successfully\n";
                    system("cls");
                    S.displayStudents(sessionChoice);
                }
                else
                {
                    cout << "\n\n========================\n\tDelete student record\n========================\n\n\n";
                    S.deleteStudent(sessionChoice);
                    cout << "\nStudent deleted successfully\n";
                    system("cls");
                    S.displayStudents(sessionChoice);
                }
            }
        }
        /*
        
        UPDATING COURSE RECORD
        
        */
        else if(recordChoice == 2)
        {
            cout << "\n\n========================\n\tCourse Record\n========================\n\n\n";            
            cout << "Select desired option:\n";
            cout << "Press:\n\n";
            cout << "1 to view course record\n\n";
            cout << "2 to edit course record\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> operationChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n";
                }
                if(operationChoice < 1 || operationChoice > 2)
                {
                    cout << "Enter number in range 1-2\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");
            cout << "Select session:\n";
            cout << "Press:\n\n";
            cout << "1 for freshman year\n\n";
            cout << "2 for sophomore year\n\n";
            cout << "3 for junior year\n\n";
            cout << "4 for senior year\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> sessionChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n";
                }
                if(sessionChoice < 1 || sessionChoice > 4)
                {
                    cout << "Enter number in range 1-4\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");    
            if(operationChoice == 1)
                C.displayCourses(sessionChoice);
            else 
            {
                cout << "Select desired option:\n";
                cout << "Press:\n\n";
                cout << "1 to add new course\n\n";
                cout << "2 to update existing course record\n\n";
                cout << "3 to delete a course\n\n";
                while(flag)
                {
                    cout << "=>";
                    cin >> updateChoice;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if(updateChoice < 1 || updateChoice > 3)
                    {
                        cout << "Enter number in range 1-3\n";
                    }
                    else
                        flag = false;
                }
                flag = true;
                system("cls");
                if(updateChoice == 1)
                {
                    cout << "\n\n========================\n\tAdd new course(s)\n========================\n\n\n";
                    C.writeCourses(sessionChoice);
                    system("cls");
                    cout << "\nCourse(s) added successfully\n\n\n";
                    C.displayCourses(sessionChoice);
                }       
                else if(updateChoice == 2)
                {
                    cout << "\n\n========================\n\tUpdate course record\n========================\n\n\n";
                    C.updateCourse(sessionChoice);
                    system("cls");
                    cout << "\nCourse updated successfully\n\n";
                    C.displayCourses(sessionChoice);                    
                }
                else
                {
                    cout << "\n\n========================\n\tDelete course record\n========================\n\n\n";
                    C.deleteCourse(sessionChoice);
                    system("cls");
                    cout << "\nCourse deleted successfully\n\n";
                    C.displayCourses(sessionChoice);
                }
            }
        }
        /*
        
        UPDATING TEACHER RECORD
        
        */
        else if(recordChoice == 3)
        {
            cout << "\n\n========================\n\tTeacher Record\n========================\n\n\n";
            cout << "Select desired option:\n";
            cout << "Press:\n\n";
            cout << "1 to view teacher record\n\n";
            cout << "2 to edit teacher record\n\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> operationChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n";
                }
                if(operationChoice < 1 || operationChoice > 2)
                {
                    cout << "Enter number in range 1-2\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");
            if(operationChoice == 1)
                T.displayTeachers();
            else 
            {
                cout << "Select desired option:\n";
                cout << "Press:\n\n";
                cout << "1 to add new teacher(s)\n\n";
                cout << "2 to update existing teacher record\n\n";
                cout << "3 to delete a teacher\n\n";
                while(flag)
                {
                    cout << "=>";
                    cin >> updateChoice;
                    if(cin.fail())
                    {
                        cin.clear(); cin.ignore(512, '\n');
                        cout << "Not a number\n";
                    }
                    if(updateChoice < 1 || updateChoice > 3)
                    {
                        cout << "Enter number in range 1-3\n";
                    }
                    else
                        flag = false;
                }
                flag = true;
                system("cls");
                if(updateChoice == 1)
                {
                    cout << "\n\n========================\n\tAdd new teacher(s)\n========================\n\n\n";
                    T.writeTeachers();
                    cout << "\nTeacher(s) added successfully\n";
                    system("cls");
                    T.displayTeachers();
                }       
                else if(updateChoice == 2)
                {
                    cout << "\n\n========================\n\tUpdate teacher record\n========================\n\n\n";
                    T.updateTeacher();
                    cout << "\nTeacher updated successfully\n";
                    system("cls");
                    T.displayTeachers();
                }
                else
                {
                    
                    cout << "\n\n========================\n\tDelete teacher record\n========================\n\n\n";
                    cout << "\nTeacher deleted successfully\n";
                    T.deleteTeacher();
                    system("cls");
                    T.displayTeachers();                
                }
            }
        }
    }
    /*
    
        STUDENT PAGE
    
    */
    else if(loginChoice == 2)
    {
        cout << "\n\n========================\n\tStudent\n========================\n\n\n";
        cout << "Select session:\n";
        cout << "Press:\n\n";
        cout << "1 for freshman year\n\n";
        cout << "2 for sophomore year\n\n";
        cout << "3 for junior year\n\n";
        cout << "4 for senior year\n\n";
        while(flag)
        {
            cout << "=>";
            cin >> sessionChoice;
            if(cin.fail())
            {
                cin.clear(); cin.ignore(512, '\n');
                cout << "Not a number\n\n";
            }
            if(sessionChoice < 1 || sessionChoice > 4)
            {
                cout << "Enter number in range 1-4\n\n";
            }
            else
                flag = false;
        }
        flag = true;
        system("cls");
        studentAgain:
        cout << "Enter id:\n\n";
        while(flag)
        {
            cout << "=>";
            cin >> studentId;

            if(cin.fail())
            {
                cin.clear(); cin.ignore(512, '\n');
                cout << "Not a number\n";
            }
            if(studentId < 1 || studentId > 50)
            {
                cout << "Enter number in range 1-50\n";
            }
            else
                flag = false;
        }
        flag = true;
        system("cls");
        if(!(S.doesExist(studentId, S.getIds(sessionChoice))))
        {
            cout << "Student with this id does not exist\n";
            goto studentAgain;
        }
        else
        {
            cout << "Select desired option:\n";
            cout << "Press:\n\n";
            cout << "1 to view your profile\n\n";
            cout << "2 to view your courses\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> operationChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n";
                }
                if(operationChoice < 1 || operationChoice > 2)
                {
                    cout << "Enter number in range 1-2\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");   
            if(operationChoice == 1)
            {
                cout << "\n\n========================\n\tProfile\n========================\n\n\n";
                S.displayProfile(sessionChoice, studentId);
            }
            else
            {
                cout << "\n\n========================\n\tCourses\n========================\n\n\n";
                C.displayCourses(sessionChoice);
            }    
        }
    }
    /*
    
        TEACHER PAGE
    
    */
    else
    {
        cout << "\n\n========================\n\tTeacher\n========================\n\n\n";
        teacherAgain:
        cout << "Enter id:\n\n";
        flag = true;
        while(flag)
        {
            cout << "=>";
            cin >> teacherId;
            if(cin.fail())
            {
                cin.clear(); cin.ignore(512, '\n');
                cout << "Not a number\n\n";
            }
            if(teacherId < 1 || teacherId > 50)
            {
                cout << "Enter number in range 1-50\n\n";
            }
            else
                flag = false;
        }
        flag = true;
        system("cls");
        if(!(T.doesExist(teacherId, T.getIds())))
        {
            cout << "Teacher with this id does not exist\n\n";
            goto teacherAgain;
        }
        else
        {
            cout << "Select desired option:\n";
            cout << "Press:\n\n";
            cout << "1 to view your profile\n\n";
            cout << "2 to view your courses\n\n";
            while(flag)
            {
                cout << "=>";
                cin >> operationChoice;
                if(cin.fail())
                {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "Not a number\n\n";
                }
                if(operationChoice < 1 || operationChoice > 2)
                {
                    cout << "Enter number in range 1-2\n\n";
                }
                else
                    flag = false;
            }
            flag = true;
            system("cls");   
            if(operationChoice == 1)
            {
                cout << "\n\n========================\n\tProfile\n========================\n\n\n";
                T.displayProfile(teacherId);
            }
            else
            {
                cout << "\n\n========================\n\tClasses\n========================\n\n\n";
                T.displayClasses(teacherId);
            }    
        }
    }
    return 0;
}