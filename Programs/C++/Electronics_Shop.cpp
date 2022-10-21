/* 
Submitted by: Sneha Jaiswal
GitHub Link: https://github.com/Sneha-jais
Problem Statement:
A person wants to determine the most expensive computer keyboard and USB drive that can be purchased 
with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them.
If it is not possible to buy both items, return -1 .

like if b=60, keyboards={40,50,60}, drives={5,8,12}
The person can buy a 40 keyboard+ 12 drives=52  or a 50 keyboard+ 8 drives=58. Choose the latter as the more expensive option and return 58.*/

#include <bits/stdc++.h>
using namespace std;
int getMoneySpent(int key[],int m,int drive[],int n,int b){    
    int temp,ans=0;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            if(key[i]+drive[j]<=b){
                temp=key[i]+drive[j];
                ans=max(ans,temp);
            }   

        }
               
    }
    
     if(ans==0)
            return -1;
    return ans;
        
}
int main(){
    int b;//budget
    cin>>b;
    int m,n;//m=no. of key, n=no. of drivez
    cin>>m>>n;
    int key[m],drive[n];
    
    for(int i=0;i<m;i++)
        cin>>key[i];
    for(int i=0;i<n; i++)
        cin>>drive[i];
    
   cout<<getMoneySpent(key,m,drive,n,b);
    return 0;
}
