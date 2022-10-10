// #ifndef GRID
// #define GRID
#include <iostream>
#include <windows.h>
#include <time.h>
#include "Linked_List.cpp"
using namespace std;




class Grid{
    int row ;
    int col ;
    int** gridArray;

void memoryAllocate(int r , int col){
        gridArray = new int* [row];
        for(int i = 0 ; i < row ; i++)
            gridArray[i] = new int[col];
}

void arrayCopy(const Grid& g1){
        for(int i ; i < row ; i++)
            for(int j ; j < col ; j++)
                this->gridArray[i][j] = g1.gridArray[i][j];
}
void storedummyData(){
    for(int i = 0 ; i < row ; i++){
            for(int j = 0; j < col ; j++){
                this->gridArray[i][j] = rand() % 2;
                //cout<<gridArray[i][j]<<" ";
            }
        //cout<<endl;
    }
}
public:
    Grid(int row = 20 , int col = 33){
        this->row = row;
        this->col = col;

        memoryAllocate(row , col);
        storedummyData();
    }

    // Grid(const Grid& g1 ){
    //     this->row = row;
    //     this->col = col;
    //     arrayCopy(g1);
    // }
Grid& operator = (const Grid& g1 ) {

        for(int i = 0 ; i < row ; i ++)
            delete[] gridArray[i];
        delete[] gridArray; 

        this->row = g1.row;
        this->col = g1.col;

        memoryAllocate(row , col);
        arrayCopy(g1);


        return *this;
      }


bool AllDead(){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0; j < col ; j++){
            if (this->gridArray[i][j] == 1) return false;
                //cout<<gridArray[i][j]<<" ";
            }
        }
    return true;
}

void printGrid(){
    int i , j;
    cout << endl;
    for(i = 0 ; i < row ; i++){
        for (int i = 0; i < col; i++)
        cout << "-----";
    cout<<endl;
        for(j = 0 ; j < col ; j ++){
            if(j == 0 ) cout<<"|";
            cout<<" ";
            gridArray[i][j] == 1 ? printf("\x1B[32m\4\033[0m") : printf(" ");
            cout<<"  |";
        }
        cout<<endl;
    }
    for (int i = 0; i < col; i++) {
        cout << "-----";
    }

    }

int count_live_neighbour_cell( int r, int c)
{
    int i, j, count = 0;
    for (i = r - 1; i <= r + 1; i++) {
        for (j = c - 1; j <= c + 1; j++) {
            if ((i == r && j == c) || (i < 0 || j < 0)
                || (i >= row || j >= col)) {
                continue;
            }
            if (gridArray[i][j] == 1) {
                count++;
            }
        }
    }
    return count;
}

void Scan(){

        int** b = new int* [row];
        for(int i = 0 ; i < row ; i++)
            b[i] = new int[col];

        int  neighbour_live_cell;
        for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            neighbour_live_cell = count_live_neighbour_cell(i, j);
            if (gridArray[i][j] == 1
                && (neighbour_live_cell == 2
                    || neighbour_live_cell == 3)) {
                b[i][j] = 1;
            }
 
            else if (gridArray[i][j] == 0
                     && neighbour_live_cell == 3) {
                b[i][j] = 1;
            }
 
            else {
                b[i][j] = 0;
            }
        }
    }
    gridArray = b; 
    
}
void create_R_Penotomio(){
     for(int i = 0 ; i < row ; i++){
            for(int j = 0; j < col ; j++){
                if((i == 10 and j == 15) or (i == 9 and j == 15) or ( i == 11 and j ==15) or (i == 10 and j == 14) or (i == 9 and j == 16))  this->gridArray[i][j] = 1;
                else this->gridArray[i][j] = 0;
                //cout<<gridArray[i][j]<<" ";
            }
    }
}
void customInput(){
    printf("\x1B[92mHere Enter the coordinates of the Grid you want to set Alive \033[0m\n\n");
    Linked_List<int> l;
    int stop = 0;
    int inputRow = 1 , inputCol = 1;
    while(stop != 1 ){
        do{ 
            if(inputRow < 1 or inputRow > 20) printf("\x1B[31mEnter the Valid row (1 - 20) :  \033[0m\n");
            cout<<"Enter row of the Cell (1 - 20) : ";
            cin>>inputRow;
            cin.clear();
            cin.sync();
            }while(inputRow < 1 or inputRow > 20);
        do{ 
            if(inputCol < 1 or inputCol > 33) printf("\x1B[31mEnter the Valid Column (1 - 33) : \033[0m\n");
            cout<<"Enter col of the Cell (1 - 33) : ";
            cin>>inputCol;
            cin.clear();
            cin.sync();
            }while(inputCol < 1 or inputCol > 20);
        l.sortedInsert(inputRow-1 ,inputCol-1);

        printf("\x1B[35mIf you have given the inputs, \033[0m");
        printf("\x1B[33mPRESS 1 to stop giving Inputs \033[0m");
        printf("\x1B[35mor\033[0m");
        printf("\x1B[33m PRESS Any Key to continue \033[0m\n\n");
        cin>>stop;
        cin.clear();
        cin.sync();
        //system("cls");
    }
    //cout<<"Here";
    Node<int>* temp;
    temp = l.getHead();
    //cout<<temp->col;
     for(int i = 0 ; i < this->row ; i++){
            for(int j = 0; j < this->col ; j++){
                //cout<<"Inner Loop\n";
                if(temp != NULL and temp->row == i and temp->col == j){
                    //cout<<"Inner Condition\n";
                    this->gridArray[i][j] = 1;
                    temp = temp->next;
                }
                else this->gridArray[i][j] = 0;
                //cout<<gridArray[i][j]<<" ";
            }
    }

}
~Grid(){
        for(int i = 0 ; i < row ; i ++)
            delete[] gridArray[i];
        delete[] gridArray; 
}
};

// int main(){
//     Grid g;
//     g.customInput();
//     g.printGrid();
//     // srand(time(0));
//     // Grid g;
//     // g.create_R_Penotomio();
//     // // Grid g2(4 ,4);
//     // // g = g2;
//     // //int count = 0;
//     // while(true){
//     //     g.printGrid();
//     //     Sleep(1000);
//     //     system("cls");
//     //     g.Scan();
//     //     Sleep(1000);
//     // }
//     // g.printGrid();
//     // Sleep(1000);
//     // system("cls");
//     // g.Scan();
//     // Sleep(1000);
//     // g.printGrid();
//     // Sleep(1000);
//     // system("cls");
//     // g.Scan();
//     // Sleep(1000);
//     // g.printGrid();
    
//         //printf("\x1B[31mTexting\033[0m\t\t");
//         //printf("\x1B[32m\4\033[0m\t\t");
//         //cout<<a;
// //   // you can loop k higher to see more color choices
// //   for(int k = 1; k < 255; k++)
// //   {
// //     // pick the colorattribute k you want
// //     SetConsoleTextAttribute(hConsole, k);
// //     cout << k << " I want to be nice today!" << endl;
// //   }
//     return 0;
// }

//#endif