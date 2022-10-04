//This project is developed by Muhib_Arshad_(muhib7353)
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

// global Variables
fstream file;
ofstream temp;
const int totalRecords = 1000;

// Structure

struct record
{
    string name;
    string rollNum;
    string PhoneNum;
    string bloodGroup;
    int no_ofDonate;
    string dateof_Donation;
    string permanentAddress;
};

// For display
void display(int total)
{
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
    }
    cout << "\t\t\t*************FCIT BLOOD DONOR MANAGEMENT SYSTEM*****************" << endl;
    cout << endl;
    cout << "\tTotal Records :" << total << endl;
    cout << endl;
    cout << "\t\t\t _______________________________________________________________________________" << endl;
    cout << "\t\t\t| Press \"A\" to ADD the DONOR\'S Record                                           |" << endl;
    cout << "\t\t\t| Press \"N\" to SEARCH the DONOR\'S Record based on NAME                          |" << endl;
    cout << "\t\t\t| Press \"B\" to SEARCH the LIST of DONOR\'S Record based on BLOOD GROUP           |" << endl;
    cout << "\t\t\t| Press \"U\" to UPDATE the DONOR\'S Record after successful DONATION              |" << endl;
    cout << "\t\t\t| Press \"R\" to REMOVE the DONOR\'S Record (may be due to medical reasons)        |" << endl;
    cout << "\t\t\t| Press \"W\" to SHOW ENTIRE the DONOR\'S Record                                   |" << endl;
    cout << "\t\t\t| Press \"Q\" to QUIT.....                                                        |" << endl;
    cout << "\t\t\t --------------------------------------------------------------------------------" << endl;
}

// Function for display record of specific Donor
void recordOf_specificDonor(record donor[], int i)
{
    cout << "\t\t\t\t****************DATA OF THE DONOR " << i + 1 << " ************" << endl;
    cout << "\t\t\t\tName of the donor " << i + 1 << " : " << donor[i].name << endl;
    cout << "\t\t\t\tRoll number of the donor " << i + 1 << " : " << donor[i].rollNum << endl;
    cout << "\t\t\t\tPhone number of the donor " << i + 1 << " : " << donor[i].PhoneNum << endl;
    cout << "\t\t\t\tBlood Group of the donor " << i + 1 << " : " << donor[i].bloodGroup << endl;
    cout << "\t\t\t\tNumber of blood donates of the donor " << i + 1 << " : " << donor[i].no_ofDonate << endl;
    cout << "\t\t\t\tLast Date blood Donation of the donor " << i + 1 << " : " << donor[i].dateof_Donation << endl;
    cout << "\t\t\t\tPermenant Address of the donor " << i + 1 << " : " << donor[i].permanentAddress << endl;
    cout << endl;
}

// Adding the record
void addRecord(record donor[], int index)
{
    file.open("bds_donor_data.txt", ios::out | ios::app | ios::binary);
    if (file.is_open())
    {
        cout << endl;
        cout << "\t\t\t**************ADDING RECORD OF THE DONOR****************" << endl;
        cout << endl;
        cout << "\t\t\tEnter the name of the donor " << index + 1 << " : ";
        getline(cin, donor[index].name);
        cout << "\t\t\tEnter the roll number of the donor " << index + 1 << " : ";
        getline(cin, donor[index].rollNum);
        cout << "\t\t\tEnter the phone number of the donor " << index + 1 << " : ";
        getline(cin, donor[index].PhoneNum);
        cout << "\t\t\tEnter the blood group of the donor " << index + 1 << " : ";
        getline(cin, donor[index].bloodGroup);
        cout << "\t\t\tEnter the number of blood donate of the donor " << index + 1 << " : ";
        cin >> donor[index].no_ofDonate;
        cin.ignore();
        cout << "\t\t\tEnter the date of the donation of the donor " << index + 1 << " : ";
        getline(cin, donor[index].dateof_Donation);
        cout << "\t\t\tEnter the permannent home address of the donor " << index + 1 << " : ";
        getline(cin, donor[index].permanentAddress);
        cout << endl;
        file.write(reinterpret_cast<char *>(&donor[index]), sizeof(record));
    }
    else
    {
        cout << endl;
        cout << "\t\t\t File is not openend:" << endl;
        cout << endl;
    }
    file.close();
}

