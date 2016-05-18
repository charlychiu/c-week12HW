#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED

template <typename T>
struct MyStack{
  private:
    T var1;
    T var2;
    T var3;
    static int swapCount;
  public:
    T getVar1();
    T setVar1(T var);
    T getVar2();
    T setVar2(T var);
    T getVar3();
    T setVar3(T var);
    static int getSwapCount(){
        return swapCount;
    }
    static int setSwapCount(int Count){
        swapCount = Count;
    }
    void Swap();
    void show();
    T getThreeVar(string s);
};
template <typename T>
int MyStack<T>::swapCount = 0;

template <typename T>
T MyStack<T>::getVar1(){
    return var1;
}

template <typename T>
T MyStack<T>::setVar1(T var){
    var1 = var;
}

template <typename T>
T MyStack<T>::getVar2(){
    return var2;
}

template <typename T>
T MyStack<T>::setVar2(T var){
    var2 = var;
}

template <typename T>
T MyStack<T>::getVar3(){
    return var3;
}

template <typename T>
T MyStack<T>::setVar3(T var){
    var3 = var;
}

template <typename T>
void MyStack<T>::Swap(){
    T temp = getThreeVar("var1");
    var1 = getThreeVar("var2");
    var2 = temp;
    ++swapCount;
}

template <typename T>
void MyStack<T>::show(){
    cout << "Var1: " << this->var1 << endl;
    cout << "Var2: " << this->var2 << endl;
    cout << "Var3: " << this->var3 << endl;
    cout << "SwapCount: " << this->swapCount << endl;
    cout << "----------------" << endl;
}

template <typename T>
T MyStack<T>::getThreeVar(string s){
    if( s == "var1") return var1;
    if( s == "var2") return var2;
    if( s == "var3") return var3;
    return NULL;
}

#endif // MYSTACK_H_INCLUDED