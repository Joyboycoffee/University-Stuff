membership = 2000
age = int(input("Enter age:"))
discount = 0
pre_membership = 10000

choice = input("Is the Couple Married?(y/n):").upper()

if age < 18:
    discount = 0.60 * membership

elif age > 18 and age < 45:
    discount = 0.36 * membership

elif age > 45:
    discount = 0.25 * membership

if choice == 'Y':
    discount += 0.32 * membership

print("Discount is =",discount)
print("GYM Membership fee is = ",membership - discount)

# pre membership
# dynamic discount