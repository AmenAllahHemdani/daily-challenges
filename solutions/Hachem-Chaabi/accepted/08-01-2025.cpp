#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, input; 
    cin >> n; 
    
    vector<int> prices; 
    vector<int> frontColors; 
    vector<int> backColors; 
    for(int i = 0; i < n; i++) {
        cin >> input; 
        prices.push_back(input); 
    }
    for(int i = 0; i < n; i++) {
        cin >> input; 
        frontColors.push_back(input); 
    }
    for(int i = 0; i < n; i++) {
        cin >> input; 
        backColors.push_back(input); 
    }
    
    set<int> firstColors;
    set<int> secondColors;
    set<int> thirdColors;
    for(int i = 0; i < n; i++) {
        if (frontColors[i]==1){
            firstColors.insert(prices[i]); 
        }
        if (frontColors[i]==2){
            secondColors.insert(prices[i]); 
        }
        if (frontColors[i]==3){
            thirdColors.insert(prices[i]); 
        }
    }
    for(int i = 0; i < n; i++) {
        if (backColors[i] == 1){
            firstColors.insert(prices[i]); 
        }
        if (backColors[i] == 2){
            secondColors.insert(prices[i]); 
        }
        if (backColors[i] == 3){
            thirdColors.insert(prices[i]);
        }
    }
    
    int buyers; 
    cin >> buyers; 

    for(int i = 0; i < buyers; i++){
        int buyerColor; 
        cin >> buyerColor;
        
        if ((buyerColor == 1) && (*next(firstColors.begin(), 0) != 0 )){
            cout << *next(firstColors.begin(), 0) << " " ;
            secondColors.erase(*next(firstColors.begin(), 0));
            thirdColors.erase(*next(firstColors.begin(), 0));
            firstColors.erase(*next(firstColors.begin(), 0));
        }
        else if ((buyerColor == 2) && (*next(secondColors.begin(), 0) != 0 )){
            cout << *next(secondColors.begin(), 0) << " "; 
            firstColors.erase(*next(secondColors.begin(), 0));
            thirdColors.erase(*next(secondColors.begin(), 0));
            secondColors.erase(*next(secondColors.begin(), 0));
        }
        else if ((buyerColor == 3) && (*next(thirdColors.begin(), 0) != 0 )){
            cout << *next(thirdColors.begin(), 0) << " "; 
            firstColors.erase(*next(thirdColors.begin(), 0));
            secondColors.erase(*next(thirdColors.begin(), 0));
            thirdColors.erase(*next(thirdColors.begin(), 0));
        }
        else {
            cout << -1 << " " ; 
        }
    }

    return 0 ; 
}
