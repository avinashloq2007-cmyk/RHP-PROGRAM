#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cout<<"enter string 1:";
    cin>>a;
    cout<<"enter string 2:";
    cin>>b;
    int arr[a.length()+1][b.length()+1];
    for(int i=0;i<b.length()+1;i++){
        arr[0][i]=0;
    }
    for(int i=0;i<a.length()+1;i++){
        arr[i][0]=0;
    }
    int t=0;
    for(int i=1;i<=a.length();i++){
        for(int j=1;j<=b.length();j++){
            if(a[i-1]==b[j-1])
            {
                arr[i][j]=max(arr[i][j-1],arr[i-1][j])+1;
                if(arr[i][j]>t){
                    t=arr[i][j];
                }
            }
            else{
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
            }
        }
    }
    cout<<"    ";
for(int i=0;i<b.length();i++){
    cout<<b[i]<<" ";
}
cout<<endl;
for(int i=0;i<=a.length();i++){
    cout<<a[i-1]<<" ";
        for(int j=0;j<=b.length();j++){
            if(i==0 && j==0){
                cout<<" ";
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}
        cout<<"Maximum Length Of Common Subsequence : "<<t<<endl;

    return 0;
}
//OUTPUT:
// enter string 1:macifg
// enter string 2:abcdefg
//     a b c d e f g
//   0 0 0 0 0 0 0 0
// m 0 0 0 0 0 0 0 0
// a 0 1 1 1 1 1 1 1
// c 0 1 1 2 2 2 2 2
// i 0 1 1 2 2 2 2 2
// f 0 1 1 2 2 2 3 3
// g 0 1 1 2 2 2 3 4
// Maximum Length Of Common Subsequence : 4
