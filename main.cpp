#include <iostream>
using namespace std;

int main() {
   int primo=1, secondo=1, terzo=0;
     int n=0;
     cin>>n;

     if(n<2){
         cout<<"errore"<<endl;
     }else {
         cout << primo << endl;
         cout << secondo<< endl;

         for (int i = 1; i < n; i++) {
             terzo = primo + secondo;
             primo = secondo;
             secondo = terzo;
             cout <<terzo<<endl;
         }

     }
   return 0;
}
