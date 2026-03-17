#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    for (int i =5; i>0; i--)
    {
        for (int j =5-i; j>0; j--)
        {
            cout<<"  ";
        }
        for (int k =i*2+1; k >2; k--)
        {
          cout<<"* ";
        }
    cout<<endl;
    }
    
    return 0;

}