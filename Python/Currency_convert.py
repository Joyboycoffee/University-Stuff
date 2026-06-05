print ("{Gourav}, Date: {15-04-2026")
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
