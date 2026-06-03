#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a string:";
    string s;
    getline(cin,s);
    int k=1;
    for (int i=1;i<(1<<s.length());i++){
string p="";
for (int j=0;j<s.length();j++){
    if((i&(1<<j))>0){
        p+=s[j];
    }
}
cout<<k++<<". "<<p<<endl;
    }
}
//OUTPUT
/*Enter a string:CPP
1. C
2. P
3. CP
4. P
5. CP
6. PP
7. CPP*/