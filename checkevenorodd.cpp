#include <iostream>
using namespace std;
int main (){
int num;
cout<<"Enter the number ";
// cin>>num;
// if(num%2 == 0){
//     cout<<num<<" is even";
// } else{
//     cout<<num<<" is odd";
// }

cin>>num;  // using binary number concept, we know that last bit of even is zero
int rem =  num % 2;
if(rem == 0){
    cout<<num<<" is even";
}else {
    cout<<num<<" is odd";
}
    
return 0;
}