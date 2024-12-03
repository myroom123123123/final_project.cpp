#include "domain.h"
#include "lib.h"

namespace ProductCategories {
	class Product {
	public:
		virtual void displayInfo() const = 0;
		virtual ~Product() = default;
	};

	class Groceries : public Product {
		std::string name;
		double price;
		double weight;
	public:
		Groceries(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << " kg\n";
		}
	};

	class BakeryProduct : public Product {
		std::string name;
		double price;
		double weight;
	public:
		BakeryProduct(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}
		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << " kg\n";
		}
	};

	class MilkProduct : public Product {
		std::string name;
		double price;
		double weight;
	public:
		MilkProduct(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << " kg\n";
		}
	};

	class AlcoholicBeverage : public Product {
		std::string name;
		double price;
		double volume;
		double alcoholContent;
	public:
		AlcoholicBeverage(std::string name, double price, double volume, double alcoholContent)
			: name(name), price(price), volume(volume), alcoholContent(alcoholContent) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nVolume: " << volume << " L"
				<< "\nAlcohol content: " << alcoholContent << "%\n";
		}
	};

	class NonAlcoholicBeverage : public Product {
		std::string name;
		double price;
		double volume;
	public:
		NonAlcoholicBeverage(std::string name, double price, double volume)
			: name(name), price(price), volume(volume) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nVolume: " << volume << " L\n";
		}
	};

	class FrozenFoods : public Product {
		std::string name;
		double price;
		double weight;
	public:
		FrozenFoods(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << " kg\n";
		}
	};

	class TeaAndCoffee : public Product {
		std::string name;
		double price;
		double weight;
	public:
		TeaAndCoffee(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << " kg\n";
		}
	};

	class Fruits : public Product {
		std::string name;
		double price;
		double weight;
	public:
		Fruits(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << "\n";
		}
	};

	class Vegetables : public Product {
		std::string name;
		double price;
		double weight;
	public:
		Vegetables(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << "\n";
		}
	};

	class FishProducts : public Product {
		std::string name;
		double price;
		double weight;
	public:
		FishProducts(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << "\n";
		}
	};

	class MeatProducts : public Product {
		std::string name;
		double price;
		double weight;
	public:
		MeatProducts(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << "\n";
		}
	};

	class PetsFoods : public Product {
		std::string name;
		double price;
		double weight;
	public:
		PetsFoods(std::string name, double price, double weight)
			: name(name), price(price), weight(weight) {}

		void displayInfo() const override {
			std::cout << "Name: " << name
				<< "\nPrice: " << price
				<< "\nWeight: " << weight << "\n";
		}
	};
};