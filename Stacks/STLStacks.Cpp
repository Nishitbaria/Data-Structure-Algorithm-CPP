#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> s ; 
// push operation
s.push(1);
s.push(2);
s.push(3);
s.push(4);
cout<<s.top()<<endl;
if( s.empty()  ){
cout<<"stack is empty";
}
else
cout<<"stack is not empty";



}