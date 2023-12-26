#chek if eligible for Voting

def isEligible(age: int, name: str) -> str:
    if age <= 0:
        return (f"Look Mr {name}, Enter a Valid age")
    elif age < 18:
        return (f'Mr {name} You are not Eligible for Voting')
    else:
        return (f'Mr. {name}, You are Eligible for Voting')
    
name = str(input("Enter Your Name: "))
age = int(input("Enter Age: "))

print(isEligible(age, name))