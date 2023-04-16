#include<iostream>
using namespace std;
int main()
{
     int i,j;
     int a[8];
     int n;
     
     cin>>n;
     
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     int counter=1;
     while(counter<n){
          for(i=0;i<n-counter;i++){
               if(a[i]>a[i+1]){
                    int tem = a[i+1];
                    a[i+1]=a[i];
                    a[i]=tem;
               }
              
          }
          counter++;
     }
     cout<<"bobble shot";
     for(i=0;i<n;i++){
          cout<<a[i] ;
     }
     return 0;
}