membership = 3500
age = int(input("Enter age:"))
discount = 0


choice = input("Are you a couple?(y/n):").upper()

if age < 18:
    discount = 0.60 * membership

elif age > 18 and age < 60:
    discount = 0.40 * membership

elif age > 60:
    discount = 0.25 * membership

if choice == 'Y':
    discount += 0.32 * membership
   

print("Discount is =",discount,"Out of",membership)
if choice == 'Y':
    print(f"GYM Membership fee is = {membership - discount} Per Person")
else:
    print(f"GYM Membership fee is = {membership - discount}")

