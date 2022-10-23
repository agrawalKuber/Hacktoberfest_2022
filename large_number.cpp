#include<iostream>
  using namespace std;
  // reduce a large number to a single digit number by adding its digits
  int main(){
    long long int num,n;
     //Enter the number
         cin>>num;    
    int sum;
     // store original number to n    
    n=num;     
    do{
        sum=0;
        while(n!=0){
            //extract last digit of n and add it to sum
            sum+=(n%10);   
             // remove last digit from n
            n/=10;         
        }
        // reduced number after exiting the loop 
        n=sum;

    }while(n/10!=0);  //  when n is a single digit number
     cout<<num<<" is finally reduced to "<<n;

    return 0;
  }
