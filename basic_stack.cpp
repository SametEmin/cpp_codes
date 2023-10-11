#include <iostream>
using namespace std;

template <typename T>
class stack{
private:
    T* arr=new int[100];
public:
    T size=0;
void push(int element){
    arr[size++]=element;
};
int pop(){
    if(size!=0){
        T temp=arr[size-1];
        arr[size-1]=0;
        size--;
        return temp;
    }
    else {
        return 0;
    }
}
};

int main(){
    stack<int>* stack1=new stack<int>;
    stack1->push(12);
    stack1->push(11);
    return 0;
}

