#!/usr/bin/env python3
import requests

# Converting code into json package
f = open("problem01.cpp", "r")      # change to specific file path later
file_string = f.read()
cpp_code = """""" + file_string

data = {
        "model_name": "deepseek-r1:7b",
        "code": cpp_code
        }

print(cpp_code)

# Sending response (if server exists)
try:
    response = requests.post("http://auca.space:7654/submit", json=data)
except requests.exceptions.ConnectionError as conerr:
    # connection error, duh
    print("[-] Cannot establish connection to the server, try running workflows later")
    exit(0)
except requests.exceptions.RequestException as e:
    # catastrophic error. bail.
    print("[-] Oops, something unpredictable happened here")
    raise SystemExit(e)
print(response.json())
