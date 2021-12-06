# ДЗ
1. Скопировать заданную строку в другую строку.
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
2. Добавить заданную подстроку в начало и в конец другой строки
```
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
    cout << "\n" <<"Подставить в конец ";
    cin >> a; 
    b.insert(b.size(), a); 
    cout <<  b << "\n"; 
}
```
3. Изменить регистр букв во всей строке.
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


4. Изменить регистр букв в части встроки.
```
#include <iostream> 
#include <algorithm> 
#include <string> 
#include <cstring> 
using namespace::std; 
 
int main() { 
    string str; 
     string s; 
  
    getline(cin, str); 
    int len = str.size(); 
    char* array = new char[len]; 
    strcpy(array, str.c_str()); 
 for ( int i = 0; i < (str.size() + 1); i++){ 
    int j = rand(); 
        if (j % 2 == 0) { 
            array[i] = toupper(array[i]); 
        } 
        else { 
            array[i] = tolower(array[i]); 
        } 
  
    } 
 cout << array; 
}
```

5.Подсчитать количество вхождений заданной подстроки (или отдельного символа) в строке
```
#include <string> 
#include <iostream> 
using namespace::std; 
int main() { 
    int counter = 0; 
    string::size_type pos = 0; 
    string s; 
    cout << "Введите слово: ";
    getline(cin, s); 
    string target; 
    cout << "Введите букву/слово, которую хотите проверить: ";
    getline(cin, target); 
    while ((pos = s.find(target, pos)) != string::npos) { 
        ++counter; 
        pos += target.length(); 
    } 
 cout << "Количество сходств: " << counter << endl; 
 
}
```

6. Осуществить сравнение двух строк:
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
