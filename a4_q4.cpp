#include <iostream>
using namespace std;
int main(){
    int low;
    cout<<"Enter the lower limit : ";
    cin>>low;
    int high;
    cout<<"Enter the upper limit :";
    cin>>high;

    for(int num = low; num<=high; num++){
        bool isprime = 1;
        for(int i=2;i<num;i++){
		    if(num%i == 0){
                isprime = 0;
            } 
        }
        if (isprime){
            cout<<num<<endl;
        }
    }
        return 0;
    
}
