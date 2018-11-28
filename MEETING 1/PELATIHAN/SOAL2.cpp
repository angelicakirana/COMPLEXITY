//problem id : 11364

#include <iostream>
using namespace std;

int main(){
    
    int n, x;
    cin >> x;

    
    int masuk;
    int min=0, max=0;
    
    for (int j=0; j<x; j++){
            cin >> n;
        
        
    for (int i=0; i<n; i++){
        cin >> masuk;
        
    
        if (masuk>min){
            max = masuk;
        } else {
            min = masuk;
        }
    }
      cout << (max-min)*2;
    }
}
