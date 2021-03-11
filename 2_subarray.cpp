#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int n,i,j;
    cin>>n;
     int csum[1000]={0};
     cin>>a[0];
     csum[0]=a[0];
    for(i=1;i<n;i++){
        cin>>a[i];
        csum[i]=csum[i-1]+a[i];  
    }
    int cursum, maxsum=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            cursum=0;
            cursum=csum[j]-csum[i-1];
            if(cursum>maxsum){
                maxsum=cursum;
                
            }

        }

    }
    cout<<"maximum sum is "<<maxsum;
   
return 0;
}