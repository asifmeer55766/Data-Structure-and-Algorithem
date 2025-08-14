#include<iostream>
using namespace std;
int main ()
{
// question no 1: store and print the element in array
int num[10],i ;
int size_of_array = sizeof(num)/sizeof(num[0]);//<--- sizeof(num) return 40 byts and sizeof (num[0]) returns 4 byts so 40 /4 = 10 which is the actual size of array
cout<<"Enter the elements of array :"<<endl;
for(i=0;i<size_of_array;i++){
    cin>>num[i];
}
cout<<"Array elements are :"<<endl;
for(i=0;i<size_of_array;i++){
cout<<"At index "<<i<<" = "<<num[i]<<endl;;
}



    return 0;
}

