from airway import Airway

class Aeroplane(Airway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, flight_no):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.flight_no = flight_no

    def display_details(self):
        super().display_details()
        print("Flight Number   :", self.flight_no)

    def start_journey(self):
        print("Aeroplane Journey Started Successfully...")