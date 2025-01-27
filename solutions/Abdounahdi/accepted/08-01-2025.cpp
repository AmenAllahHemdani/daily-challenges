#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;


int main(){
    
    
    int tShirtsNum ; 
    cin >> tShirtsNum ; 
    
    vector<int> P; 
    vector<int> FC ; 
    vector<int> BC ; 
    
    REP(i , 0 , tShirtsNum){
        int a ; 
        cin >> a; 
        P.PB(a) ; 
    }
    
    REP(i , 0 , tShirtsNum){
        int a ; 
        cin >> a; 
        FC.PB(a) ; 
    }
    
    REP(i , 0 , tShirtsNum){
        int a ; 
        cin >> a; 
        BC.PB(a) ; 
    }
    
    set<int> fir ;
    set<int> sec ;
    set<int> thi ;
    
    REP(i,0,tShirtsNum){
        
        if (FC[i]==1){
            fir.insert(P[i]) ; 
        }
        
        if (FC[i]==2){
            sec.insert(P[i]) ; 
        }
        
        if (FC[i]==3){
            thi.insert(P[i]) ; 
        }
        
    }
    
    REP(i,0,tShirtsNum){
        
        if (BC[i]==1){
            fir.insert(P[i]) ; 
        }
        
        if (BC[i]==2){
            sec.insert(P[i]) ; 
        }
        
        if (BC[i]==3){
            thi.insert(P[i]) ; 
        }
        
    }
    
    int b ; 
    cin >> b ; 
    
    
    REP(i,0,b){
        int chou ; 
        cin >> chou ; 
        if ((chou == 1)&&(*next(fir.begin(), 0) != 0 )){
            cout << *next(fir.begin(), 0) << " " ; 
            sec.erase(*next(fir.begin(), 0));
            thi.erase(*next(fir.begin(), 0));
            fir.erase(*next(fir.begin(), 0));
        }
        else if ((chou == 2)&&(*next(sec.begin(), 0) != 0 )){

            cout << *next(sec.begin(), 0) << " " ; 
            fir.erase(*next(sec.begin(), 0));
            thi.erase(*next(sec.begin(), 0));
            sec.erase(*next(sec.begin(), 0));

        }
        else if ((chou == 3)&&(*next(thi.begin(), 0) != 0 )){
            cout << *next(thi.begin(), 0) << " "  ; 
            fir.erase(*next(thi.begin(), 0));
            sec.erase(*next(thi.begin(), 0));
            thi.erase(*next(thi.begin(), 0));

        }
        else {
            cout << -1 << " " ; 
        }
    }
    
    
    
    
    
    return 0 ; 
}