// Displaying the all records
void displayAll_records(record donor[], int index)
{
    cout << endl;
    cout << "\t**DATA OF THE ALL DONORS**" << endl;
    cout << endl;
    file.open("bds_donor_data.txt", ios::in | ios::binary);
    if (file.is_open())
    {
        for (int i = 0; i < index; i++)
        {
            file.read(reinterpret_cast<char *>(&donor[i]), sizeof(record));
            recordOf_specificDonor(donor, i);
        }
    }
    else
    {
        cout << endl;
        cout << "\t\t\t File is not openend:" << endl;
        cout << endl;
    }
    file.close();
}

// Function for  search record by name
void search_record_ByName(record donor[], int index)
{
    string searchBy_name;
    bool found = false;
    cout << endl;
    cout << "\t\t\t Enter the name of the donor to search its data:";
    getline(cin, searchBy_name);
    cout << endl;
    file.open("bds_donor_data.txt", ios::in | ios::binary);
    if (file.is_open())
    {
        cout << "\t\t\t\t****************DATA OF THE DONOR " << searchBy_name << " ************" << endl;
        for (int i = 0; i < index; i++)
        {
            file.read(reinterpret_cast<char *>(&donor[i]), sizeof(record));
            if (donor[i].name == searchBy_name)
            {
                recordOf_specificDonor(donor, i);
                found = true;
//                break;
            }
        }
    }
    else
    {
        cout << endl;
        cout << "\t\t\t File is not openend:" << endl;
        cout << endl;
    }
    file.close();
    if (found == false)
    {
        cout << "\t\t\t Error: No such name can be exist in the donor's list:" << endl;
    }
}

// Function for search all records by blood group
void search_record_ByBloodGroup(record donor[], int index)
{
    string searchBy_bloodGroup;
    bool found = false;
    cout << endl;
    cout << "\t\t\t Enter the blood group :";
    getline(cin, searchBy_bloodGroup);
    cout << endl;
    cout << "\t\t\t\t**DATA OF THE ALL THE DONORS WHOSE HAVE " << searchBy_bloodGroup << " BLOOD GROUP **" << endl;
    file.open("bds_donor_data.txt", ios::in | ios::binary);
    if (file.is_open())
    {
        for (int i = 0; i < index; i++)
        {
            file.read(reinterpret_cast<char *>(&donor[i]), sizeof(record));
            if (donor[i].bloodGroup == searchBy_bloodGroup)
            {
                recordOf_specificDonor(donor, i);
                found = true;
            }
        }
    }
    else
    {
        cout << endl;
        cout << "\t\t\t File is not openend:" << endl;
        cout << endl;
    }
    file.close();
    if (found == false)
    {
        cout << "\t\t\t Error: No such blood group can be exist in the donor's list:" << endl;
    }
}

// Function for update the donors record after successful donation
void update_record_ofDonor(record donor[], int index)
{
    string updateBy_name;
    bool found = false;
    cout << endl;
    cout << "\t\t\t Enter the name of the donor to update its data:";
    getline(cin, updateBy_name);
    cout << endl;
    file.open("bds_donor_data.txt", ios::in | ios::binary | ios::out);
    // to get the curser at the start use the seekg
    file.seekg(0);
    if (file.is_open())
    {
        for (int i = 0; i < index && found == false; i++)
        {
            file.read(reinterpret_cast<char *>(&donor[i]), sizeof(record));

            if (donor[i].name == updateBy_name)
            {
                // updation
                cout << "\t\t\t** Donor blood donation times updated from " << donor[i].no_ofDonate << " to " << donor[i].no_ofDonate + 1 << "**" << endl;
                cout << "\t\t\t   Enter the date of the updated Donation:";
                getline(cin, donor[i].dateof_Donation);
                donor[i].no_ofDonate = donor[i].no_ofDonate + 1;

                // to change the position of the getting cursor position use seekp
                // ios::cur is the offset of the seekp that gives that we want to be beg,cur and end position of the file
                // seekp has the two arguments first gives how much bytes it can move,and second argument gives where to start move the position where
                // negative sign show move forward or backward
                file.seekp(-sizeof(record), ios::cur);
                file.write(reinterpret_cast<char *>(&donor[i]), sizeof(record));

                found = true;
            }
        }
        cout << endl;
        cout << "\t\t\t\t Recorded Updated Successfully:" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "\t\t\t File is not openend:" << endl;
        cout << endl;
    }
    file.close();
    if (found == false)
    {
        cout << "\t\t\t Error: No such Person's name can be exist in the donor's list:" << endl;
    }
}

