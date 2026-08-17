class person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __truediv__(self, other):
        pass
    
    def greet(self):
        help(self.__truediv__)
        print("Greetings, " + self.name)

#p = person("Giang", "16")
#p.greet()