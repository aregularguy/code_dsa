#include <iostream>
using namespace std;
 
/* A utility function to check whether a word
  is present in dictionary or not.  An array of
  strings is used for dictionary.  Using array
  of strings for dictionary is definitely not
  a good idea. We have used for simplicity of
  the program*/
int dictionaryContains(string &word)
{
    string dictionary[] = {"mobile","samsung","sam","sung",
                            "man","mango", "icecream","and",
                            "go","i","love","ice","cream"};
    int n = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < n; i++)
        if (dictionary[i].compare(word) == 0)
            return true;
    return false;
}

void wordBreakUtil(string s ,int n , string res);


void wordBreak(string st)
{
    wordBreakUtil(st,st.length()," ");
}

void wordBreakUtil(string s , int n, string result)
{
    for(int i=1; i<=n;i++)
    {
        string prefix = s.substr(0,i);

        if(dictionaryContains(prefix))
        {
            // if no more elements are there print it
            if(i==n)
            {
                result+=prefix;
                cout<<result<<endl;
                return;
            }
            wordBreakUtil(s.substr(i,n-i), n- i , result+prefix +" ");
        }
    }
}
 

 int main()
{
   
    // Function call
    cout << "First Test:\n";
    wordBreak("iloveicecreamandmango");
 
    cout << "\nSecond Test:\n";
    wordBreak("ilovesamsungmobile");
    return 0;
}