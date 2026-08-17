from waterway import Waterway

class Boat(Waterway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, boat_type):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.boat_type = boat_type

    def display_details(self):
        super().display_details()
        print("Boat Type       :", self.boat_type)

    def start_journey(self):
        print("Boat Journey Started Successfully...")