#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int N = 100010;
int inf = 1e9;
int mod = 1e9 + 7;
void solve(){
    vector<pair<string,pair<int,pair<int,int>>>>cont;//to store the value;
    //int n=4;
    cont.push_back({"Leather wallet",{1100,{18,1}}});
    cont.push_back({"Umbrella",{900,{12,4}}});
    cont.push_back({"cigrate",{200,{28,3}}});
    cont.push_back({"Honey",{100,{0,2}}});

    vector<pair<int,string>>vp;
    
    for(auto it:cont){
        //cout<<it.first<<" "<<it.second.first<<" "<<it.second.second.first<<" "<<it.second.second.second<<"\n";
        int x=(it.second.first)*(it.second.second.first)*(it.second.second.second)/100;
        vp.push_back({x,it.first});
    }
    sort(vp.begin(),vp.end());
    pair<int,string>fs=vp.back();
    cout<<fs.second<<"\n";

    //vector<int>ans;
    int fnl=0;
    for(auto it:cont){
        int x1=it.second.first;
        int x2=it.second.second.first;
        int x3=it.second.second.second;
       
        if(x1>=500){
            fnl+=((x1*(100+x2)*x3)/100)*0.95 ;

        }
        else{
            fnl+=(x1*(100+x2)*x3)/100;
        }
    }
    cout<<fnl<<"\n";


    
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
//int _t;cin>>_t;while(_t--)
solve();
}
