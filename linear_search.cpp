#include<iostream.h>
#include<conio.h>
int main(){
  cout<<"enter the number u want to find:"<<endl;
  cin>>K;
    int arr[]={12,3,43,53,56,23,78};
    for(int i=0;i<7;i++){
      if(arr[i]==K){
        return true;
      }
      else{
        return false;
      }
    }
  return 0;
}
