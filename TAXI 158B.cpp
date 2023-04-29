#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int t[5]={0};
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        t[a]++;
    }
    int c=t[4]+t[3]+t[2]/2;
    t[1]=t[1]-t[3];
    if(t[2]%2==1){
        c++;
        t[1]=t[1]-2;
    }
    if(t[1]>0){
        c+=(t[1]+3)/4;
    }
    cout<<c;
    return 0;
}
