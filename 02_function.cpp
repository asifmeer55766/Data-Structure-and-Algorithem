#include<iostream>
using namespace std;
int function add(int ,int );
int main(){
int a,b,sum;
cout<<"Enter any two number "<<endl;
cin>>a>>b;

int result = add(a,b);
cout<<"Sum of "<<a<<" and "<<b<<" is "<<result;
return 0;
}
int function add(int a,int b){
return  a+b;
}
