
#include <iostream>
using namespace std;
int main() {
    string haji;
    
    int i=1;
    while (cin >> haji){
        if(haji=="*"){
            break;
        }
        cout << "Case " << i << ": ";
        i++;
        if(haji=="Hajj"){
            cout << "Hajj-e-Akbar" << endl;
        } else if(haji=="Umrah"){
            cout << "Hajj-e-Asghar" << endl;
        }
    }
}
