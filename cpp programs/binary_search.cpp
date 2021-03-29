
/* correct code for Binary Search */

#include<iostream>
using namespace std;
int binary_search(int arr[],int low, int high ,int key ){
    while(low<=high){
        int mid = (low + high) / 2 ;
        if(arr[mid]<key){
            low = mid + 1;
        }
        else if(arr[mid]>key){
            high = mid - 1; 
        }
        else{
            return mid;
        }
    }
        return -1;
    
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int search_key ;
    cin>>search_key;
    int low,high;
    low = 0;
    high = n-1;

    int index = binary_search(arr,low , high ,search_key);

    if(index == -1){
        cout<<"not found"<<endl;
    }

    else{
        cout<<"found"<<index<<endl;
    }
     return 0;
}