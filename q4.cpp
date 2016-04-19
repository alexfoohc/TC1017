#include<iostream>
#include <string>
using namespace std;
bool is_palindrome(string word, int size){
  for (int i = 0; i < size/2; i++)
    if (word[i]!= word[size-i-1])
      return false;
    return true;
}
int main()
{
  string word;
  cout<<"Type a word"<<endl;
  getline(cin, word);
  is_palindrome(word, word.length())?
  cout<<"\nIs a palindrome\n": cerr<<"\nIs not a palindrome\n";
return 0;
}
