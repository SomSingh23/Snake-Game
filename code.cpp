#include <bits/stdc++.h>
#include <conio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define Mod 10000000007 

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32; /* vector<int>*/
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ull unsigned long long
#define f(i,e) for(ll i = 0; i < e; i++)
#define fs(i,s,e) for(ll i = s; i < e; i++)
#define fr(i,s) for(ll i = s; i >= 0; i--)
#define frs(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl
#define mp make_pair
#define pb push_back
#define Y cout<<"YES"<<nl
#define N cout<<"NO"<<nl
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
bool global_game = true;
int width = 20;
int height = 20;
int x = width/2;
int y = height/2;
int fruit_x ;
int fruit_y;
enum dir { stop , left , right , up ,down };
enum dir user_input;
void draw(){
    system("clear");
    f(i,20)cout<<"#";cout<<endl;
    f(i,20){
        f(j,20){
     
        if(i==y and j==x)cout<<'O';
        else if(i==fruit_x and j==fruit_y)cout<<'F';
              else  if(j==0 or j==19)cout<<'*';
            else cout<<" ";
        }
        cout<<endl;
    }
     
        f(i,20)cout<<"#";cout<<endl;
}
void move(){
    if(_kbhit()){
        int a = _getch(); 
        switch(a) 
{    case 'a':
cout<<"x "<<x<<" ";
x--;
break;
case 'x':
global_game = false ;
break;
case 'd':
x++;
cout<<"x "<<x<<" ";
break;
case 'w':
y--;
cout<<"y "<<y<<" ";
break;
case 's':
y++;
cout<<"y "<<y<<" ";
break;
default:
    break;
}}

}
void som(){
    if(x==fruit_x and y==fruit_y){
          srand(time(0));
         fruit_x = rand()%width;
 fruit_y= rand()%height;
    }
      if(y==fruit_x and x==fruit_y){
          srand(time(0));
         fruit_x = rand()%width;
 fruit_y= rand()%height;
    }
}
void ghar_wapas(){
if(y==20){y=0 ;}
if(y==-1){y=19 ;}
if(x==20){x=0;}
if(x==-1){x=19 ;}

}
int main(int args ,char *argv[]){
   srand(time(0));
 fruit_x = rand()%width;
 fruit_y= rand()%height;
cout<<"Snake Game Lessssssss Gooooooooo"<<nl;
while(global_game){
    draw();
    move();
    som();
    ghar_wapas();
}
}

