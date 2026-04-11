# base currency = USD
rates = {
    "USD": 1,
    "INR": 83,
    "EUR": 0.92,
    "GBP": 0.78,
    "JPY": 150,
    "AUD": 1.5,
    "CAD": 1.35,
    "CNY": 7.2,
    "AED": 3.67,
    "SGD": 1.34,
    "CHF": 0.9,
    "NZD": 1.6,
    "ZAR": 18.5,
    "RUB": 90,
    "KRW": 1330,
    "TRY": 32,
    "BRL": 5,
    "MXN": 17,
    "SEK": 10.5,
    "NOK": 10.8,
    "DKK": 6.8,
    "PLN": 4
}

commission = 0.087  # 8.7%

# user input
amount = float(input("Enter amount in USD: "))

# show currencies
print("\nAvailable currencies:")
for currency in rates:
    print(currency)

# choose target currency
target = input("\nConvert to: ").upper()

# validation
if target not in rates:
    print("Invalid currency!")
    exit()

# conversion
rate = rates[target]
converted = amount * rate
final = converted * (1 - commission)

# result
print("\nConverted amount:", round(final, 2), target)




""" Question 1. 
	a travel agency hired me. they are international. 
	i am supposed to convert the values between various currencies......... 

	constraints: (only on input values)
	1. 1 <=N <= 100000
	2. Travel agent keeps a cut of 8.7 percent. 
	
	
	
	exchange rate api key : fe2ee5bd1ee28ea089fce4af


Question 2. 
	Offer various discounts for a gym membership
	
	1. For youngsters: 60% discounts.... less than 18
	2. For adults: over 18 to 60  40%
	3. For over 60: 25%
	
	4. For couples: 32%
	
	

Question 3. 
	making something for deepfreezers:
	1. if something in there, it works only then, other wise no energy wastage. 
	2. keep at -28 degrees, there is the influence of the external temperature to this which will be effecting the internal temperature, so try to keep it at the required.
	
	also, initially when nothing in there, the freezer is off and currently the tempreture is not cool enough, so need to be cooled. 
	
	
	
Question 4. (try using list)
	organizing a function. 
	need registration.
	constraints: 
		only limited seats, fcfs, 100 seats then closed
		only mca students allowed
		a deadline date, after than also closed.
		
		
Question 5. (maybe dictionary used)
	a mobile phone contact book.
	a key value pair, of name and number
	
	Someone can:
		CRUD on it. """