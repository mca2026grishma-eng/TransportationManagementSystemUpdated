from landway import Landway


class Car(Landway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, capacity):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.seating_capacity = capacity

    def display_details(self):
        super().display_details()
        print("Seating Capacity:", self.seating_capacity)

    def start_journey(self):
        print("Car Journey Started Successfully...")