// Function for  Remove donor’s record (May be due to medical reasons).
void delete_record_ofDonor(record donor[], int index)
{
    string deleteBy_rollNum;
    bool found = false;
    cout << endl;
    cout << "\t\t\t Enter the roll number of the donor to  Remove his/her record (May be due to medical reasons).";
    getline(cin, deleteBy_rollNum);
    cout << endl;
    file.open("bds_donor_data.txt", ios::in | ios::binary | ios::out);
    temp.open("temp.txt", ios::binary | ios::out);
    // to get the curser at the start use the seekg
    if (file.is_open() && temp.is_open())
    {
        for (int i = 0; i < index; i++)
        {
            file.read(reinterpret_cast<char *>(&donor[i]), sizeof(record));

            if (donor[i].rollNum != deleteBy_rollNum)
            {
                // Copying data from bds_donor_data.txt to temp.txt except the deleted data
                temp.write(reinterpret_cast<char *>(&donor[i]), sizeof(record));
                found = true;
            }
        }
        file.close();
        temp.close();
        // Removation of non-removed data file
        remove("bds_donor_data.txt");
        // Rename the temp file to the bds_donor_data.txt
        rename("temp.txt", "bds_donor_data.txt");
        cout << endl;
        cout << "\t\t\t\t Recorded Deleted Successfully:" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "\t\t\t File is not openend:" << endl;
        cout << endl;
    }
    if (found == false)
    {
        cout << "\t\t\t Error: No such Roll Number name can be exist in the donor's list:" << endl;
    }
}

// Body of the program
void blood_donor_managementSystem()
{
    record donors[totalRecords];
    bool flag = false;
    bool iF_recordAdded = false;
    char input;

    do
    {
        // to determine the number of total records added
        char ch[] = {};
        int index = 0;
        int i = -1;
        file.open("bds_donor_data.txt", ios::in | ios::binary);
        while (!file.eof())
        {
            file >> ch[i];
            if (i % sizeof(record) == 0)
            {
                index++;
            }
            i++;
        }
        file.close();

        // To check whether atleast one data is entered or not otherwise other options cannot works
        if (index > 0)
        {
            iF_recordAdded = true;
        }

        // display function call
        display(index);

        // Input
        input = getch();
        input = tolower(input);

        // Input Validation
        while (input != 'a' && input != 'n' && input != 'b' && input != 'u' && input != 'r' && input != 'w' && input != 'q')
        {
            cout << endl;
            cout << "\t\t\t Error:Invalid Input!" << endl;
            cout << "\t\t\t Please Enter the Valid Input" << endl;
            input = getch();
            input = tolower(input);
            cout << endl;
        }

        // Switch cases---Cases can be run on the inputs
        switch (input)
        {

        // adding records
        case 'a':
        {
            addRecord(donors, index);
            system("cls");
            break;
        }

        // search record by name
        case 'n':
        {
            if (iF_recordAdded == true)
            {
                search_record_ByName(donors, index);
            }
            if (iF_recordAdded == false)
            {
                cout << endl;
                cout << "\t\t\t\t ***Error:Firstly add the data At least enter the one donors data:***" << endl;
            }
            break;
        }

            // search record by blood group
        case 'b':
        {
            if (iF_recordAdded == true)
            {
                search_record_ByBloodGroup(donors, index);
            }
            if (iF_recordAdded == false)
            {
                cout << endl;
                cout << "\t\t\t\t ***Error:Firstly add the data At least enter the one donors data:***" << endl;
            }
            break;
        }

        // display all the records
        case 'w':
        {
            if (iF_recordAdded == true)
            {
                displayAll_records(donors, index);
            }
            if (iF_recordAdded == false)
            {
                cout << endl;
                cout << "\t\t\t\t ***Error:Firstly add the data At least enter the one donors data:***" << endl;
            }
            break;
        }

            // update the record
        case 'u':
        {
            if (iF_recordAdded == true)
            {
                update_record_ofDonor(donors, index);
            }
            if (iF_recordAdded == false)
            {
                cout << endl;
                cout << "\t\t\t\t ***Error:Firstly add the data At least enter the one donors data:***" << endl;
            }
            break;
        }

        // Delete the record
        case 'r':
        {
            if (iF_recordAdded == true)
            {
                delete_record_ofDonor(donors, index);
            }
            if (iF_recordAdded == false)
            {
                cout << endl;
                cout << "\t\t\t\t ***Error:Firstly add the data At least enter the one donors data:***" << endl;
            }
            break;
        }

        // for quiting the program
        case 'q':
        {
            cout << "Quiting....................." << endl;
            flag = true;
            break;
        }
        }
    } while (flag == false);
}

// Main function
int main()
{

    // blood_donor_managementSystem
    blood_donor_managementSystem();
    return 0;
}