#include<iostream>
#include<cstring>
using namespace std;

void removeduplicates(char a[]){

     
    int i=0;
    int x=strlen(a);
    if (a==0 or x==1){
        return;
    }

    for(int j=1;j<x;j++){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];

        }
    }
    a[i+1]='\0';
    cout<<a;

}
int main(){
    char a[1000];
    cin.getline(a,1000);
    removeduplicates(a);
    return 0;


}
