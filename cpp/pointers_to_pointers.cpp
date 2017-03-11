#include <iostream>
using namespace std;
void func(char **m){
    ++m;
    cout<<*m<<endl;
}
int main(){
    char *a[]={"morning", "afternoon", "evening"};
    char **p;
    p=a;
    func(p);
    return 0;
}