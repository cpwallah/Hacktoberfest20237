#include<iostream>
#include<vector>
#include<string.h>
#include <string>
using namespace std;
#define ll long long
#define M 1000000007

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        if(x==1) {
            cout<<"8"<<endl;
            continue;
        }
        int index=3;
        if(x==2){
            index=2;
        }
        string ss=s.substr(x-index,index);
        int n=stoi(ss);
        if((n%8)==0){
            cout<<s<<endl;
            continue;
        }
        int size=ss.size();
        for(int i=0;i<=9;i++){
            ss[size-1]=i+'0';
            n=stoi(ss);
            if((n%8)==0){
                s[x-1]=i+'0';
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
