#include<iostream>
#include<vector>

using namespace std ;

int main(){
    int n , k ;
    vector<int> people ;
    while(cin>>n>>k && (n*k)!=0){
        for(int i=0;i<n;people.push_back(++i) ) ; //將人數存入
        // 找出被殺的 m 
        for(int m = (k-1)%people.size();people.size()!=1;){
            // 找出代替m位置的t
            int t = (m-1+k)%(people.size()-1) ;
            // if t > m 則要加 1
            t= (t+(t>=m)) %people.size() ;
            // replace
            people[m] = people[t] ;
            //delete t position
            people.erase(people.begin()+t) ;
            // keep find new m
            m= (m-(t<m)+k)% people.size() ;
        }
        cout<<(n-people.front()+1)%n+1<<endl ;
        people.clear() ;
    }
    return 0 ;
}
