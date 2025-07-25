#include <iostream>

using namespace std;

class HND{
    private:
        float value;
    public:
        //parameterized constructor
        HND(const float vl):value(vl) {}
        //setters
        void SetValue(const float vl)
        {
            this->value=vl;
        }
        //Getters
        float getValue() const{return value;}

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
