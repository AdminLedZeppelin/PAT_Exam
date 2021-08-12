#include <iostream>
#include <cstring>
using namespace std;

string *removeDuplicate(string str[], int n)
{
   // Used as index in the modified string
   int index = 0;

   // Traverse through all characters
   for (int i=0; i < str[i].length(); i++) {

     // Check if str[i] is present before it
     int j;
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;

     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }

   return str;
}

int main()
{
    string str[10], temp;

    for(int i = 0; i < 10; ++i){
        getline(cin, str[i]);
        }


    removeDuplicate(str, 10);

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }





    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
