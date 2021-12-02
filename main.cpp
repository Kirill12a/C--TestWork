#include <iostream> 
#include <algorithm> 
#include <string> 
#include <cstring> 
using namespace::std; 
 
int main() { 
    cout << "Введите слово с которым будет будет соединение: " ;
    string b; cin >> b;
    cout << "\n" << "Подставить в начало: ";
    string a; cin >> a; 
    a.insert(a.size(), b); 
    cout  << a; 
    cout << "\n" <<"Подставить в конец: ";
    cin >> a; 
    b.insert(b.size(), a); 
    cout <<  b << "\n"; 
}