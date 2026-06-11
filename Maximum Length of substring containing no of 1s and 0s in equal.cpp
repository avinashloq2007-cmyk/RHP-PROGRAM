#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    map<int,int> m;
     int k=0;
    m.insert({-1,k});
    int maxi=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            k++;
        }
        else if(s[i]=='0'){
            k--;
        }
        m[i]=k;
        for(auto j:m){
            if(j.second==k){
                int t=i-j.first;
                if (maxi<t){
                    maxi=t;
                }
                break;
            }
        }
    }
    cout<<"Maximum length of substring : "<<maxi<<endl;
    return 0;
}