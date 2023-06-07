#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int d;
    cin >> d;
    int car_cap;
    cin >> car_cap;
    int no_of_stations;
    cin >> no_of_stations;
    vector<int> stations(no_of_stations);
    for (int i = 0; i < no_of_stations; ++i)
    {
        cin >> stations[i];
    }
    int stops=0;
    int curr=0;
    if(car_cap>d){
        cout<<0;
        return 0;
    }
    for(int i=0;i<d/car_cap+1;++i){
        if(((stations[i]-curr)<=car_cap)){
            while (((stations[i]-curr)<=car_cap))
            {
                ++i;
            }
            curr=stations[i];
            ++stops;            
        }
        else{
            cout<<-1;
            return 0;
        }
    }
    ++stops;
    cout<<stops;
    return 0;
}