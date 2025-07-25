#include <iostream>
#include <string>
using namespace std;

class CellPhone{
    private:
        string manufacturer;
        string model;
        double retailPrice;
    public:
        //Setters
        void setManufacturer(const string mfr)
        {
            this->manufacturer = mfr;
        }

        void setModel(const string mdl)
        {
            this->model = mdl;
        }

        void setRetailPrice(double price)
        {
            this->retailPrice = price;
        }

        //getters

        string getManufacture() const {return manufacturer;}
        string getModel() const {return model;}
        double getRetailPrice() const {return retailPrice;}

        //Default Constructor
        CellPhone():manufacturer(""),model(""),retailPrice(0.0) {}
        //Parameterized Constructor
        CellPhone(const string mfr,const string mdl, double price)
        :manufacturer(mfr),model(mdl),retailPrice(price) {}

        void printPhoneData()
        {
            cout<<"Phone Manufacturer: "<<getManufacture()<<endl;
            cout<<"Phone Model: "<<getModel()<<endl;
            cout<<"Phone Retail Price: "<<getRetailPrice()<<endl;
        }

};
int main()
{
    CellPhone myPhone;
    CellPhone yourPhone("Apple","Iphone 16",1200000);

    myPhone.setManufacturer("Samsung");
    myPhone.setModel("Ultra 25");
    myPhone.setRetailPrice(800000.00);
    myPhone.printPhoneData();

    cout<<"\n"<<endl;
    yourPhone.printPhoneData();
    return 0;
}
