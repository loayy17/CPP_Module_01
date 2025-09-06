#include <iostream>
void byValue(std::string s) {
    s += " World";
}

void byReference(std::string &s) {
    s += " World";
}

void byConstReference(const std::string &s) {
    // s = " World"; // ❌ خطأ
    std::cout << s;
}
class Shape {
private:
    std::string _name;
public:
    Shape(const std::string& name) : _name(name) {}
    
    std::string getName() const { // ❌ لا يمكن تعديل أي عضو
        // _name = "test"; // ❌ خطأ، لا يمكن التعديل
        return _name;
    }
    
    void setName(const std::string& name) {
        _name = name; // ✅ تعديل مسموح
    }
};
int main() {
    std::string text = "Hello";

    byValue(text);
    std::cout << text << std::endl; // Hello

    byReference(text);
    std::cout << text << std::endl; // Hello World

    byConstReference(text);          // Hello World
    Shape s("MyShape"); // كائن ثابت
    std::cout << s.getName() << std::endl; // ✅ صحيح، const function
    s.setName("New"); // ❌ خطأ، setName ليست const
}



