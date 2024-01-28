#include <iostream>

using namespace std;
int getMax(int a, int b, int c)
{
    int result;
    if(a>b && b>c){
        result = a;
    }
    else if(b>a && a>c){
        result = b;
    } else {
        result = c;
    }
    return result;
}

int main()
{
    int a, b, c;
    cin >> a>>b>>c;
    // all same
    //cin >> b;
    //cin >> c;
    //scanf("%d%d%d", &a, &b, &c);


    cout << "Max number is: "<< getMax(a,b,c);
    return 0;
}
