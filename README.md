
1.Скопировать заданную строку в другую строку.
```
#include <iostream>
#include <string.h> 
using namespace::std;

int main(){
    cout << "Введите первую строку: ";
    string textFirts; cin >> textFirts;
    cout << "Введите вторую строку: ";
    string textSecond; cin >> textSecond;
    textFirts.insert(textFirts.size(),textSecond);
    cout << "Итог:  " <<  textFirts; 
}
```







3.Изменить регистр букв во всей строке.
```
#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace::std; 

int main(){ 
 string str; cin >> str;
 transform(str.begin(), str.end(), str.begin(), ::toupper); 
 cout << str;
 }
```
6.Осуществить сравнение двух строк:
шаг1. Уничтожить ведущие и заключительные пробелы в обеих строках
шаг2. Перевести обе строки в один регистр (в прописные, либо в строчные)
шаг3. можно сравнивать эти строки

```
#include <iostream> 
#include <algorithm> 
#include <string> 
#include <cstring> 
#include <regex> 
 
using namespace::std; 
int main() { 
 
    string str1; 
    string str2; 
  
    cout << "--------------" << "\n" << "Введите первое предложение или слово: " << "\n";

    getline(cin, str1); 
    regex target1("( )+"); 
    string replacement1 = ""; 
    string s1 = regex_replace(str1, target1, replacement1); 
    cout << s1 << endl; 
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
    cout << s1 << endl;  
 
    cout << "--------------" << "\n" << "Введите второе предложение или слово: " << "\n" ;

     getline(cin, str2); 
    regex target2("( )+"); 
    string replacement2 = ""; 
    string s2 = regex_replace(str2, target1, replacement2); 
    cout << s2 <<  endl; 
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper); 
    cout << s2 << endl; 

    cout << "--------------" << "\n";
    cout << "При сравнение мы получили результат, что ";

    if (s1 > s2) { 
        cout << "s1 > s2"; 
    } 
    else if (str1 < str2) { 
        cout << "s2 > s1"; 
    } 
    else { 
        cout << "s1 = s2"; 
    } 
}


```
