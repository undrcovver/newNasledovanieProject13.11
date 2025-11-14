#include <iostream>
#include <string>
using namespace std;

class vehicle {
    protected:
    string name;
    int MaxSpeed;
    string color;
    int amountOfPlace;
    public:
    vehicle() { MaxSpeed = 0; amountOfPlace = 0; }
    vehicle(string n, int sp, string col, int am)
    {
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
    }

    void SetName(string n) { name = n; }
    void SetMaxSpeed(int mxSp) { MaxSpeed = mxSp; }
    void SetColor(string col) { color = col; }
    void SetAmountOfPlace(int amPl) { amountOfPlace = amPl; }

    string GetName() { return name; }
    int GetMaxSpeed() { return MaxSpeed; }
    string GetColor() { return color; }

    void Print()
    {
        cout << "Name: " << name << "\tMaxSpeed: " << MaxSpeed << " km/h" << "\tColor: " << color << "\tAmount of places: " << amountOfPlace << endl;
    }
};

class Truck: public vehicle
{
    double gruz;
    double height;
    public:
    Truck() { gruz = 0; height = 0; }
    Truck(string n, int sp, string col, int am, double gr, double h) 
    { 
        gruz = gr; 
        height = h; 
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
    }

    void SetGruz(double gr) { gruz = gr; }
    void SetHeight(double h) { height = h; }

    double GetGruz() { return gruz; }
    double GetHeight() { return height; }

    void Print()
    {
        vehicle::Print();
        cout << "Gruz: " << gruz << " kg" << "\tHeight: " << height  << " cm"<< endl;
    }
};

class Plane: public vehicle 
{
    double hours;
    double razmah;
    int dvigatel;
    public:
    Plane() { hours = 0; razmah = 0; dvigatel = 0; }
    Plane(string n, int sp, string col, int am, double hr, double raz, int dv) { 
        hours = hr; 
        razmah = raz; 
        dvigatel = dv; 
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
    }

    void SetHours(double h) { hours = h; }
    void SetRazmah(double r) { razmah = r; }
    void SetDvigatel(int d) { dvigatel = d; }

    double GetHours() { return hours; }
    double GetRazmah() { return razmah; }
    int GetDvigatel() { return dvigatel; }

    void Print()
    {
        vehicle::Print();
        cout << "Hours: " << hours << "\tRazmah: " << razmah << "\tDvigatel: " << dvigatel << endl;
    }
};

class Ship: public vehicle
{
    int vint;
    double vodoizmesheniye;
    string fuel;
    public:
    Ship() {vint = 0; vodoizmesheniye = 0; }
    Ship(int v, double vod, string f, string n, int sp, string col, int am)
    {
        vint = v;
        vodoizmesheniye = vod;
        fuel = f;
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
    }
    
    void SetVint(int v) { vint = v; }
    void SetVodoizmesheniye(double vod) { vodoizmesheniye = vod; }
    void SetFuel(string f) { fuel = f; }

    int GetVint() { return vint; }
    double GetVodoizmesheniye() { return vodoizmesheniye; }
    string GetFuel() { return fuel; }

    void Print()
    {
        vehicle::Print();
        cout << "Vint: " << vint << "\tVodoizmesheniye: " << vodoizmesheniye << "\tFuel: " << fuel << endl;
    }
};

class Car:public vehicle
{
    string model;
    int engine;
    public:
    Car() { engine = 0; }
    Car(string n, int sp, string col, int am, string m, int en)
    {
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
        model = m;
        engine = en;
    }
    
    void SetModel(string m) { model = m; }
    void SetEngine(int en) { engine = en; }

    string GetModel() { return model; }
    int GetEngine() { return engine; }

    void Print()
    {
        vehicle::Print();
        cout << "Model: " << model << "\tEngine: " << engine << " l" << endl;
    }
};

class Bicycle:public vehicle
{
    int wheel;
    string type;
    public:
    Bicycle() { wheel = 0; }
    Bicycle(string n, int sp, string col, int am, int wh, string ty)
    {
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
        wheel = wh;
        type = ty;        
    }

    void SetWheel(int wh) { wheel = wh; }
    void SetType(string ty) { type = ty; }

    int GetWheel() { return wheel; }
    string GetType() { return type; }

    void Print()
    {
        vehicle::Print();
        cout << "Wheels: " << wheel << "\tType: " << type << endl;
    }
};

class Tank:public vehicle
{
    string country;
    double weight;
    public:
    Tank() { weight = 0; }
    Tank(string n, int sp, string col, int am, string coun, double w) {
        name = n;
        MaxSpeed = sp;
        color = col;
        amountOfPlace = am;
        country = coun;
        weight = w;        
     }

     void SetCountry(string coun) { country = coun; }
     void SetWeight(double w) { weight = w; }

     string GetCountry() { return country; }
     double GetWeight() { return weight; }

     void Print()
     {
        vehicle::Print();
        cout << "Made in: " << country << "\tWeight: " << weight << " kg" << endl;
     }
};

int main()
{
    Truck obj("Mercedes", 185, "Black", 2, 1000, 200);
    obj.Print();

    

}