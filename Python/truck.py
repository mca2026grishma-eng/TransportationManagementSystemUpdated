from landway import Landway

class Truck(Landway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, capacity):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.cargo_capacity = capacity

    def display_details(self):
        super().display_details()
        print("Cargo Capacity  :", self.cargo_capacity, "kg")

    def start_journey(self):
        print("Truck Journey Started Successfully...")