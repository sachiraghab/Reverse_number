//Reverse_number
//Program to print reverse of given number

#include <iostream>
using namespace std; 
int main() {
    int n, rev_num=0,rem;
    cout <<"Enter a number: ";
    cin>>n;
    int org=n;
    while(n>0){
    rem = n%10;
    n=n/10;
    rev_num = rev_num*10 + rem;
    }
    cout<<"\nReverse of "<<org<<" is "<<rev_num;
    return 0;
}
