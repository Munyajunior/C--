#include <iostream>

using namespace std;

int main()
{
   int i = 1;
   int count =1;
   while(i<=10){
    int sum = 0;
    int j =0;
    while(j<=10){
        sum = sum+count;
        cout<<"While loop Sum "<<sum<<endl;
        count +=1;
        cout<<"While loop count "<<count<<endl;
        j+=1;
        cout<<"While loop j "<<j<<endl;
    }
    cout<<"SET i: "<<i<<" SUM = "<<sum<<endl;
    i+=1;
   }
       cout<<"STOP"<<endl;
       return 0;
   }

