#include<iostream>
using namespace std;

int isaccepted(string guy, string crush, int guylen, int crushlen){


    int i, j=0;
    for(i=0;i<crushlen && j< guylen; i++ )
        if(guy[j] == crush[i])
            j++;
        

    return (j==guylen);
}

int main() {
    int t; 
    cin>>t;
    while(t--){
        int guylen , crushlen ;
        bool index;
        string guy, crush;
        cin>>guy>>crush;
        guylen = guy.length();
        crushlen = crush.length();

        index = isaccepted(guy,crush,guylen,crushlen);

        if(index)
            cout<<"Love you too"<<endl;
            
        else    
            cout<<"We are only friends"<<endl; 
    }
    return 0;
}