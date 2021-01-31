class Country:
    count = 0
    __name = str()
    __population = int()
    __capital = str()

    def __init__(self, name = "", population = 0, capital = ""):
        Country.count += 1
        print(Country.count)
        try:
            self.__name = name
            self.__capital = capital
            self.__population = int(population)
        except ValueError as e:
            print(e)

    def set_name(self, name):
        self.__name = name

    def set_capital(self, capital):
        self.__capital = capital

    def set_population(self, population):
        self.__population = int(population)

    def get_name(self):
        return self.__name

    def get_capital(self):
        return self.__capital

    def get_population(self):
        return self.__population

    def read(self):
        try:
            self.__name = str(input("Enter name: "))
            self.__capital = str(input("Enter capital: "))
            self.__population = int(input("Enter a population: "))
        except ValueError:
            print("input error")
        
    def show(self):
        print("\nCountry: " + self.__name + "\nCapital: " + self.__capital + "\nPopulation: " + str(self.__population))
    
if __name__ == "__main__":
    x = Country()
    x.show()
    x.read()
    x.show()

    print()

    y = Country("Belarus", 27890, "Minsk")
    y.show()
    y.set_capital("Brest")
    y.show()
    name = y.get_name()
    print(name)

    

#медик-врач-стоматолог




# class Medic:
#     count = 0
#     education = str()
#     experience = int()

#     def __init__(self, education = "", experience = 0):
#         Medic.count += 1
#         print("Constructor №" + str(Medic.count))
#         self.education = str(education)
#         self.experience = int(experience)

#     def read(self):
#         try:
#             education = input("Enter education: ")
#             experience = int(input("Enter experience: "))
#         except ValueError:
#             print("input error")
#         self.education = education
#         self.experience = experience

#     def show(self):
#         print("\nEducation - " + self.education + "\nExperience - " + str(self.experience))

#     def set_education(self, education):
#         self.education = str(education)
    
#     def set_experience(self, experience):
#         self.experience = int(experience)

#     def get_education(self):
#         return self.education

#     def get_experience(self):
#         return self.education

#     def __del__(self):
#         print("Destructor №" + str(Medic.count))
#         Medic.count -= 1

# class Doctor(Medic):
#     specialization = str()

#     def __init__(self, specialization = "", education = "", experience = 0):
#         Medic.count += 1
#         print("Constructor №" + str(Medic.count))
#         self.specialization = str(specialization)
#         self.education = str(education)
#         self.experience = int(experience)

#     def read(self):
#         try:
#             education = input("Enter education: ")
#             experience = int(input("Enter experience: "))
#             specialization = input("Enter specialization: ")
#         except NameError:
#             print("input error")
#         self.specialization = specialization
#         self.education = education
#         self.experience = experience

#     def show(self):
#         print("\nEducation - " + self.education + "\nExperience - " + str(self.experience) + "\nSpecialization - " + self.specialization)

#     def set_specialization(self, specialization):
#         self.specialization = str(specialization)

#     def get_specialization(self):
#         return self.specialization

#     def __del__(self):
#         print("Destructor №" + str(Medic.count))
#         Medic.count -= 1


# class Dentist(Doctor):
#     healed_teeth = int()

#     def __init__(self, healed_teeth = 0, specialization = "", education = "", experience = 0):
#         Medic.count += 1
#         print("Constructor №" + str(Medic.count))
#         self.healed_teeth = int(healed_teeth)
#         self.specialization = str(specialization)
#         self.education = str(education)
#         self.experience = int(experience)

#     def read(self):
#         try:
#             healed_teeth = int(input("Enter number of healed teeth: "))
#             education = input("Enter education: ")
#             experience = int(input("Enter experience: "))
#             specialization = input("Enter specialization: ")
#         except NameError:
#             print("input error")
#         self.healed_teeth = healed_teeth
#         self.specialization = specialization
#         self.education = education
#         self.experience = experience

#     def show(self):
#         print("\nEducation - " + self.education + "\nExperience - " + str(self.experience) + 
#         "\nSpecialization - " + self.specialization + "\nNumber of healed teeth - " + str(self.healed_teeth))

#     def set_teeth(self, teeth):
#         self.healed_teeth = teeth

#     def get_teeth(self):
#         return self.healed_teeth

#     def __del__(self):
#         print("Destructor №" + str(Medic.count))
#         Medic.count -= 1

        
# if __name__ == "__main__":
#     M0 = Medic()
#     M1 = Medic("BSMU", 3)
#     M0.show()
#     M1.show()

#     D0 = Doctor("Surgery", "GSMU")
#     D0.show()
#     print()
#     D0.read()
#     D0.show()

#     D1 = Dentist()
#     D1.set_education("Some university")
#     D1.set_experience(5)
#     D1.set_specialization("Some specialization")
#     D1.set_teeth(99)
#     D1.show()