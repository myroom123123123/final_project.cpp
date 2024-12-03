#include "domain.h"
#include "productsmanagment.h"
#include "namespaces.h"

int main() {
    using namespace std;
    using namespace ProductCategories;

    try {

		vector<shared_ptr<Product>> groceries = {
			make_shared<ProductCategories::Groceries>("Rice", 1.50, 1.0),
			make_shared<ProductCategories::Groceries>("Pasta", 0.80, 0.5),
			make_shared<ProductCategories::Groceries>("Bread", 1.00, 0.5),
			make_shared<ProductCategories::Groceries>("Sugar", 1.20, 0.2),
			make_shared<ProductCategories::Groceries>("Salt", 0.50, 0.2),
			make_shared<ProductCategories::Groceries>("Flour", 1.00, 0.5),
			make_shared<ProductCategories::Groceries>("Cereals", 2.00, 0.5),
			make_shared<ProductCategories::Groceries>("Canned food", 1.50, 0.2),
			make_shared<ProductCategories::Groceries>("Spices", 1.00, 0.2),
            make_shared<ProductCategories::Groceries>("Rice", 1.50, 1.0)
		};

		vector<shared_ptr<Product>> bakeryProducts = {
			make_shared<ProductCategories::BakeryProduct>("Bread", 1.00, 0.5),
			make_shared<ProductCategories::BakeryProduct>("Bun", 0.50, 0.2),
			make_shared<ProductCategories::BakeryProduct>("Baguette", 1.20, 0.5),
			make_shared<ProductCategories::BakeryProduct>("Croissant", 1.00, 0.2),
			make_shared<ProductCategories::BakeryProduct>("Roll", 0.80, 0.2),
			make_shared<ProductCategories::BakeryProduct>("Muffin", 1.00, 0.2),
			make_shared<ProductCategories::BakeryProduct>("Donut", 1.50, 0.2),
			make_shared<ProductCategories::BakeryProduct>("Pretzel", 1.00, 0.2),
			make_shared<ProductCategories::BakeryProduct>("Pie", 2.00, 0.5),
			make_shared<ProductCategories::BakeryProduct>("Cake", 3.00, 0.5)
		};

		vector<shared_ptr<Product>> alcoholicBeverages = {
			make_shared<ProductCategories::AlcoholicBeverage>("Wine", 10.00, 0.75, 12.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Beer", 2.00, 0.5, 4.5),
			make_shared<ProductCategories::AlcoholicBeverage>("Vodka", 15.00, 0.5, 40.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Whiskey", 20.00, 0.7, 40.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Rum", 12.00, 0.5, 40.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Tequila", 10.00, 0.5, 38.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Gin", 15.00, 0.5, 40.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Brandy", 18.00, 0.5, 40.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Liqueur", 12.00, 0.5, 20.0),
			make_shared<ProductCategories::AlcoholicBeverage>("Cognac", 20.00, 0.5, 40.0)
		};

		vector<shared_ptr<Product>> nonAlcoholicBeverages = {
			make_shared<ProductCategories::NonAlcoholicBeverage>("Water", 1.00, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Juice", 2.00, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Soda", 1.50, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Tea", 1.20, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Coffee", 1.50, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Milkshake", 2.00, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Smoothie", 2.50, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Lemonade", 1.50, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Ice tea", 1.20, 1.0),
			make_shared<ProductCategories::NonAlcoholicBeverage>("Energy drink", 2.00, 1.0)
		};

		vector<shared_ptr<Product>> frozenFoods = {
			make_shared < ProductCategories::FrozenFoods>("Pizza", 3.50, 0.5),
			make_shared < ProductCategories::FrozenFoods>("French fries", 1.50, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Nuggets", 2.00, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Vegetables mix", 1.20, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Fish sticks", 2.50, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Ice cream", 1.00, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Pancakes", 1.50, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Waffles", 1.20, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Dumplings", 2.00, 0.5),
			make_shared < ProductCategories::FrozenFoods>("Croquettes", 1.50, 0.5)
		};

        vector<shared_ptr<Product>> milkProducts = {
            make_shared<MilkProduct>("Milk", 1.20, 1.0),
			make_shared<MilkProduct>("Cheese", 4.50, 0.5),
			make_shared<MilkProduct>("Yogurt", 0.80, 0.5),
			make_shared<MilkProduct>("Butter", 2.00, 0.2),
			make_shared<MilkProduct>("Sour cream", 1.00, 0.2),
			make_shared<MilkProduct>("Cottage cheese", 1.50, 0.5),
			make_shared<MilkProduct>("Kefir", 1.00, 1.0),
			make_shared<MilkProduct>("Cream", 1.50, 0.2),
			make_shared<MilkProduct>("Milk powder", 2.00, 0.5),
			make_shared<MilkProduct>("Processed cheese", 3.00, 0.2)
        };

		vector<shared_ptr<Product>> teaAndCoffee = {
			make_shared<ProductCategories::TeaAndCoffee>("Black tea", 1.00, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Green tea", 1.20, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Herbal tea", 1.50, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Fruit tea", 1.00, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Coffee beans", 2.00, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Ground coffee", 1.50, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Instant coffee", 1.00, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Coffee pods", 2.50, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Coffee capsules", 3.00, 0.1),
			make_shared<ProductCategories::TeaAndCoffee>("Coffee creamer", 1.20, 0.1)
		};

		vector<shared_ptr<Product>> fruits = {
			make_shared<ProductCategories::Fruits>("Apple", 2.50, 1.0),
			make_shared<ProductCategories::Fruits>("Banana", 3.00, 1.0),
			make_shared<ProductCategories::Fruits>("Orange", 2.00, 1.0),
			make_shared<ProductCategories::Fruits>("Grapefruit", 2.50, 1.0),
			make_shared<ProductCategories::Fruits>("Kiwi", 3.00, 1.0),
			make_shared<ProductCategories::Fruits>("Lemon", 2.00, 1.0),
			make_shared<ProductCategories::Fruits>("Mango", 3.50, 1.0),
			make_shared<ProductCategories::Fruits>("Pineapple", 4.00, 1.0),
			make_shared<ProductCategories::Fruits>("Strawberry", 5.00, 1.0),
			make_shared<ProductCategories::Fruits>("Watermelon", 3.50, 1.0)
		};

		vector<shared_ptr<Product>> vegetables = {
			make_shared<ProductCategories::Vegetables>("Tomato", 1.50, 1.0),
			make_shared<ProductCategories::Vegetables>("Cucumber", 1.00, 1.0),
			make_shared<ProductCategories::Vegetables>("Carrot", 1.20, 1.0),
			make_shared<ProductCategories::Vegetables>("Potato", 1.00, 1.0),
			make_shared<ProductCategories::Vegetables>("Onion", 0.80, 1.0),
			make_shared<ProductCategories::Vegetables>("Garlic", 1.00, 1.0),
			make_shared<ProductCategories::Vegetables>("Pepper", 1.50, 1.0),
			make_shared<ProductCategories::Vegetables>("Cabbage", 1.20, 1.0),
			make_shared<ProductCategories::Vegetables>("Broccoli", 1.50, 1.0),
			make_shared<ProductCategories::Vegetables>("Mushrooms", 2.00, 1.0)
		};

		vector<shared_ptr<Product>> fishProducts = {
			make_shared<ProductCategories::FishProducts>("Salmon", 10.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Tuna", 8.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Cod", 6.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Trout", 7.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Sardine", 5.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Mackerel", 6.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Herring", 5.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Halibut", 9.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Pike", 8.00, 1.0),
			make_shared<ProductCategories::FishProducts>("Perch", 7.00, 1.0)
		};

		vector<shared_ptr<Product>> meatProducts = {
			make_shared<ProductCategories::MeatProducts>("Beef", 12.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Pork", 10.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Chicken", 8.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Turkey", 9.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Duck", 11.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Goose", 13.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Lamb", 14.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Rabbit", 10.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Venison", 15.00, 1.0),
			make_shared<ProductCategories::MeatProducts>("Buffalo", 16.00, 1.0)
		};

		vector<shared_ptr<Product>> petsFoods = {
			make_shared<ProductCategories::PetsFoods>("Dry food", 5.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Wet food", 4.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Treats", 3.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Bones", 2.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Chews", 3.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Biscuits", 4.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Canned food", 5.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Fish food", 3.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Bird food", 2.00, 1.0),
			make_shared<ProductCategories::PetsFoods>("Small animal food", 4.00, 1.0)
		};

        while (true) {
            cout << "\nSelect a category:\n";
			cout << "1. Groseries\n";
			cout << "2. Bakery products\n";
			cout << "3. Alcoholic beverages\n";
			cout << "4. Non-alcoholic beverages\n";
			cout << "5. Frozen foods\n";
			cout << "6. Milk products\n";
			cout << "7. Tea and coffee\n";
			cout << "8. Fruits\n";
			cout << "9. Vegetables\n";
			cout << "10. Fish products\n";
			cout << "11. Meat products\n";
			cout << "12. Pets foods\n";
			cout << "13. Exit\n";
            int choice;
            cin >> choice;

            if (choice == 13)break;

			vector<shared_ptr<Product>> selectedCategory;
			switch (choice) {
			case 1:
				selectedCategory = groceries;
				break;
			case 2:
				selectedCategory = bakeryProducts;
				break;
			case 3:
				selectedCategory = alcoholicBeverages;
				break;
			case 4:
				selectedCategory = nonAlcoholicBeverages;
				break;
			case 5:
				selectedCategory = frozenFoods;
				break;
			case 6:
				selectedCategory = milkProducts;
				break;
			case 7:
				selectedCategory = teaAndCoffee;
				break;
			case 8:
				selectedCategory = fruits;
				break;
			case 9:
				selectedCategory = vegetables;
				break;
			case 10:
				selectedCategory = fishProducts;
				break;
			case 11:
				selectedCategory = meatProducts;
				break;
			case 12:
				selectedCategory = petsFoods;
				break;
			default:
				cout << "Invalid category selection.\n";
				continue;
			}

			cout << "\nAvailable products:\n";
			for (int i = 0; i < selectedCategory.size(); i++) {
				cout << i + 1 << ". ";
				selectedCategory[i]->displayInfo();
			}

			cout << "\nSelect a product: ";
			int productChoice;
			cin >> productChoice;

			if (productChoice < 1 || productChoice > selectedCategory.size()) {
				cout << "Invalid product selection.\n";
				continue;
			}

			cout << "\nProduct details:\n";
			selectedCategory[productChoice - 1]->displayInfo();
		}
	}
	catch (const std::exception& ex) {
		cerr << "An error occurred: " << ex.what() << "\n";
	}
	catch (...) {
		cerr << "An unknown error occurred.\n";
	}

	return 0;
}