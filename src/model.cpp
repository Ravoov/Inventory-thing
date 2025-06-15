#include <model.h>
struct inventory
{
    std::vector<std::string> items;

};
inventory createInventory(){
    inventory inv;
    return inv; 

}
void showInventory(const inventory& inv) {
    std::cout << "Inventory:\n";
    for (const auto& item : inv.items) {
        std::cout << "- " << item << "\n";
    }
}

void addItem(inventory& inv, const std::string& item) {
    inv.items.push_back(item);
}



