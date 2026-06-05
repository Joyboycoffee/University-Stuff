import requests
print ("{Gourav}, Date: {15-04-2026")
TARGET_TEMP = -28

# Step 1: Items
has_items = input("Is there something inside freezer? (y/n): ").lower()

if has_items != 'y':
    print("Freezer is OFF")
else:
    print("Freezer is ON")

    # Step 2: Get outside temperature using API
    url = "https://api.open-meteo.com/v1/forecast?latitude=31.1048&longitude=77.1734&current_weather=true"
    
    data = requests.get(url).json()
    outside_temp = data["current_weather"]["temperature"]

    print(f"Outside Temperature: {outside_temp}°C")

    # Step 3: Mimic internal temp
    print("Checking internal temperature...")
    current_temp = outside_temp + 5   # inside slightly hotter
    print(f"Current Temperature: {current_temp}°C")

    # Step 4: Cooling
    print("Cooling started...")

    diff = current_temp - TARGET_TEMP
    time_required = diff * 2   # simple estimation


    print(f"Stabilized at {TARGET_TEMP}°C")
    print(f"Estimated Time: {time_required} minutes")