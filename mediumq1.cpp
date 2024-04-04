#include<iostream>
#include<stdio.h>

using namespace std;
//creating a custom data type.
struct custom{
    int value;
};
int main(){
    custom data;
    // lambda function which takes the parameter of data type created by the user in this case (Struct custom).
    auto customdatatype = [](custom mars){
        cout << "custom data values\t" << mars.value << endl;
    };

    cout << "enter the value";
    cin >> data.value;
    customdatatype(data);
    return 0;
}