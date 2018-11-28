//problem id : 11172
#include <iostream>
using namespace std;

int main() {
   
    int n;
    cin >> n;
    char hasil[n];
    
    int a, b;
   
    
    for (int i=0; i<n; i++){
        
        cin >> a >> b;
        if (a>b){
            hasil[i]='>';
        } else if (a<b){
            hasil[i]='<';
        } else {
            hasil[i]='=';
        }
        
    }
    
    for (int j=0; j<n; j++){
        cout << hasil[j] << endl;
    }
    
}
