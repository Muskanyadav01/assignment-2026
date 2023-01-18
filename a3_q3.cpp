#include <iostream>
using namespace std;
 int main(){
    int t;
    cout<<"Enter how many numbers you want to check for prime :";
    cin >> t;
    int a = 0;

    while(a < t){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        int check = 0;

        for(int i=2;i<=n;i++){
		    if(n%i == 0){
                check++;
            } 

	    }

            if(check == 1){
                cout<<"The number is prime."<<endl;
            }   
	        else{
                cout<<"The number is not prime"<<endl;
            }

    a++;
	}
