#include<iostream>
#include <cstring>
using namespace std ;

int main()
{
    int n1,n2 ;
    int s1[101],s2[101]  ;
    int dp[101][101] ;
    int cas=1 ;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>n1>>n2){
        if(n1==0&&n2==0)  break ;

        for(int i=0; i<n1; i++){
            cin>>s1[i] ;
        }

        for(int i=0; i<n2; i++){
            cin>>s2[i] ;
        }

        memset(dp, 0, sizeof(dp) );
       // LCS
        for (int i = 1; i <= n1; i++){
            for (int j = 1; j <= n2; j++){
                if (s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout<<"Twin Towers #"<<cas++<<endl ;
        cout<<"Number of Tiles : "<<dp[n1][n2]<<endl ;
    }
    return 0 ;
}
