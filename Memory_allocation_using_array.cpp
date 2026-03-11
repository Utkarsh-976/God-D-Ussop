#include<iostream>
using namespace std;

class shop{
    int item_id[100];
    int itemprice[100];
    int counter;

    public:
        void intcounter(){
            counter = 0;
        }

        void setprice();
        void display();
};

void shop::setprice(){
    cout<<"Enter id of your item no: "<<counter+1<<endl;
    cin>>item_id[counter];
    cout<<"Enter price of your item: "<<endl;
    cin>>itemprice[counter];
    counter++;

}

void shop::display(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item id "<<item_id[i]<<" is "<<itemprice[i]<<endl;
    }
    
}

int main(){
    shop toys;
    toys.intcounter();
    toys.setprice();
    toys.setprice();
    toys.setprice();
    toys.display();

    return 0;
}