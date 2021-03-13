#include<iostream>
#include<climits>
using namespace std;
int binary(int a[],int n,int key)
{ int s=0;
int e=n-1;
while(s<=e){
   int m=(s+e)/2;
   if(m=key){
      return m; 
   }
   if(a[m]>key){
       e=m-1;
   } 
   else{
       s=m+1;
   }
   return -1;

}

}
int main()
{
    int a[10]={0};
    //cout<<sizeof(a)<<endl;
    int n;
    cout<<"enter no. of elemsnts";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    int key;
    cout<<"enter no. to be searched";
      cin>>key;
      cout<<binary(a,n,key)<<endl;

return 0;

}