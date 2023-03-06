#include <iostream>
#include <string>
using namespace std;
// [structure]
struct Room
{
    Room(){};
    Room(string _street, string _house, float _room_space, float _square_meter_cost);
    string street; 
    string house; 
    float room_space; 
    float square_meter_cost;
    int rent();
};
// [def]
int Room::rent()
    {
        return room_space * square_meter_cost;
    }
// [main]
int main()
{
    setlocale(0, "Russian");

    
    Room a, b = Room("Кремлёвская", "18", 200, 10000);
    cout << "Введите адрес и стоимость аренды (ул. / кв. / жил. площадь / рента): ";
    cin >> a.street >> a.house >> a.room_space >> a.square_meter_cost;
    cout << fixed << a.rent() << " " << b.rent();

    return 0;
}
// [constructor]
Room::Room(string _street, string _house, float _room_space, float _square_meter_cost)
{
    street = _street;
    house = _house;
    room_space = _room_space;
    square_meter_cost = _square_meter_cost;
}