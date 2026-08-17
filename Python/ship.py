from waterway import Waterway

class Ship(Waterway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, capacity):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.capacity = capacity

    def display_details(self):
        super().display_details()
        print("Cargo Capacity  :", self.capacity, "kg")

    def start_journey(self):
        print("Ship Journey Started Successfully...")