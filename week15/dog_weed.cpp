#include "dog_weed.h"


Dog_weed::Dog_weed (int id, string name, float weight): Dog(id, name),weight(weight){};
void Dog_weed::displayInfo(){
        cout << "DOG_weed: " << id << " " << " " << name; 
}