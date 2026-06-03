#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int flag;
    for(char i:s){
        flag|=(1<<(i-'a'));
    }
    if(flag==(1<<26)-1){
        cout<<"The given string is pangram";
        return 0;
    }
cout<<"The given string is not pangram";
    return 0;
}
//OUTPUT
/*
Enter a string:abcdefghijklmnopqrstuvwxyz
The given string is pangram 
*/