class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.mileage = 0
    
    # def drive(self, miles):
    #     self.mileage += miles
    #     print(f"Driving {miles} miles.")
    
    def display_info(self):
        print(f"Car: {self.year} {self.make} {self.model}")
        print(f"Mileage: {self.mileage} miles")

# Creating instances of the Car class
car1 = Car("Toyota", "Corolla", 2022)
car2 = Car("Honda", "Civic", 2023)

# Using methods and accessing attributes
# car1.drive(100)
# car1.drive(200)
# car1.display_info()

# car2.drive(50)
car2.display_info()
