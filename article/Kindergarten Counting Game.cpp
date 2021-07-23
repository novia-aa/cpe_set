#include<iostream>

using namespace std ;

int main(){
string st;
bool word=false ;
while(getline(cin,st)){
    int n=0;
    for(int i=0;i<st.size();i++){
        if ((st[i] >= 'a' && st[i] <= 'z') ||
                (st[i] >= 'A' && st[i] <= 'Z'))
            {
                word = true;
            }
            else if (word)
            {
                word = false;
                n++;
            }
    }
      if (word)  n++;  //­Y¨S¦³¥y¸¹
    cout << n << endl;
}

}
