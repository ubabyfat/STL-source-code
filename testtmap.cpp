#include <iostream>
#include <utility>
#include <cstddef>
#include <map>
#include <string>
using namespace std;
int main()
{
    string word;
    map<string,size_t> word_count;
    while(cin>>word)
    {
        ++word_count[word];
    }
    for(map<string,size_t>::const_iterator w = word_count.begin();w!=word_count.end();++w)
    {
            cout<<w->first<<" "<<w->second<<((w->second)>1?"times":"time")<<endl;
    }

    return 0;
}
