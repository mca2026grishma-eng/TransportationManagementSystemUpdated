class Passenger:

    def __init__(self, passenger_id, passenger_name):
        self.passenger_id = passenger_id
        self.passenger_name = passenger_name

    def display_passenger(self):
        print("--------------- Passenger Details ----------------")
        print("Passenger ID   :", self.passenger_id)
        print("Passenger Name :", self.passenger_name.capitalize())