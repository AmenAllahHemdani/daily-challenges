#include <iostream>
using namespace std;

int found(int c,int n,int array[200000],int price[200000]){
    int index = -1;
    int i = 0;
     int max = 1000000001;
    for(i=0;i<n;i++){
        if(array[i]==c){
            if(price[i]<max){
                max = price[i];
                index = i;
            }
        }
    }
    return index;
}


int main(){
    int n,m;
    cin >> n;
    int price[n],front[n],back[n];
    for(int i=0;i<n;i++){
        cin >> price[i];
    }
    for(int i=0;i<n;i++){
        cin >> front[i];
    }
    for(int i=0;i<n;i++){
        cin >> back[i];
    }
    cin >> m;
    int byer[m];

    for(int i=0;i<m;i++){
        cin >> byer[i];
    }
    for(int i=0;i<m;i++){
        int c = byer[i];
        int f = found(c,n,front,price);
        int b = found(c,n,back,price);
        if(f == -1 && b == -1){
            cout << -1 << " "; 
        }else if(f == -1){
            cout << price[b] << " ";
            back[b] = -1;
            front[b] = -1;
        }else if(b == -1){
            cout << price[f] << " ";
            back[f] = -1;
            front[f] = -1;
        }else if(price[f] > price[b]){
            cout << price[b] << " ";
            back[b] = -1;
            front[b] = -1; 
        }else{
            cout << price[f] << " ";
            back[f] = -1;
            front[f] = -1;           
        }
    }
    
    return 0;
}
