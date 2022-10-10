#ifndef HOMEPAGE
#define HOMEPAGE

#include <iostream>
#include <windows.h>
using namespace std;

class HomePage{
public:
void print(){
    
    cout<<"   ##############\n";
    Sleep(50);
    cout<<"  ##            ##\n";
    Sleep(50);
    cout<<" ##              ##\n";
    Sleep(50);
    cout<<"##                                                        \n";
    Sleep(50);
    cout<<"##      #####    ##    ##   #######                     #        #######  ########  #######       \n";
    Sleep(50);
    cout<<"##     #     #   # #  # #   #          #####   #####    #           #     #         #     \n";
    Sleep(50);
    cout<<"##     #######   #   #  #   #####     #     #  #        #           #     #####     #####  \n";
    Sleep(50);
    cout<<"##     #     #   #      #   #         #     #  ###      #           #     #         #  \n";
    Sleep(50);
    cout<<"##     #     #   #      #   #######    #####   #        ######## #######  #         #######  \n";
    Sleep(50);
    cout<<"##     \n";
    cout<<"##              #######\n";
    Sleep(50);
    cout<<"##              ##   ##\n";
    Sleep(50);
    cout<<" ##            ##    ##\n";
    Sleep(50);
    cout<<"  ##############\n";

    cout<<"                                            Initializing\n";
    cout<<"                                           ";
    int i = 0 ;
        while(i < 14){
            cout<<"\4";
            Sleep(100);
            i++;
        }
    cout<<'\n';
}
void Rules(){
    system("cls");
    printf("\x1B[92mRULES : \033[0m\n");
    printf("\x1B[35mFor each generation of the game, a cell's status in the next generation is determined by a set of rules. These simple rules are as follows:\033[0m\n\n");
    printf("\x1B[91m\4 \033[0m");
    cout<<"If the cell is alive, then it stays alive if it has either 2 or 3 live neighbors\n";
    printf("\x1B[91m\4 \033[0m");
    cout<<"If the cell is dead, then it springs to life only in the case that it has 3 live neighbors\n";
    cout<<"\n\n\n";
}

void playMenu(){
    printf("\x1B[33m1- \033[0m");
    cout<<"Do you want to start with random Cells Alive on Grid\n\n"; 
    printf("\x1B[33m2- \033[0m");
    cout<<"Do you want to start with R_Penotomio Pattern\n\n"; 
    printf("\x1B[33m3- \033[0m");
    cout<<"Do you want to start with Custom Pattern\n\n"; 
}
};
// int main(){
//     HomePage p;
//     //p.print();
//     p.Rules();
//     p.playMenu();
//     return 0;
// }

#endif