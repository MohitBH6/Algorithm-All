#include<iostream>
using namespace std;
int Power(int a,int b){
    if(b==0){
        return 1;
    }
    else if(b%2==0){
       return Power(a,b/2)*Power(a,b/2);
     }
     else {
        return a*Power(a,(b-1)/2)*Power(a,(b-1)/2);
     }
}
int main()
{
    cout<<"2 to the power 8 is :"<<Power(2,8);
    return 0;
}