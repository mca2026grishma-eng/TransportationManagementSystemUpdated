from landway import Landway

class Scooter(Landway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, cc):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.engine_cc = cc

    def display_details(self):
        super().display_details()
        print("Engine CC       :", self.engine_cc)

    def start_journey(self):
        print("Scooter Journey Started Successfully...")