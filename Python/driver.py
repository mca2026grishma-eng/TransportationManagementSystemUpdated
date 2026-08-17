class Driver:

    def __init__(self, driver_id, driver_name):
        self.driver_id = driver_id
        self.driver_name = driver_name

    def display_driver(self):
        print("---------------- Driver Details ------------------")
        print("Driver ID      :", self.driver_id)
        print("Driver Name    :", self.driver_name.capitalize())