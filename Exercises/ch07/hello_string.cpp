#include <iostream>
using namespace std;

void reverse(string reverseString){
    int len = reverseString.length();
    int n = len;
    while(n--)
        cout << reverseString[n];

}

void count_letters(string state,char letter) {
   int count=0;
   int prev_index;
   for (int i=0;i<state.length();i++){
      int index=state.find(letter,i);
      if(index>-1 && index!=prev_index) {
            count++;
            prev_index=index;
      }
    } 
    cout << count << endl;
}
int main()
{
    count_letters("Mississippi",'i');
    reverse("abc");
    string str1;
    str1  = "Hello, ";
    string str2 = "strings!";
    cout << str1 << str2 << endl;
    return 0;
}


