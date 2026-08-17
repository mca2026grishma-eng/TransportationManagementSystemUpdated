class Cargo:

    def __init__(self, cargo_id, cargo_name):
        self.cargo_id = cargo_id
        self.cargo_name = cargo_name

    def display_cargo(self):
        print("---------------- Cargo Details -------------------")
        print("Cargo ID       :", self.cargo_id)
        print("Cargo Name     :", self.cargo_name.capitalize())