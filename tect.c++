#include<iostream>
using namespace std;
int main(){int n,y;cin >>("%d",n);for(int i=0;i<n;i++){int y;cin>>y;if(y==1985)cout<<"CSE department just founded"<<endl;else if(y==2025)cout<<"Its CSE 40 year!!"<<endl;else if(y>1985)cout<<"CSEdepartmentturns"<<(y-1985)<<" years"<<endl;}return 0;}