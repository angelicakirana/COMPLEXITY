
#include <iostream>
using namespace std;

int main() {
    int n;
    string angka;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> angka;
        
        if(angka.length()==5){
            cout << 3;
        } else if(angka.length()==3){
            int a=0;
            if(angka[0]=='o'){
                a++;
            }
            if(angka[1]=='n'){
                a++;
            }
            if(angka[2]=='e'){
                a++;
            }
            
            if(a>=2){
                cout << 1;
            } else {
                cout << 2;
            }
        }
        
        cout << endl;
    }
}
