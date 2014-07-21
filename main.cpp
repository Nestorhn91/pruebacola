#include <iostream>
#include <stack>

using namespace std;

class Numero
{
public:
    int x;
    Numero(int x)
    {
        this->x = x;
    }
};
//int funcion1()
//{
  //  int x = 10;
    //int *y = new int(20);
    //return x;
//}

int main()
{
    stack<Numero*> mis_numero;
    mis_numero.push(new Numero(10));
    mis_numero.push(new Numero(20));
    mis_numero.push(new Numero(30));

    while (!mis_numero.empty())
    {
       cout<< mis_numero.top() ->x <<endl;
       mis_numero.pop();
    }
    //funcion1();
    return 0;
}
