from transportation import Transportation


class Airway(Transportation):

    def __init__(self, vehicle_id, vehicle_name, engine_type):
        super().__init__(vehicle_id, vehicle_name, engine_type)