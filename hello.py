from datetime import datetime

current_year = datetime.now().year
name = input("Enter Your Name:")
age = int(input("Enter Your Age:"))
print(f"Your name is {name} and age is {age}")
print(f"Your year of birth is {current_year - age}")