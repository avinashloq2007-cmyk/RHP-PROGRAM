#include <iostream>
using namespace std;
int main() {
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int flag_l;
    int flag_u;
    for(char i:s){
        if(islower(i)){
        flag_l|=(1<<(i-'a'));}
        else if(isupper(i)){
        flag_u|=(1<<(i-'A'));}
    }
    if((flag_u==(1<<26)-1)&&(flag_u==flag_l)){
        cout<<"The given string is pangram(Both upper and lower case)";
        return 0;
    }
cout<<"The given string is not pangram(Both upper and lower case)";
    return 0;
}
//OUTPUT
/*
Enter a string:ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
The given string is pangram(Both upper and lower case)
*/
