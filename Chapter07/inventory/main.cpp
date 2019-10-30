#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventoryItem
{
public:
    InventoryItem();
    InventoryItem(int p, string d, int oH, double cost);
    void storeInfo(int p, string d, int oH, double cost);
    int getPartNum() const;
    string getDescription() const ;
    int getOnHand() const;
    double getPrice() const;

private:
    int m_partNum;         // Part number
    string m_description;  // Item description
    int m_onHand;          // Units on hand
    double m_price;          // Unit price
};
 
InventoryItem::InventoryItem()
{
    storeInfo(0, "NA", 0, 0.0);
}

InventoryItem::InventoryItem(int p, string d, int oH, double cost)
{
    storeInfo(p, d, oH, cost);
}

void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
    m_partNum = p;
    m_description = d;
    m_onHand = oH;
    m_price = cost;
}

int InventoryItem::getPartNum() const
{
    return m_partNum;
}

string InventoryItem::getDescription() const
{
    return m_description;
}

int InventoryItem::getOnHand() const
{
    return m_onHand;
}

double InventoryItem::getPrice() const
{
    return m_price;
}

void showValues(const InventoryItem& item)
{
    cout << fixed << setprecision(2);
    // Getter functions below will cause compile error
    // unless if they are converted into constant functions
    cout << "Part Number  : " << item.getPartNum() << endl;
    cout << "Description  : " << item.getDescription() << endl;
    cout << "Units On Hand: " << item.getOnHand() << endl;
    cout << "Price        : $" << item.getPrice() << endl;
}

InventoryItem createItem()
{
    InventoryItem item;

    int partNum;
    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;

    string description;
    cout << "Description: ";
    cin.ignore();
    getline(cin, description);

    int qty;
    cout << "Quantity on hand: ";
    cin >> qty;

    double price;
    cout << "Unit price: ";
    cin >> price;
    item.storeInfo(partNum, description, qty, price);

    return item;
}

int main()
{
    InventoryItem part(1, "Hammer", 10, 20.00);
    showValues(part);

    InventoryItem part2 = createItem();
    showValues(part2);
    return 0;
}