from landway import Landway

class Train(Landway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, coaches):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.coaches = coaches

    def display_details(self):
        super().display_details()
        print("Number of Coaches:", self.coaches)

    def start_journey(self):
        print("Train Journey Started Successfully...")