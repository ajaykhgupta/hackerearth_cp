//linear searched proper code

#include<iostream>
using namespace std;

int Linearsearch(int arr[], int data, int n){
for(int i=0;i<n;i++)
    if(arr[i]==data)
        return 1 ;

return -1;    

}

int main() {
    int arr[100],n,data,i; 

    cout<<"enter values to be searched";
    cin>>data;

    cout<<"enter the number of elements to be inside the array";
    cin>>n;
    cout<<"enter array elements";
    for(i=0;i<n;i++){

    cin>>arr[i];

    }
  
    // cout<<"elements inside the array are:"<<endl; 

    // for(i=0;i<n;i++){

    //     cout<<arr[i];
    // }

    int index = Linearsearch(arr,data,n);


    if(index==1)
        cout<<"element present";
    
    else
        cout<<"NAHI HAI!";

    return 0;
}      

