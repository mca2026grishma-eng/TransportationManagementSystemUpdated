from airway import Airway

class Helicopter(Airway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, capacity):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.capacity = capacity

    def display_details(self):
        super().display_details()
        print("Maximum Capacity:", self.capacity)

    def start_journey(self):
        print("Helicopter Journey Started Successfully...")