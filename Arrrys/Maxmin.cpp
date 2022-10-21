#include <bits/stdc++.h>
using namespace std;
int Maxvalue(int arr[],int n){
int maxi = INT_MIN;
for (int i = 0; i < n; i++)
{
    maxi = max(maxi,arr[i]);
}
return maxi;
}

int Minvalue(int arr[],int n){
int minx = INT_MAX;
for (int i = 0; i < n; i++)
{
    minx= min(minx,arr[i]);
}
return minx;
}



 int main(){
int size;
cout<<"Enter the size of arrys:  ";
cin>>size;

int num[100];
for(int i=0; i< size ;i++){
cin>>num[i];
}

cout<<"MAx value is :"<<Maxvalue( num, size)<<endl;
cout<<"Min value is :"<<Minvalue( num, size)<<endl;
cout<<"Every things is fine";
return 0;
}