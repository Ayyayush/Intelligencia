from typing import TypedDict


# =====================================================
# Defining a TypedDict
# =====================================================
# TypedDict is used to define the expected structure
# (keys + value types) of a dictionary
class Person(TypedDict):
    name: str              # 'name' must be of type string
    age: int               # 'age' must be of type integer


# =====================================================
# Creating a dictionary that follows the Person schema
# =====================================================

new_person: Person = {
    'name': 'nitish',      # correct type (str)
    'age': '35'              # correct type (int) but string use kiya toh bhi no error 
}


# =====================================================
# Printing the dictionary
# =====================================================
print(new_person)
