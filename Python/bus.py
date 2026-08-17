from landway import Landway

class Bus(Landway):

    def __init__(self, vehicle_id, vehicle_name, engine_type, capacity):
        super().__init__(vehicle_id, vehicle_name, engine_type)
        self.capacity = capacity
        self.passengers = 0

    def set_passengers(self, count):
        self.passengers = count

    def get_passengers(self):
        return self.passengers

    def get_capacity(self):
        return self.capacity

    def display_details(self):
        super().display_details()
        print("Bus Capacity    :", self.capacity)
        print("Passengers      :", self.passengers)

    def start_journey(self):
        print("Bus Journey Started Successfully...")