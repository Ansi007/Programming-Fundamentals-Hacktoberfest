#include <iostream>
#include "Grid.cpp"
#include "HomePage.cpp"

using namespace std;

int main(){
    int choice = 1 ; 
    HomePage hmp;
    Grid g;
    hmp.print();
    hmp.Rules();
    do{
        if(choice < 1 or choice > 3) printf("\x1B[31mEnter the Valid Choice \033[0m\n");
        hmp.playMenu();
        cout<<"Enter Choice : ";
        cin>>choice;
        cin.clear();
        cin.sync();
    }while(choice < 1 or choice > 3 );

    if(choice == 2){
        g.create_R_Penotomio();
    }
    else if(choice == 3){
        system("cls");
        g.customInput();
    }

    while(!g.AllDead()){
        g.printGrid();
        Sleep(1000);
        system("cls");
        g.Scan();
        //Sleep(1000);
    }
    printf("\x1B[93mAll Cells are Dead \033[0m\n");
    
    return 0;
}