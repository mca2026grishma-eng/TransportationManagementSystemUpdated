from abc import ABC, abstractmethod


class Transportation(ABC):

    def __init__(self, vehicle_id, vehicle_name, engine_type):
        self.vehicle_id = vehicle_id
        self.vehicle_name = vehicle_name
        self.engine_type = engine_type

    def display_details(self):
        print("Vehicle ID     :", self.vehicle_id)
        print("Vehicle Name   :", self.vehicle_name)
        print("Engine Type    :", self.engine_type)

    @abstractmethod
    def start_journey(self):
        pass