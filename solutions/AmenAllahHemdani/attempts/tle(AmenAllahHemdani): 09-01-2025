#include <iostream>
using namespace std;


int main(){
    int n,k;

    cin >> n >> k;

    int height[n];

    for(int i=0;i<n;i++){
        cin >> height[i];
    }

    int result;
    int min = 100*k+1;
    if(n==k){
        cout << 1;
        return 0;
    }

    for(int i=0;i<n-k+1;i++){
        int somme = 0;
        for(int j=i;j<i+k;j++){
            somme += height[j];
        }
        if(somme < min){
            min = somme;
            result = i+1;
        }
    }
    cout << result;
    return 0;
}
