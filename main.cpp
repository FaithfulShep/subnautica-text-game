/******************************************************************************

Subnautica Survival Inventory:
Manage a diver's gear and resources collected on an alien ocean planet.

*******************************************************************************/

#include <iostream>

// 1. Move type definitions to the top so functions know about them
enum class BiomeType {
    ShafeShallows,
    KelpForest,
    GrandReef,
    LavaZone
}; // Added missing semicolon

struct GameResource {
    char name[20];
    int quantity;
    BiomeType biome_of_resource;
}; // Added missing semicolon

// Renamed enum to avoid name collision with the struct below, 
// and changed "propulsion cannon" to use an underscore (no spaces allowed in identifiers)
enum class CraftableItem {
    scanner,                
    knife,                  
    oxygen_tank,            
    lithium_oxygen_tank,    
    rebreather,             
    fins,                   
    seaglide,               
    propulsion_cannon       
};

struct Craftables {
    char name[20];
    char description[500];
    GameResource resources_required[8];
}; // Added missing semicolon

class Diver {
    public:
        char name[20];
        int oxygen;
        int health;
        int diverDepth;
        BiomeType current_biome; // Added missing semicolon
        GameResource inventory[5]; // array of 5 resource slots
};

// 2. Function prototypes placed AFTER the types are defined
void breathe(Diver diver); 
void swimTo(BiomeType current_biome, BiomeType biome_headed_to); // Added missing semicolon
void dive(Diver& diver, int depthMeters); 
void collect(Diver* diver, GameResource* item); 
void observe(); // Added parentheses ()
void craft(Diver& diver); 

int main()
{
    return 0;
}
