#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
    char key[100], rkey[100]; 
    cout<<"Palingdrome check" <<endl; 
    cout << "Enter only three numbers or character: ";
    cin.getline(key,100);
    strcpy(rkey,key);
    if(key[0]==rkey [2]){
        if(key[1]==rkey [1]){
            if(key[2]==rkey [0]){
                cout<<key <<" is "<<"Palingdrome";
            }
        }
    }
    else{
        cout<<key <<" isn't "<<"Palingdrome";
        }
}
