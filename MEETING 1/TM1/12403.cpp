
#include <iostream>
using namespace std;

int main() {
 
    int n;
    cin >> n;
    
    int value, sum=0;
    string apa;

    
    for(int i=0; i<n; i++){
            cin >> apa;
        if(apa=="donate"){
            cin >> value;
            sum=sum+value;
        } else if (apa=="report"){
            cout << sum << endl;
        }
    }
    
}
