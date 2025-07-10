#include <iostream>     // <-- Required for cin, cout, endl
#include <vector>       
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    int total;
        cin>>total;
        string s;
        cin>>s;
        int curr=0;
        int next=1;
        if(s.length()==1){
            cout<<0<<endl;
            return 0;
        }
        int count=0;
        while(next<s.length()){
            if(s[next]==s[curr]){
                count++;
                next++;
            }
            else {
                curr=next;
                next=next+1;
            }
        }
        cout<<count<<endl;
        return 0;
}
