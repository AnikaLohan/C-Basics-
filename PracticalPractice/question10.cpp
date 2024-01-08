#include <iostream>
#include <string.h>
using namespace std;
void helper(string input,int l,int r)
{
    if (l == r)
        cout<<input<<endl;
    else
    {
        for (int i = l; i <= r; i++){
        swap(input[l], input[i]);
        helper(input, l+1, r);
        swap(input[l], input[i]);
        }
    }
}
void printPermutations(string input){
    int l=0;
    int r=input.size()-1;
    helper(input,l,r);
}
int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}