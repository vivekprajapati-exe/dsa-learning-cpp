#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    int size;
    cout << "size of arrary";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int hash[12] = {0};

    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    int find;
    cout << "enter the element you want to find ";
    cin >> find;
    cout << "the number " << find << "appears" << hash[find];

    //! Character hashing
    string s;
    cin >> s;

    int hashh[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i] - 'a']++;
    }

    char find;
    cout << "Enter the character to find in array : ";
    cin >> find;
    cout << "the char is repeated " << hashh[find - 'a'];

    return 0;

    //! Mapping

    int size;
    cout << "size of arrary";
    cin >> size;
    int arr[size];
    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto i : mpp)
    {
        cout << i.first << "->" << i.second << endl;
    }

    int find;
    cout << "enter the no to find";
    cin >> find;
    cout << "the frequency of your no is " << mpp[find];

    //! Find highest and lowest frequency
    int size;
    cout << "Size of array: ";
    cin >> size;
    int arr[size];
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int highestElem = -1;
    int highestfreq = 0;
    for (auto it : mpp)
    {
        if (it.second > highestfreq)
        {
            highestElem = it.first;
            highestfreq = it.second;
        }
    }

    cout << "the highest elem with highes freq is " << highestElem << "->" << highestfreq;
}
