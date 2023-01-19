#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number you want to reversed"<<endl;
    cin >> n;

    //write your code here
    cout<<"the reverse of the number is:"<<endl;

    while(n>0){ 
      int rev= n%10;
      n = n/10;
      cout<<rev;   
    }
    return 0;
    
}  
