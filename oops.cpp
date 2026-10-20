#include<iostream>
using namespace std;
class tree {
    public:
    int age;
    int height;
    int *ptr;
    //paramarteric constructor 
    tree (int height  , int age  , int *ptr_take){
         this -> height  = height ;
         this ->  age = age ;    
         this ->ptr = ptr_take ;
    }

    void fine (){
        cout <<"tree is fine "<<endl;
    }
    //copy constructor 
    tree(const tree &obj){
         this -> height  = obj.height ;
         this ->  age = obj.age ;  
         this-> ptr =obj.ptr
    }
    void getinfo(){
        cout <<"properties of tree "<<endl;
        cout << "height" << height <<endl;
        cout << "age "<<age <<endl;
        cout <<"ptr"<< *ptr << endl;;
    }

};

int main (){
    int val = 14;
    tree t1(12,4,&val);
    t1.getinfo();
    tree t2(t1);
    t2.getinfo();
    return 0;
}