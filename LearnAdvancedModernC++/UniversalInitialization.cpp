#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(const vector<int>& vec){
    for(auto v : vec){
        cout<<v<<",";
    }
    cout<< endl;
}
class Test {};
int main(){
    // int x{7};
    // string s{"hello string"};
    // cout<<" x = "<<x<<endl;
    // cout<<" s = \""<<s<<"\""<<endl;
    // vector<int> vec{4,3,4,5,6,1};
    // cout<< "vec = ";
    // print(vec);
    
    // narrowing conversions are not allowed
    int y = 7.7;  // legal, although compilers may warn 
    //int y{7.7}; // illegal
    cout<<"y= "<<y<<endl;
    vector<int> old_one(4);
    vector<int> old_two(4,2);
    vector<int> uni_one{4};
    vector<int> uni_two{4,2};
    cout<<"old_one = ";
    print(old_one);

    cout<<"old_two = ";
    print(old_two);

    cout<<"uni_one = ";
    print(uni_one);

    cout<<"uni_two = ";
    print(uni_two);
    // avoids ambiguity
    Test test();
    Test test{};

}