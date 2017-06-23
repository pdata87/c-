//struct MyType {
//    MyType(const MyType& t);
//    MyType(){} // FIX : added constructor
//
//};
//
//
//int main() {
//    MyType a;
//}

//struct MyType {
//    MyType( const MyType& rhs){};// addded implementation
//    MyType( MyType& rsh){}; // addded implementation
//    MyType(){}; //added constructor
//};
//
//MyType getType() { return MyType{};}
//
//int main() {
//    MyType b;
//    MyType a {b};
//    MyType c { getType() }; // removed ;
//};


//struct MyType {
//    MyType( const MyType& rhs){};// addded implementation
//    MyType( MyType& rsh){}; // addded implementation
//    MyType(){}; //added constructor
//    inline MyType operator = (MyType & ref){ //added = opearotr
//
//    }
//};
//
//MyType getType() { return MyType{};}
//
//int main() {
//    MyType b;
//    MyType a {b};
//    MyType c { getType() }; // removed ;
//};


struct MyType {
    MyType(const MyType& rhs){};
    MyType& operator=(const MyType& rhs){};
    MyType(){}; //added constructor
};

int main() {
    MyType a,b;
    MyType c = a; //copy operator
    b = a; //assign operator
}
