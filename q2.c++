#include<iostream>
#include<algorithm>
using namespace std;
int main(){int n;cin >> n;int a[100000];
long long s=0,u=0,e;
for(int i=0;i<n;i++){
s=max(s+a[i],u+a[i]);
u=max(u+a[i],s-a[i]);
e=max(s,u);cout<<e<<" ";}
}
