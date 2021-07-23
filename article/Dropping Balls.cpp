#include<iostream>
#include<cstdio>
using namespace std ;


int main(){
int test,D,I ;

cin>>test ;
while(test--){
    cin>>D>>I ;
    int now_pos=1, remain = I ;
    for(int i=1;i<D;i++){
        if(remain%2==1) {    //left
            now_pos*=2 ;
            remain=(remain+1)/2;
        }
        else{
            now_pos*=2;
            now_pos+=1;
            remain/=2;
        }
    }
    cout<<now_pos<<endl ;
}
return 0;
}
