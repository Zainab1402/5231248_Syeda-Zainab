def time_conversion(s):
    hour = int(s[:2])
    mins_seconds = s[2:8]
    period = s[-2:]

    if period == 'AM':
        if hour == 12:
            hour = 0  
    else: 
        if hour != 12:
            hour += 12 

    return f"{hour:02}{mins_seconds}"

input_time = "07:05:45PM";
print(time_conversion(input_time))

